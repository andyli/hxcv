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
	 * Check if x,y is inside the image bound.
	 */
	public function checkCoordinates():Bool;
	
	/*
	 * Set coordinates.
	 */
	public function unsafeMoveTo(_x:Int, _y:Int):Void;
	public function moveTo(x:Int, y:Int):Bool;
	
	/*
	 * Move to the 1st pixel.
	 */
	public function head():This;
	
	/*
	 * Move to the right pixel.
	 */
	public function unsafeMoveRight():Void;
	public function moveRight():Bool;
	
	/*
	 * Move to the left pixel.
	 */
	public function unsafeMoveLeft():Void;
	public function moveLeft():Bool;
	
	/*
	 * Move to the pixel below.
	 */
	public function unsafeMoveDown():Void;
	public function moveDown():Bool;
	
	/*
	 * Move to the pixel on top.
	 */
	public function unsafeMoveUp():Void;
	public function moveUp():Bool;
	
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
	
	/*
	 * Iterate to the next pixel and return true. When next pixel is beyond the end of ROI, it reset the coordinates as head and return false;
	 */
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
	 * Set the image's destChannel by copying from src's srcChannel.
	 * The coordinates of this and src will be reset.
	 */
	public function copyChannel(src:IPixelIterator< T, ImgT, Dynamic>, srcChannel:Int, destChannel:Int):This;
	
	/*
	 * Set the image by copying from src.
	 * The coordinates of this and src will be reset.
	 */
	public function copyPixels(src:IPixelIterator< T, ImgT, Dynamic>):This;
	
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