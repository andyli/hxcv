package hxcv.ds;

class ArrayAdapter
{
	inline static public function getPixelIterator<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int, 
		imageNumOfChannels:Int
	):ArrayPixelIterator<T> 
	{
		return 
			new ArrayPixelIterator<T>()
				.init(
					array,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels
				);
	}
}