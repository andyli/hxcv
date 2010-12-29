package hxcv.ds;

interface IPxItrARGB < T, ImgT, This:IPxItrARGB < T, ImgT, This >> 
implements IPxItrRGB<T, ImgT, This>,
implements IPxItr4<T, ImgT, This>
{
	public function getA():T;
	public function setA(val:T):Void;
}