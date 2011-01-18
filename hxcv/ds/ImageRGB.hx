package hxcv.ds;

interface ImageRGB <T, This:ImageRGB<T,Dynamic>> implements Image3<T, This> {
	public function getR(x:Int, y:Int):T;
	public function setR(x:Int, y:Int, val:T):Void;
	public function getG(x:Int, y:Int):T;
	public function setG(x:Int, y:Int, val:T):Void;
	public function getB(x:Int, y:Int):T;
	public function setB(x:Int, y:Int, val:T):Void;
	public function getHex(x:Int, y:Int):Int;
	public function setHex(x:Int, y:Int, val:Int):Void;
}