package ;

import flash.display.Graphics;
import flash.display.Shape;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import hxcv.ds.Rectangle;
import hxcv.ProximityManager;
import hxcv.ds.flash.DisplayObjectAdapter;
using hxcv.math.Vector2Math;
using hxcv.ds.flash.DisplayObjectAdapter;
using Lambda;

class ProximityManagerExample extends Sprite
{	
	private var proximityManager:ProximityManager<PositionVector2>;
	private var itemCount:Int;
	private var bases:Array<Shape>;
	private var items:Array<Ship>;
	private var canvas:Shape;
	
	public function new() {
		super();
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(evt:Event = null):Void {
		itemCount = 0;
		
		// offsetting the bounds a little bit to put the bases near the center of a grid position:
		proximityManager = new ProximityManager(25,new Rectangle(-15,-15,570,570));
		
		// create "link" canvas:
		canvas = new Shape();
		addChild(canvas);
		
		// create our initial set of items:
		items = [];
		for (i in 0...5000) {
			var item:Ship = new Ship();
			resetItem(item);
			item.x = Math.random()*550;
			item.y = Math.random()*550;
			item.graphics.beginFill(0,1);
			item.graphics.drawRect(-1,-1,2,2);
			items.push(item);
			addChild(item);
			proximityManager.addItem(item.posVec2);
		}
		
		// create bases:
		bases = new Array<Shape>();
		addBase(100,100);
		addBase(450,450);
		addBase(100,450);
		addBase(450,100);
		
		addEventListener(Event.ENTER_FRAME, tick);
		
	}
	
	private function addBase(x:Float, y:Float):Void {
		var base = new Shape();
		base.x = x;
		base.y = y;
		base.graphics.beginFill(0xFFFFFF,1);
		base.graphics.lineStyle(2,0xFF0000,1);
		base.graphics.drawCircle(0,0,7);
		addChild(base);
		bases.push(base);
	}
	
	private function resetItem(item:Ship):Void {
		item.x = (Math.random()>0.5) ? 275 : 0;
		item.y = (Math.random()>0.5) ? 275 : 0;
		item.velX = (Math.random()*4+0.1)*(Math.random()>0.5?1:-1);
		item.velY = (Math.random()*4+0.1)*(Math.random()>0.5?1:-1);
		item.alpha = 1;
	}
	
	
	private function tick(evt:Event):Void {
		var g:Graphics = canvas.graphics;
		g.clear();
		g.lineStyle(1, 0xFF0000, 1);
		
		proximityManager.update();
		
		for (base in bases) {
			var resultVector = proximityManager.getNeighbors(base.x, base.y);
			for (v in resultVector) {
				var item:Ship = cast v.displayObject;
				item.alpha -= 0.1;
				if (item.alpha <= 0) {
					resetItem(item);
				} else {
					g.moveTo(base.x, base.y);
					g.lineTo(item.x, item.y);
					var d = v.distance(base.getPositionVector2());
					if (d > 70) trace(item.alpha);
				}
			}
		}
		
		for (item in items) {
			item.x = (item.x + item.velX + 550) % 550;
			item.y = (item.y + item.velY + 550) % 550;
		}
	}
	
	public static function main():Void {
		Lib.current.addChild(new ProximityManagerExample());
	}
}

class Ship extends Shape {
	public var velX:Float;
	public var velY:Float;
	public var posVec2:PositionVector2;
	
	public function new():Void {
		super();
		posVec2 = getPositionVector2();
	}
}