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