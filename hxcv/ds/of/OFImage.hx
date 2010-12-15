package hxcv.ds.of;

import haxe.io.Bytes;
import haxe.io.BytesInput;
import hxcv.ds.IImage;
import of.graphics.Image;
import of.utils.Constants;

class OFImage implements IImage<Int, OFImage>
{
	public function new(img:Image):Void {
		ofImage = img;
		width = img.width;
		height = img.height;
		pixels = Bytes.ofData(img.getPixels());
		
		switch (img.type) {
			case Constants.OF_IMAGE_GRAYSCALE:
				numOfChannels = 1;
			
			case Constants.OF_IMAGE_COLOR:
				numOfChannels = 3;
			
			case Constants.OF_IMAGE_COLOR_ALPHA:
				numOfChannels = 4;
				
			default:
				throw "unknow number of channels";
		}
	}
	
	inline public function get(x:Int, y:Int, channel:Int):Int {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		return pixels.get((y * width + x) * numOfChannels + channel);
	}
	
	public function getHex(x:Int, y:Int, ?alpha:Null<Int>):Int {
		switch (numOfChannels) {
			case 1:
				var g = pixels.get((y * width + x) * numOfChannels);
				return g << 16 ^ g << 8 ^ g;
			case 3:
				return (alpha == null ? 0xFF : alpha) | (new BytesInput(pixels, (y * width + x) * numOfChannels).readInt24());
			case 4:
				var pos = (y * width + x) * numOfChannels;
				return (alpha == null ? pixels.get(pos+3) : alpha) | (new BytesInput(pixels, pos).readInt24());
			default:
				throw "number of channels is not 1/3/4";
		}
	}
	
	inline public function set(x:Int, y:Int, channel:Int, val:Int):Void {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		pixels.set((y * width + x) * numOfChannels + channel, val);
	}
	
	public function setHex(x:Int, y:Int, val:Int):Void {
		var a = val >> 24 & 0xFF;
		var r = val >> 16 & 0xFF;
		var g = val >> 8 & 0xFF;
		var b = val & 0xFF;
		var pos = (y * width + x) * numOfChannels;
		
		switch (numOfChannels) {
			case 1:
				pixels.set(pos, Std.int(0.3*r + 0.59*g + 0.11*b));
			case 3:
				pixels.set(pos, r);
				pixels.set(++pos, g);
				pixels.set(++pos, b);
			case 4:
				pixels.set(pos, r);
				pixels.set(++pos, g);
				pixels.set(++pos, b);
				pixels.set(++pos, a);
			default:
				throw "number of channels is not 1/3/4";
		}
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
	
	inline public function clone():OFImage {
		var img = new Image();
		img.clone(ofImage);
		return new OFImage(img);
	}
	
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	
	inline public function iterator():Iterator<Int> {
		return cast pixels.getData().iterator();
	}
	
	inline public function pixelIterator(?_minX:Int = 0, ?_maxX:Int = 0, ?_minY:Null<Int>, ?_maxY:Null<Int>):IPixelIterator < Int, OFImage > {
		return new OFImagePixelIterator(this, _minX, _maxX, _minY, _maxY);
	}
	
	public var ofImage(default, null):Image;
	var pixels:Bytes;
}


class OFImagePixelIterator implements IPixelIterator < Int, OFImage > {
	
	public var image(default, null):OFImage;
	public var x(default, null):Int;
	public var y(default, null):Int;
	public var minX:Int;
	public var maxX:Int;
	public var minY:Int;
	public var maxY:Int;
	var arrayIndex:Int;
	
	var imageWidth:Int;
	var imageNumOfChannels:Int;
	var imageArray:Array<Int>;
	
	public function new(img:OFImage, ?_minX:Int = 0, ?_maxX:Int = 0, ?_minY:Null<Int>, ?_maxY:Null<Int>):Void {
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
		imageNumOfChannels = image.numOfChannels;
		imageArray = image.getPixels();
		moveTo(minX = _minX, minY = _minY);
	}
	
	public function moveTo(_x:Int, _y:Int):Bool {
		if (_x >= minX && _x <= maxX && _y >= minY && _y <= maxY) {
			x = _x;
			y = _y;
			arrayIndex = (y * imageWidth + x) * imageNumOfChannels;
			return true;
		} else {
			return false;
		}
	}
	
	public function moveX(step:Int):Bool {
		var targetX = x + step;
		if (targetX >= minX && targetX <= maxX) {
			x = targetX;
			arrayIndex += step * imageNumOfChannels;
			return true;
		} else {
			return false;
		}
	}
	
	public function moveY(step:Int):Bool {
		var targetY = y + step;
		if (targetY >= minY && targetY <= maxY) {
			y = targetY;
			arrayIndex += step * imageWidth * imageNumOfChannels;
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
				arrayIndex = (y * imageWidth + x) * imageNumOfChannels;
				return false;
			}
		}
		arrayIndex += imageNumOfChannels;
		
		return true;
	}
	
	inline public function get(channel:Int):Int {
		#if debug
		if (channel < 0 || channel >= imageNumOfChannels)
			throw "image does not have channel " + channel;
		#end
		return imageArray[arrayIndex + channel];
	}
	
	inline public function set(channel:Int, val:Int):Void {
		#if debug
		if (channel < 0 || channel >= imageNumOfChannels)
			throw "image does not have channel " + channel;
		#end
		imageArray[arrayIndex + channel] = val;
	}
}