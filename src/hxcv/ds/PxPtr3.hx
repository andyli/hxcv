package hxcv.ds;

/**
 * PxPtr that has at least 3 channels(0, 1, 2).
 */
interface PxPtr3<T, ImgT, This:PxPtr3<T, ImgT, This>> implements PxPtr2<T, ImgT, This>
{
	/*
	 * Get the channel 2 value of the pixel pointing to.
	 */
	public function get2():T;
	
	/*
	 * Set the channel 2 value of the pixel pointing to.
	 */
	public function set2(val:T):Void;
}