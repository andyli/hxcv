package hxcv.ds;

class Vector3WithData < T, D > extends Vector3<T>, implements WithData<D>, implements haxe.rtti.Generic {
	public function new(?x:T, ?y:T, ?z:T, ?data:D):Void {
		_data = data;
		super(x, y, z);
	}
}
