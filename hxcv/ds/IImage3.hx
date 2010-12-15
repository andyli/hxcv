package hxcv.ds;

import hxcv.ds.Vector;

/**
 * numOfChannels is always 3.
 */
interface IImage3 <T, This:IImage3<T,Dynamic>> implements IImage<T, This> {
	public function get3(x:Int, y:Int):Vector3<T>;
	public function set3(x:Int, y:Int, val0:T, val1:T, val2:T):Void;
}