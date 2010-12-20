package hxcv.ds;

interface IPixelIterator2<T, ImgT, This:IPixelIterator2<T, ImgT, This>> implements IPixelIterator<T, ImgT, This>
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