#ifndef INCLUDED_of_utils_Utils
#define INCLUDED_of_utils_Utils

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,LogLevel)
HX_DECLARE_CLASS2(of,utils,Utils)
namespace of{
namespace utils{


class Utils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Utils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Utils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Utils"); }

		static int nextPow2( int input);
		static Dynamic nextPow2_dyn();

		static Void resetElapsedTimeCounter( );
		static Dynamic resetElapsedTimeCounter_dyn();

		static double getElapsedTimef( );
		static Dynamic getElapsedTimef_dyn();

		static int getElapsedTimeMillis( );
		static Dynamic getElapsedTimeMillis_dyn();

		static int getFrameNum( );
		static Dynamic getFrameNum_dyn();

		static int getSeconds( );
		static Dynamic getSeconds_dyn();

		static int getMinutes( );
		static Dynamic getMinutes_dyn();

		static int getHours( );
		static Dynamic getHours_dyn();

		static double getSystemTime( );
		static Dynamic getSystemTime_dyn();

		static int getYear( );
		static Dynamic getYear_dyn();

		static int getMonth( );
		static Dynamic getMonth_dyn();

		static int getDay( );
		static Dynamic getDay_dyn();

		static int getWeekday( );
		static Dynamic getWeekday_dyn();

		static Void launchBrowser( ::String url);
		static Dynamic launchBrowser_dyn();

		static Void enableDataPath( );
		static Dynamic enableDataPath_dyn();

		static Void disableDataPath( );
		static Dynamic disableDataPath_dyn();

		static ::String toDataPath( ::String path,Dynamic absolute);
		static Dynamic toDataPath_dyn();

		static Void setDataPathRoot( ::String root);
		static Dynamic setDataPathRoot_dyn();

		static ::String toString( double value,Dynamic precision);
		static Dynamic toString_dyn();

		static int toInt( ::String intString);
		static Dynamic toInt_dyn();

		static double toFloat( ::String floatString);
		static Dynamic toFloat_dyn();

		static ::String getVersionInfo( );
		static Dynamic getVersionInfo_dyn();

		static Void saveScreen( ::String filename);
		static Dynamic saveScreen_dyn();

		static Void saveFrame( );
		static Dynamic saveFrame_dyn();

		static Array< ::String > splitString( ::String text,::String delimiter);
		static Dynamic splitString_dyn();

		static Void setLogLevel( ::of::utils::LogLevel logLevel);
		static Dynamic setLogLevel_dyn();

		static Void ofLog( ::of::utils::LogLevel logLevel,::String message);
		static Dynamic ofLog_dyn();

		static Void setConsoleColor( int color);
		static Dynamic setConsoleColor_dyn();

		static Void restoreConsoleColor( );
		static Dynamic restoreConsoleColor_dyn();

		static Dynamic _ofNextPow2; /* REM */ 
	Dynamic &_ofNextPow2_dyn() { return _ofNextPow2;}
		static Dynamic _ofResetElapsedTimeCounter; /* REM */ 
	Dynamic &_ofResetElapsedTimeCounter_dyn() { return _ofResetElapsedTimeCounter;}
		static Dynamic _ofGetElapsedTimef; /* REM */ 
	Dynamic &_ofGetElapsedTimef_dyn() { return _ofGetElapsedTimef;}
		static Dynamic _ofGetElapsedTimeMillis; /* REM */ 
	Dynamic &_ofGetElapsedTimeMillis_dyn() { return _ofGetElapsedTimeMillis;}
		static Dynamic _ofGetFrameNum; /* REM */ 
	Dynamic &_ofGetFrameNum_dyn() { return _ofGetFrameNum;}
		static Dynamic _ofGetSeconds; /* REM */ 
	Dynamic &_ofGetSeconds_dyn() { return _ofGetSeconds;}
		static Dynamic _ofGetMinutes; /* REM */ 
	Dynamic &_ofGetMinutes_dyn() { return _ofGetMinutes;}
		static Dynamic _ofGetHours; /* REM */ 
	Dynamic &_ofGetHours_dyn() { return _ofGetHours;}
		static Dynamic _ofGetSystemTime; /* REM */ 
	Dynamic &_ofGetSystemTime_dyn() { return _ofGetSystemTime;}
		static Dynamic _ofGetYear; /* REM */ 
	Dynamic &_ofGetYear_dyn() { return _ofGetYear;}
		static Dynamic _ofGetMonth; /* REM */ 
	Dynamic &_ofGetMonth_dyn() { return _ofGetMonth;}
		static Dynamic _ofGetDay; /* REM */ 
	Dynamic &_ofGetDay_dyn() { return _ofGetDay;}
		static Dynamic _ofGetWeekday; /* REM */ 
	Dynamic &_ofGetWeekday_dyn() { return _ofGetWeekday;}
		static Dynamic _ofLaunchBrowser; /* REM */ 
	Dynamic &_ofLaunchBrowser_dyn() { return _ofLaunchBrowser;}
		static Dynamic _ofEnableDataPath; /* REM */ 
	Dynamic &_ofEnableDataPath_dyn() { return _ofEnableDataPath;}
		static Dynamic _ofDisableDataPath; /* REM */ 
	Dynamic &_ofDisableDataPath_dyn() { return _ofDisableDataPath;}
		static Dynamic _ofToDataPath; /* REM */ 
	Dynamic &_ofToDataPath_dyn() { return _ofToDataPath;}
		static Dynamic _ofSetDataPathRoot; /* REM */ 
	Dynamic &_ofSetDataPathRoot_dyn() { return _ofSetDataPathRoot;}
		static Dynamic _ofToString2; /* REM */ 
	Dynamic &_ofToString2_dyn() { return _ofToString2;}
		static Dynamic _ofToString1; /* REM */ 
	Dynamic &_ofToString1_dyn() { return _ofToString1;}
		static Dynamic _ofToInt; /* REM */ 
	Dynamic &_ofToInt_dyn() { return _ofToInt;}
		static Dynamic _ofToFloat; /* REM */ 
	Dynamic &_ofToFloat_dyn() { return _ofToFloat;}
		static Dynamic _ofGetVersionInfo; /* REM */ 
	Dynamic &_ofGetVersionInfo_dyn() { return _ofGetVersionInfo;}
		static Dynamic _ofSaveScreen; /* REM */ 
	Dynamic &_ofSaveScreen_dyn() { return _ofSaveScreen;}
		static Dynamic _ofSaveFrame; /* REM */ 
	Dynamic &_ofSaveFrame_dyn() { return _ofSaveFrame;}
		static Dynamic _ofSetLogLevel; /* REM */ 
	Dynamic &_ofSetLogLevel_dyn() { return _ofSetLogLevel;}
		static Dynamic _ofLog; /* REM */ 
	Dynamic &_ofLog_dyn() { return _ofLog;}
		static Dynamic _ofSetConsoleColor; /* REM */ 
	Dynamic &_ofSetConsoleColor_dyn() { return _ofSetConsoleColor;}
		static Dynamic _ofRestoreConsoleColor; /* REM */ 
	Dynamic &_ofRestoreConsoleColor_dyn() { return _ofRestoreConsoleColor;}
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_Utils */ 
