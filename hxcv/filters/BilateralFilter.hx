package hxcv.filters;

import hxcv.ds.Array2DImage;
import hxcv.ds.Image;
import hxcv.ds.Vector;
using hxcv.math.Vector2Math;

class BilateralFilter<T:Float, ImgT:ImageRGB<T>> implements IFilter<ImgT>
{
	/**
	 * Affacts the Gaussian function which based on distance.
	 */
	public var d:Float;
	
	/**
	 * Affects the Gaussian function which based on color channels(including alpha).
	 */
	public var r:Float;
	
	/**
	 * Sample radius in pixels.
	 */
	public var sample:Int;
	
	public function new(d:Float = 2, r:Float = 0.425, sample:Int = 4):Void {
		this.d = d;
		this.r = r;
		this.sample = sample;
	}
	
	public function process(img:ImgT, resultImg:ImgT):Void {
		var sampleLength = sample * 2 + 1;
		var sampleDWeight = new Array2DImage<Float>(sampleLength, sampleLength, 1);
		var dist:Float;
		var oneOverD = 1 / d;
		var oneOverR = 1 / r;
		for (ix in -sample...sample + 1) {
			for (iy in -sample...sample + 1) {
				dist = new Vector2(ix, iy).distance(new Vector2(0.0, 0.0)) * oneOverD;
				sampleDWeight.set(ix, iy, 0, dist * dist);
			}
		}
		
		var totalPixelValue:Vector3<Float>;
		var totalWeight:Float;
		var p:Vector3<T>;
		var p0:Vector3<T>;
		var diff:Float;
		var weight:Float;
		for (x in 0...resultImg.width) {
			for (y in 0...resultImg.height) {
				totalPixelValue = new Vector3<Float>();
				totalWeight = 0;
				p0 = img.get3(x, y);
				for (ix in -sample...sample + 1) {
					for (iy in -sample...sample + 1) {
						p = img.get3(x + ix, y + iy);
						diff = (Math.abs(p.x - p0.x) + Math.abs(p.y - p0.y) + Math.abs(p.z - p0.z)) * oneOverR;
						weight = Math.exp( -0.5 * (sampleDWeight.get(ix, iy, 0) + diff * diff));
						
						totalPixelValue.x += p.x * weight;
						totalPixelValue.y += p.y * weight;
						totalPixelValue.z += p.z * weight;
						
						totalWeight += weight;
					}
				}
				var _w = 1 / totalWeight;
				resultImg.set3(x, y, cast totalPixelValue.x * _w, cast totalPixelValue.y * _w, cast totalPixelValue.z * _w);
			}
		}
	}
	
}