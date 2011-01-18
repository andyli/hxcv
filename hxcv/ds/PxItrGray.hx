package hxcv.ds;

interface PxItrGray<T, ImgT, This:PxItrGray<T, ImgT, This>> implements PxItr<T, ImgT, This>
{
	public function getGray():T;
	public function setGray(val:T):Void;
	public function getHex():Int;
	public function setHex(val:Int):Void;
}