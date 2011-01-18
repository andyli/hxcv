package hxcv.ds;

interface WithData<D>
{
	public var data(getData, setData):D;
	
	private var _data:D;
	private function getData():D;
	private function setData(val:D):D;
}