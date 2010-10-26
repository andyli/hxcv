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
	 */
	public var alpha:Int;
	
	/**
	 * Searching range.
	 */
	public var S:Int;
	
	public function new():Void {
		N = 10;
		M = 10;
		alpha = 5;
		S = 20;
	}
	
	public function process(inputs:Array<InImgT>):Array<Array2DImage<Float>> 
	{
		var result = new Array<Array2DImage<Float>>();
		var mvImgSizeX = Math.floor(inputs[0].width / N);
		var mvImgSizeY = Math.floor(inputs[0].height / N);
		
		
		var in0 = inputs[0];
		var in1 = inputs[1];
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
						for (i in 0...Math.ceil(M / alpha)) {
							for (j in 0...Math.ceil(M / alpha)) {
								var f1 = in1.getGray(k + alpha * i + x, l + alpha * j + y);
								var f0 = in0.getGray(k + alpha * i, l + alpha * j);
								MAD += ((alpha * alpha) * Math.abs(f1 - f0)) / (M * M);
							}
						}
						MADs.push(new Point3D(x, y, MAD));
						
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
		
		return result;
	}
}