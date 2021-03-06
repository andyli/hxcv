package hxcv.ds;

/**
 * A Pixel Pointer that can read/write from an image data of type ImgT.
 */
interface PxPtr<T, ImgT, This:PxPtr<T, ImgT, This>>
{
	public var image(default, null):ImgT;
	public var width(default, null):Int;
	public var height(default, null):Int;
	public var numOfChannels(default, null):Int;
	
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
	 * Move to the last pixel.
	 */
	public function tail():This;
	
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
	 * Iterate to the previous pixel.
	 */
	public function unsafePrev():Void;
	
	/*
	 * Iterate to the previous pixel and return true. When previous pixel is beyond the start of ROI, it reset the coordinates as tail and return false;
	 */
	public function prev():Bool;
	
	/*
	 * Get the value of the pixel pointing to.
	 */
	public function get(channel:Int):T;
	
	/*
	 * Set the value of the pixel pointing to.
	 */
	public function set(channel:Int, val:T):Void;
	
	/*
	 * Get the channel 0 value of the pixel pointing to.
	 */
	public function get0():T;
	
	/*
	 * Set the channel 0 value of the pixel pointing to.
	 */
	public function set0(val:T):Void;
	
	/*
	 * Return a copy of this PxPtr. It wouldn't copy the image data.
	 */
	public function clone():This;
	
	/*
	 * Set the image's destChannel by copying from src's srcChannel.
	 * The coordinates of this and src will be reset.
	 */
	public function copyChannel(src:PxPtr< T, Dynamic, Dynamic>, srcChannel:Int, destChannel:Int):This;
	
	/*
	 * Set the image by copying from src.
	 * The coordinates of this and src will be reset.
	 */
	public function copyPixels(src:PxPtr< T, Dynamic, Dynamic>):This;
	
	/*
	 * Filling the ROI with the input values start from the current coordinates.
	 * The coordinates will be reset.
	 */
	public function fill(values:Array<T>):This;
	
	public function iterator():PxPtrIterator<This>;
}