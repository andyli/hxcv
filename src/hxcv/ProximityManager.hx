/**
 * Based on:
 * 
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
	/**
	 * The list of items currently being tracked in the system. You can use this to quickly pass in a list of
	 * existing items, or retrieve the current list. It is recommended to use add/remove/update methods
	 * for minor modifications to the list.
	 **/
	public var items(getItems, setItems):FastList<T>;
	
	/**
	 * The size of grid cells in pixels.
	 */
	public var gridSize(getGridSize, setGridSize):Float;
	
	/**
	 * The boundaries of the grid.
	 */
	public var bounds(getBounds, setBounds):Rectangle;
	
	
	private var _gridSize:Float;
	private function getGridSize():Float {
		return _gridSize;
	}
	private function setGridSize(g:Float):Float {
		_gridSize = g;
		init();
		return g;
	}
	
	private var _bounds:Rectangle;
	private function getBounds():Rectangle {
		return _bounds;
	}
	private function setBounds(b:Rectangle):Rectangle {
		_bounds = b;
		init();
		return b;
	}
	
	inline function getItems():FastList<T> {
		return _items;
	}
	inline function setItems(value:FastList<T>):FastList<T> {
		return _items = value;
	}
	
	private var _items:FastList<T>;
	private var grid:Array<FastList<T>>;
	private var w:Int;
	private var h:Int;
	private var offX:Float;
	private var offY:Float;
	private var length:Int;
	private var m:Float;
	
	public function new(gridSize:Float, bounds:Rectangle):Void {
		_gridSize = gridSize;
		_bounds = bounds;
		_items = new FastList<T>();
		init();
		updateAll();
	}
		
	/**
	 * Adds an item to track.
	 **/
	public function add(item:T):Void {
		_items.add(item);
		
		grid[getGridIndex(item.x, item.y)].add(item);
	}
	
	/**
	 * Removes an item from the system. It will not be returned in any subsequent getNeighbors() calls.
	 **/
	public function remove(item:T):Void {
		_items.remove(item);
		
		for (g in grid) {
			if (g.remove(item)) break;
		}
	}
	
	/**
	 * Update the item in grid.
	 */
	public function update(item:T):Void {
		var g = grid[getGridIndex(item.x, item.y)];
		if (!g.has(item)) {
			remove(item);
			g.add(item);
		}
	}
	
	/**
	 * Updates the positions of all items on the grid. Call this when items have moved, but not after *each* item moves.
	 * For example, if you have a number of Vector2 moving around each frame, move them all, then call updateAll() once per frame.
	 **/
	public function updateAll():Void {
		grid = [];
		for (i in 0...length) {
			grid.push(new FastList<T>());
		}
		
		// populate grid:
		for (item in _items){
			grid[getGridIndex(item.x, item.y)].add(item);
		}
	}
	
	/**
	 * Returns the neighbor cell of the coordinates. 
	 * xOffSet is the horizontal offset number of the grid coordinate, ie. 1 is the right cell and -1 is the left cell.
	 * yOffSet is the verticle offset, ie. 1 is the bottom cell and -1 is the top cell.
	 */
	inline public function getCell(x:Float, y:Float, xOffSet:Int = 0, yOffSet:Int = 0):Null<FastList<T>> {
		var itemX:Int = Std.int((x + offX) * m) + xOffSet;
		var itemY:Int = Std.int((y + offY) * m) + yOffSet;
		
		if (itemX < 0 || itemX > w || itemY < 0 || itemY > h)
			return null;
		else
			return grid[itemX * h + itemY];
	}
	
	/**
	 * Returns the list of neighbors for the specified coordinates. Neighbours are items in grid positions within radius positions away from the item.
	 * For example, a radius of 0 returns only items in the same position. A radius of 1 returns 9 positions (the center, + the 8 positions 1 position away).
	 * A radius of 2 returns 25 positions. It is generally recommended to only use a radius of 1, but there are occasional use cases that may benefit from using
	 * a radius of 2.
	 * 
	 * It is important to note that this is a coarse set of neighbors. Their distance from the target item varies depending on their location within their grid position.
	 * This is allows you to exclude items that are too far away, then use more accurate comparisions (like pythagoram distance calculations or hit tests) on the
	 * smaller set of items.
	 **/
	public function getNeighbors(x:Float, y:Float, r:Int = 1):FastList<FastList<T>> {
		
		var itemX:Int = Std.int((x + offX) * m);
		var itemY:Int = Std.int((y + offY) * m);
		var radius:Int = Math.ceil(r * m);
		
		var minX:Int = itemX - radius;
		if (minX < 0) { minX = 0; }
		
		var minY:Int = itemY - radius;
		if (minY < 0) { minY = 0; }
		
		var maxX:Int = itemX + radius;
		if (maxX > w) { maxX = w; }
		
		var maxY:Int = itemY + radius;
		if (maxY > h) { maxY = h; }
		
		var results = new FastList<FastList<T>>();
		var adjX = minX * h;
		for (x in minX...maxX+1) {
			for (y in minY...maxY + 1) {
				results.add(grid[adjX + y]);
			}
			adjX += h;
		}
		return results;
	}
		
	private function init():Void {
		m = 1 / gridSize;
		w = Math.ceil(bounds.width * m) + 1;
		h = Math.ceil(bounds.height * m) + 1;
		length = w * h;
		offX = -bounds.x;
		offY = -bounds.y;
	}
	
	inline private function getGridIndex(x:Float, y:Float):Int {
		return Std.int(Std.int((x + offX) * m) * h + (y + offY) * m);
	}
}