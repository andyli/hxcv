package hxcv.ds;

import hxcv.ds.Vector;

interface IImage<T, This:IImage<T,Dynamic>>{
	public function get(x:Int, y:Int, channel:Int):T;
	public function set(x:Int, y:Int, channel:Int, val:T):Void;
	public function getPixels():Array<T>;
	public function setPixels(src:Array<T>):Void;
	public function lock():Void;
	public function unlock():Void;
	public function clone():This;
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	public function iterator():Iterator<T>;
	//public function pixelIterator():IPixelIterator < T, This > ;
}