package hxcv.ds.of;

import haxe.io.Bytes;
import haxe.io.BytesInput;
import hxcv.ds.IImage;
import of.Context;

class OFImageGray implements IImageGray<Int, OFImageGray>
{
	public function new(img:Image):Void {
		if (img.type != Constants.OF_IMAGE_GRAYSCALE) throw "Input is not a grayscale image.";
		
		ofImage = img;
		width = img.width;
		height = img.height;
		pixels = Bytes.ofData(img.getPixels());
		numOfChannels = 1;
	}
	
	inline public function get(x:Int, y:Int, channel:Int):Int {
		#if debug
		if (channel != 0)
			throw "image does not have channel " + channel;
		#end
		return pixels.get(y * width + x + channel);
	}
	
	inline public function set(x:Int, y:Int, channel:Int, val:Int):Void {
		#if debug
		if (channel != 0)
			throw "image does not have channel " + channel;
		#end
		pixels.set(y * width + x + channel, val);
	}
	
	inline public function get1(x:Int, y:Int):Int {
		return pixels.get(y * width + x);
	}
	
	inline public function set1(x:Int, y:Int, val:Int):Void {
		pixels.set(y * width + x, val);
	}
	
	inline public function getHex(x:Int, y:Int):Int {
		var g = pixels.get(y * width + x);
		return g << 16 ^ g << 8 ^ g;
	}
	
	inline public function setHex(x:Int, y:Int, val:Int):Void {
		pixels.set(y * width + x, Std.int(0.3*(val >> 16 & 0xFF) + 0.59*(val >> 8 & 0xFF) + 0.11*(val & 0xFF)));
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
	
	inline public function clone():OFImageGray {
		var img = new Image();
		img.clone(ofImage);
		return new OFImageGray(img);
	}
	
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	
	inline public function iterator():Iterator<Int> {
		return cast pixels.getData().iterator();
	}
	
	inline public function pixelIterator(?_minX:Int = 0, ?_minY:Int = 0, ?_maxX:Null<Int>, ?_maxY:Null<Int>):IPixelIterator < Int, OFImageGray > {
		return new OFImageGrayPixelIterator(this, _minX, _minY, _maxX, _maxY);
	}
	
	public var ofImage(default, null):Image;
	var pixels:Bytes;
	
	inline public function getGray(x:Int, y:Int):Int {
		return get(x, y, 0);
	}
	
	inline public function setGray(x:Int, y:Int, val:Int):Void {
		set(x, y, 0, val);
	}
}

class OFImageGrayPixelIterator implements IPixelIterator < Int, OFImageGray > {
	
	public var image(default, null):OFImageGray;
	public var x(default, null):Int;
	public var y(default, null):Int;
	public var minX:Int;
	public var maxX:Int;
	public var minY:Int;
	public var maxY:Int;
	var arrayIndex:Int;
	
	var imageWidth:Int;
	var imageArray:Array<Int>;
	
	public function new(img:OFImageGray, ?_minX:Int = 0, ?_minY:Int = 0, ?_maxX:Null<Int>, ?_maxY:Null<Int>):Void {
		#if debug
		if (_minX < 0 || _minX >= img.width)
			throw "minX is invalid";
		
		if (_minY < 0 || _minY >= img.height)
			throw "minY is invalid";
		
		if (_maxX < _minX || _maxX >= img.width)
			throw "_maxX is invalid";
		
		if (_maxY < _minY || _maxY >= img.height)
			throw "_maxY is invalid";
		#end
		
		image = img;
		maxX = _maxX == null ? image.width - 1 : _maxX;
		maxY = _maxY == null ? image.height - 1 : _maxY;
		imageWidth = image.width;
		imageArray = image.getPixels();
		moveTo(minX = _minX, minY = _minY);
	}
	
	public function moveTo(_x:Int, _y:Int):Bool {
		if (_x >= minX && _x <= maxX && _y >= minY && _y <= maxY) {
			x = _x;
			y = _y;
			arrayIndex = (y * imageWidth + x);
			return true;
		} else {
			return false;
		}
	}
	
	public function moveX(step:Int):Bool {
		var targetX = x + step;
		if (targetX >= minX && targetX <= maxX) {
			x = targetX;
			arrayIndex += step;
			return true;
		} else {
			return false;
		}
	}
	
	public function moveY(step:Int):Bool {
		var targetY = y + step;
		if (targetY >= minY && targetY <= maxY) {
			y = targetY;
			arrayIndex += step * imageWidth;
			return true;
		} else {
			return false;
		}
	}
	
	public function next():Bool {		
		if (++x > maxX) {
			x = minX;
			if (++y > maxY) {
				y = minY;
				arrayIndex = (y * imageWidth + x);
				return false;
			}
		}
		++arrayIndex;
		
		return true;
	}
	
	inline public function get(channel:Int):Int {
		#if debug
		if (channel != 0)
			throw "image does not have channel " + channel;
		#end
		return imageArray[arrayIndex];
	}
	
	inline public function set(channel:Int, val:Int):Void {
		#if debug
		if (channel != 0)
			throw "image does not have channel " + channel;
		#end
		imageArray[arrayIndex] = val;
	}
}