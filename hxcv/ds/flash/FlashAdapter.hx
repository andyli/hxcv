package hxcv.ds.flash;

import flash.display.DisplayObject;
import flash.geom.Point;

class VectorAdapter 
{
	inline static public function getPositionVector2(dObj:DisplayObject) {
		return new PositionVector2(dObj);
	}
	
	inline static public function getVector2(dObj:Point) {
		return new PointVector2(dObj);
	}
}