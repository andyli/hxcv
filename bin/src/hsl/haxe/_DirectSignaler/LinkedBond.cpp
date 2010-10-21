#include <hxcpp.h>

#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_LinkedBond
#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
#endif
namespace hsl{
namespace haxe{
namespace _DirectSignaler{

Void LinkedBond_obj::__construct()
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",214)
	super::__construct();
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",217)
	this->destroyed = false;
}
;
	return null();
}

LinkedBond_obj::~LinkedBond_obj() { }

Dynamic LinkedBond_obj::__CreateEmpty() { return  new LinkedBond_obj; }
hx::ObjectPtr< LinkedBond_obj > LinkedBond_obj::__new()
{  hx::ObjectPtr< LinkedBond_obj > result = new LinkedBond_obj();
	result->__construct();
	return result;}

Dynamic LinkedBond_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinkedBond_obj > result = new LinkedBond_obj();
	result->__construct();
	return result;}

int LinkedBond_obj::callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus){
	HX_SOURCE_PUSH("LinkedBond_obj::callListener")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",224)
	return propagationStatus;
}


HX_DEFINE_DYNAMIC_FUNC4(LinkedBond_obj,callListener,return )

bool LinkedBond_obj::determineEquals( ::hsl::haxe::_DirectSignaler::LinkedBond value){
	HX_SOURCE_PUSH("LinkedBond_obj::determineEquals")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",231)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(LinkedBond_obj,determineEquals,return )

Void LinkedBond_obj::destroy( ){
{
		HX_SOURCE_PUSH("LinkedBond_obj::destroy")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",236)
		if ((false == this->destroyed)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",236)
			this->previous->next = this->next;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",236)
			this->next->previous = this->previous;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",236)
			this->destroyed = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LinkedBond_obj,destroy,(void))

Void LinkedBond_obj::unlink( ){
{
		HX_SOURCE_PUSH("LinkedBond_obj::unlink")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",242)
		if ((false == this->destroyed)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",243)
			this->previous->next = this->next;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",244)
			this->next->previous = this->previous;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",245)
			this->destroyed = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LinkedBond_obj,unlink,(void))


LinkedBond_obj::LinkedBond_obj()
{
}

void LinkedBond_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinkedBond);
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(previous,"previous");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic LinkedBond_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlink") ) { return unlink_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"previous") ) { return previous; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callListener") ) { return callListener_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"determineEquals") ) { return determineEquals_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic LinkedBond_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::hsl::haxe::_DirectSignaler::LinkedBond >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"previous") ) { previous=inValue.Cast< ::hsl::haxe::_DirectSignaler::LinkedBond >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void LinkedBond_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("destroyed"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("previous"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroyed"),
	HX_CSTRING("next"),
	HX_CSTRING("previous"),
	HX_CSTRING("callListener"),
	HX_CSTRING("determineEquals"),
	HX_CSTRING("destroy"),
	HX_CSTRING("unlink"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class LinkedBond_obj::__mClass;

void LinkedBond_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe._DirectSignaler.LinkedBond"), hx::TCanCast< LinkedBond_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void LinkedBond_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler
