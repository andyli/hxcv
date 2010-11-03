package hxcv.math;

import hxcv.ds.Vector2D;

class Vector2DMath 
{
	inline static public function setFrom(v0:Vector2D, v1:Vector2D):Vector2D {
		v0.x = v1.x;
		v0.y = v1.y;
		return v0;
	}
	
	inline static public function setFromValues(v0:Vector2D, x:Float, y:Float):Vector2D {
		v0.x = x;
		v0.y = y;
		return v0;
	}
	
	inline static public function setFromPolar(v0:Vector2D, len:Float, angle:Float):Vector2D {
		return setFromValues(v0, len * Math.cos(angle), len * Math.sin(angle));
	}
	
	inline static public function add(v0:Vector2D, v1:Vector2D):Vector2D {
		return new Vector2D(v0.x + v1.x, v0.y + v1.y);
	}
	
	inline static public function addFrom(v0:Vector2D, v1:Vector2D):Vector2D {
		v0.x += v1.x;
		v0.y += v1.y;
		return v0;
	}
	
	inline static public function subtract(v0:Vector2D, v1:Vector2D):Vector2D {
		return new Vector2D(v0.x - v1.x, v0.y - v1.y);
	}
	
	inline static public function subtractFrom(v0:Vector2D, v1:Vector2D):Vector2D {
		v0.x -= v1.x;
		v0.y -= v1.y;
		return v0;
	}
	
	inline static public function scale(v0:Vector2D, value:Float):Vector2D {
		return new Vector2D(v0.x * value, v0.y * value);
	}
	
	inline static public function scaleBy(v0:Vector2D, value:Float):Vector2D {
		v0.x *= value;
		v0.y *= value;
		return v0;
	}
	
	inline static public function distance(v0:Vector2D, v1:Vector2D):Float {
		var dx = v0.x - v1.x;
		var dy = v0.y - v1.y;
		return Math.sqrt(dx * dy + dy * dy);
	}
	
	inline static public function interpolate(v0:Vector2D, v1:Vector2D, f:Float):Vector2D {
		return new Point(v1.x + f * (v0.x - v1.x), v1.y + f * (v0.y - v1.y));
	}
	
	inline static public function equals(v0:Vector2D, v1:Vector2D):Bool {
		return v0.x == v0.y && v0.y == v1.y;
	}
	
	inline static public function normalize(v0:Vector2D, ?thickness:Float = 1):Vector2D {
		if (v0.x == 0 && v0.y == 0) {
			v0.x = thickness;
		} else {
			var norm = thickness / Math.sqrt(v0.x * v0.x + v0.y * v0.y);
			v0.x *= norm;
			v0.y *= norm;
		}
		return v0;
	}
}