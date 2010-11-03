package hxcv;

import haxe.rtti.Generic;
import hxcv.ds.I2DImage;

class Wrap<InImgT:I2DImage<Dynamic>> implements Generic 
{
	public var vertices0:I2DImage<Float>;
	public var vertices1:I2DImage<Float>;

	public function new():Void {
		
	}
	
	public function process(input:InImgT):Void {
		var original = input.clone();
		for (i in 0...input.width) {
			for (j in 0...input.height) {
				for (c in 0...input.numOfChannels) {
					input.set(i, j, c, 0);
				}
			}
		}
	}
}