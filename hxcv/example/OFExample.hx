package hxcv.example;

import cpp.io.File;
import cpp.Lib;
import haxe.Timer;
using Lambda;
using org.casalib.util.NumberUtil;

import hxcv.BlockMatching;
import hxcv.MotionEstimation;
//import hxcv.ProximityManager;
import hxcv.ds.ArrayPxPtrGray;
import hxcv.ds.ArrayPxPtrARGB;
import hxcv.ds.ArrayPxPtr;
using hxcv.math.Vector2Math;
using hxcv.ds.Adapters;
import hxcv.ds.Vector2WithData;

import of.Context;
using of.Context.Functions;

class OFExample extends BaseApp {
	
	override function setup():Void {
		enableSmoothing();
		setFrameRate(12);

		trace(hxcv.utils.MacroUtil.dumpExpr({}));
	}
	
	override function draw():Void {
	/*
		var mvStr = File.getContent("D:/stopmotion/04/original-320-240/P1050600.txt");
		var mvIamge = new Image();
		mvIamge.allocate(320, 240, Constants.OF_IMAGE_COLOR);
		var mvIamgePP = mvIamge.getPixels().getPxPtrRGB(320, 240);
		var lines = mvStr.split('\n');
		for (i in 0...240) {
			var cellsX = lines[i].split('\t');
			var cellsY = lines[i+240].split('\t');
			for (j in 0...320) {
				mvIamgePP.set0(cast Std.parseFloat(cellsX[j]).map( -13, 20, 0, 255));
				mvIamgePP.set1(cast Std.parseFloat(cellsY[j]).map( -13, 20, 0, 255));
				mvIamgePP.set2(cast 0);
				mvIamgePP.unsafeNext();
			}
		}
		mvIamge.update();
		
		mvIamge.draw(0, 0);*/
	}
	
	override function keyPressed(key:Int):Void {
	}
	
	static function main():Void {
		AppRunner.setupOpenGL(new AppGlutWindow(), 800, 600, Constants.OF_WINDOW);
		AppRunner.runApp(new OFExample());
	}
}
