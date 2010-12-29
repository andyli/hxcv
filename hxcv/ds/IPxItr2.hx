package hxcv.ds;

interface IPxItr2<T, ImgT, This:IPxItr2<T, ImgT, This>> implements IPxItr<T, ImgT, This>
{
	/*
	 * Get the channel 1 value of the pixel pointing to.
	 */
	public function get1():T;
	
	/*
	 * Set the channel 1 value of the pixel pointing to.
	 */
	public function set1(val:T):Void;
}