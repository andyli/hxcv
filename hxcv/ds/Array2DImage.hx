package hxcv.ds;

class Array2DImage<T> implements IImage<T>, implements haxe.rtti.Generic {

	public function new(w:Int, h:Int, channels:Int, ?ary:Array<T>):Void {
		width = w;
		height = h;
		numOfChannels = channels;
		if (ary == null) {
			array = [];
			for (i in 0...w * h * channels) {
				array.push(cast 0.0);
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
	
	inline public function set(x:Int, y:Int, channel:Int, val:T):Void {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		array[(y * width + x) * numOfChannels + channel] =  val;
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
	
	inline public function clone():IImage<T> {
		return new Array2DImage<T>(width, height, numOfChannels, array.copy());
	}
	
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	
	inline public function iterator():Iterator<T> {
		return array.iterator();
	}
	
	public var array(default,null):Array<T>;
}