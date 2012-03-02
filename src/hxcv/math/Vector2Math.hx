package hxcv.math;

import hxcv.ds.Vector2;
using Math;

class Vector2MathFloat
{
	inline static public function setFrom(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		v0.x = v1.x;
		v0.y = v1.y;
		return v0;
	}
	
	inline static public function setFromValues(v0:Vector2<Float>, x:Float, y:Float):Vector2<Float> {
		v0.x = x;
		v0.y = y;
		return v0;
	}
	
	inline static public function setFromPolar(v0:Vector2<Float>, len:Float, angle:Float):Vector2<Float> {
		return setFromValues(v0, len * Math.cos(angle), len * Math.sin(angle));
	}
	
	inline static public function add(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.x + v1.x, v0.y + v1.y);
	}
	
	inline static public function addFrom(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		v0.x += v1.x;
		v0.y += v1.y;
		return v0;
	}
	
	inline static public function subtract(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.x - v1.x, v0.y - v1.y);
	}
	
	inline static public function subtractFrom(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		v0.x -= v1.x;
		v0.y -= v1.y;
		return v0;
	}
	
	inline static public function scale(v0:Vector2<Float>, value:Float):Vector2<Float> {
		return new Vector2<Float>(v0.x * value, v0.y * value);
	}
	
	inline static public function scaleBy(v0:Vector2<Float>, value:Float):Vector2<Float> {
		v0.x *= value;
		v0.y *= value;
		return v0;
	}
	
	inline static public function distance(v0:Vector2<Float>, v1:Vector2<Float>):Float {
		var dx = v0.x - v1.x;
		var dy = v0.y - v1.y;
		return Math.sqrt(dx * dy + dy * dy);
	}
	
	inline static public function interpolate(v0:Vector2<Float>, v1:Vector2<Float>, f:Float):Vector2<Float> {
		return new Vector2<Float>(v1.x + f * (v0.x - v1.x), v1.y + f * (v0.y - v1.y));
	}
	
	inline static public function equals(v0:Vector2<Float>, v1:Vector2<Float>):Bool {
		return v0.x == v0.y && v0.y == v1.y;
	}
	
	inline static public function normalize(v0:Vector2<Float>, ?thickness:Float = 1):Vector2<Float> {
		if (v0.x == 0 && v0.y == 0) {
			v0.x = thickness;
		} else {
			var norm = thickness / Math.sqrt(v0.x * v0.x + v0.y * v0.y);
			v0.x *= norm;
			v0.y *= norm;
		}
		return v0;
	}
	
	inline static public function clone(v0:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.x, v0.y);
	}
}


class Vector2MathInt
{
	inline static public function setFrom(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Int> {
		v0.x = v1.x.round();
		v0.y = v1.y.round();
		return v0;
	}
	
	inline static public function setFromValues(v0:Vector2<Int>, x:Int, y:Int):Vector2<Int> {
		v0.x = x;
		v0.y = y;
		return v0;
	}
	
	inline static public function setFromPolar(v0:Vector2<Int>, len:Float, angle:Float):Vector2<Int> {
		return setFromValues(v0, (len * Math.cos(angle)).round(), (len * Math.sin(angle)).round());
	}
	
	inline static public function add(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.x + v1.x, v0.y + v1.y);
	}
	
	inline static public function addFrom(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Int> {
		v0.x += v1.x.round();
		v0.y += v1.y.round();
		return v0;
	}
	
	inline static public function subtract(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.x - v1.x, v0.y - v1.y);
	}
	
	inline static public function subtractFrom(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Int> {
		v0.x = (v0.x - v1.x).round();
		v0.y = (v0.y - v1.y).round();
		return v0;
	}
	
	inline static public function scale(v0:Vector2<Int>, value:Float):Vector2<Float> {
		return new Vector2<Float>(v0.x * value, v0.y * value);
	}
	
	inline static public function scaleBy(v0:Vector2<Int>, value:Float):Vector2<Int> {
		v0.x = (v0.x * value).round();
		v0.y = (v0.y * value).round();
		return v0;
	}
	
	inline static public function distance(v0:Vector2<Int>, v1:Vector2<Float>):Float {
		var dx = v0.x - v1.x;
		var dy = v0.y - v1.y;
		return Math.sqrt(dx * dy + dy * dy);
	}
	
	inline static public function interpolate(v0:Vector2<Int>, v1:Vector2<Float>, f:Float):Vector2<Float> {
		return new Vector2<Float>(v1.x + f * (v0.x - v1.x), v1.y + f * (v0.y - v1.y));
	}
	
	inline static public function equals(v0:Vector2<Int>, v1:Vector2<Float>):Bool {
		return v0.x == v0.y && v0.y == v1.y;
	}
	
	inline static public function normalize(v0:Vector2<Int>, ?thickness:Float = 1):Vector2<Float> {
		if (v0.x == 0 && v0.y == 0) {
			return new Vector2<Float>(thickness, v0.y);
		} else {
			var norm = thickness / Math.sqrt(v0.x * v0.x + v0.y * v0.y);
			return new Vector2<Float>(v0.x * norm, v0.y * norm);
		}
	}
	
	inline static public function clone(v0:Vector2<Int>):Vector2<Int> {
		return new Vector2<Int>(v0.x, v0.y);
	}
}