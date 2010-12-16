package hxcv.ds;

class ArrayAccessPixelIterator <T, ImgT:ArrayAccess<T>> implements IPixelIterator < T, ImgT, ArrayAccessPixelIterator<T, ImgT> > #if flash , implements haxe.rtti.Generic #end {
	public var image(default, null):ImgT;
	public var imageWidth(default, null):Int;
	public var imageHeight(default, null):Int;
	public var imageNumOfChannels(default, null):Int;
	public var index(default, null):Int;
	
	public var x(default, null):Int;
	public var y(default, null):Int;
	
	public var minX:Int;
	public var minY:Int;
	public var maxX:Int;
	public var maxY:Int;
	
	public function new():Void {
		
	}
	
	public function clone():ArrayAccessPixelIterator < T, ImgT > {
		return 
			new ArrayAccessPixelIterator<T, ImgT>()
				.init(
					image,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels,
					minX, minY, maxX, maxY
				);
	}
	
	public function init
	(
		_image:ImgT,
		_imageWidth:Int, 
		_imageHeight:Int, 
		_imageNumOfChannels:Int,
		?_minX:Int = 0, ?_minY:Int = 0, ?_maxX:Null<Int>, ?_maxY:Null<Int>
	):ArrayAccessPixelIterator < T, ImgT > {
		
		#if debug
		if (_imageWidth <= 0)
			throw "_imageWidth should be positive integer";
			
		if (_imageHeight <= 0)
			throw "_imageHeight should be positive integer";
			
		if (_imageNumOfChannels <= 0)
			throw "_imageNumOfChannels should be positive integer";
			
		if (_image == null)
			throw "_image cannot be null";
			
		if (_minX < 0 || _minX >= _imageWidth)
			throw "minX is invalid";
		
		if (_minY < 0 || _minY >= _imageHeight)
			throw "minY is invalid";
		
		if (_maxX < _minX || _maxX >= _imageWidth)
			throw "_maxX is invalid";
		
		if (_maxY < _minY || _maxY >= _imageHeight)
			throw "_maxY is invalid";
		#end
		
		image = _image;
		maxX = _maxX == null ? _imageWidth - 1 : _maxX;
		maxY = _maxY == null ? _imageHeight - 1 : _maxY;
		imageWidth = _imageWidth;
		imageHeight = _imageHeight;
		imageNumOfChannels = _imageNumOfChannels;
		unsafeMoveTo(minX = _minX, minY = _minY);
		
		return this;
	}
	
	inline public function checkCoordinates():Bool {
		return x >= minX && x <= maxX && y >= minY && y <= maxY;
	}
	
	inline public function unsafeMoveTo(_x:Int, _y:Int):Void {
		x = _x;
		y = _y;
		index = (y * imageWidth + x) * imageNumOfChannels;
	}
	
	inline public function moveTo(_x:Int, _y:Int):Bool {
		if (_x >= minX && _x <= maxX && _y >= minY && _y <= maxY) {
			unsafeMoveTo(_x, _y);
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveX(step:Int):Void {
		x += step;
		index += step * imageNumOfChannels;
	}
	
	inline public function moveX(step:Int):Bool {
		var targetX = x + step;
		if (targetX >= minX && targetX <= maxX) {
			unsafeMoveX(step);
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveY(step:Int):Void {
		y += step;
		index += step * imageWidth * imageNumOfChannels;
	}
	
	inline public function moveY(step:Int):Bool {
		var targetY = y + step;
		if (targetY >= minY && targetY <= maxY) {
			unsafeMoveY(step);
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeNext():Void {
		if (++x > maxX) {
			x = minX;
			++y;
		}
		index += imageNumOfChannels;
	}
	
	public function next():Bool {		
		if (++x > maxX) {
			x = minX;
			if (++y > maxY) {
				y = minY;
				index = (y * imageWidth + x) * imageNumOfChannels;
				return false;
			}
		}
		index += imageNumOfChannels;
		
		return true;
	}
	
	inline public function get(channel:Int):T {
		#if debug
		if (channel < 0 || channel >= imageNumOfChannels)
			throw "image does not have channel " + channel;
		#end
		return image[index + channel];
	}
	
	inline public function set(channel:Int, val:T):Void {
		#if debug
		if (channel < 0 || channel >= imageNumOfChannels)
			throw "image does not have channel " + channel;
		#end
		image[index + channel] = val;
	}
}