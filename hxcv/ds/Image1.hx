package hxcv.ds;

/**
 * numOfChannels is always 1.
 */
interface Image1 <T, This:Image1<T,Dynamic>> implements Image<T, This> {
	public function get1(x:Int, y:Int):T;
	public function set1(x:Int, y:Int, val:T):Void;
}