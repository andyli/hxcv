package hxcv;

import haxe.rtti.Generic;
import hxcv.ds.IPixelIteratorGray;
import hxcv.ds.Vector;

using hxcv.ds.Adapters;

/**
 * It implements the algorithm described in the paper:
 *     Motion Compensated Frame Interpolation by new Block-based Motion Estimation Algorithm
 *     Taehyeun Ha, Member, IEEE, Seongjoo Lee and Jaeseok Kim, Member, IEEE
 */
class BlockMatching<InImgT:IPixelIteratorGray<Dynamic, Dynamic, InImgT>> implements Generic
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
	
	public function process(img0:InImgT, img1:InImgT):Vector3<Float>
	{
		var alphaSqr = alpha * alpha;
		var MSqr = M * M;
		var SHalf = S * 0.5;
			
		var in0 = img0;
		var in1 = img1;
		var k = in0.x;
		var l = in1.y;
		
		//x,y is coordinates of the vector. z is WCI.
		var WCImin = new Vector3<Float>(0.0, 0.0, Math.POSITIVE_INFINITY);
		
		/*
		//get bound coordinates by checking with image bound
		var xMin = k + Math.floor(-SHalf);
		if (xMin < 0) xMin = 0;
		var yMin = l + Math.floor(-SHalf);
		if (yMin < 0) yMin = 0;
		var xMax = k + Math.ceil(SHalf);
		if (xMax >= in1.imageWidth) xMax = in1.imageWidth - 1;
		var yMax = l + Math.ceil(SHalf);
		if (yMax >= in1.imageHeight) yMax = in1.imageHeight - 1;
		
		in1.moveTo(xMin, yMin);
		do {
			do {
				
				var MAD = 0.0;
				
				var cp:InImgT = in1.clone();
				in0.moveTo(in1.x, in1.y);
				var iend = in1.x + M;
				var jend = in1.y + M;
				do {
					do {
						
						MAD += (alphaSqr * Math.abs(in1.getGray() - in0.getGray())) / MSqr;
						
					} while (in0.moveX(alpha) && cp.moveX(alpha) && cp.x < iend);
				} while (in0.moveTo(in1.x, in0.y + alpha) && cp.moveTo(in1.x, cp.y + alpha) && in1.y < jend);
				
				var WCI = MAD * (1 + K * (x * x + y * y));
				if (WCI < WCImin.val2) {
					WCImin.val0 = x;
					WCImin.val1 = y;
					WCImin.val2 = WCI;
				}
				
				in1.unsafeMoveRight();
			} while (in1.x <= xMax);
			in1.unsafeMoveTo(xMin, in1.y + 1);
		} while (in1.y <= yMax);
		*/
		
		//for each coordinates in the search range
		for (x in Math.floor(-SHalf)...Math.ceil(SHalf)) {
			for (y in Math.floor(-SHalf)...Math.ceil(SHalf)) {
				
				var MAD = 0.0;
				var pixelNum = 0;
				
				var i = 0;
				while (i < M) {
					var j = 0;
					while (j < M) {
						
						if (in1.moveTo(k + i + x, l + j + y) && in0.moveTo(k + i, l + j)) {
							var f1 = in1.getGray();
							var f0 = in0.getGray();
							MAD += (alphaSqr * Math.abs(f1 - f0)) / MSqr;
							++pixelNum;
						}
						
						j += alpha;
					}
					i += alpha;
				}
				
				var WCI = MAD / pixelNum * (1 + K * (x * x + y * y));
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