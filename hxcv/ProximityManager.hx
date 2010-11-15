/**
 * ProximityManager by Grant Skinner. Nov 17, 2009
 * Visit www.gskinner.com/blog for documentation, updates and more free code.
 *
 *
 * Copyright (c) 2009 Grant Skinner
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 **/

package hxcv;

import hxcv.ds.Rectangle;
import hxcv.ds.Vector;
import haxe.FastList;
using Lambda;

class ProximityManager<T:Vector2<Float>>
{	
	
	public var gridSize(default, null):Float;
	public var bounds(default, null):Rectangle;
	
	private var _items:FastList<T>;
	private var grid:Array<FastList<T>>;
	private var w:Int;
	private var h:Int;
	private var offX:Float;
	private var offY:Float;
	private var length:Int;
	private var m:Float;
		
	// Constructor:
		/** Constructs a new ProximityManager instance **/
		public function new(gridSize:Float,bounds:Rectangle) {
			this.gridSize = gridSize;
			this.bounds = bounds;
			init();
		}
		
	// Public getter / setters:
		/**
		 * The list of items currently being tracked in the system. You can use this to quickly pass in a list of
		 * existing items, or retrieve the current list. It is recommended to use the addItem and removeItem methods
		 * for minor modifications to the list.
		 **/
		public var items(getItems, setItems):FastList<T>;
		inline function getItems():FastList<T> {
			return _items;
		}
		inline function setItems(value:FastList<T>):FastList<T> {
			return _items = value;
		}
		
	// Public methods:
		/**
		 * Adds an item to track. It will be inserted the next time update() is called.
		 * <b>Note that removing and adding an item within the same update with addItemsImmediately can cause problems with duplicate returns.</b>
		 **/
		public function addItem(item:T):Void {
			_items.add(item);
			
			grid[getGridIndex(item.val0, item.val1)].add(item);
		}
		
		/**
		 * Removes an item from the system. It will not be returned in any subsequent getNeighbors() calls.
		 **/
		public function removeItem(item:T):Void {
			_items.remove(item);
			
			for (g in grid) {
				if (g.remove(item)) break;
			}
		}
		
		public function updateItem(item:T):Void {
			var g = grid[getGridIndex(item.val0, item.val1)];
			if (!g.has(item)) {
				removeItem(item);
				g.add(item);
			}
		}
		
		/**
		 * Updates the positions of all items on the grid. Call this when items have moved, but not after *each* item moves.
		 * For example, if you have a number of sprites moving around on screen each frame, move them all, then call update() once per frame.
		 **/
		public function update():Void {
			grid = [];
			for (i in 0...length) {
				grid.push(new FastList<T>());
			}
			
			// populate grid:
			for (item in _items){
				grid[getGridIndex(item.val0, item.val1)].add(item);
			}
		}
		
		/**
		 * Returns the list of neighbors for the specified item. Neighbours are items in grid positions within radius positions away from the item.
		 * For example, a radius of 0 returns only items in the same position. A radius of 1 returns 9 positions (the center, + the 8 positions 1 position away).
		 * A radius of 2 returns 25 positions. It is generally recommended to only use a radius of 1, but there are occasional use cases that may benefit from using
		 * a radius of 2.
		 * <br/><br/>
		 * It is important to note that this is a coarse set of neighbors. Their distance from the target item varies depending on their location within their grid position.
		 * This is allows you to exclude items that are too far away, then use more accurate comparisions (like pythagoram distance calculations or hit tests) on the
		 * smaller set of items.
		 * <br/><br/>
		 * You can specify a resultVector to avoid the need for ProximityManager to instantiate a new Vector each time you call getNeighbors. Results will be appended
		 * to the end of the vector. You may want to clear the vector with myArraylength = 0 before reusing it.
		 **/
		public function getNeighbors(x:Float, y:Float,radius:Int=1):Array<T> {
			
			var itemX:Int = Std.int((x + offX) * m);
			var itemY:Int = Std.int((y + offY) * m);
			
			var minX:Int = itemX - radius;
			if (minX < 0) { minX = 0; }
			
			var minY:Int = itemY - radius;
			if (minY < 0) { minY = 0; }
			
			var maxX:Int = itemX + radius;
			if (maxX > w) { maxX = w; }
			
			var maxY:Int = itemY + radius;
			if (maxY > h) { maxY = h; }
			
			var results = [];
			var adjX = minX * h;
			for (x in minX...maxX+1) {
				for (y in minY...maxY+1) {
					for (i in grid[adjX + y]) {
						results.push(i);
					}
				}
				adjX += h;
			}
			return results;
		}
		
		
	// Protected methods:
		
		private function init():Void {
			m = 1 / gridSize;
			w = Math.ceil(bounds.width * m) + 1;
			h = Math.ceil(bounds.height * m) + 1;
			length = w * h;
			offX = -bounds.x;
			offY = -bounds.y;
			
			grid = [];
			for (i in 0...length) {
				grid.push(new FastList<T>());
			}
			
			_items = new FastList<T>();
		}
		
		inline private function getGridIndex(x:Float, y:Float):Int {
			return Std.int(Std.int((x + offX) * m) * h + (y + offY) * m);
		}
}