package hxcv.ds;

class Vector3<T> extends Vector2<T>, implements haxe.rtti.Generic
{

	public function new(?x:T, ?y:T, ?z:T):Void 
	{
		super(x, y);
		_z = z;
	}
	
	public var z(getZ, setZ):T;
	
	private var _z:T;
	private function getZ():T {
		return _z;
	}
	private function setZ(val:T):T {
		return _z = val;
	}
}