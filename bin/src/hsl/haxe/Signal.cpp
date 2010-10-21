#include <hxcpp.h>

#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signal
#include <hsl/haxe/Signal.h>
#endif
namespace hsl{
namespace haxe{

Void Signal_obj::__construct(Dynamic data,::hsl::haxe::Bond currentBond,Dynamic currentTarget,Dynamic origin)
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",137)
	this->__FieldRef(HX_CSTRING("data")) = data;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",138)
	this->currentBond = currentBond;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",139)
	this->__FieldRef(HX_CSTRING("currentTarget")) = currentTarget;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",140)
	this->__FieldRef(HX_CSTRING("origin")) = origin;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",144)
	this->immediatePropagationStopped = false;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",145)
	this->propagationStopped = false;
}
;
	return null();
}

Signal_obj::~Signal_obj() { }

Dynamic Signal_obj::__CreateEmpty() { return  new Signal_obj; }
hx::ObjectPtr< Signal_obj > Signal_obj::__new(Dynamic data,::hsl::haxe::Bond currentBond,Dynamic currentTarget,Dynamic origin)
{  hx::ObjectPtr< Signal_obj > result = new Signal_obj();
	result->__construct(data,currentBond,currentTarget,origin);
	return result;}

Dynamic Signal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Signal_obj > result = new Signal_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Dynamic Signal_obj::getData( ){
	HX_SOURCE_PUSH("Signal_obj::getData")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",149)
	return this->__Field(HX_CSTRING("data"));
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,getData,return )

Void Signal_obj::stopImmediatePropagation( ){
{
		HX_SOURCE_PUSH("Signal_obj::stopImmediatePropagation")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",214)
		this->immediatePropagationStopped = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,stopImmediatePropagation,(void))

Void Signal_obj::stopPropagation( ){
{
		HX_SOURCE_PUSH("Signal_obj::stopPropagation")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Signal.hx",227)
		this->propagationStopped = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,stopPropagation,(void))


Signal_obj::Signal_obj()
{
}

void Signal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Signal);
	HX_MARK_MEMBER_NAME(currentBond,"currentBond");
	HX_MARK_MEMBER_NAME(currentTarget,"currentTarget");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(data1,"data1");
	HX_MARK_MEMBER_NAME(immediatePropagationStopped,"immediatePropagationStopped");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(propagationStopped,"propagationStopped");
	HX_MARK_END_CLASS();
}

Dynamic Signal_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"data1") ) { return getData(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentBond") ) { return currentBond; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return currentTarget; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return stopPropagation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"propagationStopped") ) { return propagationStopped; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return stopImmediatePropagation_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"immediatePropagationStopped") ) { return immediatePropagationStopped; }
	}
	return super::__Field(inName);
}

Dynamic Signal_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"data1") ) { data1=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentBond") ) { currentBond=inValue.Cast< ::hsl::haxe::Bond >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { currentTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"propagationStopped") ) { propagationStopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"immediatePropagationStopped") ) { immediatePropagationStopped=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Signal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentBond"));
	outFields->push(HX_CSTRING("currentTarget"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("data1"));
	outFields->push(HX_CSTRING("immediatePropagationStopped"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("propagationStopped"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("currentBond"),
	HX_CSTRING("currentTarget"),
	HX_CSTRING("data"),
	HX_CSTRING("data1"),
	HX_CSTRING("immediatePropagationStopped"),
	HX_CSTRING("origin"),
	HX_CSTRING("propagationStopped"),
	HX_CSTRING("getData"),
	HX_CSTRING("stopImmediatePropagation"),
	HX_CSTRING("stopPropagation"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Signal_obj::__mClass;

void Signal_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe.Signal"), hx::TCanCast< Signal_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Signal_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
