package hxcv.ds;

class Vector4<T> extends Vector3<T> #if false , implements haxe.rtti.Generic #end
{

	public function new(?_val0:T, ?_val1:T, ?_val2:T, ?_val3:T):Void 
	{
		super(_val0, _val1, _val2);
		val3 = _val3;
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