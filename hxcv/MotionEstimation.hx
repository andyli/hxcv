package hxcv;

import haxe.rtti.Generic;
import hxcv.ds.IImage;
import hxcv.ds.Array2DImage;
import hxcv.ds.Vector2;
import hxcv.ds.Vector3;

/**
 * It implements the algorithm described in the paper:
 *     Motion Compensated Frame Interpolation by new Block-based Motion Estimation Algorithm
 *     Taehyeun Ha, Member, IEEE, Seongjoo Lee and Jaeseok Kim, Member, IEEE
 */
class MotionEstimation<InImgT:IImageGray<Dynamic>> implements Generic
{	
	/**
	 * Size of matching block which one motion vector for one matching block.
	 */
	public var N:Int;
	
	/**
	 * The algorithm used for block matching.
	 */
	public var blockMatching:BlockMatching<InImgT>;
	
	public function new():Void {
		N = 15;		
		blockMatching = new BlockMatching<InImgT>();
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
			
			var k = 0;		//top-left x-coordinate of the block
			var mx = 0;
			while (mx < mvImgSizeX) {
				var l = 0;	//top-left y-coordinate of the block
				var my = 0;
				while (my < mvImgSizeY) {
					
					var WCImin = blockMatching.process(k, l, in0, in1);
					
					mv.set(mx, my, 0, WCImin.val0);
					mv.set(mx, my, 1, WCImin.val1);
					
					l += N;
					++my;
				}
				k += N;
				++mx;
			}
			
			result.push(mv);
			
		}
		
		
		return result;
	}
}