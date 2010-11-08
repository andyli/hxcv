package hxcv.ds.of;

import of.Context;

class OFAdapter {

	static public function getImage(ofImage:Image):OFImage {
		return new OFImage(ofImage);
	}

	static public function getImageGray(ofImage:Image):OFImageGray {
		return new OFImageGray(ofImage);
	}

	static public function getImageRGB(ofImage:Image):OFImageRGB {
		return new OFImageRGB(ofImage);
	}

	static public function getImageARGB(ofImage:Image):OFImageARGB {
		return new OFImageARGB(ofImage);
	}
	
}