package hxcv.ds;

import hxcv.ds.Vector;
import hxcv.ds.IImage;

interface IPixelPointer<T, ImgT:IImage<T>>
{
	public var image(default, null):ImgT;
	public function moveTo(x:Int, y:Int):Void;
	public function moveX(step:Int):Void;
	public function moveY(step:Int):Void;
	public function get(channel:Int):T;
	public function set(channel:Int, val:T):Void;
}

interface IPixelPointer3<T, ImgT:IImage3<T>> implements IPixelPointer<T, ImgT>, extends Vector3Data<T, ImgT>
{
	
}

interface IPixelPointer4<T, ImgT:IImage4<T>> implements IPixelPointer<T, ImgT>, extends Vector4Data<T, ImgT>
{
	
}