package ;

import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import flash.Lib;

//import hxcv.OpticalFlow;
import hxcv.StructureTextureDecomposition;

using hxcv.flash.ds.Adapter;

class OpticalFlowExample extends Sprite
{

	public function new() 
	{
		super();
		
		var bd = new BitmapData(400, 300, true, 0xFF000000);
		var pi = bd.getPixels(bd.rect).getPxPtrARGB(400, 300);
		pi.fill([0x11, 0xFF, 0x00, 0xFF]);
		pi.image.position = 0;
		bd.setPixels(bd.rect, pi.image);
		
		addChild(new Bitmap(bd));
	}
	
	static function main():Void {
		Lib.current.addChild(new OpticalFlowExample());
	}
}