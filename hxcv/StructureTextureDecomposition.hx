package hxcv;

import hxcv.ds.PxPtr;

using hxcv.ds.Adapters;
using hxcv.PxPtrTools;

/**
 * Decompose the input IMAGE into structure and texture parts using the 
 * Rudin-Osher-Fatemi method
 */
class StructureTextureDecomposition<InImgT:PxPtr<Float, Dynamic, InImgT>>
{
	public var theta:Float;
	public var nIters:Int;
	public var alp:Float;
	
	public function new() {
		theta   = 1/8; 
		nIters  = 100;
		alp     = 0.95;  //alp = 0.75 results in 4:1
	}
	
	public function process(im:InImgT) {
		var IM = [].getPxPtr(im.width, im.height, im.numOfChannels).copyPixels(im);
		IM.normalize( -1, 1);
		
		im = [].getPxPtr(im.width, im.height, im.numOfChannels).copyPixels(IM);
		
		var delta = 1.0 / (4.0 * theta);
		
		for (iIm in 0...im.numOfChannels){

			//Initialize dual variable p to be 0
			var p = [].getPxPtr(im.width, im.height, 2).fill([0.0, 0.0]);
			
			//Gradient descend        
			var I = [].getPxPtrGray(im.width, im.height).copyPixels(IM);
			
			for (iter in 0...nIters) {
				
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
				
			}
			/*
			//compute divergence    
			div_p = imfilter(p(:,:,1), [-1 1 0], 'corr', 0) +
					imfilter(p(:,:,2), [-1 1 0]', 'corr', 0);
		   
			//compute structure component
			IM(:,:,iIm) = I + theta*div_p;
			*/
		}


		texture   = squeeze(scale_image(im - alp*IM, 0, 255));

		if nargout == 2
			structure = squeeze(scale_image(IM, 0, 255)); %(u-min(u(:)))/(max(u(:))-min(u(:))) - 1;
		}
	}
}