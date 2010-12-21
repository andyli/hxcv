package hxcv.ds;

class ArrayAdapter
{
	inline static public function getPixelIterator<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int, 
		imageNumOfChannels:Int
	) {
		return 
			new ArrayPixelIterator<T>()
				.init(
					array,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels
				);
	}
	
	inline static public function getPixelIteratorGray<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int
	) {
		return 
			new ArrayPixelIteratorGray<T>()
				.init(
					array,
					imageWidth, 
					imageHeight
				);
	}
}