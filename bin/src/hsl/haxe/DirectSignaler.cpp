#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_TypeTools
#include <haxe/TypeTools.h>
#endif
#ifndef INCLUDED_haxe_exception_ArgumentNullException
#include <haxe/exception/ArgumentNullException.h>
#endif
#ifndef INCLUDED_haxe_exception_Exception
#include <haxe/exception/Exception.h>
#endif
#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe_DirectSignaler
#include <hsl/haxe/DirectSignaler.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signal
#include <hsl/haxe/Signal.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_AdvancedBond
#include <hsl/haxe/_DirectSignaler/AdvancedBond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_LinkedBond
#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_NiladicBond
#include <hsl/haxe/_DirectSignaler/NiladicBond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_RegularBond
#include <hsl/haxe/_DirectSignaler/RegularBond.h>
#endif
#ifndef INCLUDED_hsl_haxe__DirectSignaler_SentinelBond
#include <hsl/haxe/_DirectSignaler/SentinelBond.h>
#endif
namespace hsl{
namespace haxe{

Void DirectSignaler_obj::__construct(Dynamic subject,Dynamic rejectNullData)
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",57)
	if ((null() == subject)){
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",58)
		hx::Throw (::haxe::exception::ArgumentNullException_obj::__new(HX_CSTRING("subject"),1));
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",60)
	this->__FieldRef(HX_CSTRING("subject")) = subject;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",61)
	this->rejectNullData = rejectNullData;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",62)
	this->sentinel = ::hsl::haxe::_DirectSignaler::SentinelBond_obj::__new();
}
;
	return null();
}

DirectSignaler_obj::~DirectSignaler_obj() { }

Dynamic DirectSignaler_obj::__CreateEmpty() { return  new DirectSignaler_obj; }
hx::ObjectPtr< DirectSignaler_obj > DirectSignaler_obj::__new(Dynamic subject,Dynamic rejectNullData)
{  hx::ObjectPtr< DirectSignaler_obj > result = new DirectSignaler_obj();
	result->__construct(subject,rejectNullData);
	return result;}

Dynamic DirectSignaler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectSignaler_obj > result = new DirectSignaler_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *DirectSignaler_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::hsl::haxe::Signaler_obj)) return operator ::hsl::haxe::Signaler_obj *();
	return super::__ToInterface(inType);
}

Void DirectSignaler_obj::addBubblingTarget( ::hsl::haxe::Signaler value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::addBubblingTarget")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",65)
		if ((null() == this->bubblingTargets)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",66)
			this->bubblingTargets = ::List_obj::__new();
		}
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",68)
		this->bubblingTargets->add(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,addBubblingTarget,(void))

Void DirectSignaler_obj::addNotificationTarget( ::hsl::haxe::Signaler value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::addNotificationTarget")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",71)
		if ((null() == this->notificationTargets)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",72)
			this->notificationTargets = ::List_obj::__new();
		}
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",74)
		this->notificationTargets->add(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,addNotificationTarget,(void))

::hsl::haxe::Bond DirectSignaler_obj::bind( Dynamic listener){
	HX_SOURCE_PUSH("DirectSignaler_obj::bind")
	struct _Function_1_1{
		inline static ::hsl::haxe::_DirectSignaler::LinkedBond Block( ::hsl::haxe::DirectSignaler_obj *__this,Dynamic &listener){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",77)
			::hsl::haxe::_DirectSignaler::SentinelBond _g = __this->sentinel;
			::hsl::haxe::_DirectSignaler::LinkedBond value = ::hsl::haxe::_DirectSignaler::RegularBond_obj::__new(listener);
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",77)
			value->next = _g;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",77)
			value->previous = _g->previous;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",77)
			return _g->previous = _g->previous->next = value;
		}
	};
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",77)
	return _Function_1_1::Block(this,listener);
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,bind,return )

::hsl::haxe::Bond DirectSignaler_obj::bindAdvanced( Dynamic listener){
	HX_SOURCE_PUSH("DirectSignaler_obj::bindAdvanced")
	struct _Function_1_1{
		inline static ::hsl::haxe::_DirectSignaler::LinkedBond Block( ::hsl::haxe::DirectSignaler_obj *__this,Dynamic &listener){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",80)
			::hsl::haxe::_DirectSignaler::SentinelBond _g = __this->sentinel;
			::hsl::haxe::_DirectSignaler::LinkedBond value = ::hsl::haxe::_DirectSignaler::AdvancedBond_obj::__new(listener);
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",80)
			value->next = _g;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",80)
			value->previous = _g->previous;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",80)
			return _g->previous = _g->previous->next = value;
		}
	};
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",80)
	return _Function_1_1::Block(this,listener);
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,bindAdvanced,return )

::hsl::haxe::Bond DirectSignaler_obj::bindVoid( Dynamic listener){
	HX_SOURCE_PUSH("DirectSignaler_obj::bindVoid")
	struct _Function_1_1{
		inline static ::hsl::haxe::_DirectSignaler::LinkedBond Block( ::hsl::haxe::DirectSignaler_obj *__this,Dynamic &listener){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",83)
			::hsl::haxe::_DirectSignaler::SentinelBond _g = __this->sentinel;
			::hsl::haxe::_DirectSignaler::LinkedBond value = ::hsl::haxe::_DirectSignaler::NiladicBond_obj::__new(listener);
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",83)
			value->next = _g;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",83)
			value->previous = _g->previous;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",83)
			return _g->previous = _g->previous->next = value;
		}
	};
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",83)
	return _Function_1_1::Block(this,listener);
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,bindVoid,return )

Void DirectSignaler_obj::bubble( Dynamic data,Dynamic origin){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::bubble")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",86)
		if ((null() != this->bubblingTargets)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",87)
			for(::cpp::FastIterator_obj< ::hsl::haxe::Signaler > *__it = ::cpp::CreateFastIterator< ::hsl::haxe::Signaler >(this->bubblingTargets->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
				::hsl::haxe::Signaler bubblingTarget = __it->next();
				{
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",88)
					bubblingTarget->dispatch(data,origin,hx::SourceInfo(HX_CSTRING("DirectSignaler.hx"),88,HX_CSTRING("hsl.haxe.DirectSignaler"),HX_CSTRING("bubble")));
				}
;
				__SAFE_POINT
			}
		}
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",91)
		if ((null() != this->notificationTargets)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",92)
			for(::cpp::FastIterator_obj< ::hsl::haxe::Signaler > *__it = ::cpp::CreateFastIterator< ::hsl::haxe::Signaler >(this->notificationTargets->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
				::hsl::haxe::Signaler notificationTarget = __it->next();
				{
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",93)
					notificationTarget->dispatch(null(),origin,hx::SourceInfo(HX_CSTRING("DirectSignaler.hx"),93,HX_CSTRING("hsl.haxe.DirectSignaler"),HX_CSTRING("bubble")));
				}
;
				__SAFE_POINT
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DirectSignaler_obj,bubble,(void))

Void DirectSignaler_obj::dispatch( Dynamic data,Dynamic origin,Dynamic positionInformation){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::dispatch")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",125)
		if ((bool((HX_CSTRING("dispatchNative") != positionInformation->__Field(HX_CSTRING("methodName")).Cast< ::String >())) && bool((HX_CSTRING("bubble") != positionInformation->__Field(HX_CSTRING("methodName")).Cast< ::String >())))){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",126)
			this->verifyCaller(positionInformation);
		}
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",131)
		if ((bool(this->rejectNullData) && bool((null() == data)))){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",132)
			hx::Throw (::haxe::exception::Exception_obj::__new(HX_CSTRING("Some data that was passed is null, but this signaler has been set to reject null data."),null(),1));
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::hsl::haxe::DirectSignaler_obj *__this){
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",135)
				return __this->__Field(HX_CSTRING("subject"));
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &origin){
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",135)
				return origin;
			}
		};
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",135)
		origin = (  ((null() == origin)) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(_Function_1_2::Block(origin)) );
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",137)
		if ((3 == this->sentinel->callListener(data,this->__Field(HX_CSTRING("subject")),origin,3))){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",138)
			{
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",138)
				if ((null() != this->bubblingTargets)){
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",138)
					for(::cpp::FastIterator_obj< ::hsl::haxe::Signaler > *__it = ::cpp::CreateFastIterator< ::hsl::haxe::Signaler >(this->bubblingTargets->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
						::hsl::haxe::Signaler bubblingTarget = __it->next();
						{
							HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",138)
							bubblingTarget->dispatch(data,origin,hx::SourceInfo(HX_CSTRING("DirectSignaler.hx"),88,HX_CSTRING("hsl.haxe.DirectSignaler"),HX_CSTRING("bubble")));
						}
;
						__SAFE_POINT
					}
				}
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",138)
				if ((null() != this->notificationTargets)){
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",138)
					for(::cpp::FastIterator_obj< ::hsl::haxe::Signaler > *__it = ::cpp::CreateFastIterator< ::hsl::haxe::Signaler >(this->notificationTargets->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
						::hsl::haxe::Signaler notificationTarget = __it->next();
						{
							HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",138)
							notificationTarget->dispatch(null(),origin,hx::SourceInfo(HX_CSTRING("DirectSignaler.hx"),93,HX_CSTRING("hsl.haxe.DirectSignaler"),HX_CSTRING("bubble")));
						}
;
						__SAFE_POINT
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DirectSignaler_obj,dispatch,(void))

bool DirectSignaler_obj::getIsListenedTo( ){
	HX_SOURCE_PUSH("DirectSignaler_obj::getIsListenedTo")
	struct _Function_1_1{
		inline static bool Block( ::hsl::haxe::DirectSignaler_obj *__this){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",142)
			::hsl::haxe::_DirectSignaler::SentinelBond _g = __this->sentinel;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",142)
			return (_g->next != _g);
		}
	};
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",142)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DirectSignaler_obj,getIsListenedTo,return )

Dynamic DirectSignaler_obj::getOrigin( Dynamic origin){
	HX_SOURCE_PUSH("DirectSignaler_obj::getOrigin")
	struct _Function_1_1{
		inline static Dynamic Block( ::hsl::haxe::DirectSignaler_obj *__this){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",150)
			return __this->__Field(HX_CSTRING("subject"));
		}
	};
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &origin){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",152)
			return origin;
		}
	};
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",148)
	return (  ((null() == origin)) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(_Function_1_2::Block(origin)) );
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,getOrigin,return )

Void DirectSignaler_obj::verifyCaller( Dynamic positionInformation){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::verifyCaller")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",168)
		if ((null() == this->subjectClassNames)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",169)
			this->subjectClassNames = ::haxe::TypeTools_obj::getClassNames(this->__Field(HX_CSTRING("subject")));
		}
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",171)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->subjectClassNames->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
			::String subjectClassName = __it->next();
			{
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",172)
				if ((subjectClassName == positionInformation->__Field(HX_CSTRING("className")).Cast< ::String >())){
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",173)
					return null();
				}
			}
;
			__SAFE_POINT
		}
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",176)
		hx::Throw (::haxe::exception::Exception_obj::__new(HX_CSTRING("This method may only be called by the subject of the signaler."),null(),2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,verifyCaller,(void))

Void DirectSignaler_obj::removeBubblingTarget( ::hsl::haxe::Signaler value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::removeBubblingTarget")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",180)
		if ((null() != this->bubblingTargets)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",181)
			this->bubblingTargets->remove(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,removeBubblingTarget,(void))

Void DirectSignaler_obj::removeNotificationTarget( ::hsl::haxe::Signaler value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::removeNotificationTarget")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",185)
		if ((null() != this->notificationTargets)){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",186)
			this->notificationTargets->remove(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,removeNotificationTarget,(void))

Void DirectSignaler_obj::unbind( Dynamic listener){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::unbind")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
		{
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
			::hsl::haxe::_DirectSignaler::SentinelBond _g = this->sentinel;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
			::hsl::haxe::_DirectSignaler::LinkedBond node = _g->next;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
			while((node != _g)){
				__SAFE_POINT
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
				if (node->determineEquals(::hsl::haxe::_DirectSignaler::RegularBond_obj::__new(listener))){
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
					if ((false == node->destroyed)){
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
						node->previous->next = node->next;
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
						node->next->previous = node->previous;
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
						node->destroyed = true;
					}
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
					break;
				}
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",195)
				node = node->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,unbind,(void))

Void DirectSignaler_obj::unbindAdvanced( Dynamic listener){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::unbindAdvanced")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
		{
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
			::hsl::haxe::_DirectSignaler::SentinelBond _g = this->sentinel;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
			::hsl::haxe::_DirectSignaler::LinkedBond node = _g->next;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
			while((node != _g)){
				__SAFE_POINT
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
				if (node->determineEquals(::hsl::haxe::_DirectSignaler::AdvancedBond_obj::__new(listener))){
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
					if ((false == node->destroyed)){
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
						node->previous->next = node->next;
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
						node->next->previous = node->previous;
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
						node->destroyed = true;
					}
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
					break;
				}
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",198)
				node = node->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,unbindAdvanced,(void))

Void DirectSignaler_obj::unbindVoid( Dynamic listener){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DirectSignaler_obj::unbindVoid")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
		{
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
			::hsl::haxe::_DirectSignaler::SentinelBond _g = this->sentinel;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
			::hsl::haxe::_DirectSignaler::LinkedBond node = _g->next;
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
			while((node != _g)){
				__SAFE_POINT
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
				if (node->determineEquals(::hsl::haxe::_DirectSignaler::NiladicBond_obj::__new(listener))){
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
					if ((false == node->destroyed)){
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
						node->previous->next = node->next;
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
						node->next->previous = node->previous;
						HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
						node->destroyed = true;
					}
					HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
					break;
				}
				HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/DirectSignaler.hx",201)
				node = node->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectSignaler_obj,unbindVoid,(void))


DirectSignaler_obj::DirectSignaler_obj()
{
}

void DirectSignaler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectSignaler);
	HX_MARK_MEMBER_NAME(bubblingTargets,"bubblingTargets");
	HX_MARK_MEMBER_NAME(isListenedTo,"isListenedTo");
	HX_MARK_MEMBER_NAME(notificationTargets,"notificationTargets");
	HX_MARK_MEMBER_NAME(rejectNullData,"rejectNullData");
	HX_MARK_MEMBER_NAME(sentinel,"sentinel");
	HX_MARK_MEMBER_NAME(subject,"subject");
	HX_MARK_MEMBER_NAME(subjectClassNames,"subjectClassNames");
	HX_MARK_END_CLASS();
}

Dynamic DirectSignaler_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bubble") ) { return bubble_dyn(); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subject") ) { return subject; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sentinel") ) { return sentinel; }
		if (HX_FIELD_EQ(inName,"bindVoid") ) { return bindVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getOrigin") ) { return getOrigin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unbindVoid") ) { return unbindVoid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isListenedTo") ) { return getIsListenedTo(); }
		if (HX_FIELD_EQ(inName,"bindAdvanced") ) { return bindAdvanced_dyn(); }
		if (HX_FIELD_EQ(inName,"verifyCaller") ) { return verifyCaller_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rejectNullData") ) { return rejectNullData; }
		if (HX_FIELD_EQ(inName,"unbindAdvanced") ) { return unbindAdvanced_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bubblingTargets") ) { return bubblingTargets; }
		if (HX_FIELD_EQ(inName,"getIsListenedTo") ) { return getIsListenedTo_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"subjectClassNames") ) { return subjectClassNames; }
		if (HX_FIELD_EQ(inName,"addBubblingTarget") ) { return addBubblingTarget_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"notificationTargets") ) { return notificationTargets; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeBubblingTarget") ) { return removeBubblingTarget_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addNotificationTarget") ) { return addNotificationTarget_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"removeNotificationTarget") ) { return removeNotificationTarget_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic DirectSignaler_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"subject") ) { subject=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sentinel") ) { sentinel=inValue.Cast< ::hsl::haxe::_DirectSignaler::SentinelBond >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isListenedTo") ) { isListenedTo=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rejectNullData") ) { rejectNullData=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bubblingTargets") ) { bubblingTargets=inValue.Cast< ::List >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"subjectClassNames") ) { subjectClassNames=inValue.Cast< ::List >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"notificationTargets") ) { notificationTargets=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void DirectSignaler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bubblingTargets"));
	outFields->push(HX_CSTRING("isListenedTo"));
	outFields->push(HX_CSTRING("notificationTargets"));
	outFields->push(HX_CSTRING("rejectNullData"));
	outFields->push(HX_CSTRING("sentinel"));
	outFields->push(HX_CSTRING("subject"));
	outFields->push(HX_CSTRING("subjectClassNames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("bubblingTargets"),
	HX_CSTRING("isListenedTo"),
	HX_CSTRING("notificationTargets"),
	HX_CSTRING("rejectNullData"),
	HX_CSTRING("sentinel"),
	HX_CSTRING("subject"),
	HX_CSTRING("subjectClassNames"),
	HX_CSTRING("addBubblingTarget"),
	HX_CSTRING("addNotificationTarget"),
	HX_CSTRING("bind"),
	HX_CSTRING("bindAdvanced"),
	HX_CSTRING("bindVoid"),
	HX_CSTRING("bubble"),
	HX_CSTRING("dispatch"),
	HX_CSTRING("getIsListenedTo"),
	HX_CSTRING("getOrigin"),
	HX_CSTRING("verifyCaller"),
	HX_CSTRING("removeBubblingTarget"),
	HX_CSTRING("removeNotificationTarget"),
	HX_CSTRING("unbind"),
	HX_CSTRING("unbindAdvanced"),
	HX_CSTRING("unbindVoid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class DirectSignaler_obj::__mClass;

void DirectSignaler_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe.DirectSignaler"), hx::TCanCast< DirectSignaler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void DirectSignaler_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
