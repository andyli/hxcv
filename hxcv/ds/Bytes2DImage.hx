package hxcv.ds;

import haxe.io.Bytes;
import haxe.io.BytesInput;
using Lambda;

class Bytes2DImage implements I2DImage<Int> {

	public function new(w:Int, h:Int, channels:Int, ?b:Bytes):Void {
		width = w;
		height = h;
		numOfChannels = channels;
		if (b == null) {
			bytes = Bytes.alloc(w * h * channels);
		} else {
			bytes = b;
		}
	}
	
	inline public function get(x:Int, y:Int, channel:Int):Int {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		return bytes.get((y * width + x) * numOfChannels + channel);
	}
	
	inline public function set(x:Int, y:Int, channel:Int, val:Int):Void {
		#if debug
		if (channel < 0 || channel >= numOfChannels)
			throw "image does not have channel " + channel;
		#end
		bytes.set((y * width + x) * numOfChannels + channel, val);
	}
	
	public function getHex(x:Int, y:Int, ?alpha:Null<Int>):Int {
		var pos = (y * width + x) * numOfChannels;
		
		switch (numOfChannels) {
			case 1:
				var g:Int = bytes.get(pos);
				return g << 16 ^ g << 8 ^ g;
			case 3:
				return (alpha == null ? 0xFF : alpha) | new BytesInput(bytes, pos).readInt24();
			case 4:
				return bytes.get(pos) | new BytesInput(bytes, pos + 1).readInt24();
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
				bytes.set(pos, Std.int(0.3*r + 0.59*g + 0.11*b));
			case 3:
				bytes.set(pos, r);
				bytes.set(++pos, g);
				bytes.set(++pos, b);
			case 4:
				bytes.set(pos, a);
				bytes.set(++pos, r);
				bytes.set(++pos, g);
				bytes.set(++pos, b);
			default:
				throw "number of channels is not 1/3/4";
		}
	}
	
	inline public function getPixels():Array<Int> {
		#if (js || cpp)
		return cast bytes.getData();
		#else
		return array();
		#end
	}
	
	inline public function setPixels(src:Array<Int>):Void {
		for (i in 0...bytes.length) {
			bytes.set(i, src[i]);
		}
	}
	
	
	inline public function lock():Void {}
	inline public function unlock():Void {}
	
	inline public function clone():I2DImage<Int> {
		return new Bytes2DImage(width, height, numOfChannels, new BytesInput(bytes).readAll());
	}
	
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	
	inline public function iterator():Iterator<Int> {
		return new BytesIterator(bytes);
	}
	
	public var bytes(default,null):Bytes;
}

private class BytesIterator {
	var bytes:Bytes;
	var pos:Int;
	
	public function new(b:Bytes):Void {
		bytes = b;
		pos = 0;
	}
	
	inline public function hasNext():Bool {
		return bytes.length > pos;
	}
	
	inline public function next():Int {
		return bytes.get(pos++);
	}
}