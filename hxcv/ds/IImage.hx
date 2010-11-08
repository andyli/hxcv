package hxcv.ds;

import hxcv.ds.Vector3;
import hxcv.ds.Vector4;

interface IImage<T>{
	public function get(x:Int, y:Int, channel:Int):T;
	public function set(x:Int, y:Int, channel:Int, val:T):Void;
	public function getPixels():Array<T>;
	public function setPixels(src:Array<T>):Void;
	public function lock():Void;
	public function unlock():Void;
	public function clone():IImage<T>;
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	public function iterator():Iterator<T>;
}

/**
 * numOfChannels is always 1.
 */
interface IImage1 <T> implements IImage<T> {
	public function get1(x:Int, y:Int):T;
	public function set1(x:Int, y:Int, val:T):Void;
}

/**
 * numOfChannels is always 3.
 */
interface IImage3 <T> implements IImage<T> {
	public function get3(x:Int, y:Int):Array<T>;
	public function set3(x:Int, y:Int, val0:T, val1:T, val2:T):Void;
}

/**
 * numOfChannels is always 4.
 */
interface IImage4 <T> implements IImage<T> {
	public function get4(x:Int, y:Int):Array<T>;
	public function set4(x:Int, y:Int, val0:T, val1:T, val2:T, val3:T):Void;
}

interface IImageGray <T> implements IImage1<T> {
	public function getGray(x:Int, y:Int):T;
	public function setGray(x:Int, y:Int, val:T):Void;
	public function getHex(x:Int, y:Int):Int;
	public function setHex(x:Int, y:Int, val:Int):Void;
}

interface IImageRGB <T> implements IImage3<T> {
	public function getR(x:Int, y:Int):T;
	public function setR(x:Int, y:Int, val:T):Void;
	public function getG(x:Int, y:Int):T;
	public function setG(x:Int, y:Int, val:T):Void;
	public function getB(x:Int, y:Int):T;
	public function setB(x:Int, y:Int, val:T):Void;
	public function getHex(x:Int, y:Int):Int;
	public function setHex(x:Int, y:Int, val:Int):Void;
}

interface IImageARGB <T> implements IImage4<T> {
	public function getA(x:Int, y:Int):T;
	public function setA(x:Int, y:Int, val:T):Void;
	public function getR(x:Int, y:Int):T;
	public function setR(x:Int, y:Int, val:T):Void;
	public function getG(x:Int, y:Int):T;
	public function setG(x:Int, y:Int, val:T):Void;
	public function getB(x:Int, y:Int):T;
	public function setB(x:Int, y:Int, val:T):Void;
	public function getHex(x:Int, y:Int, alpha:Int):Int;
	public function setHex(x:Int, y:Int, val:Int):Void;
}