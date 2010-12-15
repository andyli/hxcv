package hxcv.ds;

interface IImageGray <T, This:IImageGray<T,Dynamic>> implements IImage1<T, This> {
	public function getGray(x:Int, y:Int):T;
	public function setGray(x:Int, y:Int, val:T):Void;
	public function getHex(x:Int, y:Int):Int;
	public function setHex(x:Int, y:Int, val:Int):Void;
}