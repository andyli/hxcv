package hxcv.ds;

import hxcv.ds.Vector;

/**
 * numOfChannels is always 4.
 */
interface Image4 <T, This:Image4<T,Dynamic>> implements Image<T, This> {
	public function get4(x:Int, y:Int):Vector4<T>;
	public function set4(x:Int, y:Int, val0:T, val1:T, val2:T, val3:T):Void;
}