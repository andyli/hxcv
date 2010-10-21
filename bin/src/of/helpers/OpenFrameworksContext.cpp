#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_of_graphics_Graphics
#include <of/graphics/Graphics.h>
#endif
#ifndef INCLUDED_of_helpers_OpenFrameworksContext
#include <of/helpers/OpenFrameworksContext.h>
#endif
#ifndef INCLUDED_of_sound_SoundPlayer
#include <of/sound/SoundPlayer.h>
#endif
#ifndef INCLUDED_of_sound_SoundStream
#include <of/sound/SoundStream.h>
#endif
#ifndef INCLUDED_of_utils_LogLevel
#include <of/utils/LogLevel.h>
#endif
#ifndef INCLUDED_of_utils_Math
#include <of/utils/Math.h>
#endif
#ifndef INCLUDED_of_utils_Style
#include <of/utils/Style.h>
#endif
#ifndef INCLUDED_of_utils_Utils
#include <of/utils/Utils.h>
#endif
namespace of{
namespace helpers{

Void OpenFrameworksContext_obj::__construct()
{
	return null();
}

OpenFrameworksContext_obj::~OpenFrameworksContext_obj() { }

Dynamic OpenFrameworksContext_obj::__CreateEmpty() { return  new OpenFrameworksContext_obj; }
hx::ObjectPtr< OpenFrameworksContext_obj > OpenFrameworksContext_obj::__new()
{  hx::ObjectPtr< OpenFrameworksContext_obj > result = new OpenFrameworksContext_obj();
	result->__construct();
	return result;}

Dynamic OpenFrameworksContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenFrameworksContext_obj > result = new OpenFrameworksContext_obj();
	result->__construct();
	return result;}

Void OpenFrameworksContext_obj::runApp( ::of::app::BaseApp _,::of::app::BaseApp app){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::runApp")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",16)
		return ::of::app::AppRunner_obj::runApp(app);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,runApp,(void))

Void OpenFrameworksContext_obj::setupOpenGL( ::of::app::BaseApp _,::of::app::AppGlutWindow window,int w,int h,int screenMode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setupOpenGL")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",20)
		return ::of::app::AppRunner_obj::setupOpenGL(window,w,h,screenMode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,setupOpenGL,(void))

::of::app::BaseApp OpenFrameworksContext_obj::getAppPtr( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getAppPtr")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",24)
	return ::of::app::AppRunner_obj::getAppPtr();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getAppPtr,return )

::of::app::AppGlutWindow OpenFrameworksContext_obj::getWindowPtr( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getWindowPtr")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",28)
	return ::of::app::AppRunner_obj::getWindowPtr();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getWindowPtr,return )

double OpenFrameworksContext_obj::getFrameRate( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getFrameRate")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",32)
	return ::of::app::AppRunner_obj::getFrameRate();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getFrameRate,return )

int OpenFrameworksContext_obj::getFrameNum( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getFrameNum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",36)
	return ::of::app::AppRunner_obj::getFrameNum();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getFrameNum,return )

Void OpenFrameworksContext_obj::setFrameRate( ::of::app::BaseApp _,int targetRate){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setFrameRate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",40)
		return ::of::app::AppRunner_obj::setFrameRate(targetRate);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setFrameRate,(void))

Void OpenFrameworksContext_obj::sleepMillis( ::of::app::BaseApp _,int millis){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::sleepMillis")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",44)
		return ::of::app::AppRunner_obj::sleepMillis(millis);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,sleepMillis,(void))

double OpenFrameworksContext_obj::getLastFrameTime( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getLastFrameTime")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",48)
	return ::of::app::AppRunner_obj::getLastFrameTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getLastFrameTime,return )

Void OpenFrameworksContext_obj::hideCursor( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::hideCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",52)
		return ::of::app::AppRunner_obj::hideCursor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,hideCursor,(void))

Void OpenFrameworksContext_obj::showCursor( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::showCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",56)
		return ::of::app::AppRunner_obj::showCursor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,showCursor,(void))

int OpenFrameworksContext_obj::getWindowPositionX( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getWindowPositionX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",60)
	return ::of::app::AppRunner_obj::getWindowPositionX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getWindowPositionX,return )

int OpenFrameworksContext_obj::getWindowPositionY( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getWindowPositionY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",64)
	return ::of::app::AppRunner_obj::getWindowPositionY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getWindowPositionY,return )

int OpenFrameworksContext_obj::getScreenWidth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getScreenWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",68)
	return ::of::app::AppRunner_obj::getScreenWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getScreenWidth,return )

int OpenFrameworksContext_obj::getScreenHeight( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getScreenHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",72)
	return ::of::app::AppRunner_obj::getScreenHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getScreenHeight,return )

int OpenFrameworksContext_obj::getWindowMode( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getWindowMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",76)
	return ::of::app::AppRunner_obj::getWindowMode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getWindowMode,return )

int OpenFrameworksContext_obj::getWidth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",80)
	return ::of::app::AppRunner_obj::getWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getWidth,return )

int OpenFrameworksContext_obj::getHeight( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",84)
	return ::of::app::AppRunner_obj::getHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getHeight,return )

Void OpenFrameworksContext_obj::setWindowPosition( ::of::app::BaseApp _,int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setWindowPosition")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",89)
		return ::of::app::AppRunner_obj::setWindowPosition(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,setWindowPosition,(void))

Void OpenFrameworksContext_obj::setWindowShape( ::of::app::BaseApp _,int width,int height){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setWindowShape")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",93)
		return ::of::app::AppRunner_obj::setWindowShape(width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,setWindowShape,(void))

Void OpenFrameworksContext_obj::setWindowTitle( ::of::app::BaseApp _,::String title){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setWindowTitle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",97)
		return ::of::app::AppRunner_obj::setWindowTitle(title);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setWindowTitle,(void))

Void OpenFrameworksContext_obj::enableSetupScreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::enableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",101)
		return ::of::app::AppRunner_obj::enableSetupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,enableSetupScreen,(void))

Void OpenFrameworksContext_obj::disableSetupScreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::disableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",105)
		return ::of::app::AppRunner_obj::disableSetupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,disableSetupScreen,(void))

Void OpenFrameworksContext_obj::setFullscreen( ::of::app::BaseApp _,bool fullscreen){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",109)
		return ::of::app::AppRunner_obj::setFullscreen(fullscreen);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setFullscreen,(void))

Void OpenFrameworksContext_obj::toggleFullscreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::toggleFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",113)
		return ::of::app::AppRunner_obj::toggleFullscreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,toggleFullscreen,(void))

Void OpenFrameworksContext_obj::setVerticalSync( ::of::app::BaseApp _,bool bSync){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setVerticalSync")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",117)
		return ::of::app::AppRunner_obj::setVerticalSync(bSync);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setVerticalSync,(void))

int OpenFrameworksContext_obj::nextPow2( ::of::app::BaseApp _,int input){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::nextPow2")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",121)
	return ::of::utils::Utils_obj::nextPow2(input);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,nextPow2,return )

Void OpenFrameworksContext_obj::resetElapsedTimeCounter( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::resetElapsedTimeCounter")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",125)
		return ::of::utils::Utils_obj::resetElapsedTimeCounter();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,resetElapsedTimeCounter,(void))

double OpenFrameworksContext_obj::getElapsedTimef( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getElapsedTimef")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",129)
	return ::of::utils::Utils_obj::getElapsedTimef();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getElapsedTimef,return )

int OpenFrameworksContext_obj::getElapsedTimeMillis( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getElapsedTimeMillis")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",133)
	return ::of::utils::Utils_obj::getElapsedTimeMillis();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getElapsedTimeMillis,return )

int OpenFrameworksContext_obj::getSeconds( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getSeconds")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",137)
	return ::of::utils::Utils_obj::getSeconds();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getSeconds,return )

int OpenFrameworksContext_obj::getMinutes( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getMinutes")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",141)
	return ::of::utils::Utils_obj::getMinutes();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getMinutes,return )

int OpenFrameworksContext_obj::getHours( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getHours")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",145)
	return ::of::utils::Utils_obj::getHours();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getHours,return )

double OpenFrameworksContext_obj::getSystemTime( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getSystemTime")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",149)
	return ::of::utils::Utils_obj::getSystemTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getSystemTime,return )

int OpenFrameworksContext_obj::getYear( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getYear")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",153)
	return ::of::utils::Utils_obj::getYear();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getYear,return )

int OpenFrameworksContext_obj::getMonth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getMonth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",157)
	return ::of::utils::Utils_obj::getMonth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getMonth,return )

int OpenFrameworksContext_obj::getDay( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getDay")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",161)
	return ::of::utils::Utils_obj::getDay();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getDay,return )

int OpenFrameworksContext_obj::getWeekday( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getWeekday")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",165)
	return ::of::utils::Utils_obj::getWeekday();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getWeekday,return )

Void OpenFrameworksContext_obj::launchBrowser( ::of::app::BaseApp _,::String url){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::launchBrowser")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",169)
		return ::of::utils::Utils_obj::launchBrowser(url);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,launchBrowser,(void))

Void OpenFrameworksContext_obj::enableDataPath( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::enableDataPath")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",173)
		return ::of::utils::Utils_obj::enableDataPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,enableDataPath,(void))

Void OpenFrameworksContext_obj::disableDataPath( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::disableDataPath")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",177)
		return ::of::utils::Utils_obj::disableDataPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,disableDataPath,(void))

::String OpenFrameworksContext_obj::toDataPath( ::of::app::BaseApp _,::String path,Dynamic __o_absolute){
bool absolute = __o_absolute.Default(false);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::toDataPath");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",181)
		return ::of::utils::Utils_obj::toDataPath(path,absolute);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,toDataPath,return )

Void OpenFrameworksContext_obj::setDataPathRoot( ::of::app::BaseApp _,::String root){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setDataPathRoot")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",185)
		return ::of::utils::Utils_obj::setDataPathRoot(root);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setDataPathRoot,(void))

::String OpenFrameworksContext_obj::toString( ::of::app::BaseApp _,double value,Dynamic __o_precision){
int precision = __o_precision.Default(7);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::toString");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",189)
		return ::of::utils::Utils_obj::toString(value,precision);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,toString,return )

int OpenFrameworksContext_obj::toInt( ::of::app::BaseApp _,::String intString){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::toInt")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",193)
	return ::of::utils::Utils_obj::toInt(intString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,toInt,return )

double OpenFrameworksContext_obj::toFloat( ::of::app::BaseApp _,::String floatString){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::toFloat")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",197)
	return ::of::utils::Utils_obj::toFloat(floatString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,toFloat,return )

::String OpenFrameworksContext_obj::getVersionInfo( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getVersionInfo")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",201)
	return ::of::utils::Utils_obj::getVersionInfo();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getVersionInfo,return )

Void OpenFrameworksContext_obj::saveScreen( ::of::app::BaseApp _,::String filename){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::saveScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",205)
		return ::of::utils::Utils_obj::saveScreen(filename);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,saveScreen,(void))

Void OpenFrameworksContext_obj::saveFrame( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::saveFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",209)
		return ::of::utils::Utils_obj::saveFrame();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,saveFrame,(void))

Array< ::String > OpenFrameworksContext_obj::splitString( ::of::app::BaseApp _,::String text,::String delimiter){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::splitString")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",213)
	return ::of::utils::Utils_obj::splitString(text,delimiter);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,splitString,return )

Void OpenFrameworksContext_obj::setLogLevel( ::of::app::BaseApp _,::of::utils::LogLevel logLevel){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setLogLevel")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",217)
		return ::of::utils::Utils_obj::setLogLevel(logLevel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setLogLevel,(void))

Void OpenFrameworksContext_obj::ofLog( ::of::app::BaseApp _,::of::utils::LogLevel logLevel,::String message){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::ofLog")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",221)
		return ::of::utils::Utils_obj::ofLog(logLevel,message);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,ofLog,(void))

Void OpenFrameworksContext_obj::setConsoleColor( ::of::app::BaseApp _,int color){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setConsoleColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",225)
		return ::of::utils::Utils_obj::setConsoleColor(color);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setConsoleColor,(void))

Void OpenFrameworksContext_obj::restoreConsoleColor( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::restoreConsoleColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",229)
		return ::of::utils::Utils_obj::restoreConsoleColor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,restoreConsoleColor,(void))

Void OpenFrameworksContext_obj::seedRandom( ::of::app::BaseApp _,Dynamic val){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::seedRandom")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",233)
		return ::of::utils::Math_obj::seedRandom(val);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,seedRandom,(void))

double OpenFrameworksContext_obj::random( ::of::app::BaseApp _,double val0,double val1){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::random")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",237)
	return ::of::utils::Math_obj::random(val0,val1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,random,return )

double OpenFrameworksContext_obj::randomf( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::randomf")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",241)
	return ::of::utils::Math_obj::randomf();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,randomf,return )

double OpenFrameworksContext_obj::randomuf( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::randomuf")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",245)
	return ::of::utils::Math_obj::randomuf();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,randomuf,return )

double OpenFrameworksContext_obj::normalize( ::of::app::BaseApp _,double value,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::normalize")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",249)
	return ::of::utils::Math_obj::normalize(value,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,normalize,return )

double OpenFrameworksContext_obj::map( ::of::app::BaseApp _,double value,double inputMin,double inputMax,double outputMin,double outputMax,Dynamic __o_clamp){
bool clamp = __o_clamp.Default(false);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::map");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",253)
		return ::of::utils::Math_obj::map(value,inputMin,inputMax,outputMin,outputMax,clamp);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(OpenFrameworksContext_obj,map,return )

double OpenFrameworksContext_obj::clamp( ::of::app::BaseApp _,double value,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::clamp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",257)
	return ::of::utils::Math_obj::clamp(value,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,clamp,return )

double OpenFrameworksContext_obj::lerp( ::of::app::BaseApp _,double start,double stop,double amt){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::lerp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",261)
	return ::of::utils::Math_obj::lerp(start,stop,amt);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,lerp,return )

double OpenFrameworksContext_obj::dist( ::of::app::BaseApp _,double x1,double y1,double x2,double y2){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::dist")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",265)
	return ::of::utils::Math_obj::dist(x1,y1,x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,dist,return )

double OpenFrameworksContext_obj::distSquared( ::of::app::BaseApp _,double x1,double y1,double x2,double y2){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::distSquared")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",269)
	return ::of::utils::Math_obj::distSquared(x1,y1,x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,distSquared,return )

int OpenFrameworksContext_obj::sign( ::of::app::BaseApp _,double n){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::sign")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",273)
	return ::of::utils::Math_obj::sign(n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,sign,return )

bool OpenFrameworksContext_obj::inRange( ::of::app::BaseApp _,double t,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::inRange")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",277)
	return ::of::utils::Math_obj::inRange(t,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,inRange,return )

double OpenFrameworksContext_obj::radToDeg( ::of::app::BaseApp _,double radians){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::radToDeg")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",281)
	return ::of::utils::Math_obj::radToDeg(radians);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,radToDeg,return )

double OpenFrameworksContext_obj::degToRad( ::of::app::BaseApp _,double degrees){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::degToRad")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",285)
	return ::of::utils::Math_obj::degToRad(degrees);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,degToRad,return )

double OpenFrameworksContext_obj::randomWidth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::randomWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",289)
	return ::of::utils::Math_obj::randomWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,randomWidth,return )

double OpenFrameworksContext_obj::randomHeight( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::randomHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",293)
	return ::of::utils::Math_obj::randomHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,randomHeight,return )

double OpenFrameworksContext_obj::noise( ::of::app::BaseApp _,double x,Dynamic y,Dynamic z,Dynamic w){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::noise")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",297)
	return ::of::utils::Math_obj::noise(x,y,z,w);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,noise,return )

double OpenFrameworksContext_obj::signedNoise( ::of::app::BaseApp _,double x,Dynamic y,Dynamic z,Dynamic w){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::signedNoise")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",301)
	return ::of::utils::Math_obj::signedNoise(x,y,z,w);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,signedNoise,return )

double OpenFrameworksContext_obj::abs( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::abs")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",305)
	return ::Math_obj::abs(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,abs,return )

double OpenFrameworksContext_obj::min( ::of::app::BaseApp _,double a,double b){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::min")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",308)
	return ::Math_obj::min(a,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,min,return )

double OpenFrameworksContext_obj::max( ::of::app::BaseApp _,double a,double b){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::max")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",311)
	return ::Math_obj::max(a,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,max,return )

double OpenFrameworksContext_obj::sin( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::sin")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",314)
	return ::Math_obj::sin(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,sin,return )

double OpenFrameworksContext_obj::cos( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::cos")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",317)
	return ::Math_obj::cos(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,cos,return )

double OpenFrameworksContext_obj::atan2( ::of::app::BaseApp _,double y,double x){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::atan2")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",320)
	return ::Math_obj::atan2(y,x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,atan2,return )

double OpenFrameworksContext_obj::tan( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::tan")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",323)
	return ::Math_obj::tan(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,tan,return )

double OpenFrameworksContext_obj::exp( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::exp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",326)
	return ::Math_obj::exp(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,exp,return )

double OpenFrameworksContext_obj::sqrt( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::sqrt")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",329)
	return ::Math_obj::sqrt(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,sqrt,return )

int OpenFrameworksContext_obj::round( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::round")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",332)
	return ::Math_obj::round(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,round,return )

int OpenFrameworksContext_obj::floor( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::floor")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",335)
	return ::Math_obj::floor(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,floor,return )

int OpenFrameworksContext_obj::ceil( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::ceil")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",338)
	return ::Math_obj::ceil(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,ceil,return )

double OpenFrameworksContext_obj::atan( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::atan")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",341)
	return ::Math_obj::atan(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,atan,return )

double OpenFrameworksContext_obj::asin( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::asin")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",344)
	return ::Math_obj::asin(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,asin,return )

double OpenFrameworksContext_obj::acos( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::acos")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",347)
	return ::Math_obj::acos(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,acos,return )

double OpenFrameworksContext_obj::pow( ::of::app::BaseApp _,double v,double exp){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::pow")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",350)
	return ::Math_obj::pow(v,exp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,pow,return )

double OpenFrameworksContext_obj::log( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::log")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",353)
	return ::Math_obj::log(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,log,return )

Void OpenFrameworksContext_obj::background( ::of::app::BaseApp _,int r,int g,int b){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::background")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",357)
		return ::of::graphics::Graphics_obj::background(r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,background,(void))

Void OpenFrameworksContext_obj::setBackgroundAuto( ::of::app::BaseApp _,bool bManual){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setBackgroundAuto")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",361)
		return ::of::graphics::Graphics_obj::setBackgroundAuto(bManual);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setBackgroundAuto,(void))

Void OpenFrameworksContext_obj::setRectMode( ::of::app::BaseApp _,int mode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setRectMode")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",364)
		return ::of::graphics::Graphics_obj::setRectMode(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setRectMode,(void))

bool OpenFrameworksContext_obj::getUsingArbTex( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getUsingArbTex")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",368)
	return ::of::graphics::Graphics_obj::getUsingArbTex();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getUsingArbTex,return )

Void OpenFrameworksContext_obj::enableArbTex( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::enableArbTex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",371)
		return ::of::graphics::Graphics_obj::enableArbTex();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,enableArbTex,(void))

Void OpenFrameworksContext_obj::disableArbTex( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::disableArbTex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",374)
		return ::of::graphics::Graphics_obj::disableArbTex();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,disableArbTex,(void))

bool OpenFrameworksContext_obj::bClearBg( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::bClearBg")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",378)
	return ::of::graphics::Graphics_obj::bClearBg();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,bClearBg,return )

int OpenFrameworksContext_obj::getRectMode( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getRectMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",382)
	return ::of::graphics::Graphics_obj::getRectMode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getRectMode,return )

Void OpenFrameworksContext_obj::setCurveResolution( ::of::app::BaseApp _,int res){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setCurveResolution")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",386)
		return ::of::graphics::Graphics_obj::setCurveResolution(res);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setCurveResolution,(void))

Void OpenFrameworksContext_obj::triangle( ::of::app::BaseApp _,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::triangle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",390)
		return ::of::graphics::Graphics_obj::triangle(x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(OpenFrameworksContext_obj,triangle,(void))

Void OpenFrameworksContext_obj::circle( ::of::app::BaseApp _,double x,double y,double radius){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::circle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",393)
		return ::of::graphics::Graphics_obj::circle(x,y,radius);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,circle,(void))

Void OpenFrameworksContext_obj::ellipse( ::of::app::BaseApp _,double x,double y,double width,double height){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::ellipse")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",396)
		return ::of::graphics::Graphics_obj::ellipse(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,ellipse,(void))

Void OpenFrameworksContext_obj::line( ::of::app::BaseApp _,double x1,double y1,double x2,double y2){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::line")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",399)
		return ::of::graphics::Graphics_obj::line(x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,line,(void))

Void OpenFrameworksContext_obj::rect( ::of::app::BaseApp _,double x1,double y1,double w,double h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::rect")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",402)
		return ::of::graphics::Graphics_obj::rect(x1,y1,w,h);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,rect,(void))

Void OpenFrameworksContext_obj::setCircleResolution( ::of::app::BaseApp _,int res){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setCircleResolution")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",406)
		return ::of::graphics::Graphics_obj::setCircleResolution(res);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setCircleResolution,(void))

Void OpenFrameworksContext_obj::curve( ::of::app::BaseApp _,double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::curve")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",410)
		return ::of::graphics::Graphics_obj::curve(x0,y0,x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(OpenFrameworksContext_obj,curve,(void))

Void OpenFrameworksContext_obj::bezier( ::of::app::BaseApp _,double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::bezier")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",413)
		return ::of::graphics::Graphics_obj::bezier(x0,y0,x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(OpenFrameworksContext_obj,bezier,(void))

Void OpenFrameworksContext_obj::noFill( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::noFill")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",417)
		return ::of::graphics::Graphics_obj::noFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,noFill,(void))

Void OpenFrameworksContext_obj::fill( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::fill")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",420)
		return ::of::graphics::Graphics_obj::fill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,fill,(void))

Void OpenFrameworksContext_obj::setLineWidth( ::of::app::BaseApp _,double lineWidth){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setLineWidth")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",424)
		return ::of::graphics::Graphics_obj::setLineWidth(lineWidth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setLineWidth,(void))

Void OpenFrameworksContext_obj::setColor( ::of::app::BaseApp _,int rOrHex,Dynamic g,Dynamic b,Dynamic a){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",428)
		return ::of::graphics::Graphics_obj::setColor(rOrHex,g,b,a);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,setColor,(void))

Void OpenFrameworksContext_obj::enableAlphaBlending( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::enableAlphaBlending")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",432)
		return ::of::graphics::Graphics_obj::enableAlphaBlending();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,enableAlphaBlending,(void))

Void OpenFrameworksContext_obj::disableAlphaBlending( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::disableAlphaBlending")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",435)
		return ::of::graphics::Graphics_obj::disableAlphaBlending();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,disableAlphaBlending,(void))

Void OpenFrameworksContext_obj::enableSmoothing( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::enableSmoothing")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",439)
		return ::of::graphics::Graphics_obj::enableSmoothing();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,enableSmoothing,(void))

Void OpenFrameworksContext_obj::disableSmoothing( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::disableSmoothing")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",442)
		return ::of::graphics::Graphics_obj::disableSmoothing();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,disableSmoothing,(void))

::of::utils::Style OpenFrameworksContext_obj::getStyle( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::getStyle")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",446)
	return ::of::graphics::Graphics_obj::getStyle();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,getStyle,return )

Void OpenFrameworksContext_obj::setStyle( ::of::app::BaseApp _,::of::utils::Style style){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",449)
		return ::of::graphics::Graphics_obj::setStyle(style);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setStyle,(void))

Void OpenFrameworksContext_obj::pushStyle( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::pushStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",453)
		return ::of::graphics::Graphics_obj::pushStyle();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,pushStyle,(void))

Void OpenFrameworksContext_obj::popStyle( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::popStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",456)
		return ::of::graphics::Graphics_obj::popStyle();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,popStyle,(void))

Void OpenFrameworksContext_obj::pushMatrix( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::pushMatrix")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",460)
		return ::of::graphics::Graphics_obj::pushMatrix();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,pushMatrix,(void))

Void OpenFrameworksContext_obj::popMatrix( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::popMatrix")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",463)
		return ::of::graphics::Graphics_obj::popMatrix();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,popMatrix,(void))

Void OpenFrameworksContext_obj::translate( ::of::app::BaseApp _,double x,double y,Dynamic __o_z){
double z = __o_z.Default(0);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::translate");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",466)
		return ::of::graphics::Graphics_obj::translate(x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,translate,(void))

Void OpenFrameworksContext_obj::scale( ::of::app::BaseApp _,double xAmnt,double yAmnt,Dynamic __o_zAmnt){
double zAmnt = __o_zAmnt.Default(1);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::scale");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",469)
		return ::of::graphics::Graphics_obj::scale(xAmnt,yAmnt,zAmnt);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,scale,(void))

Void OpenFrameworksContext_obj::rotate( ::of::app::BaseApp _,double degrees,Dynamic vecX,Dynamic vecY,Dynamic vecZ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::rotate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",472)
		return ::of::graphics::Graphics_obj::rotate(degrees,vecX,vecY,vecZ);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFrameworksContext_obj,rotate,(void))

Void OpenFrameworksContext_obj::rotateX( ::of::app::BaseApp _,double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::rotateX")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",475)
		return ::of::graphics::Graphics_obj::rotateX(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,rotateX,(void))

Void OpenFrameworksContext_obj::rotateY( ::of::app::BaseApp _,double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::rotateY")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",478)
		return ::of::graphics::Graphics_obj::rotateY(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,rotateY,(void))

Void OpenFrameworksContext_obj::rotateZ( ::of::app::BaseApp _,double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::rotateZ")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",481)
		return ::of::graphics::Graphics_obj::rotateZ(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,rotateZ,(void))

Void OpenFrameworksContext_obj::drawBitmapString( ::of::app::BaseApp _,::String textString,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::drawBitmapString")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",485)
		return ::of::graphics::Graphics_obj::drawBitmapString(textString,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFrameworksContext_obj,drawBitmapString,(void))

Void OpenFrameworksContext_obj::setupGraphicDefaults( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setupGraphicDefaults")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",489)
		return ::of::graphics::Graphics_obj::setupGraphicDefaults();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,setupGraphicDefaults,(void))

Void OpenFrameworksContext_obj::setupScreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",492)
		return ::of::graphics::Graphics_obj::setupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,setupScreen,(void))

Void OpenFrameworksContext_obj::curveVertex( ::of::app::BaseApp _,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::curveVertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",496)
		return ::of::graphics::Graphics_obj::curveVertex(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,curveVertex,(void))

Void OpenFrameworksContext_obj::bezierVertex( ::of::app::BaseApp _,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::bezierVertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",499)
		return ::of::graphics::Graphics_obj::bezierVertex(x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(OpenFrameworksContext_obj,bezierVertex,(void))

Void OpenFrameworksContext_obj::setPolyMode( ::of::app::BaseApp _,int mode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::setPolyMode")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",503)
		return ::of::graphics::Graphics_obj::setPolyMode(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,setPolyMode,(void))

Void OpenFrameworksContext_obj::beginShape( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::beginShape")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",506)
		return ::of::graphics::Graphics_obj::beginShape();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,beginShape,(void))

Void OpenFrameworksContext_obj::vertex( ::of::app::BaseApp _,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::vertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",509)
		return ::of::graphics::Graphics_obj::vertex(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenFrameworksContext_obj,vertex,(void))

Void OpenFrameworksContext_obj::endShape( ::of::app::BaseApp _,Dynamic __o_bClose){
bool bClose = __o_bClose.Default(false);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::endShape");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",512)
		return ::of::graphics::Graphics_obj::endShape(bClose);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,endShape,(void))

Void OpenFrameworksContext_obj::nextContour( ::of::app::BaseApp _,Dynamic __o_bClose){
bool bClose = __o_bClose.Default(false);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::nextContour");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",516)
		return ::of::graphics::Graphics_obj::nextContour(bClose);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,nextContour,(void))

Void OpenFrameworksContext_obj::soundStopAll( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundStopAll")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",520)
		return ::of::sound::SoundPlayer_obj::soundStopAll();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,soundStopAll,(void))

Void OpenFrameworksContext_obj::soundSetVolume( ::of::app::BaseApp _,double vol){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundSetVolume")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",524)
		return ::of::sound::SoundPlayer_obj::soundSetVolume(vol);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,soundSetVolume,(void))

Void OpenFrameworksContext_obj::soundUpdate( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundUpdate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",528)
		return ::of::sound::SoundPlayer_obj::soundUpdate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,soundUpdate,(void))

Array< double > OpenFrameworksContext_obj::soundGetSpectrum( ::of::app::BaseApp _,int nBands){
	__SAFE_POINT
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundGetSpectrum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",532)
	return ::of::sound::SoundPlayer_obj::soundGetSpectrum(nBands);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFrameworksContext_obj,soundGetSpectrum,return )

Void OpenFrameworksContext_obj::soundStreamSetup( ::of::app::BaseApp _,int nOutputChannels,int nInputChannels,::of::app::BaseApp OFSA,Dynamic __o_sampleRate,Dynamic __o_bufferSize,Dynamic __o_nBuffers){
int sampleRate = __o_sampleRate.Default(44100);
int bufferSize = __o_bufferSize.Default(256);
int nBuffers = __o_nBuffers.Default(4);
	HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundStreamSetup");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",536)
		return ::of::sound::SoundStream_obj::soundStreamSetup(nOutputChannels,nInputChannels,OFSA,sampleRate,bufferSize,nBuffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(OpenFrameworksContext_obj,soundStreamSetup,(void))

Void OpenFrameworksContext_obj::soundStreamStop( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundStreamStop")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",540)
		return ::of::sound::SoundStream_obj::soundStreamStop();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,soundStreamStop,(void))

Void OpenFrameworksContext_obj::soundStreamStart( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundStreamStart")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",544)
		return ::of::sound::SoundStream_obj::soundStreamStart();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,soundStreamStart,(void))

Void OpenFrameworksContext_obj::soundStreamClose( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundStreamClose")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",548)
		return ::of::sound::SoundStream_obj::soundStreamClose();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,soundStreamClose,(void))

Void OpenFrameworksContext_obj::soundStreamListDevices( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OpenFrameworksContext_obj::soundStreamListDevices")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/helpers/OpenFrameworksContext.hx",552)
		return ::of::sound::SoundStream_obj::soundStreamListDevices();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFrameworksContext_obj,soundStreamListDevices,(void))


OpenFrameworksContext_obj::OpenFrameworksContext_obj()
{
}

void OpenFrameworksContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpenFrameworksContext);
	HX_MARK_END_CLASS();
}

Dynamic OpenFrameworksContext_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"abs") ) { return abs_dyn(); }
		if (HX_FIELD_EQ(inName,"min") ) { return min_dyn(); }
		if (HX_FIELD_EQ(inName,"max") ) { return max_dyn(); }
		if (HX_FIELD_EQ(inName,"sin") ) { return sin_dyn(); }
		if (HX_FIELD_EQ(inName,"cos") ) { return cos_dyn(); }
		if (HX_FIELD_EQ(inName,"tan") ) { return tan_dyn(); }
		if (HX_FIELD_EQ(inName,"exp") ) { return exp_dyn(); }
		if (HX_FIELD_EQ(inName,"pow") ) { return pow_dyn(); }
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"sqrt") ) { return sqrt_dyn(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		if (HX_FIELD_EQ(inName,"atan") ) { return atan_dyn(); }
		if (HX_FIELD_EQ(inName,"asin") ) { return asin_dyn(); }
		if (HX_FIELD_EQ(inName,"acos") ) { return acos_dyn(); }
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		if (HX_FIELD_EQ(inName,"ofLog") ) { return ofLog_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		if (HX_FIELD_EQ(inName,"atan2") ) { return atan2_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"curve") ) { return curve_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"runApp") ) { return runApp_dyn(); }
		if (HX_FIELD_EQ(inName,"getDay") ) { return getDay_dyn(); }
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		if (HX_FIELD_EQ(inName,"circle") ) { return circle_dyn(); }
		if (HX_FIELD_EQ(inName,"bezier") ) { return bezier_dyn(); }
		if (HX_FIELD_EQ(inName,"noFill") ) { return noFill_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getYear") ) { return getYear_dyn(); }
		if (HX_FIELD_EQ(inName,"toFloat") ) { return toFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"randomf") ) { return randomf_dyn(); }
		if (HX_FIELD_EQ(inName,"inRange") ) { return inRange_dyn(); }
		if (HX_FIELD_EQ(inName,"ellipse") ) { return ellipse_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateX") ) { return rotateX_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateY") ) { return rotateY_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateZ") ) { return rotateZ_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"nextPow2") ) { return nextPow2_dyn(); }
		if (HX_FIELD_EQ(inName,"getHours") ) { return getHours_dyn(); }
		if (HX_FIELD_EQ(inName,"getMonth") ) { return getMonth_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"randomuf") ) { return randomuf_dyn(); }
		if (HX_FIELD_EQ(inName,"radToDeg") ) { return radToDeg_dyn(); }
		if (HX_FIELD_EQ(inName,"degToRad") ) { return degToRad_dyn(); }
		if (HX_FIELD_EQ(inName,"bClearBg") ) { return bClearBg_dyn(); }
		if (HX_FIELD_EQ(inName,"triangle") ) { return triangle_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"setStyle") ) { return setStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"popStyle") ) { return popStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"endShape") ) { return endShape_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getAppPtr") ) { return getAppPtr_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"saveFrame") ) { return saveFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"pushStyle") ) { return pushStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"popMatrix") ) { return popMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideCursor") ) { return hideCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"getSeconds") ) { return getSeconds_dyn(); }
		if (HX_FIELD_EQ(inName,"getMinutes") ) { return getMinutes_dyn(); }
		if (HX_FIELD_EQ(inName,"getWeekday") ) { return getWeekday_dyn(); }
		if (HX_FIELD_EQ(inName,"toDataPath") ) { return toDataPath_dyn(); }
		if (HX_FIELD_EQ(inName,"saveScreen") ) { return saveScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"seedRandom") ) { return seedRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"background") ) { return background_dyn(); }
		if (HX_FIELD_EQ(inName,"pushMatrix") ) { return pushMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"beginShape") ) { return beginShape_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setupOpenGL") ) { return setupOpenGL_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameNum") ) { return getFrameNum_dyn(); }
		if (HX_FIELD_EQ(inName,"sleepMillis") ) { return sleepMillis_dyn(); }
		if (HX_FIELD_EQ(inName,"splitString") ) { return splitString_dyn(); }
		if (HX_FIELD_EQ(inName,"setLogLevel") ) { return setLogLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"distSquared") ) { return distSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"randomWidth") ) { return randomWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"signedNoise") ) { return signedNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"setRectMode") ) { return setRectMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getRectMode") ) { return getRectMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setupScreen") ) { return setupScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"curveVertex") ) { return curveVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"setPolyMode") ) { return setPolyMode_dyn(); }
		if (HX_FIELD_EQ(inName,"nextContour") ) { return nextContour_dyn(); }
		if (HX_FIELD_EQ(inName,"soundUpdate") ) { return soundUpdate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWindowPtr") ) { return getWindowPtr_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"randomHeight") ) { return randomHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"enableArbTex") ) { return enableArbTex_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineWidth") ) { return setLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"bezierVertex") ) { return bezierVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"soundStopAll") ) { return soundStopAll_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getWindowMode") ) { return getWindowMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"getSystemTime") ) { return getSystemTime_dyn(); }
		if (HX_FIELD_EQ(inName,"launchBrowser") ) { return launchBrowser_dyn(); }
		if (HX_FIELD_EQ(inName,"disableArbTex") ) { return disableArbTex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getScreenWidth") ) { return getScreenWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setWindowShape") ) { return setWindowShape_dyn(); }
		if (HX_FIELD_EQ(inName,"setWindowTitle") ) { return setWindowTitle_dyn(); }
		if (HX_FIELD_EQ(inName,"enableDataPath") ) { return enableDataPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getVersionInfo") ) { return getVersionInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"getUsingArbTex") ) { return getUsingArbTex_dyn(); }
		if (HX_FIELD_EQ(inName,"soundSetVolume") ) { return soundSetVolume_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getScreenHeight") ) { return getScreenHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setVerticalSync") ) { return setVerticalSync_dyn(); }
		if (HX_FIELD_EQ(inName,"getElapsedTimef") ) { return getElapsedTimef_dyn(); }
		if (HX_FIELD_EQ(inName,"disableDataPath") ) { return disableDataPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setDataPathRoot") ) { return setDataPathRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"setConsoleColor") ) { return setConsoleColor_dyn(); }
		if (HX_FIELD_EQ(inName,"enableSmoothing") ) { return enableSmoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"soundStreamStop") ) { return soundStreamStop_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getLastFrameTime") ) { return getLastFrameTime_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleFullscreen") ) { return toggleFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"disableSmoothing") ) { return disableSmoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"drawBitmapString") ) { return drawBitmapString_dyn(); }
		if (HX_FIELD_EQ(inName,"soundGetSpectrum") ) { return soundGetSpectrum_dyn(); }
		if (HX_FIELD_EQ(inName,"soundStreamSetup") ) { return soundStreamSetup_dyn(); }
		if (HX_FIELD_EQ(inName,"soundStreamStart") ) { return soundStreamStart_dyn(); }
		if (HX_FIELD_EQ(inName,"soundStreamClose") ) { return soundStreamClose_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setWindowPosition") ) { return setWindowPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"enableSetupScreen") ) { return enableSetupScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"setBackgroundAuto") ) { return setBackgroundAuto_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getWindowPositionX") ) { return getWindowPositionX_dyn(); }
		if (HX_FIELD_EQ(inName,"getWindowPositionY") ) { return getWindowPositionY_dyn(); }
		if (HX_FIELD_EQ(inName,"disableSetupScreen") ) { return disableSetupScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurveResolution") ) { return setCurveResolution_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"restoreConsoleColor") ) { return restoreConsoleColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setCircleResolution") ) { return setCircleResolution_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAlphaBlending") ) { return enableAlphaBlending_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getElapsedTimeMillis") ) { return getElapsedTimeMillis_dyn(); }
		if (HX_FIELD_EQ(inName,"disableAlphaBlending") ) { return disableAlphaBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"setupGraphicDefaults") ) { return setupGraphicDefaults_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"soundStreamListDevices") ) { return soundStreamListDevices_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"resetElapsedTimeCounter") ) { return resetElapsedTimeCounter_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic OpenFrameworksContext_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void OpenFrameworksContext_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("nextPow2"),
	HX_CSTRING("resetElapsedTimeCounter"),
	HX_CSTRING("getElapsedTimef"),
	HX_CSTRING("getElapsedTimeMillis"),
	HX_CSTRING("getSeconds"),
	HX_CSTRING("getMinutes"),
	HX_CSTRING("getHours"),
	HX_CSTRING("getSystemTime"),
	HX_CSTRING("getYear"),
	HX_CSTRING("getMonth"),
	HX_CSTRING("getDay"),
	HX_CSTRING("getWeekday"),
	HX_CSTRING("launchBrowser"),
	HX_CSTRING("enableDataPath"),
	HX_CSTRING("disableDataPath"),
	HX_CSTRING("toDataPath"),
	HX_CSTRING("setDataPathRoot"),
	HX_CSTRING("toString"),
	HX_CSTRING("toInt"),
	HX_CSTRING("toFloat"),
	HX_CSTRING("getVersionInfo"),
	HX_CSTRING("saveScreen"),
	HX_CSTRING("saveFrame"),
	HX_CSTRING("splitString"),
	HX_CSTRING("setLogLevel"),
	HX_CSTRING("ofLog"),
	HX_CSTRING("setConsoleColor"),
	HX_CSTRING("restoreConsoleColor"),
	HX_CSTRING("seedRandom"),
	HX_CSTRING("random"),
	HX_CSTRING("randomf"),
	HX_CSTRING("randomuf"),
	HX_CSTRING("normalize"),
	HX_CSTRING("map"),
	HX_CSTRING("clamp"),
	HX_CSTRING("lerp"),
	HX_CSTRING("dist"),
	HX_CSTRING("distSquared"),
	HX_CSTRING("sign"),
	HX_CSTRING("inRange"),
	HX_CSTRING("radToDeg"),
	HX_CSTRING("degToRad"),
	HX_CSTRING("randomWidth"),
	HX_CSTRING("randomHeight"),
	HX_CSTRING("noise"),
	HX_CSTRING("signedNoise"),
	HX_CSTRING("abs"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("sin"),
	HX_CSTRING("cos"),
	HX_CSTRING("atan2"),
	HX_CSTRING("tan"),
	HX_CSTRING("exp"),
	HX_CSTRING("sqrt"),
	HX_CSTRING("round"),
	HX_CSTRING("floor"),
	HX_CSTRING("ceil"),
	HX_CSTRING("atan"),
	HX_CSTRING("asin"),
	HX_CSTRING("acos"),
	HX_CSTRING("pow"),
	HX_CSTRING("log"),
	HX_CSTRING("background"),
	HX_CSTRING("setBackgroundAuto"),
	HX_CSTRING("setRectMode"),
	HX_CSTRING("getUsingArbTex"),
	HX_CSTRING("enableArbTex"),
	HX_CSTRING("disableArbTex"),
	HX_CSTRING("bClearBg"),
	HX_CSTRING("getRectMode"),
	HX_CSTRING("setCurveResolution"),
	HX_CSTRING("triangle"),
	HX_CSTRING("circle"),
	HX_CSTRING("ellipse"),
	HX_CSTRING("line"),
	HX_CSTRING("rect"),
	HX_CSTRING("setCircleResolution"),
	HX_CSTRING("curve"),
	HX_CSTRING("bezier"),
	HX_CSTRING("noFill"),
	HX_CSTRING("fill"),
	HX_CSTRING("setLineWidth"),
	HX_CSTRING("setColor"),
	HX_CSTRING("enableAlphaBlending"),
	HX_CSTRING("disableAlphaBlending"),
	HX_CSTRING("enableSmoothing"),
	HX_CSTRING("disableSmoothing"),
	HX_CSTRING("getStyle"),
	HX_CSTRING("setStyle"),
	HX_CSTRING("pushStyle"),
	HX_CSTRING("popStyle"),
	HX_CSTRING("pushMatrix"),
	HX_CSTRING("popMatrix"),
	HX_CSTRING("translate"),
	HX_CSTRING("scale"),
	HX_CSTRING("rotate"),
	HX_CSTRING("rotateX"),
	HX_CSTRING("rotateY"),
	HX_CSTRING("rotateZ"),
	HX_CSTRING("drawBitmapString"),
	HX_CSTRING("setupGraphicDefaults"),
	HX_CSTRING("setupScreen"),
	HX_CSTRING("curveVertex"),
	HX_CSTRING("bezierVertex"),
	HX_CSTRING("setPolyMode"),
	HX_CSTRING("beginShape"),
	HX_CSTRING("vertex"),
	HX_CSTRING("endShape"),
	HX_CSTRING("nextContour"),
	HX_CSTRING("soundStopAll"),
	HX_CSTRING("soundSetVolume"),
	HX_CSTRING("soundUpdate"),
	HX_CSTRING("soundGetSpectrum"),
	HX_CSTRING("soundStreamSetup"),
	HX_CSTRING("soundStreamStop"),
	HX_CSTRING("soundStreamStart"),
	HX_CSTRING("soundStreamClose"),
	HX_CSTRING("soundStreamListDevices"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class OpenFrameworksContext_obj::__mClass;

void OpenFrameworksContext_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.helpers.OpenFrameworksContext"), hx::TCanCast< OpenFrameworksContext_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OpenFrameworksContext_obj::__boot()
{
}

} // end namespace of
} // end namespace helpers
