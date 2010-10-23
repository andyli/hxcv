package hxcv.ds.of;

import of.Context;

class OFAdapter {

	static public function get2DImage(ofImage:Image):OF2DImage {
		return new OF2DImage(ofImage);
	}

	static public function getGray2DImage(ofImage:Image):OFGray2DImage {
		return new OFGray2DImage(ofImage);
	}

	static public function getRGB2DImage(ofImage:Image):OFRGB2DImage {
		return new OFRGB2DImage(ofImage);
	}

	static public function getARGB2DImage(ofImage:Image):OFARGB2DImage {
		return new OFARGB2DImage(ofImage);
	}
	
}