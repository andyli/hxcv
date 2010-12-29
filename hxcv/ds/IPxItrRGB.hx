package hxcv.ds;

interface IPxItrRGB<T, ImgT, This:IPxItrRGB<T, ImgT, This>> implements IPxItr3<T, ImgT, This>
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