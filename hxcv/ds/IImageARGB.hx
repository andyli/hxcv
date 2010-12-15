package hxcv.ds;

interface IImageARGB <T, This:IImageARGB<T,Dynamic>> implements IImage4<T, This> {
	public function getA(x:Int, y:Int):T;
	public function setA(x:Int, y:Int, val:T):Void;
	public function getR(x:Int, y:Int):T;
	public function setR(x:Int, y:Int, val:T):Void;
	public function getG(x:Int, y:Int):T;
	public function setG(x:Int, y:Int, val:T):Void;
	public function getB(x:Int, y:Int):T;
	public function setB(x:Int, y:Int, val:T):Void;
	public function getHex(x:Int, y:Int, alpha:Int):Int;
	public function setHex(x:Int, y:Int, val:Int):Void;
}