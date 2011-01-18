package hxcv.ds;

interface PxItrARGB < T, ImgT, This:PxItrARGB < T, ImgT, This >> 
implements PxItrRGB<T, ImgT, This>,
implements PxItr4<T, ImgT, This>
{
	public function getA():T;
	public function setA(val:T):Void;
}