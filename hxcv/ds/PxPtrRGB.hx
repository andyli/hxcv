package hxcv.ds;

interface PxPtrRGB<T, ImgT, This:PxPtrRGB<T, ImgT, This>> implements PxPtr3<T, ImgT, This>
{
	public function getR():T;
	public function setR(val:T):Void;
	public function getG():T;
	public function setG(val:T):Void;
	public function getB():T;
	public function setB(val:T):Void;
	public function getHex():Int;
	public function setHex(val:Int):Void;
}