package hxcv;

import hxcv.ds.PxPtr;

using Math;
using hxcv.ds.Adapters;

class OpticalFlow 
{
	public var images:Array<PxPtr<Dynamic,Dynamic,Dynamic>>;
	public var lambda:Float;
	public var lambda_q:Float;
	public var lambda2:Float;
	public var lambda3:Float;
	public var sor_max_iters:Float;
	public var limit_update:Bool;
	public var display:Bool;
	public var solver:String;
	public var deriv_filter:Array<Float>;
	public var texture:Bool;
	public var fc:Bool;
	public var median_filter_size:Array<Int>;
	public var interpolation_method:String;
	public var gnc_iters:Int;
	public var alpha:Float;
	public var max_iters:Int;
	public var max_linear:Int;
	public var pyramid_levels:Int;
	public var pyramid_spacing:Float;
	public var gnc_pyramid_levels:Int;
	public var gnc_pyramid_spacing:Float;
	public var method:String;
	public var spatial_filters:Array<Array<Float>>;
	public var rho_spatial_u:Array<{ type:Dynamic, param:Dynamic }>;
	public var rho_spatial_v:Array<{ type:Dynamic, param:Dynamic }>;
	public var rho_data: { type:Dynamic, param:Dynamic };
	public var seg:Array<Dynamic>;
	public var mfT:Float;
	public var imfsz:Array<Float>;
	public var filter_weight:Array<Dynamic>;
	public var alp:Float;
	public var hybrid:Bool;
	public var area_hsz:Int;
	public var affine_hsz:Int;
	public var sigma_i:Int;
	public var color_images:Array<Dynamic>;
	public var auto_level:Bool;
	public var input_seg:Array<Dynamic>;
	public var input_occ:Array<Dynamic>;
	public var fullVersion:Bool;
	
	public function new() 
	{
		this.images          = [];              
		this.lambda          = 1;
		this.lambda_q        = 1;    //Quadratic formulation of the objective function
		this.lambda2         = 1e-1;      //weight for coupling term
		this.lambda3         = 1;         //weight for non local term term


		this.sor_max_iters   = 1e4;       //100 seems sufficient

		this.limit_update    = true;      //limit the flow incrment to be less than 1 per linearization step
		this.display         = false;            

		this.solver          = 'backslash';   //'sor' 'pcg' for machines with limited moemory       
		this.deriv_filter    = [1/12, -8/12, 0, 8/12, -1/12]; //5-point 7 point [-1 9 -45 0 45 -9 1]/60; 

		this.texture         = false;     //use texture component as input
		this.fc              = false;     //use filter constancy

		this.median_filter_size   = []; //[5 5];
		this.interpolation_method = 'bi-cubic';      //'cubic', 'bi-linear

		//For Graduated Non-Convexity (GNC) optimization
		this.gnc_iters       = 3;
		this.alpha           = 1;             //change linearly from 1 to 0 through the GNC stages

		this.max_iters       = 10;            //number of warping per pyramid level
		this.max_linear      = 1;             //maximum number of linearization performed per warping, 1 OK for HS

		//For GNC stage 1
		this.pyramid_levels  = 4;           
		this.pyramid_spacing = 2;

		//For GNC stage 2 to end
		this.gnc_pyramid_levels     = 2;
		this.gnc_pyramid_spacing    = 1.25;                      
		
		var method = 'generalized_charbonnier'; //'lorentzian'
		this.spatial_filters = cast [[1, -1], [1, -1]];
		var a   = 0.45;
		var sig = 1e-3;
		rho_spatial_u = [];
		rho_spatial_v = [];
		for (i in 0...4) {
			this.rho_spatial_u[i]   = robust_function(method, sig, a);
			this.rho_spatial_v[i]   = robust_function(method, sig, a);
		}
		this.rho_data        = robust_function(method, sig, a);

		this.seg             = [];    //store segementation result
		this.mfT             = 15;    //threshold for intensity-median-filter
		this.imfsz           = cast [7, 7]; //for intensity-median-filter
		this.filter_weight   = [];    //only for the new obj. charbonnier
		this.alp             = 0.95;  //for rof texture decomposition

		this.hybrid          = false;  
		this.area_hsz        = 10;    //half window size for the weighted median filter
		this.affine_hsz      = 4;     //half window size for robust affine 
		this.sigma_i         = 7;
		this.color_images     = [];
		this.auto_level       = true;
		this.input_seg        = [];
		this.input_occ        = [];


		this.fullVersion      = false;
	}
	
	static public function structure_texture_decomposition_rof(im:PxPtr<Dynamic,Dynamic,Dynamic>, ?theta = 1/8, ?nIters = 100, ?alp = 0.95 /*0.75 results in 4:1*/):Array<Dynamic> {
		//Rescale the input image to [-1 1]
		var IM   = scale_image(im, -1,1);

		//Backup orginal images
		im   = IM;  

		//stepsize
		var delta = 1.0/(4.0*theta);

		for (iIm in 1:size(im,3)) {

			//Initialize dual variable p to be 0
			p = zeros([size(im,1) size(im,2) 2]);
			
			//Gradient descend        
			I = squeeze(IM(:,:,iIm));
			
			for iter = 1:nIters
				
				//Compute divergence        eqn(8)    
				div_p = imfilter(p(:,:,1), [-1 1 0], 'corr', 0)+ ...
						imfilter(p(:,:,2), [-1 1 0]', 'corr', 0);        
				
				I_x = imfilter(I+theta*div_p, [-1 1], 'replicate');
				 
				I_y = imfilter(I+theta*div_p, [-1 1]', 'replicate');
				
				//Update dual variable      eqn(9)
				p(:,:,1) = p(:,:,1) + delta*(I_x);
				p(:,:,2) = p(:,:,2) + delta*(I_y);
				
				//Reproject to |p| <= 1     eqn(10)    
				reprojection = max(1.0, sqrt(p(:,:,1).^2 + p(:,:,2).^2));
				p(:,:,1) = p(:,:,1)./reprojection;
				p(:,:,2) = p(:,:,2)./reprojection;
				
			end
			
			//compute divergence    
			div_p = imfilter(p(:,:,1), [-1 1 0], 'corr', 0)+ ...
					imfilter(p(:,:,2), [-1 1 0]', 'corr', 0);
		   
			//compute structure component
			IM(:,:,iIm) = I + theta*div_p;
			
		}


		texture   = squeeze(scale_image(im - alp*IM, 0, 255));

		if (nargout == 2) {
			structure = squeeze(scale_image(IM, 0, 255)); %(u-min(u(:)))/(max(u(:))-min(u(:))) - 1;
		}
	}
	
	public function compute_flow(?init:PxPtr<Dynamic,Dynamic,Dynamic>):PxPtr<Dynamic,Dynamic,Dynamic> {
		var uv:PxPtr<Dynamic,Dynamic,Dynamic>;

		//If we have no initialization argument, initialize with all zeros
		if (init == null)
			uv = [].getPxPtr(images[0].width, images[0].height, 2).fill(0.0);
		else
			uv = init;

		//Preprocess input (gray) sequences
		if (this.texture){
			//Perform ROF structure texture decomposition 
			images  = structure_texture_decomposition_rof( this.images, 1/8, 100, this.alp);
		} else if (this.fc){

			//Laplacian in flowfusion
			f = fspecial('gaussian', [5, 5], 1.5);
			//f = fspecial('gaussian', [3, 3], 1);
			images  = this.images- this.alp*imfilter(this.images, f, 'symmetric');

			//Gaussian pre-filering
			//        f = fspecial('gaussian', [3 3], 0.5);  //Li & Huttenlocher
			//        images  = imfilter(this.images, f, 'symmetric');

			//Sobel edge magnitude
			//        Dy = fspecial('sobel')/8;
			//        Dx = Dy';
			//        Ix = imfilter(this.images, Dx, 'symmetric');
			//        Iy = imfilter(this.images, Dy, 'symmetric');
			//        images = sqrt(Ix.^2 + Iy.^2);

			images  = scale_image(images, 0, 255);
		} else {
			images  = scale_image(this.images, 0, 255);
		}

		if (this.auto_level) {
			//Automatic determine pyramid level
			this.pyramid_levels  =  1 + floor( log(min(size(images, 1), size(images,2))/16) / log(this.pyramid_spacing) );
		}

		//Construct image pyramid, using filter setting in Bruhn et al in "Lucas/Kanade.." (IJCV2005') page 218

		//For gnc stage 1    
		factor            = sqrt(2);  //sqrt(3) worse
		smooth_sigma      = sqrt(this.pyramid_spacing)/factor;   //or sqrt(3) recommended by Manuel Werlberger 
		f                 = fspecial('gaussian', 2*round(1.5*smooth_sigma) +1, smooth_sigma);        
		pyramid_images    = compute_image_pyramid(images, f, this.pyramid_levels, 1/this.pyramid_spacing);


		//For segmentation purpose
		org_pyramid_images = compute_image_pyramid(this.images, f, this.pyramid_levels, 1/this.pyramid_spacing);
		org_color_pyramid_images = compute_image_pyramid(this.color_images, f, this.pyramid_levels, 1/this.pyramid_spacing);

		//For gnc stage 2 to gnc_iters  
		smooth_sigma      = sqrt(this.gnc_pyramid_spacing)/factor;
		f                 = fspecial('gaussian', 2*round(1.5*smooth_sigma) +1, smooth_sigma);        
		gnc_pyramid_images= compute_image_pyramid(images, f, this.gnc_pyramid_levels, 1/this.gnc_pyramid_spacing); 


		//For segmentation purpose
		org_gnc_pyramid_images = compute_image_pyramid(this.images, f, this.gnc_pyramid_levels, 1/this.gnc_pyramid_spacing);   
		org_color_gnc_pyramid_images = compute_image_pyramid(this.color_images, f, this.gnc_pyramid_levels, 1/this.gnc_pyramid_spacing);   


		for (ignc in 1...this.gnc_iters+1) {

			if (this.display)
				disp(['GNC stage: ', num2str(ignc)])

			if (ignc == 1){
				pyramid_levels = this.pyramid_levels;
				pyramid_spacing = this.pyramid_spacing;
			} else {
				pyramid_levels = this.gnc_pyramid_levels;
				pyramid_spacing = this.gnc_pyramid_spacing;
			}

			//Iterate through all pyramid levels starting at the top
			var l = pyramid_levels + 1;
			while (--l >= 1) {

				if (this.display)
					disp(['-Pyramid level: ', num2str(l)])

				//Generate copy of algorithm with single pyramid level and the
				//appropriate subsampling
				small = this;


				if (ignc == 1) {
					nsz               = [size(pyramid_images{l}, 1) size(pyramid_images{l}, 2)];
					small.images      = pyramid_images{l};                            
					small.max_linear  = 1;             //number of linearization performed per warping, 1 OK for quadratic formulation
					im1   = org_pyramid_images{l}(:,:,1);
					small.color_images      = org_color_pyramid_images{l};              

				} else {
					small.images         = gnc_pyramid_images{l};
					nsz   = [size(gnc_pyramid_images{l}, 1) size(gnc_pyramid_images{l}, 2)];
					im1   = org_gnc_pyramid_images{l}(:,:,1);

					small.color_images      = org_color_gnc_pyramid_images{l};
				}

				//Rescale the flow field
				uv        = resample_flow(uv, nsz);

				small.seg = im1;      

				//Adaptively determine half window size for the area term         
				small.affine_hsz      = min(4, max(2, ceil(min(nsz)/75)) );

				//Run flow method on subsampled images
				uv = compute_flow_base(small, uv);
			}


			//Update GNC parameters (linearly)
			if (this.gnc_iters > 1){
				new_alpha  = 1 - ignc / (this.gnc_iters-1);
				this.alpha = min(this.alpha, new_alpha);
				this.alpha = max(0, this.alpha);          
			}

			fprintf('GNC stage %d finished, %3.2f minutes passed \t \t', ignc, toc/60);

			if (nargin == 3){
				[aae stdae aepe] = flowAngErr(gt(:,:,1), gt(:,:,2), uv(:,:,1), uv(:,:,2), 0);        //ignore 0 boundary pixels
				fprintf('AAE %3.3f STD %3.3f average end point error %3.3f \n', aae, stdae, aepe);
			} else {
				fprintf('\n');
			}

		}
		
		return uv;
	}
	
	static public function robust_function(type:String, ?p0:Dynamic, ?p1:Dynamic): { type:Dynamic, param:Dynamic } {
		switch (type) {
			case 'generalized_charbonnier':
				return {
					type: generalized_charbonnier,
					param: [p0, p1]
				}
			default: throw "unsupported type";
		}
	}
	
	static public function generalized_charbonnier(x:Array<Float>, sigma:Array<Float>, type:Int):Array<Float> {
		var sig  = sigma[0];
		var a    = sigma[1];

		switch (type) {
			case 0:
				// y = (sig^2 + x.^2).^a;
				var r = [];
				for (xi in x) {
					r.push((sig.pow(2) + xi).pow(a));
				}
				return r;
			case 1:
				// y = 2*a*x.*(sig^2 + x.^2).^(a-1);
				var r = [];
				for (xi in x) {
					r.push(2 * a * xi * (sig.pow(2) + xi.pow(2)).pow(a - 1));
				}
				return r;
			case 2:
				// y = 2*a*(sig^2 + x.^2).^(a-1);
				var r = [];
				for (xi in x) {
					r.push(2 * a * (sig.pow(2) + xi.pow(2)).pow(a - 1));
				}
				return r;
			default: throw "wrong type.";
		}
	}
}