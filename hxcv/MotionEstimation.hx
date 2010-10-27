package hxcv;

import hxcv.ds.IGray2DImage;
import hxcv.ds.I2DImage;
import hxcv.ds.Array2DImage;
import hxcv.ds.Point3D;

class MotionEstimation<InImgT:IGray2DImage<Dynamic>>
{	
	/**
	 * Size of matching block which one motion vector for one matching block.
	 */
	public var N:Int;
	
	/**
	 * Size of motion-estimation block.
	 */
	public var M:Int;
	
	/**
	 * Sampling number.
	 * Higher => faster and less accurate.
	 */
	public var alpha:Int;
	
	/**
	 * Searching range.
	 */
	public var S:Int;
	
	/**
	 * Constant affecting the Weighted Correlation Index.
	 * More positive value make it favors vectors that are close to 0,0
	 */
	public var K:Float;
	
	public function new():Void {
		//defaults that works for 320*240
		N = 10;
		M = 20;
		alpha = 4;
		S = 20;
		K = 0.02;
	}
	
	public function process(inputs:Array<InImgT>):Array<Array2DImage<Float>> 
	{
		var result = new Array<Array2DImage<Float>>();
		var mvImgSizeX = Math.floor(inputs[0].width / N);
		var mvImgSizeY = Math.floor(inputs[0].height / N);
		var alphaSqr = alpha * alpha;
		var MSqr = M * M;
		
		//for all input images
		for (inputIndex in 1...inputs.length) {
			
			var in0 = inputs[inputIndex-1];
			var in1 = inputs[inputIndex];
			var mv = new Array2DImage<Float>(mvImgSizeX, mvImgSizeY, 2);
			
			//for each of the matching block
			for (mx in 0...mvImgSizeX) {
				for (my in 0...mvImgSizeY) {
					
					//top-left coordinates of the block
					var k = Math.floor(mx * N);
					var l = Math.floor(my * N);
					
					//Array of Point3D, z is mean absolute difference
					var MADs = new Array<Point3D>();
					
					//for each coordinates in the search range
					for (x in Math.floor(-S * 0.5)...Math.ceil(S * 0.5)) {
						for (y in Math.floor(-S * 0.5)...Math.ceil(S * 0.5)) {
							
							var MAD = 0.0;
							
							var i = 0;
							while (i < M) {
								var j = 0;
								while (j < M) {
									var f1 = in1.getGray(k + i + x, l + j + y);
									var f0 = in0.getGray(k + i, l + j);
									MAD += (alphaSqr * Math.abs(f1 - f0)) / MSqr;
									
									j += alpha;
								}
								i += alpha;
							}
							
							MADs.push(new Point3D(x, y, MAD * (1 + K * (x * x + y * y))));
							
						}
					}
					
					//Sort to find out the min MAD
					MADs.sort(function(a:Point3D, b:Point3D):Int {
						return cast a.z - b.z;
					});
					var minMAD = MADs[0];
					
					mv.set(mx, my, 0, minMAD.x);
					mv.set(mx, my, 1, minMAD.y);
				}
			}
			result.push(mv);
			
		}
		
		
		return result;
	}
}