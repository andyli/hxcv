package hxcv.ds.of;

import haxe.io.Bytes;
import haxe.io.BytesInput;
import hxcv.ds.IImage;
import hxcv.ds.Vector;
import of.Context;

class OFImageRGB implements IImageRGB<Int>
{
	public function new(img:Image):Void {
		if (img.type != Constants.OF_IMAGE_COLOR) throw "Input is not a OF_IMAGE_COLOR image.";
		ofImage = img;
		width = img.width;
		height = img.height;
		pixels = Bytes.ofData(img.getPixels());
		numOfChannels = 3;
	}
	
	inline public function get(x:Int, y:Int, channel:Int):Int {
		#if debug
		if (channel < 0 || channel >= 3)
			throw "image does not have channel " + channel;
		#end
		return pixels.get((y * width + x) * 3 + channel);
	}
	
	inline public function set(x:Int, y:Int, channel:Int, val:Int):Void {
		#if debug
		if (channel < 0 || channel >= 3)
			throw "image does not have channel " + channel;
		#end
		pixels.set((y * width + x) * 3 + channel, val);
	}
	
	inline public function get3(x:Int, y:Int):Vector3<Int> {
		var pos = (y * width + x) * numOfChannels;
		return new Vector3(pixels.get(pos), pixels.get(pos + 1), pixels.get(pos + 2));
	}
	
	inline public function set3(x:Int, y:Int, val0:Int, val1:Int, val2:Int):Void {
		var pos = (y * width + x) * numOfChannels;
		pixels.set(pos, val0);
		pixels.set(++pos, val1);
		pixels.set(++pos, val2);
	}
	
	inline public function getHex(x:Int, y:Int):Int {
		return new BytesInput(pixels, (y * width + x) * 3).readInt24();
	}
	
	inline public function setHex(x:Int, y:Int, val:Int):Void {
		var pos = (y * width + x) * 3;

		pixels.set(pos, val >> 16 & 0xFF);
		pixels.set(++pos, val >> 8 & 0xFF);
		pixels.set(++pos, val & 0xFF);
	}
	
	inline public function getPixels():Array<Int> {
		return cast pixels.getData();
	}
	
	inline public function setPixels(src:Array<Int>):Void {
		ofImage.setFromPixels(cast src, width, height, ofImage.type);
	}
	
	
	inline public function lock():Void {}
	inline public function unlock():Void {
		ofImage.update();
	}
	
	inline public function clone():IImage<Int> {
		var img = new Image();
		img.clone(ofImage);
		return new OFImageRGB(img);
	}
	
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	
	inline public function iterator():Iterator<Int> {
		return cast pixels.getData().iterator();
	}
	
	public var ofImage(default, null):Image;
	var pixels:Bytes;
	
	
	inline public function getR(x:Int, y:Int):Int {
		return get(x, y, 0);
	}
	
	inline public function setR(x:Int, y:Int, val:Int):Void {
		set(x, y, 0, val);
	}
	
	inline public function getG(x:Int, y:Int):Int {
		return get(x, y, 1);
	}
	
	inline public function setG(x:Int, y:Int, val:Int):Void {
		set(x, y, 1, val);
	}
	
	inline public function getB(x:Int, y:Int):Int {
		return get(x, y, 2);
	}
	
	inline public function setB(x:Int, y:Int, val:Int):Void {
		set(x, y, 2, val);
	}
}