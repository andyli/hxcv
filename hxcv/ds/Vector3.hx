package hxcv.ds;

class Vector3<T> extends Vector2<T> #if false , implements haxe.rtti.Generic #end
{

	public function new(?_val0:T, ?_val1:T, ?_val2:T):Void 
	{
		super(_val0, _val1);
		val2 = _val2;
	}
	
	public var val2:T;
}