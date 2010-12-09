package hxcv.ds;

import hxcv.ds.Vector;
import hxcv.ds.IImage;

interface IPixelPointer<T, ImgT:IImage<T>>
{
	public var image(default, null):ImgT;
	public var x(default, null):Int;
	public var y(default, null):Int;
	public function moveTo(x:Int, y:Int):Bool;
	public function moveX(step:Int):Bool;
	public function moveY(step:Int):Bool;
	public function get(channel:Int):T;
	public function set(channel:Int, val:T):Void;
	
	public function hasNext():Bool;
	public function next():IPixelPointer< T, ImgT >;
}
/*
interface IPixelPointer3<T, ImgT:IImage3<T>> implements IPixelPointer<T, ImgT>, implements Vector3Data<T, ImgT>
{
	
}

interface IPixelPointer4<T, ImgT:IImage4<T>> implements IPixelPointer<T, ImgT>, implements Vector4Data<T, ImgT>
{
	
}*/