package hxcv;

import haxe.rtti.Generic;
import haxe.Timer;
import hxcv.ds.PxItrGray;
import hxcv.ds.Vector3;

using hxcv.ds.Adapters;

/**
 * It implements the algorithm described in the paper:
 *     Motion Compensated Frame Interpolation by new Block-based Motion Estimation Algorithm
 *     Taehyeun Ha, Member, IEEE, Seongjoo Lee and Jaeseok Kim, Member, IEEE
 */
class BlockMatching<InImgT:PxItrGray<Dynamic, Dynamic, InImgT>> implements Generic
{	
	/**
	 * Size of estimation block.
	 */
	public var M(default, null):Int;
	
	/**
	 * Sampling number.
	 * Higher => faster and less accurate.
	 */
	public var alpha(default, null):Int;
	
	/**
	 * Searching range.
	 */
	public var S(default, null):Int;
	
	/**
	 * Constant affecting the Weighted Correlation Index.
	 * More positive value make it favors vectors that are close to 0,0
	 */
	public var K(default, null):Float;
	
	var alphaSqrOverMSqr:Float;
	var SHalf:Float;
	var mOverAlpha:Int;
	
	public function new():Void {
		//defaults that works for 320*240
		init(25, 2, 20, 0.02);
		
		/*/defaults that works for 640*480
		M = 40;
		alpha = 8;
		S = 40;
		K = 0.005;*/
		
		
	}
	
	public function init(_M:Int, _alpha:Int, _S:Int, _K:Float) {
		M = _M;
		alpha = _alpha;
		S = _S;
		K = _K;
		
		alphaSqrOverMSqr = (alpha * alpha) / (M * M);
		SHalf = S * 0.5;
		mOverAlpha = Std.int(M / alpha);
		return this;
	}
	
	public function process(img0:InImgT, img1:InImgT):Vector3<Float>
	{
		//var t = Timer.stamp();
			
		var in0 = img0;
		var in1 = img1;
		var k = in0.x;
		var l = in1.y;
		
		
		//x,y is coordinates of the vector. z is WCI.
		var WCImin = new Vector3<Float>(0.0, 0.0, Math.POSITIVE_INFINITY);
		
		
		
		//for each coordinates in the search range
		for (x in Math.floor(-SHalf)...Math.ceil(SHalf)) {
			for (y in Math.floor(-SHalf)...Math.ceil(SHalf)) {
				
				var totalDiff = 0.0;
				var pixelNum = 0;
				
				in0.unsafeMoveTo(k, l);
				in1.unsafeMoveTo(k + x, l + y);
				
				for (j in 0...mOverAlpha) {
					for (i in 0...mOverAlpha) {
						if (in1.checkCoordinates() && in0.checkCoordinates()) {
							
							totalDiff += Math.abs(in1.getGray() - in0.getGray());
							++pixelNum;
							
						}
						
						in0.unsafeMoveX(alpha);
						in1.unsafeMoveX(alpha);	
					}
					in0.unsafeMoveTo(k, in0.y + alpha);
					in1.unsafeMoveTo(k + x, in1.y + alpha);
				}
				
				var WCI = (alphaSqrOverMSqr * totalDiff) / pixelNum * (1 + K * (x * x + y * y));
				if (WCI < WCImin.val2) {
					WCImin.val0 = x;
					WCImin.val1 = y;
					WCImin.val2 = WCI;
				}							
			}
		}
		//trace(Timer.stamp() - t);
		return WCImin;
	}
	
}