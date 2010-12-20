package hxcv.ds;

interface IPixelIterator4<T, ImgT, This:IPixelIterator4<T, ImgT, This>> implements IPixelIterator3<T, ImgT, This>
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