package hxcv.ds;

class Vector3D extends Vector2D
{

	public function new(?_x:Float = 0, ?_y:Float = 0, ?_z:Float = 0):Void 
	{
		super(_x, _y);
		z = _z;
	}
	
	public var z:Float;
}