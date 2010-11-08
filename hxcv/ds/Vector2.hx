package hxcv.ds;

class Vector2<T> implements haxe.rtti.Generic
{
	public function new(?_val0:T, ?_val1:T):Void 
	{
		val0 = _val0;
		val1 = _val1;
	}
	
	public var val0:T;
	public var val1:T;
}