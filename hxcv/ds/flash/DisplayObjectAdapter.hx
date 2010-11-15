package hxcv.ds.flash;

import flash.display.DisplayObject;

class DisplayObjectAdapter 
{
	static public function getPositionVector2(dObj:DisplayObject) {
		return new PositionVector2(dObj);
	}
}