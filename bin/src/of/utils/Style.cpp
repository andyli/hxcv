#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_utils_Color
#include <of/utils/Color.h>
#endif
#ifndef INCLUDED_of_utils_Style
#include <of/utils/Style.h>
#endif
namespace of{
namespace utils{

Void Style_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",147)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::utils::Style_obj::_ofStyle_new()) : Dynamic(handle) );
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",148)
	this->color = ::of::utils::Color_obj::__new(::of::utils::Style_obj::_ofStyle_getColor(this->__Field(HX_CSTRING("__handle"))));
}
;
	return null();
}

Style_obj::~Style_obj() { }

Dynamic Style_obj::__CreateEmpty() { return  new Style_obj; }
hx::ObjectPtr< Style_obj > Style_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Style_obj > result = new Style_obj();
	result->__construct(handle);
	return result;}

Dynamic Style_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Style_obj > result = new Style_obj();
	result->__construct(inArgs[0]);
	return result;}

int Style_obj::__getPolyMode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__getPolyMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",180)
	return ::of::utils::Style_obj::_ofStyle_getPolyMode(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,__getPolyMode,return )

int Style_obj::__setPolyMode( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__setPolyMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",183)
	return ::of::utils::Style_obj::_ofStyle_setPolyMode(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,__setPolyMode,return )

int Style_obj::__getRectMode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__getRectMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",187)
	return ::of::utils::Style_obj::_ofStyle_getRectMode(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,__getRectMode,return )

int Style_obj::__setRectMode( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__setRectMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",190)
	return ::of::utils::Style_obj::_ofStyle_setRectMode(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,__setRectMode,return )

bool Style_obj::__getBFill( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__getBFill")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",194)
	return ::of::utils::Style_obj::_ofStyle_getBFill(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,__getBFill,return )

bool Style_obj::__setBFill( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__setBFill")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",197)
	return ::of::utils::Style_obj::_ofStyle_setBFill(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,__setBFill,return )

bool Style_obj::__getBlending( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__getBlending")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",201)
	return ::of::utils::Style_obj::_ofStyle_getBlending(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,__getBlending,return )

bool Style_obj::__setBlending( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__setBlending")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",204)
	return ::of::utils::Style_obj::_ofStyle_setBlending(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,__setBlending,return )

bool Style_obj::__getSmoothing( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__getSmoothing")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",208)
	return ::of::utils::Style_obj::_ofStyle_getSmoothing(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,__getSmoothing,return )

bool Style_obj::__setSmoothing( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__setSmoothing")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",211)
	return ::of::utils::Style_obj::_ofStyle_setSmoothing(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,__setSmoothing,return )

int Style_obj::__getCircleResolution( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__getCircleResolution")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",215)
	return ::of::utils::Style_obj::_ofStyle_getCircleResolution(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,__getCircleResolution,return )

int Style_obj::__setCircleResolution( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__setCircleResolution")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",218)
	return ::of::utils::Style_obj::_ofStyle_setCircleResolution(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,__setCircleResolution,return )

double Style_obj::__getLineWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__getLineWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",222)
	return ::of::utils::Style_obj::_ofStyle_getLineWidth(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,__getLineWidth,return )

double Style_obj::__setLineWidth( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("Style_obj::__setLineWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",225)
	return ::of::utils::Style_obj::_ofStyle_setLineWidth(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,__setLineWidth,return )

Dynamic Style_obj::_ofStyle_new;

Dynamic Style_obj::_ofStyle_getColor;

Dynamic Style_obj::_ofStyle_getPolyMode;

Dynamic Style_obj::_ofStyle_setPolyMode;

Dynamic Style_obj::_ofStyle_getRectMode;

Dynamic Style_obj::_ofStyle_setRectMode;

Dynamic Style_obj::_ofStyle_getBFill;

Dynamic Style_obj::_ofStyle_setBFill;

Dynamic Style_obj::_ofStyle_getBlending;

Dynamic Style_obj::_ofStyle_setBlending;

Dynamic Style_obj::_ofStyle_getSmoothing;

Dynamic Style_obj::_ofStyle_setSmoothing;

Dynamic Style_obj::_ofStyle_getCircleResolution;

Dynamic Style_obj::_ofStyle_setCircleResolution;

Dynamic Style_obj::_ofStyle_getLineWidth;

Dynamic Style_obj::_ofStyle_setLineWidth;


Style_obj::Style_obj()
{
}

void Style_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Style);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(polyMode,"polyMode");
	HX_MARK_MEMBER_NAME(rectMode,"rectMode");
	HX_MARK_MEMBER_NAME(bFill,"bFill");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(circleResolution,"circleResolution");
	HX_MARK_MEMBER_NAME(lineWidth,"lineWidth");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic Style_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"bFill") ) { return __getBFill(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"polyMode") ) { return __getPolyMode(); }
		if (HX_FIELD_EQ(inName,"rectMode") ) { return __getRectMode(); }
		if (HX_FIELD_EQ(inName,"blending") ) { return __getBlending(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return __getSmoothing(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return __getLineWidth(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getBFill") ) { return __getBFill_dyn(); }
		if (HX_FIELD_EQ(inName,"__setBFill") ) { return __setBFill_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofStyle_new") ) { return _ofStyle_new; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__getPolyMode") ) { return __getPolyMode_dyn(); }
		if (HX_FIELD_EQ(inName,"__setPolyMode") ) { return __setPolyMode_dyn(); }
		if (HX_FIELD_EQ(inName,"__getRectMode") ) { return __getRectMode_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRectMode") ) { return __setRectMode_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBlending") ) { return __getBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"__setBlending") ) { return __setBlending_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__getSmoothing") ) { return __getSmoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"__setSmoothing") ) { return __setSmoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLineWidth") ) { return __getLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__setLineWidth") ) { return __setLineWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"circleResolution") ) { return __getCircleResolution(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofStyle_getColor") ) { return _ofStyle_getColor; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getBFill") ) { return _ofStyle_getBFill; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setBFill") ) { return _ofStyle_setBFill; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofStyle_getPolyMode") ) { return _ofStyle_getPolyMode; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setPolyMode") ) { return _ofStyle_setPolyMode; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getRectMode") ) { return _ofStyle_getRectMode; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setRectMode") ) { return _ofStyle_setRectMode; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getBlending") ) { return _ofStyle_getBlending; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setBlending") ) { return _ofStyle_setBlending; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofStyle_getSmoothing") ) { return _ofStyle_getSmoothing; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setSmoothing") ) { return _ofStyle_setSmoothing; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getLineWidth") ) { return _ofStyle_getLineWidth; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setLineWidth") ) { return _ofStyle_setLineWidth; }
		if (HX_FIELD_EQ(inName,"__getCircleResolution") ) { return __getCircleResolution_dyn(); }
		if (HX_FIELD_EQ(inName,"__setCircleResolution") ) { return __setCircleResolution_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofStyle_getCircleResolution") ) { return _ofStyle_getCircleResolution; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setCircleResolution") ) { return _ofStyle_setCircleResolution; }
	}
	return super::__Field(inName);
}

Dynamic Style_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::of::utils::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bFill") ) { return __setBFill(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"polyMode") ) { return __setPolyMode(inValue); }
		if (HX_FIELD_EQ(inName,"rectMode") ) { return __setRectMode(inValue); }
		if (HX_FIELD_EQ(inName,"blending") ) { return __setBlending(inValue); }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return __setSmoothing(inValue); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return __setLineWidth(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofStyle_new") ) { _ofStyle_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"circleResolution") ) { return __setCircleResolution(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofStyle_getColor") ) { _ofStyle_getColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getBFill") ) { _ofStyle_getBFill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setBFill") ) { _ofStyle_setBFill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofStyle_getPolyMode") ) { _ofStyle_getPolyMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setPolyMode") ) { _ofStyle_setPolyMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getRectMode") ) { _ofStyle_getRectMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setRectMode") ) { _ofStyle_setRectMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getBlending") ) { _ofStyle_getBlending=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setBlending") ) { _ofStyle_setBlending=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofStyle_getSmoothing") ) { _ofStyle_getSmoothing=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setSmoothing") ) { _ofStyle_setSmoothing=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_getLineWidth") ) { _ofStyle_getLineWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setLineWidth") ) { _ofStyle_setLineWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofStyle_getCircleResolution") ) { _ofStyle_getCircleResolution=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofStyle_setCircleResolution") ) { _ofStyle_setCircleResolution=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Style_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("polyMode"));
	outFields->push(HX_CSTRING("rectMode"));
	outFields->push(HX_CSTRING("bFill"));
	outFields->push(HX_CSTRING("blending"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("circleResolution"));
	outFields->push(HX_CSTRING("lineWidth"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofStyle_new"),
	HX_CSTRING("_ofStyle_getColor"),
	HX_CSTRING("_ofStyle_getPolyMode"),
	HX_CSTRING("_ofStyle_setPolyMode"),
	HX_CSTRING("_ofStyle_getRectMode"),
	HX_CSTRING("_ofStyle_setRectMode"),
	HX_CSTRING("_ofStyle_getBFill"),
	HX_CSTRING("_ofStyle_setBFill"),
	HX_CSTRING("_ofStyle_getBlending"),
	HX_CSTRING("_ofStyle_setBlending"),
	HX_CSTRING("_ofStyle_getSmoothing"),
	HX_CSTRING("_ofStyle_setSmoothing"),
	HX_CSTRING("_ofStyle_getCircleResolution"),
	HX_CSTRING("_ofStyle_setCircleResolution"),
	HX_CSTRING("_ofStyle_getLineWidth"),
	HX_CSTRING("_ofStyle_setLineWidth"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("color"),
	HX_CSTRING("polyMode"),
	HX_CSTRING("rectMode"),
	HX_CSTRING("bFill"),
	HX_CSTRING("blending"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("circleResolution"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__getPolyMode"),
	HX_CSTRING("__setPolyMode"),
	HX_CSTRING("__getRectMode"),
	HX_CSTRING("__setRectMode"),
	HX_CSTRING("__getBFill"),
	HX_CSTRING("__setBFill"),
	HX_CSTRING("__getBlending"),
	HX_CSTRING("__setBlending"),
	HX_CSTRING("__getSmoothing"),
	HX_CSTRING("__setSmoothing"),
	HX_CSTRING("__getCircleResolution"),
	HX_CSTRING("__setCircleResolution"),
	HX_CSTRING("__getLineWidth"),
	HX_CSTRING("__setLineWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_new,"_ofStyle_new");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getColor,"_ofStyle_getColor");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getPolyMode,"_ofStyle_getPolyMode");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_setPolyMode,"_ofStyle_setPolyMode");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getRectMode,"_ofStyle_getRectMode");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_setRectMode,"_ofStyle_setRectMode");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getBFill,"_ofStyle_getBFill");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_setBFill,"_ofStyle_setBFill");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getBlending,"_ofStyle_getBlending");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_setBlending,"_ofStyle_setBlending");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getSmoothing,"_ofStyle_getSmoothing");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_setSmoothing,"_ofStyle_setSmoothing");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getCircleResolution,"_ofStyle_getCircleResolution");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_setCircleResolution,"_ofStyle_setCircleResolution");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_getLineWidth,"_ofStyle_getLineWidth");
	HX_MARK_MEMBER_NAME(Style_obj::_ofStyle_setLineWidth,"_ofStyle_setLineWidth");
};

Class Style_obj::__mClass;

void Style_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.Style"), hx::TCanCast< Style_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Style_obj::__boot()
{
	hx::Static(_ofStyle_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_new"),0);
	hx::Static(_ofStyle_getColor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getColor"),1);
	hx::Static(_ofStyle_getPolyMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getPolyMode"),1);
	hx::Static(_ofStyle_setPolyMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_setPolyMode"),2);
	hx::Static(_ofStyle_getRectMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getRectMode"),1);
	hx::Static(_ofStyle_setRectMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_setRectMode"),2);
	hx::Static(_ofStyle_getBFill) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getBFill"),1);
	hx::Static(_ofStyle_setBFill) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_setBFill"),2);
	hx::Static(_ofStyle_getBlending) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getBlending"),1);
	hx::Static(_ofStyle_setBlending) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_setBlending"),2);
	hx::Static(_ofStyle_getSmoothing) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getSmoothing"),1);
	hx::Static(_ofStyle_setSmoothing) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_setSmoothing"),2);
	hx::Static(_ofStyle_getCircleResolution) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getCircleResolution"),1);
	hx::Static(_ofStyle_setCircleResolution) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_setCircleResolution"),2);
	hx::Static(_ofStyle_getLineWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_getLineWidth"),1);
	hx::Static(_ofStyle_setLineWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofStyle_setLineWidth"),2);
}

} // end namespace of
} // end namespace utils
