package hxcv.ds;

interface PxPtrARGB < T, ImgT, This:PxPtrARGB < T, ImgT, This >> 
implements PxPtrRGB<T, ImgT, This>,
implements PxPtr4<T, ImgT, This>
{
	public function getA():T;
	public function setA(val:T):Void;
}