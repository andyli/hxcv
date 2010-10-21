#include <hxcpp.h>

#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_LinkedBond
#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_SentinelBond
#include <hsl/haxe/_DirectSignaler/SentinelBond.h>
#endif
namespace hsl{
namespace haxe{
namespace _DirectSignaler{

Void SentinelBond_obj::__construct()
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",263)
	super::__construct();
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",264)
	this->next = this->previous = this;
}
;
	return null();
}

SentinelBond_obj::~SentinelBond_obj() { }

Dynamic SentinelBond_obj::__CreateEmpty() { return  new SentinelBond_obj; }
hx::ObjectPtr< SentinelBond_obj > SentinelBond_obj::__new()
{  hx::ObjectPtr< SentinelBond_obj > result = new SentinelBond_obj();
	result->__construct();
	return result;}

Dynamic SentinelBond_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SentinelBond_obj > result = new SentinelBond_obj();
	result->__construct();
	return result;}

::hsl::haxe::_DirectSignaler::LinkedBond SentinelBond_obj::add( ::hsl::haxe::_DirectSignaler::LinkedBond value){
	HX_SOURCE_PUSH("SentinelBond_obj::add")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",271)
	value->next = this;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",272)
	value->previous = this->previous;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",273)
	return this->previous = this->previous->next = value;
}


HX_DEFINE_DYNAMIC_FUNC1(SentinelBond_obj,add,return )

int SentinelBond_obj::callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus){
	__SAFE_POINT
	HX_SOURCE_PUSH("SentinelBond_obj::callListener")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",276)
	::hsl::haxe::_DirectSignaler::LinkedBond node = this->next;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",277)
	while((bool((node != this)) && bool((1 != propagationStatus)))){
		__SAFE_POINT
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",278)
		propagationStatus = node->callListener(data,currentTarget,origin,propagationStatus);
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",279)
		node = node->next;
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",281)
	return propagationStatus;
}


HX_DEFINE_DYNAMIC_FUNC4(SentinelBond_obj,callListener,return )

bool SentinelBond_obj::getIsConnected( ){
	HX_SOURCE_PUSH("SentinelBond_obj::getIsConnected")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",289)
	return (this->next != this);
}


HX_DEFINE_DYNAMIC_FUNC0(SentinelBond_obj,getIsConnected,return )

Void SentinelBond_obj::remove( ::hsl::haxe::_DirectSignaler::LinkedBond value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SentinelBond_obj::remove")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",297)
		::hsl::haxe::_DirectSignaler::LinkedBond node = this->next;
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",298)
		while((node != this)){
			__SAFE_POINT
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",299)
			if (node->determineEquals(value)){
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",300)
				if ((false == node->destroyed)){
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",300)
					node->previous->next = node->next;
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",300)
					node->next->previous = node->previous;
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",300)
					node->destroyed = true;
				}
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",301)
				break;
			}
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",303)
			node = node->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SentinelBond_obj,remove,(void))


SentinelBond_obj::SentinelBond_obj()
{
}

void SentinelBond_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SentinelBond);
	HX_MARK_MEMBER_NAME(isConnected,"isConnected");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic SentinelBond_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isConnected") ) { return getIsConnected(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callListener") ) { return callListener_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIsConnected") ) { return getIsConnected_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic SentinelBond_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isConnected") ) { isConnected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SentinelBond_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isConnected"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isConnected"),
	HX_CSTRING("add"),
	HX_CSTRING("callListener"),
	HX_CSTRING("getIsConnected"),
	HX_CSTRING("remove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class SentinelBond_obj::__mClass;

void SentinelBond_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe._DirectSignaler.SentinelBond"), hx::TCanCast< SentinelBond_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SentinelBond_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler
