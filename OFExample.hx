package ;

import cpp.Lib;
import cpp.vm.Gc;
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
	
	var currentIndex:Int;
	var originalFrames:Array<Image>;
	var motionVectors:Array<Array2DImage<Float>>;
	var me:MotionEstimation<OFGray2DImage>;
	var showMV:Bool;
	var showImg:Bool;
	
	override function setup():Void {
		enableSmoothing();
		setFrameRate(12);
		
		currentIndex = 0;
		originalFrames = [];
		showMV = true;
		showImg = true;
		
		var hxcvArray = new Array<OFGray2DImage>();
		
		Gc.enable(false);
		for (imgNum in 1050587...1050700) {
			var img = new Image();
			img.loadImage("D:/stopmotion/04/original-320-240/P" + imgNum + ".jpg");
			img.setImageType(Constants.OF_IMAGE_GRAYSCALE);
			originalFrames.push(img);
			hxcvArray.push(img.getGray2DImage());
		}
		Gc.enable(true);
		
		me = new MotionEstimation<OFGray2DImage>();
		
		var t = Timer.stamp();
		motionVectors = me.process(hxcvArray);
		trace(Timer.stamp() - t);
	}
	
	override function draw():Void {
		if (showImg){
			setColor(0xFFFFFF);
			originalFrames[currentIndex].draw(0, 0);
		}
		
		if (showMV){
			setColor(0xFF0000);
			var mv = motionVectors[currentIndex];
			for (i in 0...mv.width) {
				for (j in 0...mv.height) {
					var x = me.N*0.5 + i * me.N;
					var y = me.N*0.5 + j * me.N;
					line(x, y, x + mv.get(i, j, 0), y + mv.get(i, j, 1));
				}
			}
		}
		
		currentIndex = (currentIndex+1).loopIndex(motionVectors.length);
	}
	
	override function keyPressed(key:Int):Void {
		switch(key) {
			case 'm'.charCodeAt(0):
				showMV = !showMV;
			case 'i'.charCodeAt(0):
				showImg = !showImg;
		}
	}
	
	static function main():Void {
		setupOpenGL(new of.app.AppGlutWindow(), 800, 600, Constants.OF_WINDOW);
		runApp(new OFExample());
	}
}