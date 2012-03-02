package hxcv.ds;

class ArrayAdapter
{
	inline static public function getPxPtr<T>
	(
		array:Array<T>,
		width:Int, 
		height:Int, 
		numOfChannels:Int
	) {
		return 
			new ArrayPxPtr<T>()
				.init(
					array,
					width, 
					height, 
					numOfChannels
				);
	}
	
	inline static public function getPxPtrGray<T>
	(
		array:Array<T>,
		width:Int, 
		height:Int
	) {
		return 
			new ArrayPxPtrGray<T>()
				.init(
					array,
					width, 
					height
				);
	}
	
	inline static public function getPxPtrRGB<T>
	(
		array:Array<T>,
		width:Int, 
		height:Int
	) {
		return 
			new ArrayPxPtrRGB<T>()
				.init(
					array,
					width, 
					height
				);
	}
	
	inline static public function getPxPtrARGB<T>
	(
		array:Array<T>,
		width:Int, 
		height:Int
	) {
		return 
			new ArrayPxPtrARGB<T>()
				.init(
					array,
					width, 
					height
				);
	}
}