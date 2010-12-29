package hxcv.ds;

interface IPxItrGray<T, ImgT, This:IPxItrGray<T, ImgT, This>> implements IPxItr<T, ImgT, This>
{
	public function getGray():T;
	public function setGray(val:T):Void;
	public function getHex():Int;
	public function setHex(val:Int):Void;
}