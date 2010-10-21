#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_app_AppGlutWindow
#include <of/app/AppGlutWindow.h>
#endif
#ifndef INCLUDED_of_app_AppRunner
#include <of/app/AppRunner.h>
#endif
#ifndef INCLUDED_of_app_BaseApp
#include <of/app/BaseApp.h>
#endif
namespace of{
namespace app{

Void AppRunner_obj::__construct()
{
	return null();
}

AppRunner_obj::~AppRunner_obj() { }

Dynamic AppRunner_obj::__CreateEmpty() { return  new AppRunner_obj; }
hx::ObjectPtr< AppRunner_obj > AppRunner_obj::__new()
{  hx::ObjectPtr< AppRunner_obj > result = new AppRunner_obj();
	result->__construct();
	return result;}

Dynamic AppRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppRunner_obj > result = new AppRunner_obj();
	result->__construct();
	return result;}

Void AppRunner_obj::runApp( ::of::app::BaseApp app){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::runApp")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",8)
		::of::app::AppRunner_obj::_appPtr = app;
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",9)
		::of::app::AppRunner_obj::_ofRunApp(app->__Field(HX_CSTRING("__handle")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppRunner_obj,runApp,(void))

Void AppRunner_obj::setupOpenGL( ::of::app::AppGlutWindow window,int w,int h,int screenMode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::setupOpenGL")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",13)
		::of::app::AppRunner_obj::_ofSetupOpenGL(window->__Field(HX_CSTRING("__handle")),w,h,screenMode);
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",14)
		::of::app::AppRunner_obj::_windowPtr = window;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AppRunner_obj,setupOpenGL,(void))

::of::app::BaseApp AppRunner_obj::getAppPtr( ){
	HX_SOURCE_PUSH("AppRunner_obj::getAppPtr")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",18)
	return ::of::app::AppRunner_obj::_appPtr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getAppPtr,return )

::of::app::AppGlutWindow AppRunner_obj::getWindowPtr( ){
	HX_SOURCE_PUSH("AppRunner_obj::getWindowPtr")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",22)
	return ::of::app::AppRunner_obj::_windowPtr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getWindowPtr,return )

double AppRunner_obj::getFrameRate( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getFrameRate")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",28)
	return ::of::app::AppRunner_obj::_ofGetFrameRate();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getFrameRate,return )

int AppRunner_obj::getFrameNum( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getFrameNum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",32)
	return ::of::app::AppRunner_obj::_ofGetFrameNum();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getFrameNum,return )

Void AppRunner_obj::setFrameRate( int targetRate){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::setFrameRate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",36)
		::of::app::AppRunner_obj::_ofSetFrameRate(targetRate);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppRunner_obj,setFrameRate,(void))

Void AppRunner_obj::sleepMillis( int millis){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::sleepMillis")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",40)
		::of::app::AppRunner_obj::_ofSleepMillis(millis);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppRunner_obj,sleepMillis,(void))

double AppRunner_obj::getLastFrameTime( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getLastFrameTime")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",44)
	return ::of::app::AppRunner_obj::_ofGetLastFrameTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getLastFrameTime,return )

Void AppRunner_obj::hideCursor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::hideCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",50)
		::of::app::AppRunner_obj::_ofHideCursor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,hideCursor,(void))

Void AppRunner_obj::showCursor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::showCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",54)
		::of::app::AppRunner_obj::_ofShowCursor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,showCursor,(void))

int AppRunner_obj::getWindowPositionX( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getWindowPositionX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",59)
	return ::of::app::AppRunner_obj::_ofGetWindowPositionX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getWindowPositionX,return )

int AppRunner_obj::getWindowPositionY( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getWindowPositionY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",63)
	return ::of::app::AppRunner_obj::_ofGetWindowPositionY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getWindowPositionY,return )

int AppRunner_obj::getScreenWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getScreenWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",67)
	return ::of::app::AppRunner_obj::_ofGetScreenWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getScreenWidth,return )

int AppRunner_obj::getScreenHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getScreenHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",71)
	return ::of::app::AppRunner_obj::_ofGetScreenHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getScreenHeight,return )

int AppRunner_obj::getWindowMode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getWindowMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",75)
	return ::of::app::AppRunner_obj::_ofGetWindowMode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getWindowMode,return )

int AppRunner_obj::getWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",79)
	return ::of::app::AppRunner_obj::_ofGetWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getWidth,return )

int AppRunner_obj::getHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AppRunner_obj::getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",83)
	return ::of::app::AppRunner_obj::_ofGetHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,getHeight,return )

Void AppRunner_obj::setWindowPosition( int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::setWindowPosition")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",88)
		::of::app::AppRunner_obj::_ofSetWindowPosition(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AppRunner_obj,setWindowPosition,(void))

Void AppRunner_obj::setWindowShape( int width,int height){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::setWindowShape")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",92)
		::of::app::AppRunner_obj::_ofSetWindowShape(width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AppRunner_obj,setWindowShape,(void))

Void AppRunner_obj::setWindowTitle( ::String title){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::setWindowTitle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",96)
		::of::app::AppRunner_obj::_ofSetWindowTitle(title);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppRunner_obj,setWindowTitle,(void))

Void AppRunner_obj::enableSetupScreen( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::enableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",100)
		::of::app::AppRunner_obj::_ofEnableSetupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,enableSetupScreen,(void))

Void AppRunner_obj::disableSetupScreen( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::disableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",104)
		::of::app::AppRunner_obj::_ofDisableSetupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,disableSetupScreen,(void))

Void AppRunner_obj::setFullscreen( bool fullscreen){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::setFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",108)
		::of::app::AppRunner_obj::_ofSetFullscreen(fullscreen);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppRunner_obj,setFullscreen,(void))

Void AppRunner_obj::toggleFullscreen( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::toggleFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",112)
		::of::app::AppRunner_obj::_ofToggleFullscreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppRunner_obj,toggleFullscreen,(void))

Void AppRunner_obj::setVerticalSync( bool bSync){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("AppRunner_obj::setVerticalSync")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/app/AppRunner.hx",117)
		::of::app::AppRunner_obj::_ofSetVerticalSync(bSync);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppRunner_obj,setVerticalSync,(void))

::of::app::BaseApp AppRunner_obj::_appPtr;

::of::app::AppGlutWindow AppRunner_obj::_windowPtr;

Dynamic AppRunner_obj::_ofRunApp;

Dynamic AppRunner_obj::_ofSetupOpenGL;

Dynamic AppRunner_obj::_ofGetFrameRate;

Dynamic AppRunner_obj::_ofGetFrameNum;

Dynamic AppRunner_obj::_ofSetFrameRate;

Dynamic AppRunner_obj::_ofSleepMillis;

Dynamic AppRunner_obj::_ofGetLastFrameTime;

Dynamic AppRunner_obj::_ofHideCursor;

Dynamic AppRunner_obj::_ofShowCursor;

Dynamic AppRunner_obj::_ofGetWindowPositionX;

Dynamic AppRunner_obj::_ofGetWindowPositionY;

Dynamic AppRunner_obj::_ofGetScreenWidth;

Dynamic AppRunner_obj::_ofGetScreenHeight;

Dynamic AppRunner_obj::_ofGetWindowMode;

Dynamic AppRunner_obj::_ofGetWidth;

Dynamic AppRunner_obj::_ofGetHeight;

Dynamic AppRunner_obj::_ofSetWindowPosition;

Dynamic AppRunner_obj::_ofSetWindowShape;

Dynamic AppRunner_obj::_ofSetWindowTitle;

Dynamic AppRunner_obj::_ofEnableSetupScreen;

Dynamic AppRunner_obj::_ofDisableSetupScreen;

Dynamic AppRunner_obj::_ofSetFullscreen;

Dynamic AppRunner_obj::_ofToggleFullscreen;

Dynamic AppRunner_obj::_ofSetVerticalSync;


AppRunner_obj::AppRunner_obj()
{
}

void AppRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppRunner);
	HX_MARK_END_CLASS();
}

Dynamic AppRunner_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"runApp") ) { return runApp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_appPtr") ) { return _appPtr; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getAppPtr") ) { return getAppPtr_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofRunApp") ) { return _ofRunApp; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideCursor") ) { return hideCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowPtr") ) { return _windowPtr; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setupOpenGL") ) { return setupOpenGL_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameNum") ) { return getFrameNum_dyn(); }
		if (HX_FIELD_EQ(inName,"sleepMillis") ) { return sleepMillis_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetWidth") ) { return _ofGetWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWindowPtr") ) { return getWindowPtr_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetHeight") ) { return _ofGetHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getWindowMode") ) { return getWindowMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofHideCursor") ) { return _ofHideCursor; }
		if (HX_FIELD_EQ(inName,"_ofShowCursor") ) { return _ofShowCursor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getScreenWidth") ) { return getScreenWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setWindowShape") ) { return setWindowShape_dyn(); }
		if (HX_FIELD_EQ(inName,"setWindowTitle") ) { return setWindowTitle_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofSetupOpenGL") ) { return _ofSetupOpenGL; }
		if (HX_FIELD_EQ(inName,"_ofGetFrameNum") ) { return _ofGetFrameNum; }
		if (HX_FIELD_EQ(inName,"_ofSleepMillis") ) { return _ofSleepMillis; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getScreenHeight") ) { return getScreenHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setVerticalSync") ) { return setVerticalSync_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetFrameRate") ) { return _ofGetFrameRate; }
		if (HX_FIELD_EQ(inName,"_ofSetFrameRate") ) { return _ofSetFrameRate; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getLastFrameTime") ) { return getLastFrameTime_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleFullscreen") ) { return toggleFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetWindowMode") ) { return _ofGetWindowMode; }
		if (HX_FIELD_EQ(inName,"_ofSetFullscreen") ) { return _ofSetFullscreen; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setWindowPosition") ) { return setWindowPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"enableSetupScreen") ) { return enableSetupScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetScreenWidth") ) { return _ofGetScreenWidth; }
		if (HX_FIELD_EQ(inName,"_ofSetWindowShape") ) { return _ofSetWindowShape; }
		if (HX_FIELD_EQ(inName,"_ofSetWindowTitle") ) { return _ofSetWindowTitle; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getWindowPositionX") ) { return getWindowPositionX_dyn(); }
		if (HX_FIELD_EQ(inName,"getWindowPositionY") ) { return getWindowPositionY_dyn(); }
		if (HX_FIELD_EQ(inName,"disableSetupScreen") ) { return disableSetupScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetScreenHeight") ) { return _ofGetScreenHeight; }
		if (HX_FIELD_EQ(inName,"_ofSetVerticalSync") ) { return _ofSetVerticalSync; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofGetLastFrameTime") ) { return _ofGetLastFrameTime; }
		if (HX_FIELD_EQ(inName,"_ofToggleFullscreen") ) { return _ofToggleFullscreen; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofSetWindowPosition") ) { return _ofSetWindowPosition; }
		if (HX_FIELD_EQ(inName,"_ofEnableSetupScreen") ) { return _ofEnableSetupScreen; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofGetWindowPositionX") ) { return _ofGetWindowPositionX; }
		if (HX_FIELD_EQ(inName,"_ofGetWindowPositionY") ) { return _ofGetWindowPositionY; }
		if (HX_FIELD_EQ(inName,"_ofDisableSetupScreen") ) { return _ofDisableSetupScreen; }
	}
	return super::__Field(inName);
}

Dynamic AppRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_appPtr") ) { _appPtr=inValue.Cast< ::of::app::BaseApp >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ofRunApp") ) { _ofRunApp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_windowPtr") ) { _windowPtr=inValue.Cast< ::of::app::AppGlutWindow >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ofGetWidth") ) { _ofGetWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofGetHeight") ) { _ofGetHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofHideCursor") ) { _ofHideCursor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofShowCursor") ) { _ofShowCursor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofSetupOpenGL") ) { _ofSetupOpenGL=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetFrameNum") ) { _ofGetFrameNum=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSleepMillis") ) { _ofSleepMillis=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofGetFrameRate") ) { _ofGetFrameRate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetFrameRate") ) { _ofSetFrameRate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofGetWindowMode") ) { _ofGetWindowMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetFullscreen") ) { _ofSetFullscreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofGetScreenWidth") ) { _ofGetScreenWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetWindowShape") ) { _ofSetWindowShape=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetWindowTitle") ) { _ofSetWindowTitle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofGetScreenHeight") ) { _ofGetScreenHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetVerticalSync") ) { _ofSetVerticalSync=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofGetLastFrameTime") ) { _ofGetLastFrameTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofToggleFullscreen") ) { _ofToggleFullscreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofSetWindowPosition") ) { _ofSetWindowPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofEnableSetupScreen") ) { _ofEnableSetupScreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofGetWindowPositionX") ) { _ofGetWindowPositionX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetWindowPositionY") ) { _ofGetWindowPositionY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofDisableSetupScreen") ) { _ofDisableSetupScreen=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AppRunner_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("runApp"),
	HX_CSTRING("setupOpenGL"),
	HX_CSTRING("getAppPtr"),
	HX_CSTRING("getWindowPtr"),
	HX_CSTRING("getFrameRate"),
	HX_CSTRING("getFrameNum"),
	HX_CSTRING("setFrameRate"),
	HX_CSTRING("sleepMillis"),
	HX_CSTRING("getLastFrameTime"),
	HX_CSTRING("hideCursor"),
	HX_CSTRING("showCursor"),
	HX_CSTRING("getWindowPositionX"),
	HX_CSTRING("getWindowPositionY"),
	HX_CSTRING("getScreenWidth"),
	HX_CSTRING("getScreenHeight"),
	HX_CSTRING("getWindowMode"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("setWindowPosition"),
	HX_CSTRING("setWindowShape"),
	HX_CSTRING("setWindowTitle"),
	HX_CSTRING("enableSetupScreen"),
	HX_CSTRING("disableSetupScreen"),
	HX_CSTRING("setFullscreen"),
	HX_CSTRING("toggleFullscreen"),
	HX_CSTRING("setVerticalSync"),
	HX_CSTRING("_appPtr"),
	HX_CSTRING("_windowPtr"),
	HX_CSTRING("_ofRunApp"),
	HX_CSTRING("_ofSetupOpenGL"),
	HX_CSTRING("_ofGetFrameRate"),
	HX_CSTRING("_ofGetFrameNum"),
	HX_CSTRING("_ofSetFrameRate"),
	HX_CSTRING("_ofSleepMillis"),
	HX_CSTRING("_ofGetLastFrameTime"),
	HX_CSTRING("_ofHideCursor"),
	HX_CSTRING("_ofShowCursor"),
	HX_CSTRING("_ofGetWindowPositionX"),
	HX_CSTRING("_ofGetWindowPositionY"),
	HX_CSTRING("_ofGetScreenWidth"),
	HX_CSTRING("_ofGetScreenHeight"),
	HX_CSTRING("_ofGetWindowMode"),
	HX_CSTRING("_ofGetWidth"),
	HX_CSTRING("_ofGetHeight"),
	HX_CSTRING("_ofSetWindowPosition"),
	HX_CSTRING("_ofSetWindowShape"),
	HX_CSTRING("_ofSetWindowTitle"),
	HX_CSTRING("_ofEnableSetupScreen"),
	HX_CSTRING("_ofDisableSetupScreen"),
	HX_CSTRING("_ofSetFullscreen"),
	HX_CSTRING("_ofToggleFullscreen"),
	HX_CSTRING("_ofSetVerticalSync"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppRunner_obj::_appPtr,"_appPtr");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_windowPtr,"_windowPtr");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofRunApp,"_ofRunApp");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSetupOpenGL,"_ofSetupOpenGL");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetFrameRate,"_ofGetFrameRate");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetFrameNum,"_ofGetFrameNum");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSetFrameRate,"_ofSetFrameRate");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSleepMillis,"_ofSleepMillis");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetLastFrameTime,"_ofGetLastFrameTime");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofHideCursor,"_ofHideCursor");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofShowCursor,"_ofShowCursor");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetWindowPositionX,"_ofGetWindowPositionX");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetWindowPositionY,"_ofGetWindowPositionY");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetScreenWidth,"_ofGetScreenWidth");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetScreenHeight,"_ofGetScreenHeight");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetWindowMode,"_ofGetWindowMode");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetWidth,"_ofGetWidth");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofGetHeight,"_ofGetHeight");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSetWindowPosition,"_ofSetWindowPosition");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSetWindowShape,"_ofSetWindowShape");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSetWindowTitle,"_ofSetWindowTitle");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofEnableSetupScreen,"_ofEnableSetupScreen");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofDisableSetupScreen,"_ofDisableSetupScreen");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSetFullscreen,"_ofSetFullscreen");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofToggleFullscreen,"_ofToggleFullscreen");
	HX_MARK_MEMBER_NAME(AppRunner_obj::_ofSetVerticalSync,"_ofSetVerticalSync");
};

Class AppRunner_obj::__mClass;

void AppRunner_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.app.AppRunner"), hx::TCanCast< AppRunner_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void AppRunner_obj::__boot()
{
	hx::Static(_appPtr);
	hx::Static(_windowPtr);
	hx::Static(_ofRunApp) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRunApp"),1);
	hx::Static(_ofSetupOpenGL) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetupOpenGL"),4);
	hx::Static(_ofGetFrameRate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetFrameRate"),0);
	hx::Static(_ofGetFrameNum) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetFrameNum"),0);
	hx::Static(_ofSetFrameRate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetFrameRate"),1);
	hx::Static(_ofSleepMillis) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSleepMillis"),1);
	hx::Static(_ofGetLastFrameTime) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetLastFrameTime"),0);
	hx::Static(_ofHideCursor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofHideCursor"),0);
	hx::Static(_ofShowCursor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofShowCursor"),0);
	hx::Static(_ofGetWindowPositionX) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetWindowPositionX"),0);
	hx::Static(_ofGetWindowPositionY) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetWindowPositionY"),0);
	hx::Static(_ofGetScreenWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetScreenWidth"),0);
	hx::Static(_ofGetScreenHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetScreenHeight"),0);
	hx::Static(_ofGetWindowMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetWindowMode"),0);
	hx::Static(_ofGetWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetWidth"),0);
	hx::Static(_ofGetHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetHeight"),0);
	hx::Static(_ofSetWindowPosition) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetWindowPosition"),2);
	hx::Static(_ofSetWindowShape) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetWindowShape"),2);
	hx::Static(_ofSetWindowTitle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetWindowTitle"),1);
	hx::Static(_ofEnableSetupScreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofEnableSetupScreen"),0);
	hx::Static(_ofDisableSetupScreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDisableSetupScreen"),0);
	hx::Static(_ofSetFullscreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetFullscreen"),1);
	hx::Static(_ofToggleFullscreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofToggleFullscreen"),0);
	hx::Static(_ofSetVerticalSync) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetVerticalSync"),1);
}

} // end namespace of
} // end namespace app
