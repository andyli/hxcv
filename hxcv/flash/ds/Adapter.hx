package hxcv.flash.ds;

import flash.display.DisplayObject;
import flash.geom.Point;
import flash.utils.ByteArray;
import flash.Vector;
import hxcv.ds.ArrayAccessPxItr;

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
	inline static public function getPxItr<T>
	(
		vector:Vector<T>,
		width:Int, 
		height:Int, 
		numOfChannels:Int
	)
	{
		return 
			new VectorPxItr<T>()
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
	inline static public function getPxItr<T>
	(
		byteArray:ByteArray,
		width:Int, 
		height:Int, 
		numOfChannels:Int
	)
	{
		return 
			new ByteArrayPxItr()
				.init(
					byteArray,
					width, 
					height, 
					numOfChannels
				);
	}
	
	inline static public function getPxItrARGB<T>
	(
		byteArray:ByteArray,
		width:Int, 
		height:Int
	)
	{
		return 
			new ByteArrayPxItrARGB()
				.init(
					byteArray,
					width, 
					height
				);
	}
}

typedef ArrayAdapter = hxcv.ds.Adapters.ArrayAdapter;