#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_LinkedBond
#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_RegularBond
#include <hsl/haxe/_DirectSignaler/RegularBond.h>
#endif
namespace hsl{
namespace haxe{
namespace _DirectSignaler{

Void RegularBond_obj::__construct(Dynamic listener)
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",313)
	super::__construct();
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",314)
	this->listener = listener;
}
;
	return null();
}

RegularBond_obj::~RegularBond_obj() { }

Dynamic RegularBond_obj::__CreateEmpty() { return  new RegularBond_obj; }
hx::ObjectPtr< RegularBond_obj > RegularBond_obj::__new(Dynamic listener)
{  hx::ObjectPtr< RegularBond_obj > result = new RegularBond_obj();
	result->__construct(listener);
	return result;}

Dynamic RegularBond_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegularBond_obj > result = new RegularBond_obj();
	result->__construct(inArgs[0]);
	return result;}

int RegularBond_obj::callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus){
	__SAFE_POINT
	HX_SOURCE_PUSH("RegularBond_obj::callListener")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",317)
	if ((false == this->halted)){
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",318)
		this->listener(data);
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",320)
	return propagationStatus;
}


HX_DEFINE_DYNAMIC_FUNC4(RegularBond_obj,callListener,return )

bool RegularBond_obj::determineEquals( ::hsl::haxe::_DirectSignaler::LinkedBond value){
	__SAFE_POINT
	HX_SOURCE_PUSH("RegularBond_obj::determineEquals")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",329)
	return (bool(::Std_obj::is(value,hx::ClassOf< ::hsl::haxe::_DirectSignaler::RegularBond >())) && bool(::Reflect_obj::compareMethods((value)->__Field(HX_CSTRING("listener")),this->listener_dyn())));
}


HX_DEFINE_DYNAMIC_FUNC1(RegularBond_obj,determineEquals,return )


RegularBond_obj::RegularBond_obj()
{
}

void RegularBond_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegularBond);
	HX_MARK_MEMBER_NAME(listener,"listener");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic RegularBond_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callListener") ) { return callListener_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"determineEquals") ) { return determineEquals_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic RegularBond_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void RegularBond_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("listener"),
	HX_CSTRING("callListener"),
	HX_CSTRING("determineEquals"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class RegularBond_obj::__mClass;

void RegularBond_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe._DirectSignaler.RegularBond"), hx::TCanCast< RegularBond_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void RegularBond_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler
