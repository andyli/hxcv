package hxcv.ds;

interface IPxItr4<T, ImgT, This:IPxItr4<T, ImgT, This>> implements IPxItr3<T, ImgT, This>
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