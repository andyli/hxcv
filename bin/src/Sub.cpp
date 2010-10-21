#include <hxcpp.h>

#ifndef INCLUDED_Base
#include <Base.h>
#endif
#ifndef INCLUDED_Sub
#include <Sub.h>
#endif

Void Sub_obj::__construct()
{
{
	HX_SOURCE_POS("OFExample.hx",17)
	super::__construct();
}
;
	return null();
}

Sub_obj::~Sub_obj() { }

Dynamic Sub_obj::__CreateEmpty() { return  new Sub_obj; }
hx::ObjectPtr< Sub_obj > Sub_obj::__new()
{  hx::ObjectPtr< Sub_obj > result = new Sub_obj();
	result->__construct();
	return result;}

Dynamic Sub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sub_obj > result = new Sub_obj();
	result->__construct();
	return result;}

Void Sub_obj::mthd( ){
{
		HX_SOURCE_PUSH("Sub_obj::mthd")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sub_obj,mthd,(void))


Sub_obj::Sub_obj()
{
}

void Sub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sub);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Sub_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mthd") ) { return mthd_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Sub_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Sub_obj::__GetFields(Array< ::String> &outFields)
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

Class Sub_obj::__mClass;

void Sub_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Sub"), hx::TCanCast< Sub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Sub_obj::__boot()
{
}

