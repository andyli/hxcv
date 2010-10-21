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
#ifndef INCLUDED_hsl_haxe_Signal
#include <hsl/haxe/Signal.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_AdvancedBond
#include <hsl/haxe/_DirectSignaler/AdvancedBond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_LinkedBond
#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
#endif
namespace hsl{
namespace haxe{
namespace _DirectSignaler{

Void AdvancedBond_obj::__construct(Dynamic listener)
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",371)
	super::__construct();
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",372)
	this->listener = listener;
}
;
	return null();
}

AdvancedBond_obj::~AdvancedBond_obj() { }

Dynamic AdvancedBond_obj::__CreateEmpty() { return  new AdvancedBond_obj; }
hx::ObjectPtr< AdvancedBond_obj > AdvancedBond_obj::__new(Dynamic listener)
{  hx::ObjectPtr< AdvancedBond_obj > result = new AdvancedBond_obj();
	result->__construct(listener);
	return result;}

Dynamic AdvancedBond_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AdvancedBond_obj > result = new AdvancedBond_obj();
	result->__construct(inArgs[0]);
	return result;}

int AdvancedBond_obj::callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus){
	__SAFE_POINT
	HX_SOURCE_PUSH("AdvancedBond_obj::callListener")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",375)
	if ((this->halted == false)){
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",376)
		::hsl::haxe::Signal signal = ::hsl::haxe::Signal_obj::__new(data,this,currentTarget,origin);
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",377)
		this->listener(signal);
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",378)
		if (signal->immediatePropagationStopped){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",379)
			return 1;
		}
		else{
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",380)
			if (signal->propagationStopped){
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",381)
				return 2;
			}
		}
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",384)
	return propagationStatus;
}


HX_DEFINE_DYNAMIC_FUNC4(AdvancedBond_obj,callListener,return )

bool AdvancedBond_obj::determineEquals( ::hsl::haxe::_DirectSignaler::LinkedBond value){
	__SAFE_POINT
	HX_SOURCE_PUSH("AdvancedBond_obj::determineEquals")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",393)
	return (bool(::Std_obj::is(value,hx::ClassOf< ::hsl::haxe::_DirectSignaler::AdvancedBond >())) && bool(::Reflect_obj::compareMethods((value)->__Field(HX_CSTRING("listener")),this->listener_dyn())));
}


HX_DEFINE_DYNAMIC_FUNC1(AdvancedBond_obj,determineEquals,return )


AdvancedBond_obj::AdvancedBond_obj()
{
}

void AdvancedBond_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AdvancedBond);
	HX_MARK_MEMBER_NAME(listener,"listener");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic AdvancedBond_obj::__Field(const ::String &inName)
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

Dynamic AdvancedBond_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AdvancedBond_obj::__GetFields(Array< ::String> &outFields)
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

Class AdvancedBond_obj::__mClass;

void AdvancedBond_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe._DirectSignaler.AdvancedBond"), hx::TCanCast< AdvancedBond_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void AdvancedBond_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler
