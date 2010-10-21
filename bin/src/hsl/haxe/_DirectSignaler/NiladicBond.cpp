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
#ifndef INCLUDED_hsl_haxe__DirectSignaler_NiladicBond
#include <hsl/haxe/_DirectSignaler/NiladicBond.h>
#endif
namespace hsl{
namespace haxe{
namespace _DirectSignaler{

Void NiladicBond_obj::__construct(Dynamic listener)
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",342)
	super::__construct();
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",343)
	this->listener = listener;
}
;
	return null();
}

NiladicBond_obj::~NiladicBond_obj() { }

Dynamic NiladicBond_obj::__CreateEmpty() { return  new NiladicBond_obj; }
hx::ObjectPtr< NiladicBond_obj > NiladicBond_obj::__new(Dynamic listener)
{  hx::ObjectPtr< NiladicBond_obj > result = new NiladicBond_obj();
	result->__construct(listener);
	return result;}

Dynamic NiladicBond_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NiladicBond_obj > result = new NiladicBond_obj();
	result->__construct(inArgs[0]);
	return result;}

int NiladicBond_obj::callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus){
	__SAFE_POINT
	HX_SOURCE_PUSH("NiladicBond_obj::callListener")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",346)
	if ((false == this->halted)){
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",347)
		this->listener();
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",349)
	return propagationStatus;
}


HX_DEFINE_DYNAMIC_FUNC4(NiladicBond_obj,callListener,return )

bool NiladicBond_obj::determineEquals( ::hsl::haxe::_DirectSignaler::LinkedBond value){
	__SAFE_POINT
	HX_SOURCE_PUSH("NiladicBond_obj::determineEquals")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",358)
	return (bool(::Std_obj::is(value,hx::ClassOf< ::hsl::haxe::_DirectSignaler::NiladicBond >())) && bool(::Reflect_obj::compareMethods((value)->__Field(HX_CSTRING("listener")),this->listener_dyn())));
}


HX_DEFINE_DYNAMIC_FUNC1(NiladicBond_obj,determineEquals,return )


NiladicBond_obj::NiladicBond_obj()
{
}

void NiladicBond_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NiladicBond);
	HX_MARK_MEMBER_NAME(listener,"listener");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic NiladicBond_obj::__Field(const ::String &inName)
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

Dynamic NiladicBond_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void NiladicBond_obj::__GetFields(Array< ::String> &outFields)
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

Class NiladicBond_obj::__mClass;

void NiladicBond_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe._DirectSignaler.NiladicBond"), hx::TCanCast< NiladicBond_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void NiladicBond_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler
