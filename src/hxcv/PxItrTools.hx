package hxcv;

import hxcv.ds.PxPtr;

using hxcv.ds.Adapters;

class PxPtrTools 
{
	static public function normalize(img:PxPtr<Float, Dynamic, Dynamic>, min:Float, max:Float):Void {
		var currentMin = img.get(0);
		var currentMax = currentMin;
		var val;
		var numOfChannels = img.numOfChannels;
		
		do {
			for (c in 0...numOfChannels) {
				val = img.get(c);
				if (val < currentMin) currentMin = val;
				if (val < currentMax) currentMax = val;
			}
		} while (img.next());
		
		if (currentMin == currentMax) return;
		
		var range = max - min;
		var currentRangeM = 1/(currentMax - currentMin);
		do {
			for (c in 0...numOfChannels) {
				img.set(c, min + range * ((img.get(c) - currentMin) * currentRangeM));
			}
		} while (img.next());
	}
	
	static function convolution(img:PxPtr < Float, Dynamic, Dynamic > , mat:PxPtr < Float, Dynamic, Dynamic > ):Void {
		var oImg = [].getPxPtr(img.width, img.height, img.numOfChannels).copyPixels(img);
		var xstart = Std.int( -mat.width * 0.5 + 0.5);
		var xend = Std.int(mat.width * 0.5) + 1;
		var ystart = Std.int( -mat.height * 0.5 + 0.5);
		var yend = Std.int(mat.height * 0.5) + 1;
		
		for (xi in xstart...xend) {
			for (yi in ystart...yend) {
				
			}
		}
	}
}