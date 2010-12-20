package hxcv.ds;

class ArrayAdapter
{
	inline static public function getPixelIterator<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int, 
		imageNumOfChannels:Int
	):ArrayAccessPixelIterator < T, Array<T> > 
	{
		return 
			new ArrayAccessPixelIterator<T, Array<T>>()
				.init(
					array,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels
				);
	}
}