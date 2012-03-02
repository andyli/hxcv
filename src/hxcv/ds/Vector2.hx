package hxcv.ds;

class Vector2<T> implements haxe.rtti.Generic
{
	public function new(?x:Null<T>, ?y:Null<T>):Void 
	{
		_x = x;
		_y = y;
	}
	
	public var x(getX, setX):T;
	public var y(getY, setY):T;
	
	private var _x:T;
	private function getX():T {
		return _x;
	}
	private function setX(val:T):T {
		return _x = val;
	}
	
	private var _y:T;
	private function getY():T {
		return _y;
	}
	private function setY(val:T):T {
		return _y = val;
	}
}