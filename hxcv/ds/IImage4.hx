package hxcv.ds;

import hxcv.ds.Vector;

/**
 * numOfChannels is always 4.
 */
interface IImage4 <T, This:IImage4<T,Dynamic>> implements IImage<T, This> {
	public function get4(x:Int, y:Int):Vector4<T>;
	public function set4(x:Int, y:Int, val0:T, val1:T, val2:T, val3:T):Void;
}