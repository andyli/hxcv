package hxcv;

class Rectangle 
{
	public function new(?_x:Float = 0, ?_y:Float = 0, ?_width:Float = 0, ?_height:Float = 0):Void {
		x = _x;
		y = _y;
		width = _width;
		height = _height;
	}
	
	public var x:Float;
	public var y:Float;
	public var width:Float;
	public var height:Float;
}