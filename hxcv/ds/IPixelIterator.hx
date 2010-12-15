package hxcv.ds;

//import hxcv.ds.Vector;
import hxcv.ds.IImage;

interface IPixelIterator<T, ImgT:IImage<T,Dynamic>>
{
	public var image(default, null):ImgT;
	
	/*
	 * Current coordinates.
	 */
	public var x(default, null):Int;
	public var y(default, null):Int;
	
	/*
	 * ROI can be defined by minX, maxX, minY, maxY.
	 */
	public var minX:Int;
	public var maxX:Int;
	public var minY:Int;
	public var maxY:Int;
	
	/*
	 * Set coordinates.
	 */
	public function moveTo(x:Int, y:Int):Bool;
	
	/*
	 * Move the pointer along x-axis.
	 */
	public function moveX(step:Int):Bool;
	
	/*
	 * Move the pointer along y-axis.
	 */
	public function moveY(step:Int):Bool;
	
	/*
	 * Iterate to the next pixel.
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
}

/*
interface IPixelIterator3<T, ImgT:IImage3<T>> implements IPixelIterator<T, ImgT>, implements Vector3Data<T, ImgT>
{
	
}

interface IPixelIterator4<T, ImgT:IImage4<T>> implements IPixelIterator<T, ImgT>, implements Vector4Data<T, ImgT>
{
	
}*/