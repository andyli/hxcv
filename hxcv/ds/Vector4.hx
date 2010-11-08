package hxcv.ds;

class Vector4<T> extends Vector3<T> #if false , implements haxe.rtti.Generic #end
{

	public function new(?_val0:T, ?_val1:T, ?_val2:T, ?_val3:T):Void 
	{
		super(_val0, _val1, _val2);
		val3 = _val3;
	}
	
	public var val3:T;
}