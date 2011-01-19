package hxcv.ds;

class ArrayAdapter
{
	inline static public function getPxItr<T>
	(
		array:Array<T>,
		width:Int, 
		height:Int, 
		numOfChannels:Int
	) {
		return 
			new ArrayPxItr<T>()
				.init(
					array,
					width, 
					height, 
					numOfChannels
				);
	}
	
	inline static public function getPxItrGray<T>
	(
		array:Array<T>,
		width:Int, 
		height:Int
	) {
		return 
			new ArrayPxItrGray<T>()
				.init(
					array,
					width, 
					height
				);
	}
	
	inline static public function getPxItrARGB<T>
	(
		array:Array<T>,
		width:Int, 
		height:Int
	) {
		return 
			new ArrayPxItrARGB<T>()
				.init(
					array,
					width, 
					height
				);
	}
}