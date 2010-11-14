package hxcv.ds.flash;

import flash.display.DisplayObject;
import hxcv.ds.Vector2;

class DisplayObjectAdapter 
{
	static public function getPositionVector2(dObj:DisplayObject):PositionVector2 {
		return new PositionVector2(dObj);
	}
}

class PositionVector2 extends hxcv.ds.Vector2<Float> {
	public var displayObject:DisplayObject;
	
	public function new(dObj:DisplayObject):Void {
		displayObject = dObj;
		super(displayObject.x, displayObject.y);
	}
	
	override private function getVal0():Float {
		return displayObject.x;
	}
	override private function setVal0(val:Float):Float {
		return displayObject.x = val;
	}
	
	override private function getVal1():Float {
		return displayObject.y;
	}
	override private function setVal1(val:Float):Float {
		return displayObject.y = val;
	}
}