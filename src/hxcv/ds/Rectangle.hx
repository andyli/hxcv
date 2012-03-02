package hxcv.ds;

using hxcv.math.Vector2Math;

class Rectangle 
{
	public function new(?_x:Float = 0, ?_y:Float = 0, ?_width:Float = 0, ?_height:Float = 0):Void {
		x = _x;
		y = _y;
		width = _width;
		height = _height;
	}
	
	public var x:Float;
	public var y:Float;
	public var width:Float;
	public var height:Float;
	
	public function iterator():Iterator<Vector2<Float>> {
		return new RectangleIterator(this);
	}
}

class RectangleIterator {
	var cur:Vector2<Float>;
	var startX:Float;
	var startY:Float;
	var endX:Float;
	var endY:Float;
	var step:Float;
	
	public function new(rect:Rectangle, ?_step:Float = 1):Void {
		startX = rect.x;
		startY = rect.y;
		endX = startX + rect.width;
		endY = startY + rect.height;
		step = _step;
		cur = new Vector2<Float>(startX, startY);
	}
	
	inline public function next():Vector2<Float> {
		var ret = cur.clone();
		if ((cur.x += step) > endX) {
			cur.x = startX;
			if ((cur.y += step) > endY) {
				cur = null;
			}
		}
		return ret;
	}
	
	inline public function hasNext():Bool {
		return cur != null;
	}
}

class IntRectangleIterator {
	var cur:Vector2<Int>;
	var startX:Int;
	var startY:Int;
	var endX:Int;
	var endY:Int;
	var step:Int;
	
	public function new(rect:Rectangle, ?_step:Int = 1):Void {
		startX = Math.floor(rect.x);
		startY = Math.floor(rect.y);
		endX = Math.floor(rect.x + rect.width);
		endY = Math.floor(rect.y + rect.height);
		step = _step;
		cur = new Vector2<Int>(startX, startY);
	}
	
	inline public function next():Vector2<Int> {
		var ret = cur.clone();
		if ((cur.x += step) > endX) {
			cur.x = startX;
			if ((cur.y += step) > endY) {
				cur = null;
			}
		}
		return ret;
	}
	
	inline public function hasNext():Bool {
		return cur != null;
	}
}