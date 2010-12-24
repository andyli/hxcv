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
	
	/**
	 * Predict the result image size if inputs is passed to process().
	 */
	public function getResultImageSize(inputs:Array<InImgT>):Vector2<Int> {
		return new Vector2<Int>(Math.floor(inputs[0].imageWidth / N), Math.floor(inputs[0].imageHeight / N));
	}
	
	public function new():Void {
		init(15);
		blockMatching = new BlockMatching<InImgT>();
	}
	
	public function init(_N:Int) {
		N = _N;
		
		return this;
	}
	
	public function process(inputs:Array<InImgT>):Array < ArrayAccessPixelIterator < Vector3<Float>, Array<Vector3<Float>> >> {
		var result = new Array < ArrayAccessPixelIterator < Vector3<Float>, Array<Vector3<Float>> >>();
		var resultImageWidth = Math.floor(inputs[0].imageWidth / N);
		var resultImageHeight = Math.floor(inputs[0].imageHeight / N);
		
		//for all input images
		for (inputIndex in 1...inputs.length) {
			var in0 = inputs[inputIndex-1];
			var in1 = inputs[inputIndex];
			var mv = new Array<Vector3<Float>>().getPixelIterator(resultImageWidth, resultImageHeight, 1);
			
			
			//for each of the matching block
			
			//var t = haxe.Timer.stamp();
			var l = 0;		//top-left y-coordinate of the block
			var lEnd = resultImageHeight * N;
			var kEnd = resultImageWidth * N;
			while (l < lEnd) {
				in0.unsafeMoveTo(0, l);
				in1.unsafeMoveTo(0, l);
				
				var k = 0;	//top-left x-coordinate of the block
				while (k < kEnd) {
					
					mv.set0(blockMatching.process(in0.clone(), in1.clone()));
					mv.unsafeNext();
					in0.unsafeMoveX(N);
					in1.unsafeMoveX(N);

					k += N;
				}
				l += N;
				trace(l + "/" + lEnd);
			}
			//trace(haxe.Timer.stamp() - t);
			result.push(mv);
		}
		
		return result;
	}
}