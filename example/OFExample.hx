package ;

import cpp.Lib;
import cpp.vm.Gc;
import haxe.Timer;
using Lambda;
using org.casalib.util.NumberUtil;

import hxcv.BlockMatching;
import hxcv.MotionEstimation;
//import hxcv.ProximityManager;
import hxcv.ds.Vector;
using hxcv.math.Vector2Math;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	
	var originalFrames:Array<Image>;
	var smoothedFrames:Array<Image>;
	
	override function setup():Void {
		enableSmoothing();
		setFrameRate(12);
		
		originalFrames = [];
		smoothedFrames = [];
		
		Gc.enable(false);
		for (imgNum in 1050587...1050700) {
			var img = new Image();
			img.loadImage("D:/stopmotion/04/original-320-240/P" + imgNum + ".jpg");
			originalFrames.push(img);
		}
		Gc.enable(true);
	}
	
	override function draw():Void {
		
	}
	
	override function keyPressed(key:Int):Void {
		
	}
	
	static function main():Void {
		AppRunner.setupOpenGL(new AppGlutWindow(), 800, 600, Constants.OF_WINDOW);
		AppRunner.runApp(new OFExample());
	}
}