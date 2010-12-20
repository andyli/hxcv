package hxcv.ds;

interface IPixelIteratorARGB<T:Float, ImgT, This:IPixelIteratorARGB<T, ImgT, This>> implements IPixelIteratorRGB<T, ImgT, This>
{
	public function getA():T;
	public function setA(val:T):Void;
}