package hxcv.ds;

interface IPixelIteratorGray<T, ImgT, This:IPixelIteratorGray<T, ImgT, This>> implements IPixelIterator<T, ImgT, This>
{
	public function getGray():T;
	public function setGray(val:T):Void;
	public function getHex():Int;
	public function setHex(val:Int):Void;
}