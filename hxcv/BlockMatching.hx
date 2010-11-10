package hxcv;

import haxe.rtti.Generic;
import hxcv.ds.IImage;
import hxcv.ds.Vector2;
import hxcv.ds.Vector3;

/**
 * It implements the algorithm described in the paper:
 *     Motion Compensated Frame Interpolation by new Block-based Motion Estimation Algorithm
 *     Taehyeun Ha, Member, IEEE, Seongjoo Lee and Jaeseok Kim, Member, IEEE
 */
class BlockMatching<InImgT:IImageGray<Dynamic>> implements Generic
{	
	/**
	 * Size of estimation block.
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
		M = 25;
		alpha = 2;
		S = 20;
		K = 0.02;
		
		/*/defaults that works for 640*480
		M = 40;
		alpha = 8;
		S = 40;
		K = 0.005;*/
	}
	
	public function process(ptX:Int, ptY:Int, img0:InImgT, img1:InImgT):Vector3<Float>
	{
		var alphaSqr = alpha * alpha;
		var MSqr = M * M;
		var SHalf = S * 0.5;
			
		var in0 = img0;
		var in1 = img1;
		var k = ptX;
		var l = ptY;
		
		//x,y is coordinates of the vector. z is WCI.
		var WCImin = new Vector3<Float>(0.0, 0.0, Math.POSITIVE_INFINITY);
		
		//for each coordinates in the search range
		for (x in Math.floor(-SHalf)...Math.ceil(SHalf)) {
			for (y in Math.floor(-SHalf)...Math.ceil(SHalf)) {
				
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
				
				var WCI = MAD * (1 + K * (x * x + y * y));
				if (WCI < WCImin.val2) {
					WCImin.val0 = x;
					WCImin.val1 = y;
					WCImin.val2 = WCI;
				}							
			}
		}
		
		return WCImin;
	}
	
}