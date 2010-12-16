package hxcv.ds;

class ArrayAdapter
{
	inline static public function getPixelIterator<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int, 
		imageNumOfChannels:Int,
		?minX:Int = 0, ?minY:Int = 0, ?maxX:Null<Int>, ?maxY:Null<Int>
	):ArrayAccessPixelIterator < T, Array<T> > 
	{
		return 
			new ArrayAccessPixelIterator<T, Array<T>>()
				.init(
					array,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels,
					minX, minY, maxX, maxY
				);
	}
}