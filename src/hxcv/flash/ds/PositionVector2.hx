package hxcv.flash.ds;

import flash.display.DisplayObject;
import hxcv.ds.Vector2WithData;

class PositionVector2<D:DisplayObject> extends Vector2WithData<Float,D> ,implements haxe.rtti.Generic {	
	public function new(dObj:D):Void {
		super(dObj.x, dObj.y, dObj);
	}
	
	override private function getX():Float {
		return _data.x;
	}
	override private function setX(val:Float):Float {
		return _data.x = val;
	}
	
	override private function getY():Float {
		return _data.y;
	}
	override private function setY(val:Float):Float {
		return _data.y = val;
	}
}