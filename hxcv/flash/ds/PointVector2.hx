package hxcv.flash.ds;

import flash.geom.Point;
import hxcv.ds.Vector2WithData;

class PointVector2<D:Point> extends Vector2WithData<Float,D> {	
	public function new(dObj:D):Void {
		super(dObj.x, dObj.y, dObj);
	}
	
	override private function getVal0():Float {
		return _data.x;
	}
	override private function setVal0(val:Float):Float {
		return _data.x = val;
	}
	
	override private function getVal1():Float {
		return _data.y;
	}
	override private function setVal1(val:Float):Float {
		return _data.y = val;
	}
}