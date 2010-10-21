#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_utils_Point
#include <of/utils/Point.h>
#endif
namespace of{
namespace utils{

Void Point_obj::__construct(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic handle)
{
double x = __o_x.Default(0);
double y = __o_y.Default(0);
double z = __o_z.Default(0);
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",7)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::utils::Point_obj::_ofPoint_new(x,y,z)) : Dynamic(handle) );
}
;
	return null();
}

Point_obj::~Point_obj() { }

Dynamic Point_obj::__CreateEmpty() { return  new Point_obj; }
hx::ObjectPtr< Point_obj > Point_obj::__new(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic handle)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(__o_x,__o_y,__o_z,handle);
	return result;}

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Point_obj::set( double x,double y,double z){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Point_obj::set")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",11)
		::of::utils::Point_obj::_ofPoint_set(this->__Field(HX_CSTRING("__handle")),x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Point_obj,set,(void))

double Point_obj::__getX( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::__getX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",30)
	return ::of::utils::Point_obj::_ofPoint_getX(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,__getX,return )

double Point_obj::__setX( double x){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::__setX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",33)
	return ::of::utils::Point_obj::_ofPoint_setX(this->__Field(HX_CSTRING("__handle")),x);
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,__setX,return )

double Point_obj::__getY( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::__getY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",36)
	return ::of::utils::Point_obj::_ofPoint_getY(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,__getY,return )

double Point_obj::__setY( double y){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::__setY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",39)
	return ::of::utils::Point_obj::_ofPoint_setY(this->__Field(HX_CSTRING("__handle")),y);
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,__setY,return )

double Point_obj::__getZ( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::__getZ")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",42)
	return ::of::utils::Point_obj::_ofPoint_getX(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,__getZ,return )

double Point_obj::__setZ( double x){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::__setZ")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Types.hx",45)
	return ::of::utils::Point_obj::_ofPoint_setX(this->__Field(HX_CSTRING("__handle")),this->__getZ());
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,__setZ,return )

Dynamic Point_obj::_ofPoint_new;

Dynamic Point_obj::_ofPoint_getX;

Dynamic Point_obj::_ofPoint_getY;

Dynamic Point_obj::_ofPoint_getZ;

Dynamic Point_obj::_ofPoint_setX;

Dynamic Point_obj::_ofPoint_setY;

Dynamic Point_obj::_ofPoint_setZ;

Dynamic Point_obj::_ofPoint_set;


Point_obj::Point_obj()
{
}

void Point_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Point);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic Point_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return __getX(); }
		if (HX_FIELD_EQ(inName,"y") ) { return __getY(); }
		if (HX_FIELD_EQ(inName,"z") ) { return __getZ(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__getX") ) { return __getX_dyn(); }
		if (HX_FIELD_EQ(inName,"__setX") ) { return __setX_dyn(); }
		if (HX_FIELD_EQ(inName,"__getY") ) { return __getY_dyn(); }
		if (HX_FIELD_EQ(inName,"__setY") ) { return __setY_dyn(); }
		if (HX_FIELD_EQ(inName,"__getZ") ) { return __getZ_dyn(); }
		if (HX_FIELD_EQ(inName,"__setZ") ) { return __setZ_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofPoint_new") ) { return _ofPoint_new; }
		if (HX_FIELD_EQ(inName,"_ofPoint_set") ) { return _ofPoint_set; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofPoint_getX") ) { return _ofPoint_getX; }
		if (HX_FIELD_EQ(inName,"_ofPoint_getY") ) { return _ofPoint_getY; }
		if (HX_FIELD_EQ(inName,"_ofPoint_getZ") ) { return _ofPoint_getZ; }
		if (HX_FIELD_EQ(inName,"_ofPoint_setX") ) { return _ofPoint_setX; }
		if (HX_FIELD_EQ(inName,"_ofPoint_setY") ) { return _ofPoint_setY; }
		if (HX_FIELD_EQ(inName,"_ofPoint_setZ") ) { return _ofPoint_setZ; }
	}
	return super::__Field(inName);
}

Dynamic Point_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return __setX(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return __setY(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { return __setZ(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofPoint_new") ) { _ofPoint_new=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPoint_set") ) { _ofPoint_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofPoint_getX") ) { _ofPoint_getX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPoint_getY") ) { _ofPoint_getY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPoint_getZ") ) { _ofPoint_getZ=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPoint_setX") ) { _ofPoint_setX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPoint_setY") ) { _ofPoint_setY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPoint_setZ") ) { _ofPoint_setZ=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofPoint_new"),
	HX_CSTRING("_ofPoint_getX"),
	HX_CSTRING("_ofPoint_getY"),
	HX_CSTRING("_ofPoint_getZ"),
	HX_CSTRING("_ofPoint_setX"),
	HX_CSTRING("_ofPoint_setY"),
	HX_CSTRING("_ofPoint_setZ"),
	HX_CSTRING("_ofPoint_set"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__getX"),
	HX_CSTRING("__setX"),
	HX_CSTRING("__getY"),
	HX_CSTRING("__setY"),
	HX_CSTRING("__getZ"),
	HX_CSTRING("__setZ"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_new,"_ofPoint_new");
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_getX,"_ofPoint_getX");
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_getY,"_ofPoint_getY");
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_getZ,"_ofPoint_getZ");
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_setX,"_ofPoint_setX");
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_setY,"_ofPoint_setY");
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_setZ,"_ofPoint_setZ");
	HX_MARK_MEMBER_NAME(Point_obj::_ofPoint_set,"_ofPoint_set");
};

Class Point_obj::__mClass;

void Point_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.Point"), hx::TCanCast< Point_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Point_obj::__boot()
{
	hx::Static(_ofPoint_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_new"),3);
	hx::Static(_ofPoint_getX) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_getX"),1);
	hx::Static(_ofPoint_getY) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_getY"),1);
	hx::Static(_ofPoint_getZ) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_getZ"),1);
	hx::Static(_ofPoint_setX) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_setX"),2);
	hx::Static(_ofPoint_setY) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_setY"),2);
	hx::Static(_ofPoint_setZ) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_setZ"),2);
	hx::Static(_ofPoint_set) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPoint_set"),4);
}

} // end namespace of
} // end namespace utils
