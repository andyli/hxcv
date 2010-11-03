package hxcv;

import haxe.rtti.Generic;
import hxcv.ds.IGray2DImage;
import hxcv.ds.I2DImage;
import hxcv.ds.Array2DImage;
import hxcv.ds.Vector2D;
import hxcv.ds.Vector3D;

/**
 * It implements the algorithm described in the paper:
 *     Motion Compensated Frame Interpolation by new Block-based Motion Estimation Algorithm
 *     Taehyeun Ha, Member, IEEE, Seongjoo Lee and Jaeseok Kim, Member, IEEE
 */
class MotionEstimation<InImgT:IGray2DImage<Dynamic>> implements Generic
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
	
	/**
	 * The algorithm used for block matching.
	 */
	public var blockMatching:BlockMatching<InImgT>;
	
	public function new():Void {
		//defaults that works for 320*240
		N = 10;
		M = 20;
		alpha = 4;
		S = 15;
		K = 0.02;
		
		/*/defaults that works for 640*480
		N = 10;
		M = 40;
		alpha = 8;
		S = 40;
		K = 0.005;*/
		
		blockMatching = new BlockMatching<InImgT>();
		blockMatching.K = K;
		blockMatching.M = M;
		blockMatching.S = S;
		blockMatching.alpha = alpha;
	}
	
	public function process(inputs:Array<InImgT>):Array<Array2DImage<Float>> 
	{
		var result = new Array<Array2DImage<Float>>();
		var mvImgSizeX = Math.floor(inputs[0].width / N);
		var mvImgSizeY = Math.floor(inputs[0].height / N);
		
		//for all input images
		for (inputIndex in 1...inputs.length) {
			
			var in0 = inputs[inputIndex-1];
			var in1 = inputs[inputIndex];
			var mv = new Array2DImage<Float>(mvImgSizeX, mvImgSizeY, 2);
			
			//for each of the matching block
			for (mx in 0...mvImgSizeX) {
				var k = Math.floor(mx * N);		//top-left x-coordinates of the block
				for (my in 0...mvImgSizeY) {
					var l = Math.floor(my * N);	//top-left y-coordinates of the block
					
					var WCImin = blockMatching.process(new Vector2D(k, l), in0, in1);
					
					mv.set(mx, my, 0, WCImin.x);
					mv.set(mx, my, 1, WCImin.y);
				}
			}
			result.push(mv);
			
		}
		
		
		return result;
	}
}