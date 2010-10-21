#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxcv_ds_I2DImage
#include <hxcv/ds/I2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_IGray2DImage
#include <hxcv/ds/IGray2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_of_OFGray2DImage
#include <hxcv/ds/of/OFGray2DImage.h>
#endif
#ifndef INCLUDED_of_graphics_Image
#include <of/graphics/Image.h>
#endif
namespace hxcv{
namespace ds{
namespace of{

Void OFGray2DImage_obj::__construct(::of::graphics::Image img)
{
{
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",13)
	if ((img->__getType() != 0))
		hx::Throw (HX_CSTRING("Input is not a grayscale image."));
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",15)
	this->ofImage = img;
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",16)
	this->width = img->__getWidth();
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",17)
	this->height = img->__getHeight();
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",18)
	this->pixels = ::haxe::io::Bytes_obj::ofData(img->getPixels());
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",19)
	this->numOfChannels = 1;
}
;
	return null();
}

OFGray2DImage_obj::~OFGray2DImage_obj() { }

Dynamic OFGray2DImage_obj::__CreateEmpty() { return  new OFGray2DImage_obj; }
hx::ObjectPtr< OFGray2DImage_obj > OFGray2DImage_obj::__new(::of::graphics::Image img)
{  hx::ObjectPtr< OFGray2DImage_obj > result = new OFGray2DImage_obj();
	result->__construct(img);
	return result;}

Dynamic OFGray2DImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OFGray2DImage_obj > result = new OFGray2DImage_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *OFGray2DImage_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::hxcv::ds::IGray2DImage_obj)) return operator ::hxcv::ds::IGray2DImage_obj *();
	return super::__ToInterface(inType);
}

int OFGray2DImage_obj::get( int x,int y,int channel){
	HX_SOURCE_PUSH("OFGray2DImage_obj::get")
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",27)
	return this->pixels->b->__get(((((y * this->width) + x)) + channel));
}


HX_DEFINE_DYNAMIC_FUNC3(OFGray2DImage_obj,get,return )

int OFGray2DImage_obj::getHex( int x,int y,Dynamic alpha){
	HX_SOURCE_PUSH("OFGray2DImage_obj::getHex")
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",31)
	int g = this->pixels->b->__get(((y * this->width) + x));
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",32)
	return (int(((int((int(g) << int(16))) ^ int((int(g) << int(8)))))) ^ int(g));
}


HX_DEFINE_DYNAMIC_FUNC3(OFGray2DImage_obj,getHex,return )

Void OFGray2DImage_obj::set( int x,int y,int channel,int val){
{
		HX_SOURCE_PUSH("OFGray2DImage_obj::set")
		HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",40)
		this->pixels->b[((((y * this->width) + x)) + channel)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(OFGray2DImage_obj,set,(void))

Void OFGray2DImage_obj::setHex( int x,int y,int val){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFGray2DImage_obj::setHex")
		HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",44)
		this->pixels->b[((y * this->width) + x)] = ::Std_obj::_int(((((0.3 * ((int((int(val) >> int(16))) & int(255)))) + (0.59 * ((int((int(val) >> int(8))) & int(255)))))) + (0.11 * ((int(val) & int(255))))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OFGray2DImage_obj,setHex,(void))

Array< int > OFGray2DImage_obj::getPixels( ){
	HX_SOURCE_PUSH("OFGray2DImage_obj::getPixels")
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",48)
	return this->pixels->b;
}


HX_DEFINE_DYNAMIC_FUNC0(OFGray2DImage_obj,getPixels,return )

Void OFGray2DImage_obj::setPixels( Array< int > src){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFGray2DImage_obj::setPixels")
		HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",52)
		this->ofImage->setFromPixels(src,this->width,this->height,this->ofImage->__getType(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OFGray2DImage_obj,setPixels,(void))

Void OFGray2DImage_obj::lock( ){
{
		HX_SOURCE_PUSH("OFGray2DImage_obj::lock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OFGray2DImage_obj,lock,(void))

Void OFGray2DImage_obj::unlock( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFGray2DImage_obj::unlock")
		HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",58)
		this->ofImage->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OFGray2DImage_obj,unlock,(void))

::hxcv::ds::I2DImage OFGray2DImage_obj::clone( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("OFGray2DImage_obj::clone")
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",62)
	::of::graphics::Image img = ::of::graphics::Image_obj::__new(null());
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",63)
	img->clone(this->ofImage);
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",64)
	return ::hxcv::ds::of::OFGray2DImage_obj::__new(img);
}


HX_DEFINE_DYNAMIC_FUNC0(OFGray2DImage_obj,clone,return )

Dynamic OFGray2DImage_obj::iterator( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("OFGray2DImage_obj::iterator")
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",72)
	return this->pixels->b->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(OFGray2DImage_obj,iterator,return )

int OFGray2DImage_obj::getGray( int x,int y){
	HX_SOURCE_PUSH("OFGray2DImage_obj::getGray")
	HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",79)
	return this->pixels->b->__get(((y * this->width) + x));
}


HX_DEFINE_DYNAMIC_FUNC2(OFGray2DImage_obj,getGray,return )

Void OFGray2DImage_obj::setGray( int x,int y,int val){
{
		HX_SOURCE_PUSH("OFGray2DImage_obj::setGray")
		HX_SOURCE_POS("hxcv/ds/of/OFGray2DImage.hx",83)
		this->pixels->b[((y * this->width) + x)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OFGray2DImage_obj,setGray,(void))


OFGray2DImage_obj::OFGray2DImage_obj()
{
}

void OFGray2DImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OFGray2DImage);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(ofImage,"ofImage");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

Dynamic OFGray2DImage_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getHex") ) { return getHex_dyn(); }
		if (HX_FIELD_EQ(inName,"setHex") ) { return setHex_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofImage") ) { return ofImage; }
		if (HX_FIELD_EQ(inName,"getGray") ) { return getGray_dyn(); }
		if (HX_FIELD_EQ(inName,"setGray") ) { return setGray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return numOfChannels; }
	}
	return super::__Field(inName);
}

Dynamic OFGray2DImage_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofImage") ) { ofImage=inValue.Cast< ::of::graphics::Image >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void OFGray2DImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("numOfChannels"));
	outFields->push(HX_CSTRING("ofImage"));
	outFields->push(HX_CSTRING("pixels"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("getHex"),
	HX_CSTRING("set"),
	HX_CSTRING("setHex"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("lock"),
	HX_CSTRING("unlock"),
	HX_CSTRING("clone"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("numOfChannels"),
	HX_CSTRING("iterator"),
	HX_CSTRING("ofImage"),
	HX_CSTRING("pixels"),
	HX_CSTRING("getGray"),
	HX_CSTRING("setGray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class OFGray2DImage_obj::__mClass;

void OFGray2DImage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxcv.ds.of.OFGray2DImage"), hx::TCanCast< OFGray2DImage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OFGray2DImage_obj::__boot()
{
}

} // end namespace hxcv
} // end namespace ds
} // end namespace of
