#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_utils_LogLevel
#include <of/utils/LogLevel.h>
#endif
#ifndef INCLUDED_of_utils_Utils
#include <of/utils/Utils.h>
#endif
namespace of{
namespace utils{

Void Utils_obj::__construct()
{
	return null();
}

Utils_obj::~Utils_obj() { }

Dynamic Utils_obj::__CreateEmpty() { return  new Utils_obj; }
hx::ObjectPtr< Utils_obj > Utils_obj::__new()
{  hx::ObjectPtr< Utils_obj > result = new Utils_obj();
	result->__construct();
	return result;}

Dynamic Utils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utils_obj > result = new Utils_obj();
	result->__construct();
	return result;}

int Utils_obj::nextPow2( int input){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::nextPow2")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",9)
	return ::of::utils::Utils_obj::_ofNextPow2(input);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,nextPow2,return )

Void Utils_obj::resetElapsedTimeCounter( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::resetElapsedTimeCounter")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",14)
		::of::utils::Utils_obj::_ofResetElapsedTimeCounter();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,resetElapsedTimeCounter,(void))

double Utils_obj::getElapsedTimef( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getElapsedTimef")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",18)
	return ::of::utils::Utils_obj::_ofGetElapsedTimef();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getElapsedTimef,return )

int Utils_obj::getElapsedTimeMillis( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getElapsedTimeMillis")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",22)
	return ::of::utils::Utils_obj::_ofGetElapsedTimeMillis();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getElapsedTimeMillis,return )

int Utils_obj::getFrameNum( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getFrameNum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",26)
	return ::of::utils::Utils_obj::_ofGetFrameNum();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getFrameNum,return )

int Utils_obj::getSeconds( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getSeconds")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",30)
	return ::of::utils::Utils_obj::_ofGetSeconds();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getSeconds,return )

int Utils_obj::getMinutes( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getMinutes")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",34)
	return ::of::utils::Utils_obj::_ofGetMinutes();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getMinutes,return )

int Utils_obj::getHours( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getHours")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",38)
	return ::of::utils::Utils_obj::_ofGetHours();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getHours,return )

double Utils_obj::getSystemTime( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getSystemTime")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",43)
	return ::of::utils::Utils_obj::_ofGetSystemTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getSystemTime,return )

int Utils_obj::getYear( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getYear")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",47)
	return ::of::utils::Utils_obj::_ofGetYear();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getYear,return )

int Utils_obj::getMonth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getMonth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",51)
	return ::of::utils::Utils_obj::_ofGetMonth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getMonth,return )

int Utils_obj::getDay( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getDay")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",55)
	return ::of::utils::Utils_obj::_ofGetDay();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getDay,return )

int Utils_obj::getWeekday( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getWeekday")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",59)
	return ::of::utils::Utils_obj::_ofGetWeekday();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getWeekday,return )

Void Utils_obj::launchBrowser( ::String url){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::launchBrowser")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",63)
		::of::utils::Utils_obj::_ofLaunchBrowser(url);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,launchBrowser,(void))

Void Utils_obj::enableDataPath( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::enableDataPath")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",67)
		::of::utils::Utils_obj::_ofEnableDataPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,enableDataPath,(void))

Void Utils_obj::disableDataPath( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::disableDataPath")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",71)
		::of::utils::Utils_obj::_ofDisableDataPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,disableDataPath,(void))

::String Utils_obj::toDataPath( ::String path,Dynamic __o_absolute){
bool absolute = __o_absolute.Default(false);
	HX_SOURCE_PUSH("Utils_obj::toDataPath");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",75)
		return ::of::utils::Utils_obj::_ofToDataPath(path,absolute);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,toDataPath,return )

Void Utils_obj::setDataPathRoot( ::String root){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::setDataPathRoot")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",81)
		::of::utils::Utils_obj::_ofSetDataPathRoot(root);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,setDataPathRoot,(void))

::String Utils_obj::toString( double value,Dynamic __o_precision){
int precision = __o_precision.Default(7);
	HX_SOURCE_PUSH("Utils_obj::toString");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",85)
		return (  (::Std_obj::is(value,hx::ClassOf< ::Int >())) ? ::String(::of::utils::Utils_obj::_ofToString1(value)) : ::String(::of::utils::Utils_obj::_ofToString2(value,precision)) );
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,toString,return )

int Utils_obj::toInt( ::String intString){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::toInt")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",89)
	return ::of::utils::Utils_obj::_ofToInt(intString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,toInt,return )

double Utils_obj::toFloat( ::String floatString){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::toFloat")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",93)
	return ::of::utils::Utils_obj::_ofToFloat(floatString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,toFloat,return )

::String Utils_obj::getVersionInfo( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::getVersionInfo")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",97)
	return ::of::utils::Utils_obj::_ofGetVersionInfo();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,getVersionInfo,return )

Void Utils_obj::saveScreen( ::String filename){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::saveScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",101)
		::of::utils::Utils_obj::_ofSaveScreen(filename);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,saveScreen,(void))

Void Utils_obj::saveFrame( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::saveFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",105)
		::of::utils::Utils_obj::_ofSaveFrame();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,saveFrame,(void))

Array< ::String > Utils_obj::splitString( ::String text,::String delimiter){
	__SAFE_POINT
	HX_SOURCE_PUSH("Utils_obj::splitString")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",109)
	return text.split(delimiter);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,splitString,return )

Void Utils_obj::setLogLevel( ::of::utils::LogLevel logLevel){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::setLogLevel")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",113)
		::of::utils::Utils_obj::_ofSetLogLevel(logLevel->__Index());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,setLogLevel,(void))

Void Utils_obj::ofLog( ::of::utils::LogLevel logLevel,::String message){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::ofLog")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",117)
		::of::utils::Utils_obj::_ofLog(logLevel->__Index(),message);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,ofLog,(void))

Void Utils_obj::setConsoleColor( int color){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::setConsoleColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",121)
		::of::utils::Utils_obj::_ofSetConsoleColor(color);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,setConsoleColor,(void))

Void Utils_obj::restoreConsoleColor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Utils_obj::restoreConsoleColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Utils.hx",125)
		::of::utils::Utils_obj::_ofRestoreConsoleColor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,restoreConsoleColor,(void))

Dynamic Utils_obj::_ofNextPow2;

Dynamic Utils_obj::_ofResetElapsedTimeCounter;

Dynamic Utils_obj::_ofGetElapsedTimef;

Dynamic Utils_obj::_ofGetElapsedTimeMillis;

Dynamic Utils_obj::_ofGetFrameNum;

Dynamic Utils_obj::_ofGetSeconds;

Dynamic Utils_obj::_ofGetMinutes;

Dynamic Utils_obj::_ofGetHours;

Dynamic Utils_obj::_ofGetSystemTime;

Dynamic Utils_obj::_ofGetYear;

Dynamic Utils_obj::_ofGetMonth;

Dynamic Utils_obj::_ofGetDay;

Dynamic Utils_obj::_ofGetWeekday;

Dynamic Utils_obj::_ofLaunchBrowser;

Dynamic Utils_obj::_ofEnableDataPath;

Dynamic Utils_obj::_ofDisableDataPath;

Dynamic Utils_obj::_ofToDataPath;

Dynamic Utils_obj::_ofSetDataPathRoot;

Dynamic Utils_obj::_ofToString2;

Dynamic Utils_obj::_ofToString1;

Dynamic Utils_obj::_ofToInt;

Dynamic Utils_obj::_ofToFloat;

Dynamic Utils_obj::_ofGetVersionInfo;

Dynamic Utils_obj::_ofSaveScreen;

Dynamic Utils_obj::_ofSaveFrame;

Dynamic Utils_obj::_ofSetLogLevel;

Dynamic Utils_obj::_ofLog;

Dynamic Utils_obj::_ofSetConsoleColor;

Dynamic Utils_obj::_ofRestoreConsoleColor;


Utils_obj::Utils_obj()
{
}

void Utils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utils);
	HX_MARK_END_CLASS();
}

Dynamic Utils_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		if (HX_FIELD_EQ(inName,"ofLog") ) { return ofLog_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getDay") ) { return getDay_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofLog") ) { return _ofLog; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getYear") ) { return getYear_dyn(); }
		if (HX_FIELD_EQ(inName,"toFloat") ) { return toFloat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextPow2") ) { return nextPow2_dyn(); }
		if (HX_FIELD_EQ(inName,"getHours") ) { return getHours_dyn(); }
		if (HX_FIELD_EQ(inName,"getMonth") ) { return getMonth_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofToInt") ) { return _ofToInt; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveFrame") ) { return saveFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetDay") ) { return _ofGetDay; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getSeconds") ) { return getSeconds_dyn(); }
		if (HX_FIELD_EQ(inName,"getMinutes") ) { return getMinutes_dyn(); }
		if (HX_FIELD_EQ(inName,"getWeekday") ) { return getWeekday_dyn(); }
		if (HX_FIELD_EQ(inName,"toDataPath") ) { return toDataPath_dyn(); }
		if (HX_FIELD_EQ(inName,"saveScreen") ) { return saveScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetYear") ) { return _ofGetYear; }
		if (HX_FIELD_EQ(inName,"_ofToFloat") ) { return _ofToFloat; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFrameNum") ) { return getFrameNum_dyn(); }
		if (HX_FIELD_EQ(inName,"splitString") ) { return splitString_dyn(); }
		if (HX_FIELD_EQ(inName,"setLogLevel") ) { return setLogLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofNextPow2") ) { return _ofNextPow2; }
		if (HX_FIELD_EQ(inName,"_ofGetHours") ) { return _ofGetHours; }
		if (HX_FIELD_EQ(inName,"_ofGetMonth") ) { return _ofGetMonth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofToString2") ) { return _ofToString2; }
		if (HX_FIELD_EQ(inName,"_ofToString1") ) { return _ofToString1; }
		if (HX_FIELD_EQ(inName,"_ofSaveFrame") ) { return _ofSaveFrame; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSystemTime") ) { return getSystemTime_dyn(); }
		if (HX_FIELD_EQ(inName,"launchBrowser") ) { return launchBrowser_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetSeconds") ) { return _ofGetSeconds; }
		if (HX_FIELD_EQ(inName,"_ofGetMinutes") ) { return _ofGetMinutes; }
		if (HX_FIELD_EQ(inName,"_ofGetWeekday") ) { return _ofGetWeekday; }
		if (HX_FIELD_EQ(inName,"_ofToDataPath") ) { return _ofToDataPath; }
		if (HX_FIELD_EQ(inName,"_ofSaveScreen") ) { return _ofSaveScreen; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enableDataPath") ) { return enableDataPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getVersionInfo") ) { return getVersionInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetFrameNum") ) { return _ofGetFrameNum; }
		if (HX_FIELD_EQ(inName,"_ofSetLogLevel") ) { return _ofSetLogLevel; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getElapsedTimef") ) { return getElapsedTimef_dyn(); }
		if (HX_FIELD_EQ(inName,"disableDataPath") ) { return disableDataPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setDataPathRoot") ) { return setDataPathRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"setConsoleColor") ) { return setConsoleColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofGetSystemTime") ) { return _ofGetSystemTime; }
		if (HX_FIELD_EQ(inName,"_ofLaunchBrowser") ) { return _ofLaunchBrowser; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofEnableDataPath") ) { return _ofEnableDataPath; }
		if (HX_FIELD_EQ(inName,"_ofGetVersionInfo") ) { return _ofGetVersionInfo; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofGetElapsedTimef") ) { return _ofGetElapsedTimef; }
		if (HX_FIELD_EQ(inName,"_ofDisableDataPath") ) { return _ofDisableDataPath; }
		if (HX_FIELD_EQ(inName,"_ofSetDataPathRoot") ) { return _ofSetDataPathRoot; }
		if (HX_FIELD_EQ(inName,"_ofSetConsoleColor") ) { return _ofSetConsoleColor; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"restoreConsoleColor") ) { return restoreConsoleColor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getElapsedTimeMillis") ) { return getElapsedTimeMillis_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofRestoreConsoleColor") ) { return _ofRestoreConsoleColor; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"resetElapsedTimeCounter") ) { return resetElapsedTimeCounter_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetElapsedTimeMillis") ) { return _ofGetElapsedTimeMillis; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofResetElapsedTimeCounter") ) { return _ofResetElapsedTimeCounter; }
	}
	return super::__Field(inName);
}

Dynamic Utils_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_ofLog") ) { _ofLog=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ofToInt") ) { _ofToInt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ofGetDay") ) { _ofGetDay=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ofGetYear") ) { _ofGetYear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofToFloat") ) { _ofToFloat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ofNextPow2") ) { _ofNextPow2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetHours") ) { _ofGetHours=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetMonth") ) { _ofGetMonth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofToString2") ) { _ofToString2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofToString1") ) { _ofToString1=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSaveFrame") ) { _ofSaveFrame=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofGetSeconds") ) { _ofGetSeconds=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetMinutes") ) { _ofGetMinutes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetWeekday") ) { _ofGetWeekday=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofToDataPath") ) { _ofToDataPath=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSaveScreen") ) { _ofSaveScreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofGetFrameNum") ) { _ofGetFrameNum=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetLogLevel") ) { _ofSetLogLevel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofGetSystemTime") ) { _ofGetSystemTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofLaunchBrowser") ) { _ofLaunchBrowser=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofEnableDataPath") ) { _ofEnableDataPath=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetVersionInfo") ) { _ofGetVersionInfo=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofGetElapsedTimef") ) { _ofGetElapsedTimef=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofDisableDataPath") ) { _ofDisableDataPath=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetDataPathRoot") ) { _ofSetDataPathRoot=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetConsoleColor") ) { _ofSetConsoleColor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofRestoreConsoleColor") ) { _ofRestoreConsoleColor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofGetElapsedTimeMillis") ) { _ofGetElapsedTimeMillis=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofResetElapsedTimeCounter") ) { _ofResetElapsedTimeCounter=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Utils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nextPow2"),
	HX_CSTRING("resetElapsedTimeCounter"),
	HX_CSTRING("getElapsedTimef"),
	HX_CSTRING("getElapsedTimeMillis"),
	HX_CSTRING("getFrameNum"),
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
	HX_CSTRING("_ofNextPow2"),
	HX_CSTRING("_ofResetElapsedTimeCounter"),
	HX_CSTRING("_ofGetElapsedTimef"),
	HX_CSTRING("_ofGetElapsedTimeMillis"),
	HX_CSTRING("_ofGetFrameNum"),
	HX_CSTRING("_ofGetSeconds"),
	HX_CSTRING("_ofGetMinutes"),
	HX_CSTRING("_ofGetHours"),
	HX_CSTRING("_ofGetSystemTime"),
	HX_CSTRING("_ofGetYear"),
	HX_CSTRING("_ofGetMonth"),
	HX_CSTRING("_ofGetDay"),
	HX_CSTRING("_ofGetWeekday"),
	HX_CSTRING("_ofLaunchBrowser"),
	HX_CSTRING("_ofEnableDataPath"),
	HX_CSTRING("_ofDisableDataPath"),
	HX_CSTRING("_ofToDataPath"),
	HX_CSTRING("_ofSetDataPathRoot"),
	HX_CSTRING("_ofToString2"),
	HX_CSTRING("_ofToString1"),
	HX_CSTRING("_ofToInt"),
	HX_CSTRING("_ofToFloat"),
	HX_CSTRING("_ofGetVersionInfo"),
	HX_CSTRING("_ofSaveScreen"),
	HX_CSTRING("_ofSaveFrame"),
	HX_CSTRING("_ofSetLogLevel"),
	HX_CSTRING("_ofLog"),
	HX_CSTRING("_ofSetConsoleColor"),
	HX_CSTRING("_ofRestoreConsoleColor"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::_ofNextPow2,"_ofNextPow2");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofResetElapsedTimeCounter,"_ofResetElapsedTimeCounter");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetElapsedTimef,"_ofGetElapsedTimef");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetElapsedTimeMillis,"_ofGetElapsedTimeMillis");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetFrameNum,"_ofGetFrameNum");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetSeconds,"_ofGetSeconds");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetMinutes,"_ofGetMinutes");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetHours,"_ofGetHours");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetSystemTime,"_ofGetSystemTime");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetYear,"_ofGetYear");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetMonth,"_ofGetMonth");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetDay,"_ofGetDay");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetWeekday,"_ofGetWeekday");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofLaunchBrowser,"_ofLaunchBrowser");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofEnableDataPath,"_ofEnableDataPath");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofDisableDataPath,"_ofDisableDataPath");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofToDataPath,"_ofToDataPath");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofSetDataPathRoot,"_ofSetDataPathRoot");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofToString2,"_ofToString2");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofToString1,"_ofToString1");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofToInt,"_ofToInt");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofToFloat,"_ofToFloat");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofGetVersionInfo,"_ofGetVersionInfo");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofSaveScreen,"_ofSaveScreen");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofSaveFrame,"_ofSaveFrame");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofSetLogLevel,"_ofSetLogLevel");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofLog,"_ofLog");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofSetConsoleColor,"_ofSetConsoleColor");
	HX_MARK_MEMBER_NAME(Utils_obj::_ofRestoreConsoleColor,"_ofRestoreConsoleColor");
};

Class Utils_obj::__mClass;

void Utils_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.Utils"), hx::TCanCast< Utils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Utils_obj::__boot()
{
	hx::Static(_ofNextPow2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNextPow2"),1);
	hx::Static(_ofResetElapsedTimeCounter) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofResetElapsedTimeCounter"),0);
	hx::Static(_ofGetElapsedTimef) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetElapsedTimef"),0);
	hx::Static(_ofGetElapsedTimeMillis) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetElapsedTimeMillis"),0);
	hx::Static(_ofGetFrameNum) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetFrameNum"),0);
	hx::Static(_ofGetSeconds) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetSeconds"),0);
	hx::Static(_ofGetMinutes) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetMinutes"),0);
	hx::Static(_ofGetHours) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetHours"),0);
	hx::Static(_ofGetSystemTime) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetSystemTime"),0);
	hx::Static(_ofGetYear) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetYear"),0);
	hx::Static(_ofGetMonth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetMonth"),0);
	hx::Static(_ofGetDay) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetDay"),0);
	hx::Static(_ofGetWeekday) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetWeekday"),0);
	hx::Static(_ofLaunchBrowser) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofLaunchBrowser"),1);
	hx::Static(_ofEnableDataPath) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofEnableDataPath"),0);
	hx::Static(_ofDisableDataPath) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDisableDataPath"),0);
	hx::Static(_ofToDataPath) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofToDataPath"),2);
	hx::Static(_ofSetDataPathRoot) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetDataPathRoot"),1);
	hx::Static(_ofToString2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofToString2"),2);
	hx::Static(_ofToString1) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofToString1"),1);
	hx::Static(_ofToInt) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofToInt"),1);
	hx::Static(_ofToFloat) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofToFloat"),1);
	hx::Static(_ofGetVersionInfo) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetVersionInfo"),0);
	hx::Static(_ofSaveScreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSaveScreen"),1);
	hx::Static(_ofSaveFrame) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSaveFrame"),0);
	hx::Static(_ofSetLogLevel) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetLogLevel"),1);
	hx::Static(_ofLog) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofLog"),2);
	hx::Static(_ofSetConsoleColor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetConsoleColor"),1);
	hx::Static(_ofRestoreConsoleColor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRestoreConsoleColor"),0);
}

} // end namespace of
} // end namespace utils
