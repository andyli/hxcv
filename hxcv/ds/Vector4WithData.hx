package hxcv.ds;

class Vector4WithData < T, D > extends Vector4<T>, implements WithData<D> {
	public function new(?val0:T, ?val1:T, ?val2:T, ?val3:T, ?data:D):Void {
		_data = data;
		super(val0, val1, val2, val3);
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