package hxcv.ds;

class ArrayAccessPxItrGray < T, ImgT:ArrayAccess<T> >
	implements PxItrGray < T, ImgT, ArrayAccessPxItrGray < T, ImgT > >
	#if flash , implements haxe.rtti.Generic #end 
{
	public var image(default, null):ImgT;
	public var imageWidth(default, null):Int;
	public var imageHeight(default, null):Int;
	public var imageNumOfChannels(default, null):Int;
	public var index(default, null):Int;
	
	public var x(default, null):Int;
	public var y(default, null):Int;
	
	var yOffset:Int;
	
	public function new():Void {
		imageNumOfChannels = 1;
	}
	
	public function init
	(
		_image:ImgT,
		_imageWidth:Int, 
		_imageHeight:Int
	):ArrayAccessPxItrGray < T, ImgT > {
		
		#if debug
		if (_imageWidth <= 0)
			throw "_imageWidth should be positive integer";
			
		if (_imageHeight <= 0)
			throw "_imageHeight should be positive integer";
			
		if (_image == null)
			throw "_image cannot be null";
		#end
		
		image = _image;
		imageWidth = _imageWidth;
		imageHeight = _imageHeight;
		head();
		yOffset = imageWidth;
		return this;
	}
	
	inline public function checkCoordinates():Bool {
		return x >= 0 && x < imageWidth && y >= 0 && y < imageHeight;
	}
	
	inline public function unsafeMoveTo(_x:Int, _y:Int):Void {
		index = (y = _y) * imageWidth + (x = _x);
	}
	
	inline public function moveTo(_x:Int, _y:Int):Bool {
		if (_x >= 0 && _x < imageWidth && _y >= 0 && _y < imageHeight) {
			unsafeMoveTo(_x, _y);
			return true;
		} else {
			return false;
		}
	}
	
	inline public function head():ArrayAccessPxItrGray< T, ImgT > {
		x = y = index = 0;
		return this;
	}
	
	inline public function unsafeMoveRight():Void {
		++x;
		++index;
	}
	
	inline public function moveRight():Bool {
		var targetX = x + 1;
		if (targetX < imageWidth) {
			x = targetX;
			++index;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveLeft():Void {
		--x;
		--index;
	}
	
	inline public function moveLeft():Bool {
		var targetX = x - 1;
		if (targetX >= 0) {
			x = targetX;
			--index;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveDown():Void {
		++y;
		index += yOffset;
	}
	
	inline public function moveDown():Bool {
		var targetY = y + 1;
		if (targetY < imageHeight) {
			y = targetY;
			index += yOffset;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveUp():Void {
		--y;
		index -= yOffset;
	}
	
	inline public function moveUp():Bool {
		var targetY = y - 1;
		if (targetY < imageHeight) {
			y = targetY;
			index -= yOffset;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveX(step:Int):Void {
		x += step;
		index += step;
	}
	
	inline public function moveX(step:Int):Bool {
		var targetX = x + step;
		if (targetX >= 0 && targetX < imageWidth) {
			x = targetX;
			index += step;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveY(step:Int):Void {
		y += step;
		index += step * yOffset;
	}
	
	inline public function moveY(step:Int):Bool {
		var targetY = y + step;
		if (targetY >= 0 && targetY < imageHeight) {
			y = targetY;
			index += step * yOffset;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeNext():Void {
		if (++x > imageWidth) {
			x = 0;
			++y;
		}
		++index;
	}
	
	public function next():Bool {		
		if (++x >= imageWidth) {
			x = 0;
			if (++y >= imageHeight) {
				y = index = 0;
				return false;
			}
		}
		++index;
		
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
	
	inline public function get0():T {
		return image[index];
	}
	
	inline public function set0(val:T):Void {
		image[index] = val;
	}
	
	public function clone():ArrayAccessPxItrGray < T, ImgT > {
		var r = new ArrayAccessPxItrGray<T, ImgT>();
		r.image = image;
		r.imageWidth = imageWidth;
		r.imageHeight = imageHeight;
		r.index = index;
		r.x = x;
		r.y = y;
		r.yOffset = yOffset;
		return r;
	}
	
	public function copyChannel(src:PxItr< T, ImgT, Dynamic>, srcChannel:Int, destChannel:Int):ArrayAccessPxItrGray < T, ImgT > {
		do {
			set(destChannel, src.get(srcChannel));
		} while (next() && src.next());
		
		return this;
	}
	
	public function copyPixels(src:PxItr< T, ImgT, Dynamic>):ArrayAccessPxItrGray < T, ImgT > {
		do {
			set0(src.get0());
		} while (next() && src.next());
		
		return this;
	}
	
	public function fill(values:Array<T>):ArrayAccessPxItrGray < T, ImgT > {
		#if debug
		if (values == null)
			throw "values cannot be null";
			
		if (values.length < imageNumOfChannels)
			throw "values's length is less than " + imageNumOfChannels;
		#end
		
		var end = yOffset * imageHeight;
		while (index < end) {
			image[index++] = values[0];
		}
		head();
		return this;
	}
	
	inline public function getGray() {
		return get0();
	}
	
	inline public function setGray(val:T):Void {
		set0(val);
	}
	
	inline public function getHex():Int {
		var g:Int = cast get0();
		return g << 16 ^ g << 8 ^ g;
	}
	
	inline public function setHex(val:Int):Void {
		set0(cast 0.3 * (val >> 16 & 0xFF) + 0.59 * (val >> 8 & 0xFF) + 0.11 * (val & 0xFF));
	}
}