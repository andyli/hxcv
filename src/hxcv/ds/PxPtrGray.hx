package hxcv.ds;

interface PxPtrGray<T, ImgT, This:PxPtrGray<T, ImgT, This>> implements PxPtr<T, ImgT, This>
{
	public function getGray():T;
	public function setGray(val:T):Void;
	public function getHex():Int;
	public function setHex(val:Int):Void;
}