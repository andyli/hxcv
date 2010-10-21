#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_app_AppGlutWindow
#include <of/app/AppGlutWindow.h>
#endif
#ifndef INCLUDED_of_app_BaseApp
#include <of/app/BaseApp.h>
#endif
#ifndef INCLUDED_of_utils_Point
#include <of/utils/Point.h>
#endif
namespace of{
namespace app{

Void AppGlutWindow_obj::__construct()
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",10)
	this->__FieldRef(HX_CSTRING("__handle")) = ::of::app::AppGlutWindow_obj::_ofAppGlutWindow_new();
}
;
	return null();
}

AppGlutWindow_obj::~AppGlutWindow_obj() { }

Dynamic AppGlutWindow_obj::__CreateEmpty() { return  new AppGlutWindow_obj; }
hx::ObjectPtr< AppGlutWindow_obj > AppGlutWindow_obj::__new()
{  hx::ObjectPtr< AppGlutWindow_obj > result = new AppGlutWindow_obj();
	result->__construct();
	return result;}

Dynamic AppGlutWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppGlutWindow_obj > result = new AppGlutWindow_obj();
	result->__construct();
	return result;}

Void AppGlutWindow_obj::setupOpenGL( int w,int h,int screenMode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::setupOpenGL")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",14)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setupOpenGL(this->__Field(HX_CSTRING("__handle")),w,h,screenMode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AppGlutWindow_obj,setupOpenGL,(void))

Void AppGlutWindow_obj::initializeWindow( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::initializeWindow")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",18)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_initializeWindow(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,initializeWindow,(void))

Void AppGlutWindow_obj::runAppViaInfiniteLoop( ::of::app::BaseApp appPtr){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::runAppViaInfiniteLoop")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",22)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_runAppViaInfiniteLoop(this->__Field(HX_CSTRING("__handle")),appPtr->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppGlutWindow_obj,runAppViaInfiniteLoop,(void))

Void AppGlutWindow_obj::setGlutDisplayString( ::String str){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::setGlutDisplayString")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",26)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setGlutDisplayString(this->__Field(HX_CSTRING("__handle")),str);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppGlutWindow_obj,setGlutDisplayString,(void))

Void AppGlutWindow_obj::hideCursor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::hideCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",30)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_hideCursor(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,hideCursor,(void))

Void AppGlutWindow_obj::showCursor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::showCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",34)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_showCursor(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,showCursor,(void))

Void AppGlutWindow_obj::setFullscreen( bool fullScreen){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::setFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",38)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setFullscreen(this->__Field(HX_CSTRING("__handle")),fullScreen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppGlutWindow_obj,setFullscreen,(void))

Void AppGlutWindow_obj::toggleFullscreen( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::toggleFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",42)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_toggleFullscreen(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,toggleFullscreen,(void))

Void AppGlutWindow_obj::setWindowTitle( ::String title){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::setWindowTitle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",50)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setWindowTitle(this->__Field(HX_CSTRING("__handle")),title);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppGlutWindow_obj,setWindowTitle,(void))

Void AppGlutWindow_obj::setWindowPosition( int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::setWindowPosition")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",54)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setWindowPosition(this->__Field(HX_CSTRING("__handle")),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AppGlutWindow_obj,setWindowPosition,(void))

Void AppGlutWindow_obj::setWindowShape( int w,int h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::setWindowShape")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",58)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setWindowShape(this->__Field(HX_CSTRING("__handle")),w,h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AppGlutWindow_obj,setWindowShape,(void))

::of::utils::Point AppGlutWindow_obj::getWindowPosition( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::getWindowPosition")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",63)
	return ::of::utils::Point_obj::__new(null(),null(),null(),::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getWindowPosition(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,getWindowPosition,return )

::of::utils::Point AppGlutWindow_obj::getWindowSize( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::getWindowSize")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",67)
	return ::of::utils::Point_obj::__new(null(),null(),null(),::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getWindowSize(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,getWindowSize,return )

::of::utils::Point AppGlutWindow_obj::getScreenSize( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::getScreenSize")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",71)
	return ::of::utils::Point_obj::__new(null(),null(),null(),::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getScreenSize(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,getScreenSize,return )

int AppGlutWindow_obj::getWindowMode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::getWindowMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",76)
	return ::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getWindowMode(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,getWindowMode,return )

int AppGlutWindow_obj::getFrameNum( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::getFrameNum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",81)
	return ::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getFrameNum(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,getFrameNum,return )

double AppGlutWindow_obj::getFrameRate( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::getFrameRate")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",85)
	return ::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getFrameRate(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,getFrameRate,return )

double AppGlutWindow_obj::getLastFrameTime( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::getLastFrameTime")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",89)
	return ::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getLastFrameTime(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,getLastFrameTime,return )

Void AppGlutWindow_obj::setFrameRate( double targetRate){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::setFrameRate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",93)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setFrameRate(this->__Field(HX_CSTRING("__handle")),targetRate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppGlutWindow_obj,setFrameRate,(void))

Void AppGlutWindow_obj::enableSetupScreen( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::enableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",98)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_enableSetupScreen(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,enableSetupScreen,(void))

Void AppGlutWindow_obj::disableSetupScreen( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::disableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",102)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_disableSetupScreen(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,disableSetupScreen,(void))

::String AppGlutWindow_obj::__getDisplayString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::__getDisplayString")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",147)
	return ::of::app::AppGlutWindow_obj::_ofAppGlutWindow_getDisplayString(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,__getDisplayString,return )

::String AppGlutWindow_obj::__setDisplayString( ::String str){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppGlutWindow_obj::__setDisplayString")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",151)
	return ::of::app::AppGlutWindow_obj::_ofAppGlutWindow_setDisplayString(this->__Field(HX_CSTRING("__handle")),str);
}


HX_DEFINE_DYNAMIC_FUNC1(AppGlutWindow_obj,__setDisplayString,return )

Void AppGlutWindow_obj::exitApp( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::exitApp")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",46)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_exitApp();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,exitApp,(void))

Void AppGlutWindow_obj::display( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::display")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",107)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_display();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,display,(void))

Void AppGlutWindow_obj::mouse_cb( int button,int state,int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::mouse_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",111)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_mouse_cb(button,state,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AppGlutWindow_obj,mouse_cb,(void))

Void AppGlutWindow_obj::motion_cb( int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::motion_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",115)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_motion_cb(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AppGlutWindow_obj,motion_cb,(void))

Void AppGlutWindow_obj::passive_motion_cb( int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::passive_motion_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",119)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_passive_motion_cb(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AppGlutWindow_obj,passive_motion_cb,(void))

Void AppGlutWindow_obj::idle_cb( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::idle_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",123)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_idle_cb();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppGlutWindow_obj,idle_cb,(void))

Void AppGlutWindow_obj::keyboard_cb( int key,int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::keyboard_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",127)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_keyboard_cb(key,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AppGlutWindow_obj,keyboard_cb,(void))

Void AppGlutWindow_obj::keyboard_up_cb( int key,int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::keyboard_up_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",131)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_keyboard_up_cb(key,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AppGlutWindow_obj,keyboard_up_cb,(void))

Void AppGlutWindow_obj::special_key_cb( int key,int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::special_key_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",134)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_special_key_cb(key,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AppGlutWindow_obj,special_key_cb,(void))

Void AppGlutWindow_obj::special_key_up_cb( int key,int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::special_key_up_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",137)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_special_key_up_cb(key,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AppGlutWindow_obj,special_key_up_cb,(void))

Void AppGlutWindow_obj::resize_cb( int w,int h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppGlutWindow_obj::resize_cb")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppGlutWindow.hx",141)
		::of::app::AppGlutWindow_obj::_ofAppGlutWindow_resize_cb(w,h);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AppGlutWindow_obj,resize_cb,(void))

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_new;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setupOpenGL;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_initializeWindow;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_runAppViaInfiniteLoop;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setGlutDisplayString;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_hideCursor;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_showCursor;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setFullscreen;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_toggleFullscreen;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_exitApp;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setWindowTitle;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setWindowPosition;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setWindowShape;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getWindowPosition;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getWindowSize;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getScreenSize;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getWindowMode;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getFrameNum;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getFrameRate;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getLastFrameTime;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setFrameRate;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_enableSetupScreen;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_disableSetupScreen;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_display;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_mouse_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_motion_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_passive_motion_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_idle_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_keyboard_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_keyboard_up_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_special_key_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_special_key_up_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_resize_cb;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_getDisplayString;

Dynamic AppGlutWindow_obj::_ofAppGlutWindow_setDisplayString;


AppGlutWindow_obj::AppGlutWindow_obj()
{
}

void AppGlutWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppGlutWindow);
	HX_MARK_MEMBER_NAME(displayString,"displayString");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic AppGlutWindow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"exitApp") ) { return exitApp_dyn(); }
		if (HX_FIELD_EQ(inName,"display") ) { return display_dyn(); }
		if (HX_FIELD_EQ(inName,"idle_cb") ) { return idle_cb_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mouse_cb") ) { return mouse_cb_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"motion_cb") ) { return motion_cb_dyn(); }
		if (HX_FIELD_EQ(inName,"resize_cb") ) { return resize_cb_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideCursor") ) { return hideCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyboard_cb") ) { return keyboard_cb_dyn(); }
		if (HX_FIELD_EQ(inName,"setupOpenGL") ) { return setupOpenGL_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameNum") ) { return getFrameNum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"getWindowSize") ) { return getWindowSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenSize") ) { return getScreenSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getWindowMode") ) { return getWindowMode_dyn(); }
		if (HX_FIELD_EQ(inName,"displayString") ) { return displayString; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboard_up_cb") ) { return keyboard_up_cb_dyn(); }
		if (HX_FIELD_EQ(inName,"special_key_cb") ) { return special_key_cb_dyn(); }
		if (HX_FIELD_EQ(inName,"setWindowTitle") ) { return setWindowTitle_dyn(); }
		if (HX_FIELD_EQ(inName,"setWindowShape") ) { return setWindowShape_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initializeWindow") ) { return initializeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleFullscreen") ) { return toggleFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastFrameTime") ) { return getLastFrameTime_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"passive_motion_cb") ) { return passive_motion_cb_dyn(); }
		if (HX_FIELD_EQ(inName,"special_key_up_cb") ) { return special_key_up_cb_dyn(); }
		if (HX_FIELD_EQ(inName,"setWindowPosition") ) { return setWindowPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getWindowPosition") ) { return getWindowPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"enableSetupScreen") ) { return enableSetupScreen_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"disableSetupScreen") ) { return disableSetupScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"__getDisplayString") ) { return __getDisplayString_dyn(); }
		if (HX_FIELD_EQ(inName,"__setDisplayString") ) { return __setDisplayString_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_new") ) { return _ofAppGlutWindow_new; }
		if (HX_FIELD_EQ(inName,"setGlutDisplayString") ) { return setGlutDisplayString_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"runAppViaInfiniteLoop") ) { return runAppViaInfiniteLoop_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_exitApp") ) { return _ofAppGlutWindow_exitApp; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_display") ) { return _ofAppGlutWindow_display; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_idle_cb") ) { return _ofAppGlutWindow_idle_cb; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_mouse_cb") ) { return _ofAppGlutWindow_mouse_cb; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_motion_cb") ) { return _ofAppGlutWindow_motion_cb; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_resize_cb") ) { return _ofAppGlutWindow_resize_cb; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_hideCursor") ) { return _ofAppGlutWindow_hideCursor; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_showCursor") ) { return _ofAppGlutWindow_showCursor; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setupOpenGL") ) { return _ofAppGlutWindow_setupOpenGL; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getFrameNum") ) { return _ofAppGlutWindow_getFrameNum; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_keyboard_cb") ) { return _ofAppGlutWindow_keyboard_cb; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getFrameRate") ) { return _ofAppGlutWindow_getFrameRate; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setFrameRate") ) { return _ofAppGlutWindow_setFrameRate; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setFullscreen") ) { return _ofAppGlutWindow_setFullscreen; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getWindowSize") ) { return _ofAppGlutWindow_getWindowSize; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getScreenSize") ) { return _ofAppGlutWindow_getScreenSize; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getWindowMode") ) { return _ofAppGlutWindow_getWindowMode; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setWindowTitle") ) { return _ofAppGlutWindow_setWindowTitle; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setWindowShape") ) { return _ofAppGlutWindow_setWindowShape; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_keyboard_up_cb") ) { return _ofAppGlutWindow_keyboard_up_cb; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_special_key_cb") ) { return _ofAppGlutWindow_special_key_cb; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_initializeWindow") ) { return _ofAppGlutWindow_initializeWindow; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_toggleFullscreen") ) { return _ofAppGlutWindow_toggleFullscreen; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getLastFrameTime") ) { return _ofAppGlutWindow_getLastFrameTime; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getDisplayString") ) { return _ofAppGlutWindow_getDisplayString; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setDisplayString") ) { return _ofAppGlutWindow_setDisplayString; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setWindowPosition") ) { return _ofAppGlutWindow_setWindowPosition; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getWindowPosition") ) { return _ofAppGlutWindow_getWindowPosition; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_enableSetupScreen") ) { return _ofAppGlutWindow_enableSetupScreen; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_passive_motion_cb") ) { return _ofAppGlutWindow_passive_motion_cb; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_special_key_up_cb") ) { return _ofAppGlutWindow_special_key_up_cb; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_disableSetupScreen") ) { return _ofAppGlutWindow_disableSetupScreen; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setGlutDisplayString") ) { return _ofAppGlutWindow_setGlutDisplayString; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_runAppViaInfiniteLoop") ) { return _ofAppGlutWindow_runAppViaInfiniteLoop; }
	}
	return super::__Field(inName);
}

Dynamic AppGlutWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayString") ) { displayString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_new") ) { _ofAppGlutWindow_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_exitApp") ) { _ofAppGlutWindow_exitApp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_display") ) { _ofAppGlutWindow_display=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_idle_cb") ) { _ofAppGlutWindow_idle_cb=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_mouse_cb") ) { _ofAppGlutWindow_mouse_cb=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_motion_cb") ) { _ofAppGlutWindow_motion_cb=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_resize_cb") ) { _ofAppGlutWindow_resize_cb=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_hideCursor") ) { _ofAppGlutWindow_hideCursor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_showCursor") ) { _ofAppGlutWindow_showCursor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setupOpenGL") ) { _ofAppGlutWindow_setupOpenGL=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getFrameNum") ) { _ofAppGlutWindow_getFrameNum=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_keyboard_cb") ) { _ofAppGlutWindow_keyboard_cb=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getFrameRate") ) { _ofAppGlutWindow_getFrameRate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setFrameRate") ) { _ofAppGlutWindow_setFrameRate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setFullscreen") ) { _ofAppGlutWindow_setFullscreen=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getWindowSize") ) { _ofAppGlutWindow_getWindowSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getScreenSize") ) { _ofAppGlutWindow_getScreenSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getWindowMode") ) { _ofAppGlutWindow_getWindowMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setWindowTitle") ) { _ofAppGlutWindow_setWindowTitle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setWindowShape") ) { _ofAppGlutWindow_setWindowShape=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_keyboard_up_cb") ) { _ofAppGlutWindow_keyboard_up_cb=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_special_key_cb") ) { _ofAppGlutWindow_special_key_cb=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_initializeWindow") ) { _ofAppGlutWindow_initializeWindow=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_toggleFullscreen") ) { _ofAppGlutWindow_toggleFullscreen=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getLastFrameTime") ) { _ofAppGlutWindow_getLastFrameTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getDisplayString") ) { _ofAppGlutWindow_getDisplayString=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setDisplayString") ) { _ofAppGlutWindow_setDisplayString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setWindowPosition") ) { _ofAppGlutWindow_setWindowPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_getWindowPosition") ) { _ofAppGlutWindow_getWindowPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_enableSetupScreen") ) { _ofAppGlutWindow_enableSetupScreen=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_passive_motion_cb") ) { _ofAppGlutWindow_passive_motion_cb=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_special_key_up_cb") ) { _ofAppGlutWindow_special_key_up_cb=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_disableSetupScreen") ) { _ofAppGlutWindow_disableSetupScreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_setGlutDisplayString") ) { _ofAppGlutWindow_setGlutDisplayString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"_ofAppGlutWindow_runAppViaInfiniteLoop") ) { _ofAppGlutWindow_runAppViaInfiniteLoop=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AppGlutWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("displayString"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("exitApp"),
	HX_CSTRING("display"),
	HX_CSTRING("mouse_cb"),
	HX_CSTRING("motion_cb"),
	HX_CSTRING("passive_motion_cb"),
	HX_CSTRING("idle_cb"),
	HX_CSTRING("keyboard_cb"),
	HX_CSTRING("keyboard_up_cb"),
	HX_CSTRING("special_key_cb"),
	HX_CSTRING("special_key_up_cb"),
	HX_CSTRING("resize_cb"),
	HX_CSTRING("_ofAppGlutWindow_new"),
	HX_CSTRING("_ofAppGlutWindow_setupOpenGL"),
	HX_CSTRING("_ofAppGlutWindow_initializeWindow"),
	HX_CSTRING("_ofAppGlutWindow_runAppViaInfiniteLoop"),
	HX_CSTRING("_ofAppGlutWindow_setGlutDisplayString"),
	HX_CSTRING("_ofAppGlutWindow_hideCursor"),
	HX_CSTRING("_ofAppGlutWindow_showCursor"),
	HX_CSTRING("_ofAppGlutWindow_setFullscreen"),
	HX_CSTRING("_ofAppGlutWindow_toggleFullscreen"),
	HX_CSTRING("_ofAppGlutWindow_exitApp"),
	HX_CSTRING("_ofAppGlutWindow_setWindowTitle"),
	HX_CSTRING("_ofAppGlutWindow_setWindowPosition"),
	HX_CSTRING("_ofAppGlutWindow_setWindowShape"),
	HX_CSTRING("_ofAppGlutWindow_getWindowPosition"),
	HX_CSTRING("_ofAppGlutWindow_getWindowSize"),
	HX_CSTRING("_ofAppGlutWindow_getScreenSize"),
	HX_CSTRING("_ofAppGlutWindow_getWindowMode"),
	HX_CSTRING("_ofAppGlutWindow_getFrameNum"),
	HX_CSTRING("_ofAppGlutWindow_getFrameRate"),
	HX_CSTRING("_ofAppGlutWindow_getLastFrameTime"),
	HX_CSTRING("_ofAppGlutWindow_setFrameRate"),
	HX_CSTRING("_ofAppGlutWindow_enableSetupScreen"),
	HX_CSTRING("_ofAppGlutWindow_disableSetupScreen"),
	HX_CSTRING("_ofAppGlutWindow_display"),
	HX_CSTRING("_ofAppGlutWindow_mouse_cb"),
	HX_CSTRING("_ofAppGlutWindow_motion_cb"),
	HX_CSTRING("_ofAppGlutWindow_passive_motion_cb"),
	HX_CSTRING("_ofAppGlutWindow_idle_cb"),
	HX_CSTRING("_ofAppGlutWindow_keyboard_cb"),
	HX_CSTRING("_ofAppGlutWindow_keyboard_up_cb"),
	HX_CSTRING("_ofAppGlutWindow_special_key_cb"),
	HX_CSTRING("_ofAppGlutWindow_special_key_up_cb"),
	HX_CSTRING("_ofAppGlutWindow_resize_cb"),
	HX_CSTRING("_ofAppGlutWindow_getDisplayString"),
	HX_CSTRING("_ofAppGlutWindow_setDisplayString"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setupOpenGL"),
	HX_CSTRING("initializeWindow"),
	HX_CSTRING("runAppViaInfiniteLoop"),
	HX_CSTRING("setGlutDisplayString"),
	HX_CSTRING("hideCursor"),
	HX_CSTRING("showCursor"),
	HX_CSTRING("setFullscreen"),
	HX_CSTRING("toggleFullscreen"),
	HX_CSTRING("setWindowTitle"),
	HX_CSTRING("setWindowPosition"),
	HX_CSTRING("setWindowShape"),
	HX_CSTRING("getWindowPosition"),
	HX_CSTRING("getWindowSize"),
	HX_CSTRING("getScreenSize"),
	HX_CSTRING("getWindowMode"),
	HX_CSTRING("getFrameNum"),
	HX_CSTRING("getFrameRate"),
	HX_CSTRING("getLastFrameTime"),
	HX_CSTRING("setFrameRate"),
	HX_CSTRING("enableSetupScreen"),
	HX_CSTRING("disableSetupScreen"),
	HX_CSTRING("displayString"),
	HX_CSTRING("__getDisplayString"),
	HX_CSTRING("__setDisplayString"),
	HX_CSTRING("__handle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_new,"_ofAppGlutWindow_new");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setupOpenGL,"_ofAppGlutWindow_setupOpenGL");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_initializeWindow,"_ofAppGlutWindow_initializeWindow");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_runAppViaInfiniteLoop,"_ofAppGlutWindow_runAppViaInfiniteLoop");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setGlutDisplayString,"_ofAppGlutWindow_setGlutDisplayString");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_hideCursor,"_ofAppGlutWindow_hideCursor");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_showCursor,"_ofAppGlutWindow_showCursor");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setFullscreen,"_ofAppGlutWindow_setFullscreen");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_toggleFullscreen,"_ofAppGlutWindow_toggleFullscreen");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_exitApp,"_ofAppGlutWindow_exitApp");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setWindowTitle,"_ofAppGlutWindow_setWindowTitle");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setWindowPosition,"_ofAppGlutWindow_setWindowPosition");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setWindowShape,"_ofAppGlutWindow_setWindowShape");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getWindowPosition,"_ofAppGlutWindow_getWindowPosition");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getWindowSize,"_ofAppGlutWindow_getWindowSize");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getScreenSize,"_ofAppGlutWindow_getScreenSize");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getWindowMode,"_ofAppGlutWindow_getWindowMode");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getFrameNum,"_ofAppGlutWindow_getFrameNum");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getFrameRate,"_ofAppGlutWindow_getFrameRate");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getLastFrameTime,"_ofAppGlutWindow_getLastFrameTime");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setFrameRate,"_ofAppGlutWindow_setFrameRate");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_enableSetupScreen,"_ofAppGlutWindow_enableSetupScreen");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_disableSetupScreen,"_ofAppGlutWindow_disableSetupScreen");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_display,"_ofAppGlutWindow_display");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_mouse_cb,"_ofAppGlutWindow_mouse_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_motion_cb,"_ofAppGlutWindow_motion_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_passive_motion_cb,"_ofAppGlutWindow_passive_motion_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_idle_cb,"_ofAppGlutWindow_idle_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_keyboard_cb,"_ofAppGlutWindow_keyboard_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_keyboard_up_cb,"_ofAppGlutWindow_keyboard_up_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_special_key_cb,"_ofAppGlutWindow_special_key_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_special_key_up_cb,"_ofAppGlutWindow_special_key_up_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_resize_cb,"_ofAppGlutWindow_resize_cb");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_getDisplayString,"_ofAppGlutWindow_getDisplayString");
	HX_MARK_MEMBER_NAME(AppGlutWindow_obj::_ofAppGlutWindow_setDisplayString,"_ofAppGlutWindow_setDisplayString");
};

Class AppGlutWindow_obj::__mClass;

void AppGlutWindow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.app.AppGlutWindow"), hx::TCanCast< AppGlutWindow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void AppGlutWindow_obj::__boot()
{
	hx::Static(_ofAppGlutWindow_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_new"),0);
	hx::Static(_ofAppGlutWindow_setupOpenGL) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setupOpenGL"),4);
	hx::Static(_ofAppGlutWindow_initializeWindow) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_initializeWindow"),1);
	hx::Static(_ofAppGlutWindow_runAppViaInfiniteLoop) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_runAppViaInfiniteLoop"),2);
	hx::Static(_ofAppGlutWindow_setGlutDisplayString) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setGlutDisplayString"),2);
	hx::Static(_ofAppGlutWindow_hideCursor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_hideCursor"),1);
	hx::Static(_ofAppGlutWindow_showCursor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_showCursor"),1);
	hx::Static(_ofAppGlutWindow_setFullscreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setFullscreen"),2);
	hx::Static(_ofAppGlutWindow_toggleFullscreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_toggleFullscreen"),1);
	hx::Static(_ofAppGlutWindow_exitApp) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_exitApp"),0);
	hx::Static(_ofAppGlutWindow_setWindowTitle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setWindowTitle"),2);
	hx::Static(_ofAppGlutWindow_setWindowPosition) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setWindowPosition"),3);
	hx::Static(_ofAppGlutWindow_setWindowShape) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setWindowShape"),3);
	hx::Static(_ofAppGlutWindow_getWindowPosition) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getWindowPosition"),1);
	hx::Static(_ofAppGlutWindow_getWindowSize) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getWindowSize"),1);
	hx::Static(_ofAppGlutWindow_getScreenSize) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getScreenSize"),1);
	hx::Static(_ofAppGlutWindow_getWindowMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getWindowMode"),1);
	hx::Static(_ofAppGlutWindow_getFrameNum) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getFrameNum"),1);
	hx::Static(_ofAppGlutWindow_getFrameRate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getFrameRate"),1);
	hx::Static(_ofAppGlutWindow_getLastFrameTime) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getLastFrameTime"),1);
	hx::Static(_ofAppGlutWindow_setFrameRate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setFrameRate"),2);
	hx::Static(_ofAppGlutWindow_enableSetupScreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_enableSetupScreen"),1);
	hx::Static(_ofAppGlutWindow_disableSetupScreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_disableSetupScreen"),1);
	hx::Static(_ofAppGlutWindow_display) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_display"),0);
	hx::Static(_ofAppGlutWindow_mouse_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_mouse_cb"),4);
	hx::Static(_ofAppGlutWindow_motion_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_motion_cb"),2);
	hx::Static(_ofAppGlutWindow_passive_motion_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_passive_motion_cb"),2);
	hx::Static(_ofAppGlutWindow_idle_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_idle_cb"),0);
	hx::Static(_ofAppGlutWindow_keyboard_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_keyboard_cb"),3);
	hx::Static(_ofAppGlutWindow_keyboard_up_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_keyboard_up_cb"),3);
	hx::Static(_ofAppGlutWindow_special_key_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_special_key_cb"),3);
	hx::Static(_ofAppGlutWindow_special_key_up_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_special_key_up_cb"),3);
	hx::Static(_ofAppGlutWindow_resize_cb) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_resize_cb"),2);
	hx::Static(_ofAppGlutWindow_getDisplayString) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_getDisplayString"),1);
	hx::Static(_ofAppGlutWindow_setDisplayString) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofAppGlutWindow_setDisplayString"),2);
}

} // end namespace of
} // end namespace app
