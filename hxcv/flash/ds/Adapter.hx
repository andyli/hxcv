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
		imageWidth:Int, 
		imageHeight:Int, 
		imageNumOfChannels:Int
	)
	{
		return 
			new VectorPxItr<T>()
				.init(
					vector,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels
				);
	}
}

class ByteArrayAdapter
{
	inline static public function getPxItr<T>
	(
		byteArray:ByteArray,
		imageWidth:Int, 
		imageHeight:Int, 
		imageNumOfChannels:Int
	)
	{
		return 
			new ByteArrayPxItr()
				.init(
					byteArray,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels
				);
	}
	
	inline static public function getPxItrARGB<T>
	(
		byteArray:ByteArray,
		imageWidth:Int, 
		imageHeight:Int
	)
	{
		return 
			new ByteArrayPxItrARGB()
				.init(
					byteArray,
					imageWidth, 
					imageHeight
				);
	}
}

typedef ArrayAdapter = hxcv.ds.Adapters.ArrayAdapter;