#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_utils_Rectangle
#include <of/utils/Rectangle.h>
#endif
namespace of{
namespace utils{

Void Rectangle_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",51)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::utils::Rectangle_obj::_ofRectangle_new()) : Dynamic(handle) );
}
;
	return null();
}

Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(handle);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0]);
	return result;}

double Rectangle_obj::__getX( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__getX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",72)
	return ::of::utils::Rectangle_obj::_ofRectangle_getX(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__getX,return )

double Rectangle_obj::__setX( double x){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__setX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",75)
	return ::of::utils::Rectangle_obj::_ofRectangle_setX(this->__Field(HX_CSTRING("__handle")),x);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,__setX,return )

double Rectangle_obj::__getY( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__getY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",78)
	return ::of::utils::Rectangle_obj::_ofRectangle_getY(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__getY,return )

double Rectangle_obj::__setY( double y){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__setY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",81)
	return ::of::utils::Rectangle_obj::_ofRectangle_setY(this->__Field(HX_CSTRING("__handle")),y);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,__setY,return )

double Rectangle_obj::__getWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",84)
	return ::of::utils::Rectangle_obj::_ofRectangle_getWidth(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__getWidth,return )

double Rectangle_obj::__setWidth( double width){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__setWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",87)
	return ::of::utils::Rectangle_obj::_ofRectangle_setWidth(this->__Field(HX_CSTRING("__handle")),width);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,__setWidth,return )

double Rectangle_obj::__getHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",90)
	return ::of::utils::Rectangle_obj::_ofRectangle_getHeight(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__getHeight,return )

double Rectangle_obj::__setHeight( double height){
	__SAFE_POINT
	HX_SOURCE_PUSH("Rectangle_obj::__setHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",93)
	return ::of::utils::Rectangle_obj::_ofRectangle_setHeight(this->__Field(HX_CSTRING("__handle")),height);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,__setHeight,return )

Dynamic Rectangle_obj::_ofRectangle_new;

Dynamic Rectangle_obj::_ofRectangle_getX;

Dynamic Rectangle_obj::_ofRectangle_getY;

Dynamic Rectangle_obj::_ofRectangle_getWidth;

Dynamic Rectangle_obj::_ofRectangle_getHeight;

Dynamic Rectangle_obj::_ofRectangle_setX;

Dynamic Rectangle_obj::_ofRectangle_setY;

Dynamic Rectangle_obj::_ofRectangle_setWidth;

Dynamic Rectangle_obj::_ofRectangle_setHeight;


Rectangle_obj::Rectangle_obj()
{
}

void Rectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rectangle);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic Rectangle_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return __getX(); }
		if (HX_FIELD_EQ(inName,"y") ) { return __getY(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return __getWidth(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return __getHeight(); }
		if (HX_FIELD_EQ(inName,"__getX") ) { return __getX_dyn(); }
		if (HX_FIELD_EQ(inName,"__setX") ) { return __setX_dyn(); }
		if (HX_FIELD_EQ(inName,"__getY") ) { return __getY_dyn(); }
		if (HX_FIELD_EQ(inName,"__setY") ) { return __setY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getWidth") ) { return __getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__setWidth") ) { return __setWidth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getHeight") ) { return __getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"__setHeight") ) { return __setHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofRectangle_new") ) { return _ofRectangle_new; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofRectangle_getX") ) { return _ofRectangle_getX; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_getY") ) { return _ofRectangle_getY; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setX") ) { return _ofRectangle_setX; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setY") ) { return _ofRectangle_setY; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofRectangle_getWidth") ) { return _ofRectangle_getWidth; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setWidth") ) { return _ofRectangle_setWidth; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofRectangle_getHeight") ) { return _ofRectangle_getHeight; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setHeight") ) { return _ofRectangle_setHeight; }
	}
	return super::__Field(inName);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return __setX(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return __setY(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return __setWidth(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return __setHeight(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofRectangle_new") ) { _ofRectangle_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofRectangle_getX") ) { _ofRectangle_getX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_getY") ) { _ofRectangle_getY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setX") ) { _ofRectangle_setX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setY") ) { _ofRectangle_setY=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofRectangle_getWidth") ) { _ofRectangle_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setWidth") ) { _ofRectangle_setWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofRectangle_getHeight") ) { _ofRectangle_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRectangle_setHeight") ) { _ofRectangle_setHeight=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofRectangle_new"),
	HX_CSTRING("_ofRectangle_getX"),
	HX_CSTRING("_ofRectangle_getY"),
	HX_CSTRING("_ofRectangle_getWidth"),
	HX_CSTRING("_ofRectangle_getHeight"),
	HX_CSTRING("_ofRectangle_setX"),
	HX_CSTRING("_ofRectangle_setY"),
	HX_CSTRING("_ofRectangle_setWidth"),
	HX_CSTRING("_ofRectangle_setHeight"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__getX"),
	HX_CSTRING("__setX"),
	HX_CSTRING("__getY"),
	HX_CSTRING("__setY"),
	HX_CSTRING("__getWidth"),
	HX_CSTRING("__setWidth"),
	HX_CSTRING("__getHeight"),
	HX_CSTRING("__setHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_new,"_ofRectangle_new");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_getX,"_ofRectangle_getX");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_getY,"_ofRectangle_getY");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_getWidth,"_ofRectangle_getWidth");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_getHeight,"_ofRectangle_getHeight");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_setX,"_ofRectangle_setX");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_setY,"_ofRectangle_setY");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_setWidth,"_ofRectangle_setWidth");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_ofRectangle_setHeight,"_ofRectangle_setHeight");
};

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Rectangle_obj::__boot()
{
	hx::Static(_ofRectangle_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_new"),0);
	hx::Static(_ofRectangle_getX) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_getX"),1);
	hx::Static(_ofRectangle_getY) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_getY"),1);
	hx::Static(_ofRectangle_getWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_getWidth"),1);
	hx::Static(_ofRectangle_getHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_getHeight"),1);
	hx::Static(_ofRectangle_setX) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_setX"),2);
	hx::Static(_ofRectangle_setY) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_setY"),2);
	hx::Static(_ofRectangle_setWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_setWidth"),2);
	hx::Static(_ofRectangle_setHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRectangle_setHeight"),2);
}

} // end namespace of
} // end namespace utils
