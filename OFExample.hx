package ;

import cpp.Lib;
import cpp.vm.Gc;
import haxe.Timer;
using Lambda;
using org.casalib.util.NumberUtil;

import hxcv.MotionEstimation;
import hxcv.ds.IImage;
import hxcv.ds.Array2DImage;
import hxcv.ds.of.OFImageGray;
using hxcv.ds.of.OFAdapter;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	
	var currentIndex:Int;
	var originalFrames:Array<Image>;
	var originalFramesGray:Array<OFImageGray>;
	var me:MotionEstimation<OFImageGray>;
	var showMV:Bool;
	var showImg:Bool;
	
	override function setup():Void {
		enableSmoothing();
		setFrameRate(12);
		
		currentIndex = 0;
		originalFrames = [];
		originalFramesGray = [];
		showMV = false;
		showImg = true;
		
		Gc.enable(false);
		for (imgNum in 1050587...1050700) {
			var img = new Image();
			img.loadImage("D:/stopmotion/04/original-320-240/P" + imgNum + ".jpg");
			originalFrames.push(img);
			
			var imgGray = new Image();
			imgGray.clone(img);
			imgGray.setImageType(Constants.OF_IMAGE_GRAYSCALE);
			originalFramesGray.push(imgGray.getImageGray());
		}
		Gc.enable(true);
		
		me = new MotionEstimation<OFImageGray>();
	}
	
	override function draw():Void {
		if (showImg){
			setColor(0xFFFFFF);
			originalFrames[currentIndex].draw(0, 0);
		}
		
		if (showMV){
			setColor(0xFF0000);
			var mv = me.process([originalFramesGray[currentIndex],originalFramesGray[currentIndex+1]])[0];
			for (i in 0...mv.width) {
				for (j in 0...mv.height) {
					var x = me.N*0.5 + i * me.N;
					var y = me.N * 0.5 + j * me.N;
					var v = mv.get(i, j, 0);
					line(x, y, x + v.val0, y + v.val1);
				}
			}
		}
		
		currentIndex = (currentIndex + 1).loopIndex(originalFrames.length - 1);
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