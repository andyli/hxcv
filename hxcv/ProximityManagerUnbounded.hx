package hxcv;

import hxcv.ds.Rectangle;
import hxcv.ds.Vector;
import haxe.FastList;
using Lambda;

class ProximityManagerUnbounded<T:Vector2<Float>>
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
	
	private var _gridSize:Float;
	private function getGridSize():Float {
		return _gridSize;
	}
	private function setGridSize(g:Float):Float {
		_gridSize = g;
		init();
		return g;
	}
	
	inline function getItems():FastList<T> {
		return _items;
	}
	inline function setItems(value:FastList<T>):FastList<T> {
		return _items = value;
	}
	
	private var _items:FastList<T>;
	private var grid:IntHash<IntHash<FastList<T>>>;
	private var m:Float;
	
	public function new(gridSize:Float):Void {
		_gridSize = gridSize;
		_items = new FastList<T>();
		init();
		updateAll();
	}
		
	/**
	 * Adds an item to track.
	 **/
	public function add(item:T):Void {
		_items.add(item);
		
		getCell(item.val0, item.val1).add(item);
	}
	
	/**
	 * Removes an item from the system. It will not be returned in any subsequent getNeighbors() calls.
	 **/
	public function remove(item:T):Void {
		_items.remove(item);
		
		for (colume in grid) {
			for (cell in colume) {
				if (cell.remove(item)) return;
			}
		}
	}
	
	/**
	 * Update the item in grid.
	 */
	public function update(item:T):Void {
		var cell = getCell(item.val0, item.val1);
		if (!cell.has(item)) {
			remove(item);
			cell.add(item);
		}
	}
	
	/**
	 * Updates the positions of all items on the grid. Call this when items have moved, but not after *each* item moves.
	 * For example, if you have a number of Vector2 moving around each frame, move them all, then call updateAll() once per frame.
	 **/
	public function updateAll():Void {
		grid = new IntHash<IntHash<FastList<T>>>();
		
		// populate grid:
		for (item in _items) {
			getCell(item.val0, item.val1).add(item);
		}
	}
	
	/**
	 * Returns the neighbor cell of the coordinates. 
	 * xOffSet is the horizontal offset number of the grid coordinate, ie. 1 is the right cell and -1 is the left cell.
	 * yOffSet is the verticle offset, ie. 1 is the bottom cell and -1 is the top cell.
	 */
	public function getCell(x:Float, y:Float, xOffSet:Int = 0, yOffSet:Int = 0):FastList<T> {
		var gx = Std.int(x * m) + xOffSet;
		var gy = Std.int(y * m) + yOffSet;
		
		var colume = grid.get(gx);
		if (colume == null) grid.set(gx, colume = new IntHash<FastList<T>>());
		var cell = colume.get(gy);
		if (cell == null) colume.set(gy, cell = new FastList<T>());
		
		return cell;
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
	public function getNeighbors(x:Float, y:Float, r:Float = 1):FastList<FastList<T>> {
		
		var itemX:Int = Std.int(x * m);
		var itemY:Int = Std.int(y * m);
		var radius:Int = Math.ceil(r * m);
		
		var minX:Int = itemX - radius;
		var minY:Int = itemY - radius;
		var maxX:Int = itemX + radius + 1;
		var maxY:Int = itemY + radius + 1;
		
		var results = new FastList<FastList<T>>();
		for (x in minX...maxX) {
			var colume = grid.get(x);
			if (colume == null) continue;
			for (y in minY...maxY) {
				var cell = colume.get(y);
				if (cell == null) continue;
				results.add(cell);
			}
		}
		return results;
	}
		
	private function init():Void {
		m = 1 / gridSize;
	}
}