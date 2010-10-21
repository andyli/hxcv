#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_of_Functions
#include <of/Functions.h>
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

Void Functions_obj::__construct()
{
	return null();
}

Functions_obj::~Functions_obj() { }

Dynamic Functions_obj::__CreateEmpty() { return  new Functions_obj; }
hx::ObjectPtr< Functions_obj > Functions_obj::__new()
{  hx::ObjectPtr< Functions_obj > result = new Functions_obj();
	result->__construct();
	return result;}

Dynamic Functions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Functions_obj > result = new Functions_obj();
	result->__construct();
	return result;}

Void Functions_obj::runApp( ::of::app::BaseApp _,::of::app::BaseApp app){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::runApp")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",46)
		return ::of::app::AppRunner_obj::runApp(app);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,runApp,(void))

Void Functions_obj::setupOpenGL( ::of::app::BaseApp _,::of::app::AppGlutWindow window,int w,int h,int screenMode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setupOpenGL")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",50)
		return ::of::app::AppRunner_obj::setupOpenGL(window,w,h,screenMode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,setupOpenGL,(void))

::of::app::BaseApp Functions_obj::getAppPtr( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getAppPtr")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",54)
	return ::of::app::AppRunner_obj::getAppPtr();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getAppPtr,return )

::of::app::AppGlutWindow Functions_obj::getWindowPtr( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getWindowPtr")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",58)
	return ::of::app::AppRunner_obj::getWindowPtr();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getWindowPtr,return )

double Functions_obj::getFrameRate( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getFrameRate")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",62)
	return ::of::app::AppRunner_obj::getFrameRate();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getFrameRate,return )

int Functions_obj::getFrameNum( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getFrameNum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",66)
	return ::of::app::AppRunner_obj::getFrameNum();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getFrameNum,return )

Void Functions_obj::setFrameRate( ::of::app::BaseApp _,int targetRate){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setFrameRate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",70)
		return ::of::app::AppRunner_obj::setFrameRate(targetRate);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setFrameRate,(void))

Void Functions_obj::sleepMillis( ::of::app::BaseApp _,int millis){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::sleepMillis")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",74)
		return ::of::app::AppRunner_obj::sleepMillis(millis);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,sleepMillis,(void))

double Functions_obj::getLastFrameTime( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getLastFrameTime")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",78)
	return ::of::app::AppRunner_obj::getLastFrameTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getLastFrameTime,return )

Void Functions_obj::hideCursor( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::hideCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",82)
		return ::of::app::AppRunner_obj::hideCursor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,hideCursor,(void))

Void Functions_obj::showCursor( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::showCursor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",86)
		return ::of::app::AppRunner_obj::showCursor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,showCursor,(void))

int Functions_obj::getWindowPositionX( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getWindowPositionX")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",90)
	return ::of::app::AppRunner_obj::getWindowPositionX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getWindowPositionX,return )

int Functions_obj::getWindowPositionY( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getWindowPositionY")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",94)
	return ::of::app::AppRunner_obj::getWindowPositionY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getWindowPositionY,return )

int Functions_obj::getScreenWidth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getScreenWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",98)
	return ::of::app::AppRunner_obj::getScreenWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getScreenWidth,return )

int Functions_obj::getScreenHeight( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getScreenHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",102)
	return ::of::app::AppRunner_obj::getScreenHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getScreenHeight,return )

int Functions_obj::getWindowMode( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getWindowMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",106)
	return ::of::app::AppRunner_obj::getWindowMode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getWindowMode,return )

int Functions_obj::getWidth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",110)
	return ::of::app::AppRunner_obj::getWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getWidth,return )

int Functions_obj::getHeight( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",114)
	return ::of::app::AppRunner_obj::getHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getHeight,return )

Void Functions_obj::setWindowPosition( ::of::app::BaseApp _,int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setWindowPosition")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",119)
		return ::of::app::AppRunner_obj::setWindowPosition(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,setWindowPosition,(void))

Void Functions_obj::setWindowShape( ::of::app::BaseApp _,int width,int height){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setWindowShape")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",123)
		return ::of::app::AppRunner_obj::setWindowShape(width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,setWindowShape,(void))

Void Functions_obj::setWindowTitle( ::of::app::BaseApp _,::String title){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setWindowTitle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",127)
		return ::of::app::AppRunner_obj::setWindowTitle(title);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setWindowTitle,(void))

Void Functions_obj::enableSetupScreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::enableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",131)
		return ::of::app::AppRunner_obj::enableSetupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,enableSetupScreen,(void))

Void Functions_obj::disableSetupScreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::disableSetupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",135)
		return ::of::app::AppRunner_obj::disableSetupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,disableSetupScreen,(void))

Void Functions_obj::setFullscreen( ::of::app::BaseApp _,bool fullscreen){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",139)
		return ::of::app::AppRunner_obj::setFullscreen(fullscreen);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setFullscreen,(void))

Void Functions_obj::toggleFullscreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::toggleFullscreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",143)
		return ::of::app::AppRunner_obj::toggleFullscreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,toggleFullscreen,(void))

Void Functions_obj::setVerticalSync( ::of::app::BaseApp _,bool bSync){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setVerticalSync")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",147)
		return ::of::app::AppRunner_obj::setVerticalSync(bSync);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setVerticalSync,(void))

int Functions_obj::nextPow2( ::of::app::BaseApp _,int input){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::nextPow2")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",151)
	return ::of::utils::Utils_obj::nextPow2(input);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,nextPow2,return )

Void Functions_obj::resetElapsedTimeCounter( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::resetElapsedTimeCounter")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",155)
		return ::of::utils::Utils_obj::resetElapsedTimeCounter();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,resetElapsedTimeCounter,(void))

double Functions_obj::getElapsedTimef( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getElapsedTimef")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",159)
	return ::of::utils::Utils_obj::getElapsedTimef();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getElapsedTimef,return )

int Functions_obj::getElapsedTimeMillis( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getElapsedTimeMillis")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",163)
	return ::of::utils::Utils_obj::getElapsedTimeMillis();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getElapsedTimeMillis,return )

int Functions_obj::getSeconds( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getSeconds")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",167)
	return ::of::utils::Utils_obj::getSeconds();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getSeconds,return )

int Functions_obj::getMinutes( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getMinutes")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",171)
	return ::of::utils::Utils_obj::getMinutes();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getMinutes,return )

int Functions_obj::getHours( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getHours")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",175)
	return ::of::utils::Utils_obj::getHours();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getHours,return )

double Functions_obj::getSystemTime( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getSystemTime")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",179)
	return ::of::utils::Utils_obj::getSystemTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getSystemTime,return )

int Functions_obj::getYear( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getYear")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",183)
	return ::of::utils::Utils_obj::getYear();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getYear,return )

int Functions_obj::getMonth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getMonth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",187)
	return ::of::utils::Utils_obj::getMonth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getMonth,return )

int Functions_obj::getDay( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getDay")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",191)
	return ::of::utils::Utils_obj::getDay();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getDay,return )

int Functions_obj::getWeekday( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getWeekday")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",195)
	return ::of::utils::Utils_obj::getWeekday();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getWeekday,return )

Void Functions_obj::launchBrowser( ::of::app::BaseApp _,::String url){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::launchBrowser")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",199)
		return ::of::utils::Utils_obj::launchBrowser(url);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,launchBrowser,(void))

Void Functions_obj::enableDataPath( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::enableDataPath")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",203)
		return ::of::utils::Utils_obj::enableDataPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,enableDataPath,(void))

Void Functions_obj::disableDataPath( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::disableDataPath")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",207)
		return ::of::utils::Utils_obj::disableDataPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,disableDataPath,(void))

::String Functions_obj::toDataPath( ::of::app::BaseApp _,::String path,Dynamic __o_absolute){
bool absolute = __o_absolute.Default(false);
	HX_SOURCE_PUSH("Functions_obj::toDataPath");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",211)
		return ::of::utils::Utils_obj::toDataPath(path,absolute);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,toDataPath,return )

Void Functions_obj::setDataPathRoot( ::of::app::BaseApp _,::String root){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setDataPathRoot")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",215)
		return ::of::utils::Utils_obj::setDataPathRoot(root);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setDataPathRoot,(void))

::String Functions_obj::toString( ::of::app::BaseApp _,double value,Dynamic __o_precision){
int precision = __o_precision.Default(7);
	HX_SOURCE_PUSH("Functions_obj::toString");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",219)
		return ::of::utils::Utils_obj::toString(value,precision);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,toString,return )

int Functions_obj::toInt( ::of::app::BaseApp _,::String intString){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::toInt")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",223)
	return ::of::utils::Utils_obj::toInt(intString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,toInt,return )

double Functions_obj::toFloat( ::of::app::BaseApp _,::String floatString){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::toFloat")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",227)
	return ::of::utils::Utils_obj::toFloat(floatString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,toFloat,return )

::String Functions_obj::getVersionInfo( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getVersionInfo")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",231)
	return ::of::utils::Utils_obj::getVersionInfo();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getVersionInfo,return )

Void Functions_obj::saveScreen( ::of::app::BaseApp _,::String filename){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::saveScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",235)
		return ::of::utils::Utils_obj::saveScreen(filename);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,saveScreen,(void))

Void Functions_obj::saveFrame( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::saveFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",239)
		return ::of::utils::Utils_obj::saveFrame();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,saveFrame,(void))

Array< ::String > Functions_obj::splitString( ::of::app::BaseApp _,::String text,::String delimiter){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::splitString")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",243)
	return ::of::utils::Utils_obj::splitString(text,delimiter);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,splitString,return )

Void Functions_obj::setLogLevel( ::of::app::BaseApp _,::of::utils::LogLevel logLevel){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setLogLevel")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",247)
		return ::of::utils::Utils_obj::setLogLevel(logLevel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setLogLevel,(void))

Void Functions_obj::ofLog( ::of::app::BaseApp _,::of::utils::LogLevel logLevel,::String message){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::ofLog")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",251)
		return ::of::utils::Utils_obj::ofLog(logLevel,message);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,ofLog,(void))

Void Functions_obj::setConsoleColor( ::of::app::BaseApp _,int color){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setConsoleColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",255)
		return ::of::utils::Utils_obj::setConsoleColor(color);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setConsoleColor,(void))

Void Functions_obj::restoreConsoleColor( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::restoreConsoleColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",259)
		return ::of::utils::Utils_obj::restoreConsoleColor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,restoreConsoleColor,(void))

Void Functions_obj::seedRandom( ::of::app::BaseApp _,Dynamic val){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::seedRandom")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",263)
		return ::of::utils::Math_obj::seedRandom(val);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,seedRandom,(void))

double Functions_obj::random( ::of::app::BaseApp _,double val0,double val1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::random")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",267)
	return ::of::utils::Math_obj::random(val0,val1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,random,return )

double Functions_obj::randomf( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::randomf")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",271)
	return ::of::utils::Math_obj::randomf();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,randomf,return )

double Functions_obj::randomuf( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::randomuf")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",275)
	return ::of::utils::Math_obj::randomuf();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,randomuf,return )

double Functions_obj::normalize( ::of::app::BaseApp _,double value,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::normalize")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",279)
	return ::of::utils::Math_obj::normalize(value,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,normalize,return )

double Functions_obj::map( ::of::app::BaseApp _,double value,double inputMin,double inputMax,double outputMin,double outputMax,Dynamic __o_clamp){
bool clamp = __o_clamp.Default(false);
	HX_SOURCE_PUSH("Functions_obj::map");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",283)
		return ::of::utils::Math_obj::map(value,inputMin,inputMax,outputMin,outputMax,clamp);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Functions_obj,map,return )

double Functions_obj::clamp( ::of::app::BaseApp _,double value,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::clamp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",287)
	return ::of::utils::Math_obj::clamp(value,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,clamp,return )

double Functions_obj::lerp( ::of::app::BaseApp _,double start,double stop,double amt){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::lerp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",291)
	return ::of::utils::Math_obj::lerp(start,stop,amt);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,lerp,return )

double Functions_obj::dist( ::of::app::BaseApp _,double x1,double y1,double x2,double y2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::dist")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",295)
	return ::of::utils::Math_obj::dist(x1,y1,x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,dist,return )

double Functions_obj::distSquared( ::of::app::BaseApp _,double x1,double y1,double x2,double y2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::distSquared")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",299)
	return ::of::utils::Math_obj::distSquared(x1,y1,x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,distSquared,return )

int Functions_obj::sign( ::of::app::BaseApp _,double n){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::sign")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",303)
	return ::of::utils::Math_obj::sign(n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,sign,return )

bool Functions_obj::inRange( ::of::app::BaseApp _,double t,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::inRange")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",307)
	return ::of::utils::Math_obj::inRange(t,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,inRange,return )

double Functions_obj::radToDeg( ::of::app::BaseApp _,double radians){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::radToDeg")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",311)
	return ::of::utils::Math_obj::radToDeg(radians);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,radToDeg,return )

double Functions_obj::degToRad( ::of::app::BaseApp _,double degrees){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::degToRad")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",315)
	return ::of::utils::Math_obj::degToRad(degrees);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,degToRad,return )

double Functions_obj::randomWidth( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::randomWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",319)
	return ::of::utils::Math_obj::randomWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,randomWidth,return )

double Functions_obj::randomHeight( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::randomHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",323)
	return ::of::utils::Math_obj::randomHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,randomHeight,return )

double Functions_obj::noise( ::of::app::BaseApp _,double x,Dynamic y,Dynamic z,Dynamic w){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::noise")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",327)
	return ::of::utils::Math_obj::noise(x,y,z,w);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,noise,return )

double Functions_obj::signedNoise( ::of::app::BaseApp _,double x,Dynamic y,Dynamic z,Dynamic w){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::signedNoise")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",331)
	return ::of::utils::Math_obj::signedNoise(x,y,z,w);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,signedNoise,return )

double Functions_obj::abs( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::abs")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",335)
	return ::Math_obj::abs(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,abs,return )

double Functions_obj::min( ::of::app::BaseApp _,double a,double b){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::min")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",338)
	return ::Math_obj::min(a,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,min,return )

double Functions_obj::max( ::of::app::BaseApp _,double a,double b){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::max")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",341)
	return ::Math_obj::max(a,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,max,return )

double Functions_obj::sin( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::sin")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",344)
	return ::Math_obj::sin(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,sin,return )

double Functions_obj::cos( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::cos")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",347)
	return ::Math_obj::cos(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,cos,return )

double Functions_obj::atan2( ::of::app::BaseApp _,double y,double x){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::atan2")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",350)
	return ::Math_obj::atan2(y,x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,atan2,return )

double Functions_obj::tan( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::tan")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",353)
	return ::Math_obj::tan(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,tan,return )

double Functions_obj::exp( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::exp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",356)
	return ::Math_obj::exp(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,exp,return )

double Functions_obj::sqrt( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::sqrt")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",359)
	return ::Math_obj::sqrt(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,sqrt,return )

int Functions_obj::round( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::round")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",362)
	return ::Math_obj::round(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,round,return )

int Functions_obj::floor( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::floor")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",365)
	return ::Math_obj::floor(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,floor,return )

int Functions_obj::ceil( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::ceil")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",368)
	return ::Math_obj::ceil(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,ceil,return )

double Functions_obj::atan( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::atan")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",371)
	return ::Math_obj::atan(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,atan,return )

double Functions_obj::asin( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::asin")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",374)
	return ::Math_obj::asin(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,asin,return )

double Functions_obj::acos( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::acos")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",377)
	return ::Math_obj::acos(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,acos,return )

double Functions_obj::pow( ::of::app::BaseApp _,double v,double exp){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::pow")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",380)
	return ::Math_obj::pow(v,exp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,pow,return )

double Functions_obj::log( ::of::app::BaseApp _,double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::log")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",383)
	return ::Math_obj::log(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,log,return )

Void Functions_obj::background( ::of::app::BaseApp _,int r,int g,int b){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::background")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",387)
		return ::of::graphics::Graphics_obj::background(r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,background,(void))

Void Functions_obj::setBackgroundAuto( ::of::app::BaseApp _,bool bManual){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setBackgroundAuto")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",391)
		return ::of::graphics::Graphics_obj::setBackgroundAuto(bManual);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setBackgroundAuto,(void))

Void Functions_obj::setRectMode( ::of::app::BaseApp _,int mode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setRectMode")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",394)
		return ::of::graphics::Graphics_obj::setRectMode(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setRectMode,(void))

bool Functions_obj::getUsingArbTex( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getUsingArbTex")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",398)
	return ::of::graphics::Graphics_obj::getUsingArbTex();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getUsingArbTex,return )

Void Functions_obj::enableArbTex( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::enableArbTex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",401)
		return ::of::graphics::Graphics_obj::enableArbTex();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,enableArbTex,(void))

Void Functions_obj::disableArbTex( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::disableArbTex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",404)
		return ::of::graphics::Graphics_obj::disableArbTex();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,disableArbTex,(void))

bool Functions_obj::bClearBg( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::bClearBg")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",408)
	return ::of::graphics::Graphics_obj::bClearBg();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,bClearBg,return )

int Functions_obj::getRectMode( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getRectMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",412)
	return ::of::graphics::Graphics_obj::getRectMode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getRectMode,return )

Void Functions_obj::setCurveResolution( ::of::app::BaseApp _,int res){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setCurveResolution")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",416)
		return ::of::graphics::Graphics_obj::setCurveResolution(res);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setCurveResolution,(void))

Void Functions_obj::triangle( ::of::app::BaseApp _,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::triangle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",420)
		return ::of::graphics::Graphics_obj::triangle(x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Functions_obj,triangle,(void))

Void Functions_obj::circle( ::of::app::BaseApp _,double x,double y,double radius){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::circle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",423)
		return ::of::graphics::Graphics_obj::circle(x,y,radius);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,circle,(void))

Void Functions_obj::ellipse( ::of::app::BaseApp _,double x,double y,double width,double height){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::ellipse")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",426)
		return ::of::graphics::Graphics_obj::ellipse(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,ellipse,(void))

Void Functions_obj::line( ::of::app::BaseApp _,double x1,double y1,double x2,double y2){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::line")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",429)
		return ::of::graphics::Graphics_obj::line(x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,line,(void))

Void Functions_obj::rect( ::of::app::BaseApp _,double x1,double y1,double w,double h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::rect")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",432)
		return ::of::graphics::Graphics_obj::rect(x1,y1,w,h);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,rect,(void))

Void Functions_obj::setCircleResolution( ::of::app::BaseApp _,int res){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setCircleResolution")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",436)
		return ::of::graphics::Graphics_obj::setCircleResolution(res);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setCircleResolution,(void))

Void Functions_obj::curve( ::of::app::BaseApp _,double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::curve")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",440)
		return ::of::graphics::Graphics_obj::curve(x0,y0,x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Functions_obj,curve,(void))

Void Functions_obj::bezier( ::of::app::BaseApp _,double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::bezier")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",443)
		return ::of::graphics::Graphics_obj::bezier(x0,y0,x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Functions_obj,bezier,(void))

Void Functions_obj::noFill( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::noFill")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",447)
		return ::of::graphics::Graphics_obj::noFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,noFill,(void))

Void Functions_obj::fill( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::fill")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",450)
		return ::of::graphics::Graphics_obj::fill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,fill,(void))

Void Functions_obj::setLineWidth( ::of::app::BaseApp _,double lineWidth){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setLineWidth")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",454)
		return ::of::graphics::Graphics_obj::setLineWidth(lineWidth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setLineWidth,(void))

Void Functions_obj::setColor( ::of::app::BaseApp _,int rOrHex,Dynamic g,Dynamic b,Dynamic a){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",458)
		return ::of::graphics::Graphics_obj::setColor(rOrHex,g,b,a);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,setColor,(void))

Void Functions_obj::enableAlphaBlending( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::enableAlphaBlending")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",462)
		return ::of::graphics::Graphics_obj::enableAlphaBlending();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,enableAlphaBlending,(void))

Void Functions_obj::disableAlphaBlending( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::disableAlphaBlending")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",465)
		return ::of::graphics::Graphics_obj::disableAlphaBlending();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,disableAlphaBlending,(void))

Void Functions_obj::enableSmoothing( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::enableSmoothing")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",469)
		return ::of::graphics::Graphics_obj::enableSmoothing();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,enableSmoothing,(void))

Void Functions_obj::disableSmoothing( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::disableSmoothing")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",472)
		return ::of::graphics::Graphics_obj::disableSmoothing();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,disableSmoothing,(void))

::of::utils::Style Functions_obj::getStyle( ::of::app::BaseApp _){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::getStyle")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",476)
	return ::of::graphics::Graphics_obj::getStyle();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,getStyle,return )

Void Functions_obj::setStyle( ::of::app::BaseApp _,::of::utils::Style style){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",479)
		return ::of::graphics::Graphics_obj::setStyle(style);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setStyle,(void))

Void Functions_obj::pushStyle( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::pushStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",483)
		return ::of::graphics::Graphics_obj::pushStyle();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,pushStyle,(void))

Void Functions_obj::popStyle( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::popStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",486)
		return ::of::graphics::Graphics_obj::popStyle();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,popStyle,(void))

Void Functions_obj::pushMatrix( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::pushMatrix")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",490)
		return ::of::graphics::Graphics_obj::pushMatrix();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,pushMatrix,(void))

Void Functions_obj::popMatrix( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::popMatrix")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",493)
		return ::of::graphics::Graphics_obj::popMatrix();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,popMatrix,(void))

Void Functions_obj::translate( ::of::app::BaseApp _,double x,double y,Dynamic __o_z){
double z = __o_z.Default(0);
	HX_SOURCE_PUSH("Functions_obj::translate");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",496)
		return ::of::graphics::Graphics_obj::translate(x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,translate,(void))

Void Functions_obj::scale( ::of::app::BaseApp _,double xAmnt,double yAmnt,Dynamic __o_zAmnt){
double zAmnt = __o_zAmnt.Default(1);
	HX_SOURCE_PUSH("Functions_obj::scale");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",499)
		return ::of::graphics::Graphics_obj::scale(xAmnt,yAmnt,zAmnt);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,scale,(void))

Void Functions_obj::rotate( ::of::app::BaseApp _,double degrees,Dynamic vecX,Dynamic vecY,Dynamic vecZ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::rotate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",502)
		return ::of::graphics::Graphics_obj::rotate(degrees,vecX,vecY,vecZ);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Functions_obj,rotate,(void))

Void Functions_obj::rotateX( ::of::app::BaseApp _,double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::rotateX")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",505)
		return ::of::graphics::Graphics_obj::rotateX(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,rotateX,(void))

Void Functions_obj::rotateY( ::of::app::BaseApp _,double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::rotateY")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",508)
		return ::of::graphics::Graphics_obj::rotateY(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,rotateY,(void))

Void Functions_obj::rotateZ( ::of::app::BaseApp _,double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::rotateZ")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",511)
		return ::of::graphics::Graphics_obj::rotateZ(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,rotateZ,(void))

Void Functions_obj::drawBitmapString( ::of::app::BaseApp _,::String textString,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::drawBitmapString")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",515)
		return ::of::graphics::Graphics_obj::drawBitmapString(textString,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Functions_obj,drawBitmapString,(void))

Void Functions_obj::setupGraphicDefaults( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setupGraphicDefaults")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",519)
		return ::of::graphics::Graphics_obj::setupGraphicDefaults();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,setupGraphicDefaults,(void))

Void Functions_obj::setupScreen( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",522)
		return ::of::graphics::Graphics_obj::setupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,setupScreen,(void))

Void Functions_obj::curveVertex( ::of::app::BaseApp _,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::curveVertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",526)
		return ::of::graphics::Graphics_obj::curveVertex(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,curveVertex,(void))

Void Functions_obj::bezierVertex( ::of::app::BaseApp _,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::bezierVertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",529)
		return ::of::graphics::Graphics_obj::bezierVertex(x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Functions_obj,bezierVertex,(void))

Void Functions_obj::setPolyMode( ::of::app::BaseApp _,int mode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::setPolyMode")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",533)
		return ::of::graphics::Graphics_obj::setPolyMode(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,setPolyMode,(void))

Void Functions_obj::beginShape( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::beginShape")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",536)
		return ::of::graphics::Graphics_obj::beginShape();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,beginShape,(void))

Void Functions_obj::vertex( ::of::app::BaseApp _,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::vertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",539)
		return ::of::graphics::Graphics_obj::vertex(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Functions_obj,vertex,(void))

Void Functions_obj::endShape( ::of::app::BaseApp _,Dynamic __o_bClose){
bool bClose = __o_bClose.Default(false);
	HX_SOURCE_PUSH("Functions_obj::endShape");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",542)
		return ::of::graphics::Graphics_obj::endShape(bClose);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,endShape,(void))

Void Functions_obj::nextContour( ::of::app::BaseApp _,Dynamic __o_bClose){
bool bClose = __o_bClose.Default(false);
	HX_SOURCE_PUSH("Functions_obj::nextContour");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",546)
		return ::of::graphics::Graphics_obj::nextContour(bClose);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,nextContour,(void))

Void Functions_obj::soundStopAll( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::soundStopAll")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",550)
		return ::of::sound::SoundPlayer_obj::soundStopAll();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,soundStopAll,(void))

Void Functions_obj::soundSetVolume( ::of::app::BaseApp _,double vol){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::soundSetVolume")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",554)
		return ::of::sound::SoundPlayer_obj::soundSetVolume(vol);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,soundSetVolume,(void))

Void Functions_obj::soundUpdate( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::soundUpdate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",558)
		return ::of::sound::SoundPlayer_obj::soundUpdate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,soundUpdate,(void))

Array< double > Functions_obj::soundGetSpectrum( ::of::app::BaseApp _,int nBands){
	__SAFE_POINT
	HX_SOURCE_PUSH("Functions_obj::soundGetSpectrum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",562)
	return ::of::sound::SoundPlayer_obj::soundGetSpectrum(nBands);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Functions_obj,soundGetSpectrum,return )

Void Functions_obj::soundStreamSetup( ::of::app::BaseApp _,int nOutputChannels,int nInputChannels,::of::app::BaseApp OFSA,Dynamic __o_sampleRate,Dynamic __o_bufferSize,Dynamic __o_nBuffers){
int sampleRate = __o_sampleRate.Default(44100);
int bufferSize = __o_bufferSize.Default(256);
int nBuffers = __o_nBuffers.Default(4);
	HX_SOURCE_PUSH("Functions_obj::soundStreamSetup");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",566)
		return ::of::sound::SoundStream_obj::soundStreamSetup(nOutputChannels,nInputChannels,OFSA,sampleRate,bufferSize,nBuffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Functions_obj,soundStreamSetup,(void))

Void Functions_obj::soundStreamStop( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::soundStreamStop")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",570)
		return ::of::sound::SoundStream_obj::soundStreamStop();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,soundStreamStop,(void))

Void Functions_obj::soundStreamStart( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::soundStreamStart")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",574)
		return ::of::sound::SoundStream_obj::soundStreamStart();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,soundStreamStart,(void))

Void Functions_obj::soundStreamClose( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::soundStreamClose")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",578)
		return ::of::sound::SoundStream_obj::soundStreamClose();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,soundStreamClose,(void))

Void Functions_obj::soundStreamListDevices( ::of::app::BaseApp _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Functions_obj::soundStreamListDevices")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/Context.hx",582)
		return ::of::sound::SoundStream_obj::soundStreamListDevices();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Functions_obj,soundStreamListDevices,(void))


Functions_obj::Functions_obj()
{
}

void Functions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Functions);
	HX_MARK_END_CLASS();
}

Dynamic Functions_obj::__Field(const ::String &inName)
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

Dynamic Functions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Functions_obj::__GetFields(Array< ::String> &outFields)
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

Class Functions_obj::__mClass;

void Functions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.Functions"), hx::TCanCast< Functions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Functions_obj::__boot()
{
}

} // end namespace of
