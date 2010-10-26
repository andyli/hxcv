package ;

import cpp.Lib;
import hxcv.MotionEstimation;
import hxcv.ds.I2DImage;
using hxcv.ds.of.OFAdapter;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	var frame1:Image;
	var frame2:Image;
	var motionVectors:I2DImage<Float>;
	
	override function setup():Void {
		frame1 = new Image();
		frame1.loadImage("P1050420-w800-h600.jpg");
		frame1.setImageType(Constants.OF_IMAGE_GRAYSCALE);
		
		frame2 = new Image();
		frame2.loadImage("P1050421-w800-h600.jpg");
		frame2.setImageType(Constants.OF_IMAGE_GRAYSCALE);
		
		motionVectors = 
			new MotionEstimation()
				.process([frame1.getGray2DImage(), frame2.getGray2DImage()])[0];
	}
	
	override function draw():Void {
		switch (Std.int(mouseX/getWidth()*3)) {
			case 0: frame1.draw(0, 0);
			case 1: frame2.draw(0, 0);
			default: 
		}
		
		setColor(0xFF0000);
		for (i in 0...motionVectors.width) {
			for (j in 0...motionVectors.height) {
				var x = 5 + i * 10;
				var y = 5 + j * 10;
				line(x, y, x + motionVectors.get(i, j, 0), y + motionVectors.get(i, j, 1));
			}
		}
		setColor(0xFFFFFF);
	}
	
	static function main():Void {
		setupOpenGL(new of.app.AppGlutWindow(), 800, 600, Constants.OF_WINDOW);
		runApp(new OFExample());
	}
}