#include <hxcpp.h>

#ifndef INCLUDED_Base
#include <Base.h>
#endif

Void Base_obj::__construct()
{
{
}
;
	return null();
}

Base_obj::~Base_obj() { }

Dynamic Base_obj::__CreateEmpty() { return  new Base_obj; }
hx::ObjectPtr< Base_obj > Base_obj::__new()
{  hx::ObjectPtr< Base_obj > result = new Base_obj();
	result->__construct();
	return result;}

Dynamic Base_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Base_obj > result = new Base_obj();
	result->__construct();
	return result;}

Void Base_obj::mthd( ){
{
		HX_SOURCE_PUSH("Base_obj::mthd")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Base_obj,mthd,(void))


Base_obj::Base_obj()
{
}

void Base_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Base);
	HX_MARK_END_CLASS();
}

Dynamic Base_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mthd") ) { return mthd_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Base_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Base_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mthd"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Base_obj::__mClass;

void Base_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Base"), hx::TCanCast< Base_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Base_obj::__boot()
{
}

