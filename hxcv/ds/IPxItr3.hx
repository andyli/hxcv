package hxcv.ds;

interface IPxItr3<T, ImgT, This:IPxItr3<T, ImgT, This>> implements IPxItr2<T, ImgT, This>
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