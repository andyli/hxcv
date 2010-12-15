package hxcv.ds;

/**
 * numOfChannels is always 1.
 */
interface IImage1 <T, This:IImage1<T,Dynamic>> implements IImage<T, This> {
	public function get1(x:Int, y:Int):T;
	public function set1(x:Int, y:Int, val:T):Void;
}