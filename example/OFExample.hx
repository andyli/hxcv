package ;

import cpp.Lib;
import haxe.Timer;
using Lambda;
using org.casalib.util.NumberUtil;

import hxcv.BlockMatching;
import hxcv.MotionEstimation;
//import hxcv.ProximityManager;
import hxcv.ds.Vector;
import hxcv.ds.ArrayPixelIteratorGray;
import hxcv.ds.ArrayPixelIteratorARGB;
using hxcv.math.Vector2Math;
using hxcv.ds.Adapters;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	var me:MotionEstimation<ArrayPixelIteratorGray<Int>>;
	var originalFrames:Array<Image>;
	var smoothedFrames:Array<Image>;
	var originalFramesGray:Array<ArrayPixelIteratorGray<Int>>;
	var mvImage:Image;
	
	var currentIndex:Int;
	var showMV:Bool;
	
	override function setup():Void {		
		enableSmoothing();
		setFrameRate(12);
		
		me = new MotionEstimation<ArrayPixelIteratorGray<Int>>().init(25);
		me.blockMatching.init(35,1,20,0.015);
		
		originalFrames = [];
		smoothedFrames = [];
		originalFramesGray = [];
		
		for (imgNum in 1050616...1050620) {
			var img = new Image();
			img.loadImage("D:/stopmotion/04/original-320-240/P" + imgNum + ".jpg");
			originalFrames.push(img);
			
			var imgGray = new Image();
			imgGray.clone(img);
			imgGray.setImageType(Constants.OF_IMAGE_GRAYSCALE);
			originalFramesGray.push(cast imgGray.getPixels().getPixelIteratorGray(imgGray.width, imgGray.height));
		}
		
		currentIndex = 0;
		showMV = false;
		mvImage = new Image();
		var resultSize = me.getResultImageSize(originalFramesGray);
		mvImage.allocate(resultSize.val0, resultSize.val1, Constants.OF_IMAGE_COLOR_ALPHA);
	}
	
	override function draw():Void {
		setHexColor(0xFFFFFF);
		var currentFrame = originalFrames[currentIndex];
		currentFrame.draw(0, 0, 320, 240);

		if (showMV && currentIndex != originalFrames.length-1) {
			
			setHexColor(0xFF0000);
			var t = Timer.stamp();
			var mv = me.process([originalFramesGray[currentIndex], originalFramesGray[currentIndex + 1]])[0];
			trace(Timer.stamp() - t);
			
			
			var mvImagePI = mvImage.getPixels().getPixelIteratorARGB(mv.imageWidth, mv.imageHeight);
			mv.head();
			do {
				var x = me.N * 0.5 + mv.x * me.N;
				var y = me.N * 0.5 + mv.y * me.N;
				
				var v = mv.get0();
				line(x, y, x + v.val0, y + v.val1);
				
				mvImagePI.set0(cast v.val2 * 10000);
				mvImagePI.set1(cast v.val0.map( -me.blockMatching.S, me.blockMatching.S, 0, 255));
				mvImagePI.set2(cast v.val1.map( -me.blockMatching.S, me.blockMatching.S, 0, 255));
				mvImagePI.set3(cast 0xFF);
				mvImagePI.unsafeNext();
			} while (mv.next());
			mvImage.update();
			
			setHexColor(0xFFFFFF);
			mvImage.draw(320, 0, 320, 240);
			mvImage.saveImage("original-1024-768 "+currentIndex + ".png");
		}
		
		currentIndex = (++currentIndex).loopIndex(originalFrames.length);
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