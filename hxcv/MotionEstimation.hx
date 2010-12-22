package hxcv;

import haxe.rtti.Generic;
import hxcv.ds.Vector;
import hxcv.ds.IPixelIteratorGray;
import hxcv.ds.ArrayAccessPixelIterator;
using hxcv.ds.Adapters;

/**
 * It implements the algorithm described in the paper:
 *     Motion Compensated Frame Interpolation by new Block-based Motion Estimation Algorithm
 *     Taehyeun Ha, Member, IEEE, Seongjoo Lee and Jaeseok Kim, Member, IEEE
 */
class MotionEstimation<InImgT:IPixelIteratorGray<Dynamic, Dynamic, InImgT>> implements Generic
{
	/**
	 * Size of matching block which one motion vector for one matching block.
	 */
	public var N(default, null):Int;
	
	/**
	 * The algorithm used for block matching.
	 */
	public var blockMatching(default, null):BlockMatching<InImgT>;
	
	public function new():Void {
		N = 15;		
		blockMatching = new BlockMatching<InImgT>();
	}
	
	public function process(inputs:Array<InImgT>):Array < ArrayAccessPixelIterator < Vector3<Float>, Array<Vector3<Float>> >> {
		var result = new Array < ArrayAccessPixelIterator < Vector3<Float>, Array<Vector3<Float>> >>();
		var mvImgSizeX = Math.floor(inputs[0].imageWidth / N);
		var mvImgSizeY = Math.floor(inputs[0].imageHeight / N);
		
		//for all input images
		for (inputIndex in 1...inputs.length) {
			var in0 = inputs[inputIndex-1];
			var in1 = inputs[inputIndex];
			var mv = new Array<Vector3<Float>>().getPixelIterator(mvImgSizeX, mvImgSizeY, 1);
			
			
			//for each of the matching block
			
			//var t = haxe.Timer.stamp();
			var l = 0;		//top-left y-coordinate of the block
			var lEnd = mvImgSizeY * N;
			var kEnd = mvImgSizeX * N;
			while (l < lEnd) {
				var k = 0;	//top-left x-coordinate of the block
				while (k < kEnd) {
					
					in0.unsafeMoveTo(k, l);
					in1.unsafeMoveTo(k, l);
					mv.set0(blockMatching.process(in0, in1));
					mv.unsafeNext();

					k += N;
				}
				l += N;
			}
			//trace(haxe.Timer.stamp() - t);
			result.push(mv);
		}
		
		return result;
	}
}