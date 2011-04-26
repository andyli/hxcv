package hxcv.ds;

class Vector2WithData < T, D > extends Vector2<T>, implements WithData<D>, implements haxe.rtti.Generic {
	public function new(?x:Null<T>, ?y:Null<T>, ?data:Null<D>):Void {
		_data = data;
		super(x, y);
	}
}
