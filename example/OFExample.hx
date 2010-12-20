package ;

import cpp.Lib;
import cpp.vm.Gc;
import haxe.FastList;
import haxe.Timer;
import hxcv.ds.of.OFImageRGB;
using Lambda;
using org.casalib.util.NumberUtil;

import hxcv.MotionEstimation;
//import hxcv.ProximityManager;
import hxcv.ds.Vector;
import hxcv.ds.IImage;
import hxcv.ds.Array2DImage;
using hxcv.math.Vector2Math;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	
	var currentIndex:Int;
	var originalFrames:Array<Image>;
	var smoothedFrames:Array<Image>;
	var originalFramesGray:Array<OFImageGray>;
	var me:MotionEstimation<OFImageGray>;
	var smoothCvImage:OFImageRGB;
	var showMV:Bool;
	var showImg:Bool;
	var showSmooth:Bool;
	var play:Bool;
	//var pm:ProximityManager < Vector2Data < Float, Vector3<Int> >> ;
	
	override function setup():Void {
		enableSmoothing();
		setFrameRate(12);
		
		currentIndex = -1;
		originalFrames = [];
		smoothedFrames = [];
		originalFramesGray = [];
		showMV = false;
		showImg = true;
		showSmooth = false;
		play = true;
		
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
		/*
		for (imgNum in 1...111) {
			var img = new Image();
			img.loadImage("D:/stopmotion/04/original-320-240-p2/" + imgNum + ".png");
			smoothedFrames.push(img);
		}*/
		Gc.enable(true);
		
		me = new MotionEstimation<OFImageGray>();
		//pm = new ProximityManager < Vector2Data < Float, Vector3<Int> >> (5, new hxcv.ds.Rectangle( -5, -5, 330, 250));
		
		var smoothImage = new Image();
		smoothImage.clone(originalFrames[0]);
		smoothCvImage = smoothImage.getImageRGB();
	}
	
	override function draw():Void {
		if (play)
			currentIndex = (currentIndex + 1).loopIndex(originalFrames.length - 3);
			
		if (showImg){
			setColor(0xFFFFFF);
			originalFrames[currentIndex].draw(0, 0);
			//smoothedFrames[currentIndex].draw(320, 0);
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
		/*
		if (showSmooth && currentIndex != 0) {
			var originalFrame = originalFrames[currentIndex];
			var originalFrameCv = originalFrame.getImageRGB();
			var originalFrameGray = originalFramesGray[currentIndex];
			var originalFrameGrayPrev = originalFramesGray[currentIndex - 1];
			var originalFrameGrayNext = originalFramesGray[currentIndex + 1];
			
			smoothCvImage.lock();
			for (i in 0...originalFrame.width) {
				for (j in 0...originalFrame.height) {
					var prevMV = me.blockMatching.process(i, j, originalFrameGray, originalFrameGrayPrev);
					var nextMV = me.blockMatching.process(i, j, originalFrameGray, originalFrameGrayNext);
					var midMV = prevMV.interpolate(nextMV, 0.5);// .interpolate(new Vector2<Float>(0, 0), 0.5);
					var vals = originalFrameCv.get3(i, j);
					pm.add(new Vector2Data < Float, Vector3<Int> > (i + midMV.val0, j + midMV.val1, vals));
				}
				trace("1: " + i);
			}
			
			for (i in 0...originalFrame.width) {
				for (j in 0...originalFrame.height) {
					
					var closest = null;
					var closestDist = Math.POSITIVE_INFINITY;
					for (cell in pm.getNeighbors(i, j)) {
						for (pt in cell) {
							var dist = pt.distance(new Vector2<Float>(i, j));
							if (dist < closestDist) {
								closest = pt;
								closestDist = dist;
							}
						}
					}
					var vals = closest.data;
					smoothCvImage.set3(i, j, vals.val0, vals.val1, vals.val2);
					
				}
				trace("2: " + i);
			}
			smoothCvImage.unlock();
			smoothCvImage.ofImage.saveImage(currentIndex + ".png");
			
			if (currentIndex == originalFrames.length - 1) showSmooth = false;
		}
		*/
	}
	
	override function keyPressed(key:Int):Void {
		switch(key) {
			case 'm'.charCodeAt(0):
				showMV = !showMV;
			case 'i'.charCodeAt(0):
				showImg = !showImg;
			case 's'.charCodeAt(0):
				showSmooth = !showSmooth;
			case 'h'.charCodeAt(0):
				if (play) {
					play = false;
					setFrameRate(6);
				} else {
					play = true;
					setFrameRate(12);
				}
			case 'k'.charCodeAt(0):
				currentIndex = (currentIndex + 1).loopIndex(originalFrames.length - 1);
			case 'j'.charCodeAt(0):
				currentIndex = (currentIndex - 1).loopIndex(originalFrames.length - 1);
		}
	}
	
	static function main():Void {
		setupOpenGL(new of.app.AppGlutWindow(), 800, 600, Constants.OF_WINDOW);
		runApp(new OFExample());
	}
}