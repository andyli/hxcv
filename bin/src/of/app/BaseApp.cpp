#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
namespace app{

Void BaseApp_obj::__construct()
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",11)
	this->__FieldRef(HX_CSTRING("__handle")) = ::of::app::BaseApp_obj::_ofBaseApp_new();
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",12)
	this->events = ::of::events::Events_obj::__new(this);
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",13)
	::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBaseApp_setHandle"),2)(this->__Field(HX_CSTRING("__handle")),this);
}
;
	return null();
}

BaseApp_obj::~BaseApp_obj() { }

Dynamic BaseApp_obj::__CreateEmpty() { return  new BaseApp_obj; }
hx::ObjectPtr< BaseApp_obj > BaseApp_obj::__new()
{  hx::ObjectPtr< BaseApp_obj > result = new BaseApp_obj();
	result->__construct();
	return result;}

Dynamic BaseApp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseApp_obj > result = new BaseApp_obj();
	result->__construct();
	return result;}

Void BaseApp_obj::setup( ){
{
		HX_SOURCE_PUSH("BaseApp_obj::setup")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApp_obj,setup,(void))

Void BaseApp_obj::update( ){
{
		HX_SOURCE_PUSH("BaseApp_obj::update")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApp_obj,update,(void))

Void BaseApp_obj::draw( ){
{
		HX_SOURCE_PUSH("BaseApp_obj::draw")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApp_obj,draw,(void))

Void BaseApp_obj::exit( ){
{
		HX_SOURCE_PUSH("BaseApp_obj::exit")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApp_obj,exit,(void))

Void BaseApp_obj::windowResized( int w,int h){
{
		HX_SOURCE_PUSH("BaseApp_obj::windowResized")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseApp_obj,windowResized,(void))

Void BaseApp_obj::keyPressed( int key){
{
		HX_SOURCE_PUSH("BaseApp_obj::keyPressed")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApp_obj,keyPressed,(void))

Void BaseApp_obj::keyReleased( int key){
{
		HX_SOURCE_PUSH("BaseApp_obj::keyReleased")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApp_obj,keyReleased,(void))

Void BaseApp_obj::mouseMoved( int x,int y){
{
		HX_SOURCE_PUSH("BaseApp_obj::mouseMoved")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseApp_obj,mouseMoved,(void))

Void BaseApp_obj::mouseDragged( int x,int y,int button){
{
		HX_SOURCE_PUSH("BaseApp_obj::mouseDragged")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BaseApp_obj,mouseDragged,(void))

Void BaseApp_obj::mousePressed( int x,int y,int button){
{
		HX_SOURCE_PUSH("BaseApp_obj::mousePressed")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BaseApp_obj,mousePressed,(void))

Void BaseApp_obj::mouseReleased( Dynamic x,Dynamic y,Dynamic button){
{
		HX_SOURCE_PUSH("BaseApp_obj::mouseReleased")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BaseApp_obj,mouseReleased,(void))

Void BaseApp_obj::audioReceived( Array< double > input,int bufferSize,int nChannels){
{
		HX_SOURCE_PUSH("BaseApp_obj::audioReceived")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BaseApp_obj,audioReceived,(void))

Void BaseApp_obj::audioRequested( Array< double > output,int bufferSize,int nChannels){
{
		HX_SOURCE_PUSH("BaseApp_obj::audioRequested")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BaseApp_obj,audioRequested,(void))

int BaseApp_obj::__getMouseX( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("BaseApp_obj::__getMouseX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",42)
	return ::of::app::BaseApp_obj::_ofBaseApp_getMouseX(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApp_obj,__getMouseX,return )

int BaseApp_obj::__getMouseY( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("BaseApp_obj::__getMouseY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",45)
	return ::of::app::BaseApp_obj::_ofBaseApp_getMouseY(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApp_obj,__getMouseY,return )

Void BaseApp_obj::__mouseDragged( Dynamic args){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("BaseApp_obj::__mouseDragged")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",49)
		this->mouseDragged(args->__Field(HX_CSTRING("x")).Cast< int >(),args->__Field(HX_CSTRING("y")).Cast< int >(),args->__Field(HX_CSTRING("button")).Cast< int >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApp_obj,__mouseDragged,(void))

Void BaseApp_obj::__mousePressed( Dynamic args){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("BaseApp_obj::__mousePressed")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",53)
		this->mousePressed(args->__Field(HX_CSTRING("x")).Cast< int >(),args->__Field(HX_CSTRING("y")).Cast< int >(),args->__Field(HX_CSTRING("button")).Cast< int >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApp_obj,__mousePressed,(void))

Void BaseApp_obj::__mouseReleased( Dynamic args){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("BaseApp_obj::__mouseReleased")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",57)
		this->mouseReleased(args->__Field(HX_CSTRING("x")).Cast< int >(),args->__Field(HX_CSTRING("y")).Cast< int >(),args->__Field(HX_CSTRING("button")).Cast< int >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApp_obj,__mouseReleased,(void))

Void BaseApp_obj::__audioReceived( Dynamic args){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("BaseApp_obj::__audioReceived")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",61)
		this->audioReceived(args->__Field(HX_CSTRING("input")).Cast< Array< double > >(),args->__Field(HX_CSTRING("bufferSize")).Cast< int >(),args->__Field(HX_CSTRING("nChannels")).Cast< int >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApp_obj,__audioReceived,(void))

Void BaseApp_obj::__audioRequested( Dynamic args){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("BaseApp_obj::__audioRequested")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",64)
		if ((args == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",65)
			::haxe::Log_obj::trace(HX_CSTRING("args == null"),hx::SourceInfo(HX_CSTRING("BaseApp.hx"),65,HX_CSTRING("of.app.BaseApp"),HX_CSTRING("__audioRequested")));
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",66)
			return null();
		}
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",68)
		if ((args->__Field(HX_CSTRING("nChannels")).Cast< int >() == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",69)
			::haxe::Log_obj::trace(HX_CSTRING("args.nChannels"),hx::SourceInfo(HX_CSTRING("BaseApp.hx"),69,HX_CSTRING("of.app.BaseApp"),HX_CSTRING("__audioRequested")));
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",70)
			return null();
		}
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",72)
		if ((args->__Field(HX_CSTRING("bufferSize")).Cast< int >() == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",73)
			::haxe::Log_obj::trace(HX_CSTRING("args.bufferSize == null"),hx::SourceInfo(HX_CSTRING("BaseApp.hx"),73,HX_CSTRING("of.app.BaseApp"),HX_CSTRING("__audioRequested")));
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",74)
			return null();
		}
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",76)
		if ((args->__Field(HX_CSTRING("output")).Cast< Array< double > >() == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",77)
			::haxe::Log_obj::trace(HX_CSTRING("args.output == null"),hx::SourceInfo(HX_CSTRING("BaseApp.hx"),77,HX_CSTRING("of.app.BaseApp"),HX_CSTRING("__audioRequested")));
			HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",78)
			return null();
		}
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",80)
		this->audioRequested(args->__Field(HX_CSTRING("output")).Cast< Array< double > >(),args->__Field(HX_CSTRING("bufferSize")).Cast< int >(),args->__Field(HX_CSTRING("nChannels")).Cast< int >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApp_obj,__audioRequested,(void))

Void BaseApp_obj::__dispatch( ::hsl::haxe::Signaler signaler,Dynamic args){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("BaseApp_obj::__dispatch")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/BaseApp.hx",84)
		signaler->dispatch(args,null(),hx::SourceInfo(HX_CSTRING("BaseApp.hx"),84,HX_CSTRING("of.app.BaseApp"),HX_CSTRING("__dispatch")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseApp_obj,__dispatch,(void))

Dynamic BaseApp_obj::_ofBaseApp_new;

Dynamic BaseApp_obj::_ofBaseApp_getMouseX;

Dynamic BaseApp_obj::_ofBaseApp_getMouseY;


BaseApp_obj::BaseApp_obj()
{
}

void BaseApp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseApp);
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic BaseApp_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return __getMouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return __getMouseY(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMoved") ) { return mouseMoved_dyn(); }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return __dispatch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"__getMouseX") ) { return __getMouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"__getMouseY") ) { return __getMouseY_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseDragged") ) { return mouseDragged_dyn(); }
		if (HX_FIELD_EQ(inName,"mousePressed") ) { return mousePressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"windowResized") ) { return windowResized_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { return mouseReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"audioReceived") ) { return audioReceived_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofBaseApp_new") ) { return _ofBaseApp_new; }
		if (HX_FIELD_EQ(inName,"audioRequested") ) { return audioRequested_dyn(); }
		if (HX_FIELD_EQ(inName,"__mouseDragged") ) { return __mouseDragged_dyn(); }
		if (HX_FIELD_EQ(inName,"__mousePressed") ) { return __mousePressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__mouseReleased") ) { return __mouseReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"__audioReceived") ) { return __audioReceived_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__audioRequested") ) { return __audioRequested_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofBaseApp_getMouseX") ) { return _ofBaseApp_getMouseX; }
		if (HX_FIELD_EQ(inName,"_ofBaseApp_getMouseY") ) { return _ofBaseApp_getMouseY; }
	}
	return super::__Field(inName);
}

Dynamic BaseApp_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::of::events::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofBaseApp_new") ) { _ofBaseApp_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofBaseApp_getMouseX") ) { _ofBaseApp_getMouseX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofBaseApp_getMouseY") ) { _ofBaseApp_getMouseY=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void BaseApp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("events"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofBaseApp_new"),
	HX_CSTRING("_ofBaseApp_getMouseX"),
	HX_CSTRING("_ofBaseApp_getMouseY"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("events"),
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
	HX_CSTRING("mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__getMouseX"),
	HX_CSTRING("__getMouseY"),
	HX_CSTRING("__mouseDragged"),
	HX_CSTRING("__mousePressed"),
	HX_CSTRING("__mouseReleased"),
	HX_CSTRING("__audioReceived"),
	HX_CSTRING("__audioRequested"),
	HX_CSTRING("__dispatch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseApp_obj::_ofBaseApp_new,"_ofBaseApp_new");
	HX_MARK_MEMBER_NAME(BaseApp_obj::_ofBaseApp_getMouseX,"_ofBaseApp_getMouseX");
	HX_MARK_MEMBER_NAME(BaseApp_obj::_ofBaseApp_getMouseY,"_ofBaseApp_getMouseY");
};

Class BaseApp_obj::__mClass;

void BaseApp_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.app.BaseApp"), hx::TCanCast< BaseApp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BaseApp_obj::__boot()
{
	hx::Static(_ofBaseApp_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBaseApp_new"),0);
	hx::Static(_ofBaseApp_getMouseX) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBaseApp_getMouseX"),1);
	hx::Static(_ofBaseApp_getMouseY) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBaseApp_getMouseY"),1);
}

} // end namespace of
} // end namespace app
