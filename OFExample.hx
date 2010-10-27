package ;

import cpp.Lib;
import haxe.Timer;
using Lambda;
using org.casalib.util.NumberUtil;

import hxcv.MotionEstimation;
import hxcv.ds.I2DImage;
import hxcv.ds.Array2DImage;
import hxcv.ds.of.OFGray2DImage;
using hxcv.ds.of.OFAdapter;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	var frame1:Image;
	var frame2:Image;
	var me:MotionEstimation<OFGray2DImage>;
	
	var currentIndex:Int;
	var originalFrames:Array<Image>;
	var motionVectors:Array<Array2DImage<Float>>;
	
	override function setup():Void {
		enableSmoothing();
		setFrameRate(12);
		
		currentIndex = 0;
		
		
		frame1 = new Image();
		frame1.loadImage("D:/stopmotion/02/original-320-240/P1050416.jpg");
		frame1.setImageType(Constants.OF_IMAGE_GRAYSCALE);
		
		frame2 = new Image();
		frame2.loadImage("D:/stopmotion/02/original-320-240/P1050417.jpg");
		frame2.setImageType(Constants.OF_IMAGE_GRAYSCALE);
		
		me = new MotionEstimation<OFGray2DImage>();
		
		var t = Timer.stamp();
		motionVectors = me.process([frame1.getGray2DImage(), frame2.getGray2DImage()]);
		trace(Timer.stamp() - t);
	}
	
	override function draw():Void {
		switch (Std.int(mouseX/getWidth()*3)) {
			case 0: frame1.draw(0, 0);
			case 1: frame2.draw(0, 0);
			default: 
		}
		
		setColor(0xFF0000);
		var mv = motionVectors[currentIndex];
		for (i in 0...mv.width) {
			for (j in 0...mv.height) {
				var x = me.N*0.5 + i * me.N;
				var y = me.N*0.5 + j * me.N;
				line(x, y, x + mv.get(i, j, 0), y + mv.get(i, j, 1));
			}
		}
		setColor(0xFFFFFF);
		
		currentIndex = currentIndex.loopIndex(motionVectors.length);
	}
	
	static function main():Void {
		setupOpenGL(new of.app.AppGlutWindow(), 800, 600, Constants.OF_WINDOW);
		runApp(new OFExample());
	}
}