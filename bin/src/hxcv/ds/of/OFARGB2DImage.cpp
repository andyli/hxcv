#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxcv_ds_I2DImage
#include <hxcv/ds/I2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_IARGB2DImage
#include <hxcv/ds/IARGB2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_IRGB2DImage
#include <hxcv/ds/IRGB2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_of_OF2DImage
#include <hxcv/ds/of/OF2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_of_OFARGB2DImage
#include <hxcv/ds/of/OFARGB2DImage.h>
#endif
#ifndef INCLUDED_of_graphics_Image
#include <of/graphics/Image.h>
#endif
namespace hxcv{
namespace ds{
namespace of{

Void OFARGB2DImage_obj::__construct(::of::graphics::Image img)
{
{
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",13)
	if ((img->__getType() != 2))
		hx::Throw (HX_CSTRING("Input is not a OF_IMAGE_COLOR_ALPHA image."));
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",14)
	this->ofImage = img;
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",15)
	this->width = img->__getWidth();
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",16)
	this->height = img->__getHeight();
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",17)
	this->pixels = ::haxe::io::Bytes_obj::ofData(img->getPixels());
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",18)
	this->numOfChannels = 4;
}
;
	return null();
}

OFARGB2DImage_obj::~OFARGB2DImage_obj() { }

Dynamic OFARGB2DImage_obj::__CreateEmpty() { return  new OFARGB2DImage_obj; }
hx::ObjectPtr< OFARGB2DImage_obj > OFARGB2DImage_obj::__new(::of::graphics::Image img)
{  hx::ObjectPtr< OFARGB2DImage_obj > result = new OFARGB2DImage_obj();
	result->__construct(img);
	return result;}

Dynamic OFARGB2DImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OFARGB2DImage_obj > result = new OFARGB2DImage_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *OFARGB2DImage_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::hxcv::ds::IARGB2DImage_obj)) return operator ::hxcv::ds::IARGB2DImage_obj *();
	return super::__ToInterface(inType);
}

int OFARGB2DImage_obj::get( int x,int y,int channel){
	HX_SOURCE_PUSH("OFARGB2DImage_obj::get")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",26)
	return this->pixels->b->__get((((((y * this->width) + x)) * 4) + channel));
}


HX_DEFINE_DYNAMIC_FUNC3(OFARGB2DImage_obj,get,return )

int OFARGB2DImage_obj::getHex( int x,int y,Dynamic alpha){
	__SAFE_POINT
	HX_SOURCE_PUSH("OFARGB2DImage_obj::getHex")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",30)
	int pos = ((((y * this->width) + x)) * this->numOfChannels);
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",31)
	return (int(((  ((alpha == null())) ? Dynamic(this->pixels->b->__get((pos + 3))) : Dynamic(alpha) ))) | int((::haxe::io::BytesInput_obj::__new(this->pixels,pos,null())->readInt24())));
}


HX_DEFINE_DYNAMIC_FUNC3(OFARGB2DImage_obj,getHex,return )

Void OFARGB2DImage_obj::set( int x,int y,int channel,int val){
{
		HX_SOURCE_PUSH("OFARGB2DImage_obj::set")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",39)
		this->pixels->b[(((((y * this->width) + x)) * 4) + channel)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(OFARGB2DImage_obj,set,(void))

Void OFARGB2DImage_obj::setHex( int x,int y,int val){
{
		HX_SOURCE_PUSH("OFARGB2DImage_obj::setHex")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",43)
		int pos = ((((y * this->width) + x)) * this->numOfChannels);
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",45)
		this->pixels->b[pos] = (int((int(val) >> int(16))) & int(255));
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",46)
		this->pixels->b[++(pos)] = (int((int(val) >> int(8))) & int(255));
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",47)
		this->pixels->b[++(pos)] = (int(val) & int(255));
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",48)
		this->pixels->b[++(pos)] = (int((int(val) >> int(24))) & int(255));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OFARGB2DImage_obj,setHex,(void))

Array< int > OFARGB2DImage_obj::getPixels( ){
	HX_SOURCE_PUSH("OFARGB2DImage_obj::getPixels")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",52)
	return this->pixels->b;
}


HX_DEFINE_DYNAMIC_FUNC0(OFARGB2DImage_obj,getPixels,return )

Void OFARGB2DImage_obj::setPixels( Array< int > src){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFARGB2DImage_obj::setPixels")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",56)
		this->ofImage->setFromPixels(src,this->width,this->height,this->ofImage->__getType(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OFARGB2DImage_obj,setPixels,(void))

Void OFARGB2DImage_obj::lock( ){
{
		HX_SOURCE_PUSH("OFARGB2DImage_obj::lock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OFARGB2DImage_obj,lock,(void))

Void OFARGB2DImage_obj::unlock( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFARGB2DImage_obj::unlock")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",62)
		this->ofImage->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OFARGB2DImage_obj,unlock,(void))

::hxcv::ds::I2DImage OFARGB2DImage_obj::clone( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("OFARGB2DImage_obj::clone")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",66)
	::of::graphics::Image img = ::of::graphics::Image_obj::__new(null());
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",67)
	img->clone(this->ofImage);
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",68)
	return ::hxcv::ds::of::OF2DImage_obj::__new(img);
}


HX_DEFINE_DYNAMIC_FUNC0(OFARGB2DImage_obj,clone,return )

Dynamic OFARGB2DImage_obj::iterator( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("OFARGB2DImage_obj::iterator")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",76)
	return this->pixels->b->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(OFARGB2DImage_obj,iterator,return )

int OFARGB2DImage_obj::getA( int x,int y){
	HX_SOURCE_PUSH("OFARGB2DImage_obj::getA")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",84)
	return this->pixels->b->__get((((((y * this->width) + x)) * 4) + 3));
}


HX_DEFINE_DYNAMIC_FUNC2(OFARGB2DImage_obj,getA,return )

Void OFARGB2DImage_obj::setA( int x,int y,int val){
{
		HX_SOURCE_PUSH("OFARGB2DImage_obj::setA")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",88)
		this->pixels->b[(((((y * this->width) + x)) * 4) + 3)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OFARGB2DImage_obj,setA,(void))

int OFARGB2DImage_obj::getR( int x,int y){
	HX_SOURCE_PUSH("OFARGB2DImage_obj::getR")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",92)
	return this->pixels->b->__get(((((y * this->width) + x)) * 4));
}


HX_DEFINE_DYNAMIC_FUNC2(OFARGB2DImage_obj,getR,return )

Void OFARGB2DImage_obj::setR( int x,int y,int val){
{
		HX_SOURCE_PUSH("OFARGB2DImage_obj::setR")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",96)
		this->pixels->b[((((y * this->width) + x)) * 4)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OFARGB2DImage_obj,setR,(void))

int OFARGB2DImage_obj::getG( int x,int y){
	HX_SOURCE_PUSH("OFARGB2DImage_obj::getG")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",100)
	return this->pixels->b->__get((((((y * this->width) + x)) * 4) + 1));
}


HX_DEFINE_DYNAMIC_FUNC2(OFARGB2DImage_obj,getG,return )

Void OFARGB2DImage_obj::setG( int x,int y,int val){
{
		HX_SOURCE_PUSH("OFARGB2DImage_obj::setG")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",104)
		this->pixels->b[(((((y * this->width) + x)) * 4) + 1)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OFARGB2DImage_obj,setG,(void))

int OFARGB2DImage_obj::getB( int x,int y){
	HX_SOURCE_PUSH("OFARGB2DImage_obj::getB")
	HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",108)
	return this->pixels->b->__get((((((y * this->width) + x)) * 4) + 2));
}


HX_DEFINE_DYNAMIC_FUNC2(OFARGB2DImage_obj,getB,return )

Void OFARGB2DImage_obj::setB( int x,int y,int val){
{
		HX_SOURCE_PUSH("OFARGB2DImage_obj::setB")
		HX_SOURCE_POS("hxcv/ds/of/OFARGB2DImage.hx",112)
		this->pixels->b[(((((y * this->width) + x)) * 4) + 2)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OFARGB2DImage_obj,setB,(void))


OFARGB2DImage_obj::OFARGB2DImage_obj()
{
}

void OFARGB2DImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OFARGB2DImage);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(ofImage,"ofImage");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

Dynamic OFARGB2DImage_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		if (HX_FIELD_EQ(inName,"getA") ) { return getA_dyn(); }
		if (HX_FIELD_EQ(inName,"setA") ) { return setA_dyn(); }
		if (HX_FIELD_EQ(inName,"getR") ) { return getR_dyn(); }
		if (HX_FIELD_EQ(inName,"setR") ) { return setR_dyn(); }
		if (HX_FIELD_EQ(inName,"getG") ) { return getG_dyn(); }
		if (HX_FIELD_EQ(inName,"setG") ) { return setG_dyn(); }
		if (HX_FIELD_EQ(inName,"getB") ) { return getB_dyn(); }
		if (HX_FIELD_EQ(inName,"setB") ) { return setB_dyn(); }
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

Dynamic OFARGB2DImage_obj::__SetField(const ::String &inName,const Dynamic &inValue)
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

void OFARGB2DImage_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("getA"),
	HX_CSTRING("setA"),
	HX_CSTRING("getR"),
	HX_CSTRING("setR"),
	HX_CSTRING("getG"),
	HX_CSTRING("setG"),
	HX_CSTRING("getB"),
	HX_CSTRING("setB"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class OFARGB2DImage_obj::__mClass;

void OFARGB2DImage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxcv.ds.of.OFARGB2DImage"), hx::TCanCast< OFARGB2DImage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OFARGB2DImage_obj::__boot()
{
}

} // end namespace hxcv
} // end namespace ds
} // end namespace of
