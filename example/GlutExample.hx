package ;

import cpp.Lib;

class GlutExample 
{

	static function main() 
	{
		_main();
		trace(123);
	}
	
	static var _main = Lib.load("glut", "_main", 0);
	
}