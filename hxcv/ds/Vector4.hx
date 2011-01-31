package hxcv.ds;

class Vector4<T> extends Vector3<T>, implements haxe.rtti.Generic
{

	public function new(?_x:T, ?_y:T, ?_z:T, ?_w:T):Void 
	{
		super(x, y, z);
		_w = w;
	}
	
	public var w(getW, setW):T;
	
	private var _w:T;
	private function getW():T {
		return _w;
	}
	private function setW(val:T):T {
		return _w = val;
	}
}