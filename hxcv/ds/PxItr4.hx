package hxcv.ds;

/**
 * PxItr that has at least 4 channels(0, 1, 2, 3).
 */
interface PxItr4<T, ImgT, This:PxItr4<T, ImgT, This>> implements PxItr3<T, ImgT, This>
{
	/*
	 * Get the channel 3 value of the pixel pointing to.
	 */
	public function get3():T;
	
	/*
	 * Set the channel 3 value of the pixel pointing to.
	 */
	public function set3(val:T):Void;
}