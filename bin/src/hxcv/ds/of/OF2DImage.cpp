#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_hxcv_ds_of_OF2DImage
#include <hxcv/ds/of/OF2DImage.h>
#endif
#ifndef INCLUDED_of_graphics_Image
#include <of/graphics/Image.h>
#endif
namespace hxcv{
namespace ds{
namespace of{

Void OF2DImage_obj::__construct(::of::graphics::Image img)
{
{
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",12)
	this->ofImage = img;
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",13)
	this->width = img->__getWidth();
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",14)
	this->height = img->__getHeight();
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",15)
	this->pixels = ::haxe::io::Bytes_obj::ofData(img->getPixels());
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",17)
	switch( (int)(img->__getType())){
		case 0: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",19)
			this->numOfChannels = 1;
		}
		;break;
		case 1: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",22)
			this->numOfChannels = 3;
		}
		;break;
		case 2: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",25)
			this->numOfChannels = 4;
		}
		;break;
		default: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",28)
			hx::Throw (HX_CSTRING("unknow number of channels"));
		}
	}
}
;
	return null();
}

OF2DImage_obj::~OF2DImage_obj() { }

Dynamic OF2DImage_obj::__CreateEmpty() { return  new OF2DImage_obj; }
hx::ObjectPtr< OF2DImage_obj > OF2DImage_obj::__new(::of::graphics::Image img)
{  hx::ObjectPtr< OF2DImage_obj > result = new OF2DImage_obj();
	result->__construct(img);
	return result;}

Dynamic OF2DImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OF2DImage_obj > result = new OF2DImage_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *OF2DImage_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::hxcv::ds::I2DImage_obj)) return operator ::hxcv::ds::I2DImage_obj *();
	return super::__ToInterface(inType);
}

int OF2DImage_obj::get( int x,int y,int channel){
	HX_SOURCE_PUSH("OF2DImage_obj::get")
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",37)
	return this->pixels->b->__get((((((y * this->width) + x)) * this->numOfChannels) + channel));
}


HX_DEFINE_DYNAMIC_FUNC3(OF2DImage_obj,get,return )

int OF2DImage_obj::getHex( int x,int y,Dynamic alpha){
	__SAFE_POINT
	HX_SOURCE_PUSH("OF2DImage_obj::getHex")
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",41)
	switch( (int)(this->numOfChannels)){
		case 1: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",43)
			int g = this->pixels->b->__get(((((y * this->width) + x)) * this->numOfChannels));
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",44)
			return (int(((int((int(g) << int(16))) ^ int((int(g) << int(8)))))) ^ int(g));
		}
		;break;
		case 3: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",46)
			return (int(((  ((alpha == null())) ? Dynamic(255) : Dynamic(alpha) ))) | int((::haxe::io::BytesInput_obj::__new(this->pixels,((((y * this->width) + x)) * this->numOfChannels),null())->readInt24())));
		}
		;break;
		case 4: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",48)
			int pos = ((((y * this->width) + x)) * this->numOfChannels);
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",49)
			return (int(((  ((alpha == null())) ? Dynamic(this->pixels->b->__get((pos + 3))) : Dynamic(alpha) ))) | int((::haxe::io::BytesInput_obj::__new(this->pixels,pos,null())->readInt24())));
		}
		;break;
		default: {
			HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",51)
			hx::Throw (HX_CSTRING("number of channels is not 1/3/4"));
		}
	}
}


HX_DEFINE_DYNAMIC_FUNC3(OF2DImage_obj,getHex,return )

Void OF2DImage_obj::set( int x,int y,int channel,int val){
{
		HX_SOURCE_PUSH("OF2DImage_obj::set")
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",60)
		this->pixels->b[(((((y * this->width) + x)) * this->numOfChannels) + channel)] = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(OF2DImage_obj,set,(void))

Void OF2DImage_obj::setHex( int x,int y,int val){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OF2DImage_obj::setHex")
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",64)
		int a = (int((int(val) >> int(24))) & int(255));
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",65)
		int r = (int((int(val) >> int(16))) & int(255));
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",66)
		int g = (int((int(val) >> int(8))) & int(255));
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",67)
		int b = (int(val) & int(255));
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",68)
		int pos = ((((y * this->width) + x)) * this->numOfChannels);
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",70)
		switch( (int)(this->numOfChannels)){
			case 1: {
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",72)
				this->pixels->b[pos] = ::Std_obj::_int(((((0.3 * r) + (0.59 * g))) + (0.11 * b)));
			}
			;break;
			case 3: {
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",74)
				this->pixels->b[pos] = r;
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",75)
				this->pixels->b[++(pos)] = g;
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",76)
				this->pixels->b[++(pos)] = b;
			}
			;break;
			case 4: {
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",78)
				this->pixels->b[pos] = r;
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",79)
				this->pixels->b[++(pos)] = g;
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",80)
				this->pixels->b[++(pos)] = b;
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",81)
				this->pixels->b[++(pos)] = a;
			}
			;break;
			default: {
				HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",83)
				hx::Throw (HX_CSTRING("number of channels is not 1/3/4"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(OF2DImage_obj,setHex,(void))

Array< int > OF2DImage_obj::getPixels( ){
	HX_SOURCE_PUSH("OF2DImage_obj::getPixels")
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",88)
	return this->pixels->b;
}


HX_DEFINE_DYNAMIC_FUNC0(OF2DImage_obj,getPixels,return )

Void OF2DImage_obj::setPixels( Array< int > src){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OF2DImage_obj::setPixels")
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",92)
		this->ofImage->setFromPixels(src,this->width,this->height,this->ofImage->__getType(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OF2DImage_obj,setPixels,(void))

Void OF2DImage_obj::lock( ){
{
		HX_SOURCE_PUSH("OF2DImage_obj::lock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OF2DImage_obj,lock,(void))

Void OF2DImage_obj::unlock( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OF2DImage_obj::unlock")
		HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",98)
		this->ofImage->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OF2DImage_obj,unlock,(void))

::hxcv::ds::I2DImage OF2DImage_obj::clone( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("OF2DImage_obj::clone")
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",102)
	::of::graphics::Image img = ::of::graphics::Image_obj::__new(null());
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",103)
	img->clone(this->ofImage);
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",104)
	return ::hxcv::ds::of::OF2DImage_obj::__new(img);
}


HX_DEFINE_DYNAMIC_FUNC0(OF2DImage_obj,clone,return )

Dynamic OF2DImage_obj::iterator( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("OF2DImage_obj::iterator")
	HX_SOURCE_POS("hxcv/ds/of/OF2DImage.hx",112)
	return this->pixels->b->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(OF2DImage_obj,iterator,return )


OF2DImage_obj::OF2DImage_obj()
{
}

void OF2DImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OF2DImage);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(ofImage,"ofImage");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

Dynamic OF2DImage_obj::__Field(const ::String &inName)
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

Dynamic OF2DImage_obj::__SetField(const ::String &inName,const Dynamic &inValue)
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

void OF2DImage_obj::__GetFields(Array< ::String> &outFields)
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
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class OF2DImage_obj::__mClass;

void OF2DImage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxcv.ds.of.OF2DImage"), hx::TCanCast< OF2DImage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OF2DImage_obj::__boot()
{
}

} // end namespace hxcv
} // end namespace ds
} // end namespace of
