package hxcv.ds;

class Vector2<T> #if false implements haxe.rtti.Generic #end
{
	public function new(?val0:T, ?val1:T):Void 
	{
		_val0 = val0;
		_val1 = val1;
	}
	
	public var val0(getVal0, setVal0):T;
	public var val1(getVal1, setVal1):T;
	
	private var _val0:T;
	private function getVal0():T {
		return _val0;
	}
	private function setVal0(val:T):T {
		return _val0 = val;
	}
	
	private var _val1:T;
	private function getVal1():T {
		return _val1;
	}
	private function setVal1(val:T):T {
		return _val1 = val;
	}
}

class Vector3<T> extends Vector2<T> #if false , implements haxe.rtti.Generic #end
{

	public function new(?val0:T, ?val1:T, ?val2:T):Void 
	{
		super(val0, val1);
		_val2 = val2;
	}
	
	public var val2(getVal2, setVal2):T;
	
	private var _val2:T;
	private function getVal2():T {
		return _val2;
	}
	private function setVal2(val:T):T {
		return _val2 = val;
	}
}

class Vector4<T> extends Vector3<T> #if false , implements haxe.rtti.Generic #end
{

	public function new(?_val0:T, ?_val1:T, ?_val2:T, ?_val3:T):Void 
	{
		super(val0, val1, val2);
		_val3 = val3;
	}
	
	public var val3(getVal3, setVal3):T;
	
	private var _val3:T;
	private function getVal3():T {
		return _val3;
	}
	private function setVal3(val:T):T {
		return _val3 = val;
	}
}

class Vector2Data < T, D > extends Vector2<T>, implements WithData<D> {
	public function new(?val0:T, ?val1:T, ?data:D):Void {
		_data = data;
		super(val0, val1);
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

class Vector3Data < T, D > extends Vector3<T>, implements WithData<D> {
	public function new(?val0:T, ?val1:T, ?val2:T, ?data:D):Void {
		_data = data;
		super(val0, val1, val2);
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

class Vector4Data < T, D > extends Vector4<T>, implements WithData<D> {
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