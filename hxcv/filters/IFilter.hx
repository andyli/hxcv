package hxcv.filters;

import hxcv.ds.IImage;

interface IFilter<ImgT:IImage<Dynamic>>
{
	public function process(img:ImgT):Void;
}