package hxcv.filters;

import hxcv.ds.Image;

interface IFilter<ImgT:Image<Dynamic>>
{
	public function process(img:ImgT, resultImg:ImgT):Void;
}