package hxcv.ds;

class ArrayAccessPxPtrARGB < T, ImgT:ArrayAccess<T> > 
	implements PxPtrARGB < T, ImgT, ArrayAccessPxPtrARGB < T, ImgT > > 
	#if flash , implements haxe.rtti.Generic #end 
{
	public var image(default, null):ImgT;
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	public var index(default, null):Int;
	
	public var x(default, null):Int;
	public var y(default, null):Int;
	
	var yOffset:Int;
	
	public function new():Void {
		
	}
	
	public function init
	(
		_image:ImgT,
		_width:Int, 
		_height:Int
	):ArrayAccessPxPtrARGB < T, ImgT > {
		
		#if debug
		if (_width <= 0)
			throw "_width should be positive integer";
			
		if (_height <= 0)
			throw "_height should be positive integer";
			
		if (_image == null)
			throw "_image cannot be null";
		#end
		
		image = _image;
		width = _width;
		height = _height;
		numOfChannels = 4;
		head();
		yOffset = width * 4;
		return this;
	}
	
	inline public function checkCoordinates():Bool {
		return x >= 0 && x < width && y >= 0 && y < height;
	}
	
	inline public function unsafeMoveTo(_x:Int, _y:Int):Void {
		index = ((y = _y) * width + (x = _x)) * 4;
	}
	
	inline public function moveTo(_x:Int, _y:Int):Bool {
		if (_x >= 0 && _x < width && _y >= 0 && _y < height) {
			unsafeMoveTo(_x, _y);
			return true;
		} else {
			return false;
		}
	}
	
	inline public function head():ArrayAccessPxPtrARGB< T, ImgT > {
		x = y = index = 0;
		return this;
	}
	
	inline public function tail():ArrayAccessPxPtrARGB< T, ImgT > {
		x = width - 1;
		y = height - 1;
		index = height * yOffset - 1;
		return this;
	}
	
	inline public function unsafeMoveRight():Void {
		++x;
		index += 4;
	}
	
	inline public function moveRight():Bool {
		var targetX = x + 1;
		if (targetX < width) {
			x = targetX;
			index += 4;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveLeft():Void {
		--x;
		index -= 4;
	}
	
	inline public function moveLeft():Bool {
		var targetX = x - 1;
		if (targetX >= 0) {
			x = targetX;
			index -= 4;
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
		if (targetY < height) {
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
		if (targetY < height) {
			y = targetY;
			index -= yOffset;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeMoveX(step:Int):Void {
		x += step;
		index += step * 4;
	}
	
	inline public function moveX(step:Int):Bool {
		var targetX = x + step;
		if (targetX >= 0 && targetX < width) {
			x = targetX;
			index += step * 4;
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
		if (targetY >= 0 && targetY < height) {
			y = targetY;
			index += step * yOffset;
			return true;
		} else {
			return false;
		}
	}
	
	inline public function unsafeNext():Void {
		if (++x > width) {
			x = 0;
			++y;
		}
		index += 4;
	}
	
	public function next():Bool {		
		if (++x >= width) {
			x = 0;
			if (++y >= height) {
				y = index = 0;
				return false;
			}
		}
		index += 4;
		
		return true;
	}
	
	inline public function unsafePrev():Void {
		if (--x < 0) {
			x = width - 1;
			--y;
		}
		index -= 4;
	}
	
	public function prev():Bool {		
		if (--x < 0) {
			x = width - 1;
			if (--y < 0) {
				y = height - 1; 
				index = height * yOffset - 1;
				return false;
			}
		}
		index -= 4;
		
		return true;
	}
	
	inline public function get(channel:Int):T {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		return image[index + channel];
	}
	
	inline public function set(channel:Int, val:T):Void {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
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
	
	public function clone():ArrayAccessPxPtrARGB < T, ImgT > {
		var r = new ArrayAccessPxPtrARGB<T, ImgT>();
		r.image = image;
		r.width = width;
		r.height = height;
		r.index = index;
		r.x = x;
		r.y = y;
		r.yOffset = yOffset;
		return r;
	}
	
	public function copyChannel(src:PxPtr< T, Dynamic, Dynamic>, srcChannel:Int, destChannel:Int):ArrayAccessPxPtrARGB < T, ImgT > {
		do {
			set(destChannel, src.get(srcChannel));
		} while (next() && src.next());
		
		return this;
	}
	
	public function copyPixels(src:PxPtr< T, Dynamic, Dynamic>):ArrayAccessPxPtrARGB < T, ImgT > {
		do {
			set0(src.get(0));
			set1(src.get(1));
			set2(src.get(2));
			set3(src.get(3));
		} while (next() && src.next());
		
		return this;
	}
	
	public function fill(values:Array<T>):ArrayAccessPxPtrARGB < T, ImgT > {
		#if debug
		if (values == null)
			throw "values cannot be null";
			
		if (values.length < numOfChannels)
			throw "values's length is less than " + numOfChannels;
		#end
		
		var end = yOffset * height;
		while (index < end) {
			image[index++] = values[0];
			image[index++] = values[1];
			image[index++] = values[2];
			image[index++] = values[3];
		}
		head();
		return this;
	}
	
	inline public function get1():T {
		return image[index+1];
	}
	inline public function set1(val:T):Void {
		image[index+1] = val;
	}
	inline public function get2():T {
		return image[index+2];
	}
	inline public function set2(val:T):Void {
		image[index+2] = val;
	}
	inline public function get3():T {
		return image[index+3];
	}
	inline public function set3(val:T):Void {
		image[index+3] = val;
	}
	
	inline public function getA():T {
		return get0();
	}
	inline public function setA(val:T):Void {
		set0(val);
	}
	inline public function getR():T {
		return get1();
	}
	inline public function setR(val:T):Void {
		set1(val);
	}
	inline public function getG():T {
		return get2();
	}
	inline public function setG(val:T):Void {
		set2(val);
	}
	inline public function getB():T {
		return get3();
	}
	inline public function setB(val:T):Void {
		set3(val);
	}
	
	inline public function getHex():Int {
		return (cast getA()) << 24 ^ (cast getR()) << 16 ^ (cast getG()) << 8 ^ (cast getB());
	}
	inline public function setHex(val:Int):Void {
		setA(cast val >> 24 & 0xFF);
		setR(cast val >> 16 & 0xFF);
		setG(cast val >> 8 & 0xFF);
		setB(cast val & 0xFF);
	}
	
	public function iterator() {
		return new PxPtrIterator<ArrayAccessPxPtrARGB < T, ImgT >>(this);
	}
}