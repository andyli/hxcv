#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_utils_Color
#include <of/utils/Color.h>
#endif
namespace of{
namespace utils{

Void Color_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",99)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::utils::Color_obj::_ofColor_new()) : Dynamic(handle) );
}
;
	return null();
}

Color_obj::~Color_obj() { }

Dynamic Color_obj::__CreateEmpty() { return  new Color_obj; }
hx::ObjectPtr< Color_obj > Color_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(handle);
	return result;}

Dynamic Color_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(inArgs[0]);
	return result;}

double Color_obj::__getR( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__getR")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",120)
	return ::of::utils::Color_obj::_ofColor_getR(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,__getR,return )

double Color_obj::__setR( double r){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__setR")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",123)
	return ::of::utils::Color_obj::_ofColor_setR(this->__Field(HX_CSTRING("__handle")),r);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,__setR,return )

double Color_obj::__getG( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__getG")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",126)
	return ::of::utils::Color_obj::_ofColor_getG(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,__getG,return )

double Color_obj::__setG( double g){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__setG")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",129)
	return ::of::utils::Color_obj::_ofColor_setG(this->__Field(HX_CSTRING("__handle")),g);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,__setG,return )

double Color_obj::__getB( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__getB")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",132)
	return ::of::utils::Color_obj::_ofColor_getB(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,__getB,return )

double Color_obj::__setB( double b){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__setB")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",135)
	return ::of::utils::Color_obj::_ofColor_setB(this->__Field(HX_CSTRING("__handle")),b);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,__setB,return )

double Color_obj::__getA( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__getA")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",138)
	return ::of::utils::Color_obj::_ofColor_getA(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,__getA,return )

double Color_obj::__setA( double a){
	__SAFE_POINT
	HX_SOURCE_PUSH("Color_obj::__setA")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",141)
	return ::of::utils::Color_obj::_ofColor_setA(this->__Field(HX_CSTRING("__handle")),a);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,__setA,return )

Dynamic Color_obj::_ofColor_new;

Dynamic Color_obj::_ofColor_getR;

Dynamic Color_obj::_ofColor_getG;

Dynamic Color_obj::_ofColor_getB;

Dynamic Color_obj::_ofColor_getA;

Dynamic Color_obj::_ofColor_setR;

Dynamic Color_obj::_ofColor_setG;

Dynamic Color_obj::_ofColor_setB;

Dynamic Color_obj::_ofColor_setA;


Color_obj::Color_obj()
{
}

void Color_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Color);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic Color_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return __getR(); }
		if (HX_FIELD_EQ(inName,"g") ) { return __getG(); }
		if (HX_FIELD_EQ(inName,"b") ) { return __getB(); }
		if (HX_FIELD_EQ(inName,"a") ) { return __getA(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__getR") ) { return __getR_dyn(); }
		if (HX_FIELD_EQ(inName,"__setR") ) { return __setR_dyn(); }
		if (HX_FIELD_EQ(inName,"__getG") ) { return __getG_dyn(); }
		if (HX_FIELD_EQ(inName,"__setG") ) { return __setG_dyn(); }
		if (HX_FIELD_EQ(inName,"__getB") ) { return __getB_dyn(); }
		if (HX_FIELD_EQ(inName,"__setB") ) { return __setB_dyn(); }
		if (HX_FIELD_EQ(inName,"__getA") ) { return __getA_dyn(); }
		if (HX_FIELD_EQ(inName,"__setA") ) { return __setA_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofColor_new") ) { return _ofColor_new; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofColor_getR") ) { return _ofColor_getR; }
		if (HX_FIELD_EQ(inName,"_ofColor_getG") ) { return _ofColor_getG; }
		if (HX_FIELD_EQ(inName,"_ofColor_getB") ) { return _ofColor_getB; }
		if (HX_FIELD_EQ(inName,"_ofColor_getA") ) { return _ofColor_getA; }
		if (HX_FIELD_EQ(inName,"_ofColor_setR") ) { return _ofColor_setR; }
		if (HX_FIELD_EQ(inName,"_ofColor_setG") ) { return _ofColor_setG; }
		if (HX_FIELD_EQ(inName,"_ofColor_setB") ) { return _ofColor_setB; }
		if (HX_FIELD_EQ(inName,"_ofColor_setA") ) { return _ofColor_setA; }
	}
	return super::__Field(inName);
}

Dynamic Color_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return __setR(inValue); }
		if (HX_FIELD_EQ(inName,"g") ) { return __setG(inValue); }
		if (HX_FIELD_EQ(inName,"b") ) { return __setB(inValue); }
		if (HX_FIELD_EQ(inName,"a") ) { return __setA(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofColor_new") ) { _ofColor_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofColor_getR") ) { _ofColor_getR=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofColor_getG") ) { _ofColor_getG=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofColor_getB") ) { _ofColor_getB=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofColor_getA") ) { _ofColor_getA=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofColor_setR") ) { _ofColor_setR=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofColor_setG") ) { _ofColor_setG=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofColor_setB") ) { _ofColor_setB=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofColor_setA") ) { _ofColor_setA=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofColor_new"),
	HX_CSTRING("_ofColor_getR"),
	HX_CSTRING("_ofColor_getG"),
	HX_CSTRING("_ofColor_getB"),
	HX_CSTRING("_ofColor_getA"),
	HX_CSTRING("_ofColor_setR"),
	HX_CSTRING("_ofColor_setG"),
	HX_CSTRING("_ofColor_setB"),
	HX_CSTRING("_ofColor_setA"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__getR"),
	HX_CSTRING("__setR"),
	HX_CSTRING("__getG"),
	HX_CSTRING("__setG"),
	HX_CSTRING("__getB"),
	HX_CSTRING("__setB"),
	HX_CSTRING("__getA"),
	HX_CSTRING("__setA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_new,"_ofColor_new");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_getR,"_ofColor_getR");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_getG,"_ofColor_getG");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_getB,"_ofColor_getB");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_getA,"_ofColor_getA");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_setR,"_ofColor_setR");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_setG,"_ofColor_setG");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_setB,"_ofColor_setB");
	HX_MARK_MEMBER_NAME(Color_obj::_ofColor_setA,"_ofColor_setA");
};

Class Color_obj::__mClass;

void Color_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.Color"), hx::TCanCast< Color_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Color_obj::__boot()
{
	hx::Static(_ofColor_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_new"),0);
	hx::Static(_ofColor_getR) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_getR"),1);
	hx::Static(_ofColor_getG) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_getG"),1);
	hx::Static(_ofColor_getB) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_getB"),1);
	hx::Static(_ofColor_getA) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_getA"),1);
	hx::Static(_ofColor_setR) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_setR"),2);
	hx::Static(_ofColor_setG) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_setG"),2);
	hx::Static(_ofColor_setB) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_setB"),2);
	hx::Static(_ofColor_setA) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofColor_setA"),2);
}

} // end namespace of
} // end namespace utils
