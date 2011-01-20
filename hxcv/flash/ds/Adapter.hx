package hxcv.flash.ds;

import flash.display.DisplayObject;
import flash.geom.Point;
import flash.utils.ByteArray;
import flash.Vector;
import hxcv.ds.ArrayAccessPxPtr;

class Vector2Adapter 
{
	inline static public function getPositionVector2(dObj:DisplayObject) {
		return new PositionVector2(dObj);
	}
	
	inline static public function getVector2(dObj:Point) {
		return new PointVector2(dObj);
	}
}

class VectorAdapter
{
	inline static public function getPxPtr<T>
	(
		vector:Vector<T>,
		width:Int, 
		height:Int, 
		numOfChannels:Int
	)
	{
		return 
			new VectorPxPtr<T>()
				.init(
					vector,
					width, 
					height, 
					numOfChannels
				);
	}
}

class ByteArrayAdapter
{
	inline static public function getPxPtr<T>
	(
		byteArray:ByteArray,
		width:Int, 
		height:Int, 
		numOfChannels:Int
	)
	{
		return 
			new ByteArrayPxPtr()
				.init(
					byteArray,
					width, 
					height, 
					numOfChannels
				);
	}
	
	inline static public function getPxPtrARGB<T>
	(
		byteArray:ByteArray,
		width:Int, 
		height:Int
	)
	{
		return 
			new ByteArrayPxPtrARGB()
				.init(
					byteArray,
					width, 
					height
				);
	}
}

typedef ArrayAdapter = hxcv.ds.Adapters.ArrayAdapter;