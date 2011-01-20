package hxcv.ds;
import haxe.rtti.Generic;

class PxPtrIterator < TPxPtr:PxPtr < Dynamic, Dynamic, Dynamic >>
implements Generic
{
	var _pxPtr:TPxPtr;
	var _hasNext:Bool;
	
	public function new(pxPtr:TPxPtr) 
	{
		_pxPtr = pxPtr;
		_hasNext = _pxPtr.checkCoordinates();
		_pxPtr.unsafePrev();
	}
	
	inline public function hasNext():Bool {
		return _hasNext;
	}
	
	inline public function next():TPxPtr {
		_hasNext = _pxPtr.next();
		return _pxPtr;
	}
}