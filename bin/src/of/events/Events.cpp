#include <hxcpp.h>

#ifndef INCLUDED_hsl_haxe_DirectSignaler
#include <hsl/haxe/DirectSignaler.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
#ifndef INCLUDED_of_app_BaseApp
#include <of/app/BaseApp.h>
#endif
#ifndef INCLUDED_of_events_Events
#include <of/events/Events.h>
#endif
namespace of{
namespace events{

Void Events_obj::__construct(::of::app::BaseApp subject)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",52)
	this->setup = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",53)
	this->update = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",54)
	this->draw = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",55)
	this->exit = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",56)
	this->windowResized = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",58)
	this->keyPressed = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",59)
	this->keyReleased = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",61)
	this->mouseMoved = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",62)
	this->mouseDragged = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",63)
	this->mousePressed = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",64)
	this->mouseReleased = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",66)
	this->audioReceived = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
	HX_SOURCE_POS("../../hxOpenFrameworks/of/events/Events.hx",67)
	this->audioRequested = ::hsl::haxe::DirectSignaler_obj::__new(subject,null());
}
;
	return null();
}

Events_obj::~Events_obj() { }

Dynamic Events_obj::__CreateEmpty() { return  new Events_obj; }
hx::ObjectPtr< Events_obj > Events_obj::__new(::of::app::BaseApp subject)
{  hx::ObjectPtr< Events_obj > result = new Events_obj();
	result->__construct(subject);
	return result;}

Dynamic Events_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Events_obj > result = new Events_obj();
	result->__construct(inArgs[0]);
	return result;}


Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(setup,"setup");
	HX_MARK_MEMBER_NAME(update,"update");
	HX_MARK_MEMBER_NAME(draw,"draw");
	HX_MARK_MEMBER_NAME(exit,"exit");
	HX_MARK_MEMBER_NAME(windowResized,"windowResized");
	HX_MARK_MEMBER_NAME(keyPressed,"keyPressed");
	HX_MARK_MEMBER_NAME(keyReleased,"keyReleased");
	HX_MARK_MEMBER_NAME(mouseMoved,"mouseMoved");
	HX_MARK_MEMBER_NAME(mouseDragged,"mouseDragged");
	HX_MARK_MEMBER_NAME(mousePressed,"mousePressed");
	HX_MARK_MEMBER_NAME(mouseReleased,"mouseReleased");
	HX_MARK_MEMBER_NAME(audioReceived,"audioReceived");
	HX_MARK_MEMBER_NAME(audioRequested,"audioRequested");
	HX_MARK_END_CLASS();
}

Dynamic Events_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw; }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return setup; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed; }
		if (HX_FIELD_EQ(inName,"mouseMoved") ) { return mouseMoved; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseDragged") ) { return mouseDragged; }
		if (HX_FIELD_EQ(inName,"mousePressed") ) { return mousePressed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"windowResized") ) { return windowResized; }
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { return mouseReleased; }
		if (HX_FIELD_EQ(inName,"audioReceived") ) { return audioReceived; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"audioRequested") ) { return audioRequested; }
	}
	return super::__Field(inName);
}

Dynamic Events_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { draw=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exit") ) { exit=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { setup=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { update=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyPressed") ) { keyPressed=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseMoved") ) { mouseMoved=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyReleased") ) { keyReleased=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseDragged") ) { mouseDragged=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mousePressed") ) { mousePressed=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"windowResized") ) { windowResized=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { mouseReleased=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audioReceived") ) { audioReceived=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"audioRequested") ) { audioRequested=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("setup"));
	outFields->push(HX_CSTRING("update"));
	outFields->push(HX_CSTRING("draw"));
	outFields->push(HX_CSTRING("exit"));
	outFields->push(HX_CSTRING("windowResized"));
	outFields->push(HX_CSTRING("keyPressed"));
	outFields->push(HX_CSTRING("keyReleased"));
	outFields->push(HX_CSTRING("mouseMoved"));
	outFields->push(HX_CSTRING("mouseDragged"));
	outFields->push(HX_CSTRING("mousePressed"));
	outFields->push(HX_CSTRING("mouseReleased"));
	outFields->push(HX_CSTRING("audioReceived"));
	outFields->push(HX_CSTRING("audioRequested"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setup"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("exit"),
	HX_CSTRING("windowResized"),
	HX_CSTRING("keyPressed"),
	HX_CSTRING("keyReleased"),
	HX_CSTRING("mouseMoved"),
	HX_CSTRING("mouseDragged"),
	HX_CSTRING("mousePressed"),
	HX_CSTRING("mouseReleased"),
	HX_CSTRING("audioReceived"),
	HX_CSTRING("audioRequested"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Events_obj::__mClass;

void Events_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.events.Events"), hx::TCanCast< Events_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Events_obj::__boot()
{
}

} // end namespace of
} // end namespace events
