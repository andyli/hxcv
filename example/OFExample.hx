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
import hxcv.ds.ArrayPixelIteratorGray;
using hxcv.math.Vector2Math;
using hxcv.ds.Adapters;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	var me:MotionEstimation<ArrayPixelIteratorGray<Int>>;
	var originalFrames:Array<Image>;
	var smoothedFrames:Array<Image>;
	var originalFramesGray:Array<ArrayPixelIteratorGray<Int>>;
	
	var currentIndex:Int;
	var showMV:Bool;
	
	override function setup():Void {
		enableSmoothing();
		setFrameRate(12);
		
		me = new MotionEstimation<ArrayPixelIteratorGray<Int>>();
		
		originalFrames = [];
		smoothedFrames = [];
		originalFramesGray = [];
		
		Gc.enable(false);
		for (imgNum in 1050587...1050600) {
			var img = new Image();
			img.loadImage("D:/stopmotion/04/original-320-240/P" + imgNum + ".jpg");
			originalFrames.push(img);
			
			var imgGray = new Image();
			imgGray.loadImage("D:/stopmotion/04/original-320-240/P" + imgNum + ".jpg");
			//imgGray.setImageType(Constants.OF_IMAGE_GRAYSCALE);
			//originalFramesGray.push(cast imgGray.getPixels().getPixelIteratorGray(imgGray.width, imgGray.height));
		}
		Gc.enable(true);
		
		currentIndex = 0;
	}
	
	override function draw():Void {/*
		setColor(0xFFFFFF);
		originalFrames[currentIndex].draw(0, 0);

		if (showMV){
			setColor(0xFF0000);
			var mv = me.process([originalFramesGray[currentIndex], originalFramesGray[currentIndex + 1]])[0];
			for (i in 0...mv.imageWidth) {
				for (j in 0...mv.imageHeight) {
					var x = me.N * 0.5 + i * me.N;
					var y = me.N * 0.5 + j * me.N;
					mv.unsafeMoveTo(i, j);
					var v = mv.get0();
					line(x, y, x + v.val0, y + v.val1);
				}
			}
		}*/
	}
	
	override function keyPressed(key:Int):Void {
		switch(key) {
			case 'm'.charCodeAt(0):
				showMV = !showMV;
		}
	}
	
	static function main():Void {
		AppRunner.setupOpenGL(new AppGlutWindow(), 800, 600, Constants.OF_WINDOW);
		AppRunner.runApp(new OFExample());
	}
}