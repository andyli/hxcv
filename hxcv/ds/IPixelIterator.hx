package hxcv.ds;

//import hxcv.ds.Vector;
//import hxcv.ds.IImage;

interface IPixelIterator<T, ImgT, This:IPixelIterator<T, ImgT, Dynamic>>
{
	public var image(default, null):ImgT;
	public var imageWidth(default, null):Int;
	public var imageHeight(default, null):Int;
	public var imageNumOfChannels(default, null):Int;
	
	/*
	 * Current coordinates.
	 */
	public var x(default, null):Int;
	public var y(default, null):Int;
	
	/*
	 * ROI defined by minX, minY, maxX, maxY.
	 */
	public var minX:Int;
	public var minY:Int;
	public var maxX:Int;
	public var maxY:Int;
	
	/*
	 * Check if x,y is inside ROI.
	 */
	public function checkCoordinates():Bool;
	
	/*
	 * Set coordinates.
	 */
	public function unsafeMoveTo(_x:Int, _y:Int):Void;
	public function moveTo(x:Int, y:Int):Bool;
	
	/*
	 * Move the pointer along x-axis.
	 */
	public function unsafeMoveX(step:Int):Void;
	public function moveX(step:Int):Bool;
	
	/*
	 * Move the pointer along y-axis.
	 */
	public function unsafeMoveY(step:Int):Void;
	public function moveY(step:Int):Bool;
	
	/*
	 * Iterate to the next pixel.
	 */
	public function unsafeNext():Void;
	public function next():Bool;
	
	/*
	 * Get the value of the pixel pointing to.
	 */
	public function get(channel:Int):T;
	
	/*
	 * Set the value of the pixel pointing to.
	 */
	public function set(channel:Int, val:T):Void;
	
	/*
	 * Return a copy of this PixelIterator. It wouldn't copy the image data.
	 */
	public function clone():This;
	
	/*
	 * Filling the ROI with the input values start from the current coordinates.
	 * The coordinates will be reset.
	 */
	public function fill(values:Array<T>):This;
}

/*
interface IPixelIterator3<T, ImgT:IImage3<T>> implements IPixelIterator<T, ImgT>, implements Vector3Data<T, ImgT>
{
	
}

interface IPixelIterator4<T, ImgT:IImage4<T>> implements IPixelIterator<T, ImgT>, implements Vector4Data<T, ImgT>
{
	
}*/