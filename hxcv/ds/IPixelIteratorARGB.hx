package hxcv.ds;

interface IPixelIteratorARGB < T, ImgT, This:IPixelIteratorARGB < T, ImgT, This >> 
implements IPixelIteratorRGB<T, ImgT, This>,
implements IPixelIterator4<T, ImgT, This>
{
	public function getA():T;
	public function setA(val:T):Void;
}