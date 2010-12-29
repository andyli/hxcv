package hxcv.ds;

class ArrayAdapter
{
	inline static public function getPxItr<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int, 
		imageNumOfChannels:Int
	) {
		return 
			new ArrayPxItr<T>()
				.init(
					array,
					imageWidth, 
					imageHeight, 
					imageNumOfChannels
				);
	}
	
	inline static public function getPxItrGray<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int
	) {
		return 
			new ArrayPxItrGray<T>()
				.init(
					array,
					imageWidth, 
					imageHeight
				);
	}
	
	inline static public function getPxItrARGB<T>
	(
		array:Array<T>,
		imageWidth:Int, 
		imageHeight:Int
	) {
		return 
			new ArrayPxItrARGB<T>()
				.init(
					array,
					imageWidth, 
					imageHeight
				);
	}
}