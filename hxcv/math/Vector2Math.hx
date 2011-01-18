package hxcv.math;

import hxcv.ds.Vector2;
using Math;

class Vector2MathFloat
{
	inline static public function setFrom(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		v0.val0 = v1.val0;
		v0.val1 = v1.val1;
		return v0;
	}
	
	inline static public function setFromValues(v0:Vector2<Float>, x:Float, y:Float):Vector2<Float> {
		v0.val0 = x;
		v0.val1 = y;
		return v0;
	}
	
	inline static public function setFromPolar(v0:Vector2<Float>, len:Float, angle:Float):Vector2<Float> {
		return setFromValues(v0, len * Math.cos(angle), len * Math.sin(angle));
	}
	
	inline static public function add(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.val0 + v1.val0, v0.val1 + v1.val1);
	}
	
	inline static public function addFrom(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		v0.val0 += v1.val0;
		v0.val1 += v1.val1;
		return v0;
	}
	
	inline static public function subtract(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.val0 - v1.val0, v0.val1 - v1.val1);
	}
	
	inline static public function subtractFrom(v0:Vector2<Float>, v1:Vector2<Float>):Vector2<Float> {
		v0.val0 -= v1.val0;
		v0.val1 -= v1.val1;
		return v0;
	}
	
	inline static public function scale(v0:Vector2<Float>, value:Float):Vector2<Float> {
		return new Vector2<Float>(v0.val0 * value, v0.val1 * value);
	}
	
	inline static public function scaleBy(v0:Vector2<Float>, value:Float):Vector2<Float> {
		v0.val0 *= value;
		v0.val1 *= value;
		return v0;
	}
	
	inline static public function distance(v0:Vector2<Float>, v1:Vector2<Float>):Float {
		var dx = v0.val0 - v1.val0;
		var dy = v0.val1 - v1.val1;
		return Math.sqrt(dx * dy + dy * dy);
	}
	
	inline static public function interpolate(v0:Vector2<Float>, v1:Vector2<Float>, f:Float):Vector2<Float> {
		return new Vector2<Float>(v1.val0 + f * (v0.val0 - v1.val0), v1.val1 + f * (v0.val1 - v1.val1));
	}
	
	inline static public function equals(v0:Vector2<Float>, v1:Vector2<Float>):Bool {
		return v0.val0 == v0.val1 && v0.val1 == v1.val1;
	}
	
	inline static public function normalize(v0:Vector2<Float>, ?thickness:Float = 1):Vector2<Float> {
		if (v0.val0 == 0 && v0.val1 == 0) {
			v0.val0 = thickness;
		} else {
			var norm = thickness / Math.sqrt(v0.val0 * v0.val0 + v0.val1 * v0.val1);
			v0.val0 *= norm;
			v0.val1 *= norm;
		}
		return v0;
	}
	
	inline static public function clone(v0:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.val0, v0.val1);
	}
}


class Vector2MathInt
{
	inline static public function setFrom(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Int> {
		v0.val0 = v1.val0.round();
		v0.val1 = v1.val1.round();
		return v0;
	}
	
	inline static public function setFromValues(v0:Vector2<Int>, x:Int, y:Int):Vector2<Int> {
		v0.val0 = x;
		v0.val1 = y;
		return v0;
	}
	
	inline static public function setFromPolar(v0:Vector2<Int>, len:Float, angle:Float):Vector2<Int> {
		return setFromValues(v0, (len * Math.cos(angle)).round(), (len * Math.sin(angle)).round());
	}
	
	inline static public function add(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.val0 + v1.val0, v0.val1 + v1.val1);
	}
	
	inline static public function addFrom(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Int> {
		v0.val0 += v1.val0.round();
		v0.val1 += v1.val1.round();
		return v0;
	}
	
	inline static public function subtract(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Float> {
		return new Vector2<Float>(v0.val0 - v1.val0, v0.val1 - v1.val1);
	}
	
	inline static public function subtractFrom(v0:Vector2<Int>, v1:Vector2<Float>):Vector2<Int> {
		v0.val0 = (v0.val0 - v1.val0).round();
		v0.val1 = (v0.val1 - v1.val1).round();
		return v0;
	}
	
	inline static public function scale(v0:Vector2<Int>, value:Float):Vector2<Float> {
		return new Vector2<Float>(v0.val0 * value, v0.val1 * value);
	}
	
	inline static public function scaleBy(v0:Vector2<Int>, value:Float):Vector2<Int> {
		v0.val0 = (v0.val0 * value).round();
		v0.val1 = (v0.val1 * value).round();
		return v0;
	}
	
	inline static public function distance(v0:Vector2<Int>, v1:Vector2<Float>):Float {
		var dx = v0.val0 - v1.val0;
		var dy = v0.val1 - v1.val1;
		return Math.sqrt(dx * dy + dy * dy);
	}
	
	inline static public function interpolate(v0:Vector2<Int>, v1:Vector2<Float>, f:Float):Vector2<Float> {
		return new Vector2<Float>(v1.val0 + f * (v0.val0 - v1.val0), v1.val1 + f * (v0.val1 - v1.val1));
	}
	
	inline static public function equals(v0:Vector2<Int>, v1:Vector2<Float>):Bool {
		return v0.val0 == v0.val1 && v0.val1 == v1.val1;
	}
	
	inline static public function normalize(v0:Vector2<Int>, ?thickness:Float = 1):Vector2<Float> {
		if (v0.val0 == 0 && v0.val1 == 0) {
			return new Vector2<Float>(thickness, v0.val1);
		} else {
			var norm = thickness / Math.sqrt(v0.val0 * v0.val0 + v0.val1 * v0.val1);
			return new Vector2<Float>(v0.val0 * norm, v0.val1 * norm);
		}
	}
	
	inline static public function clone(v0:Vector2<Int>):Vector2<Int> {
		return new Vector2<Int>(v0.val0, v0.val1);
	}
}