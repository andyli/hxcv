package hxcv.ds;

class Vector4WithData < T, D > extends Vector4<T>, implements WithData<D>, implements haxe.rtti.Generic {
	public function new(?x:T, ?y:T, ?z:T, ?w:T, ?data:D):Void {
		_data = data;
		super(x, y, z, w);
	}
	
	public var data(getData, setData):D;
	
	private var _data:D;
	private function getData():D {
		return _data;
	}
	private function setData(val:D):D {
		return _data = val;
	}
}