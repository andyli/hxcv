package hxcv.ds;

import haxe.rtti.Generic;

class Array2DImage<T> implements IImage<T, Array2DImage<T>>/*, implements Generic*/ {

	public function new(w:Int, h:Int, channels:Int, ?ary:Array<T>):Void {
		width = w;
		height = h;
		numOfChannels = channels;
		if (ary == null) {
			array = [];
			for (i in 0...w * h * channels) {
				array.push(null);
			}
		} else {
			array = ary;
		}
	}
	
	inline public function get(x:Int, y:Int, channel:Int):T {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		return array[(y * width + x) * numOfChannels + channel];
	}
	
	inline public function set(x:Int, y:Int, channel:Int, val:T):Void {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		array[(y * width + x) * numOfChannels + channel] =  val;
	}
	/*
	public function getHex(x:Int, y:Int, ?alpha:Null<Int>):Int {
		var pos = (y * width + x) * numOfChannels;
		
		switch (numOfChannels) {
			case 1:
				var g:Int = cast array[pos];
				return g << 16 ^ g << 8 ^ g;
			case 3:
				untyped return (alpha == null ? 0xFF : alpha) | array[pos] << 16 | array[pos + 1] << 8 | array[pos + 2];
			case 4:
				untyped return array[pos] << 24 | array[pos + 1] << 16 | array[pos + 2] << 8 | array[pos + 3];
			default:
				throw "number of channels is not 1/3/4";
		}
	}
	
	public function setHex(x:Int, y:Int, val:Int):Void {
		var a = val >> 24 & 0xFF;
		var r = val >> 16 & 0xFF;
		var g = val >> 8 & 0xFF;
		var b = val & 0xFF;
		var pos = (y * width + x) * numOfChannels;
		
		switch (numOfChannels) {
			case 1:
				array[pos] = cast 0.3*r + 0.59*g + 0.11*b;
			case 3:
				array[pos] = cast r;
				array[++pos] = cast g;
				array[++pos] = cast b;
			case 4:
				array[pos] = cast a;
				array[++pos] = cast r;
				array[++pos] = cast g;
				array[++pos] = cast b;
			default:
				throw "number of channels is not 1/3/4";
		}
	}
	*/
	inline public function getPixels():Array<T> {
		return array;
	}
	
	inline public function setPixels(src:Array<T>):Void {
		for (i in 0...array.length) {
			array[i] = src[i];
		}
	}
	
	
	inline public function lock():Void {}
	inline public function unlock():Void {}
	
	inline public function clone():Array2DImage<T> {
		return new Array2DImage<T>(width, height, numOfChannels, array.copy());
	}
	
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	
	inline public function iterator():Iterator<T> {
		return array.iterator();
	}
	
	inline public function pixelIterator(?_minX:Int = 0, ?_minY:Int = 0, ?_maxX:Null<Int>, ?_maxY:Null<Int>):IPixelIterator < T, Array2DImage<T> > {
		return new Array2DImagePixelIterator<T>(this, _minX, _minY, _maxX, _maxY);
	}
	
	public var array(default,null):Array<T>;
}

class Array2DImagePixelIterator<T> implements IPixelIterator < T, Array2DImage<T> > {
	
	public var image(default, null):Array2DImage<T>;
	public var x(default, null):Int;
	public var y(default, null):Int;
	public var minX:Int;
	public var maxX:Int;
	public var minY:Int;
	public var maxY:Int;
	var arrayIndex:Int;
	
	var imageWidth:Int;
	var imageNumOfChannels:Int;
	var imageArray:Array<T>;
	
	public function new(img:Array2DImage<T>, ?_minX:Int = 0, ?_minY:Int = 0, ?_maxX:Null<Int>, ?_maxY:Null<Int>):Void {
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
		imageArray = image.array;
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
	
	inline public function moveX(step:Int):Bool {
		var targetX = x + step;
		if (targetX >= minX && targetX <= maxX) {
			x = targetX;
			arrayIndex += step * imageNumOfChannels;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function moveY(step:Int):Bool {
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
	
	inline public function get(channel:Int):T {
		#if debug
		if (channel < 0 || channel >= imageNumOfChannels)
			throw "image does not have channel " + channel;
		#end
		return imageArray[arrayIndex + channel];
	}
	
	inline public function set(channel:Int, val:T):Void {
		#if debug
		if (channel < 0 || channel >= imageNumOfChannels)
			throw "image does not have channel " + channel;
		#end
		imageArray[arrayIndex + channel] = val;
	}
}