#ifndef INCLUDED_of_app_AppRunner
#define INCLUDED_of_app_AppRunner

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,app,AppGlutWindow)
HX_DECLARE_CLASS2(of,app,AppRunner)
HX_DECLARE_CLASS2(of,app,BaseApp)
namespace of{
namespace app{


class AppRunner_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AppRunner_obj OBJ_;
		AppRunner_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppRunner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppRunner_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppRunner"); }

		static Void runApp( ::of::app::BaseApp app);
		static Dynamic runApp_dyn();

		static Void setupOpenGL( ::of::app::AppGlutWindow window,int w,int h,int screenMode);
		static Dynamic setupOpenGL_dyn();

		static ::of::app::BaseApp getAppPtr( );
		static Dynamic getAppPtr_dyn();

		static ::of::app::AppGlutWindow getWindowPtr( );
		static Dynamic getWindowPtr_dyn();

		static double getFrameRate( );
		static Dynamic getFrameRate_dyn();

		static int getFrameNum( );
		static Dynamic getFrameNum_dyn();

		static Void setFrameRate( int targetRate);
		static Dynamic setFrameRate_dyn();

		static Void sleepMillis( int millis);
		static Dynamic sleepMillis_dyn();

		static double getLastFrameTime( );
		static Dynamic getLastFrameTime_dyn();

		static Void hideCursor( );
		static Dynamic hideCursor_dyn();

		static Void showCursor( );
		static Dynamic showCursor_dyn();

		static int getWindowPositionX( );
		static Dynamic getWindowPositionX_dyn();

		static int getWindowPositionY( );
		static Dynamic getWindowPositionY_dyn();

		static int getScreenWidth( );
		static Dynamic getScreenWidth_dyn();

		static int getScreenHeight( );
		static Dynamic getScreenHeight_dyn();

		static int getWindowMode( );
		static Dynamic getWindowMode_dyn();

		static int getWidth( );
		static Dynamic getWidth_dyn();

		static int getHeight( );
		static Dynamic getHeight_dyn();

		static Void setWindowPosition( int x,int y);
		static Dynamic setWindowPosition_dyn();

		static Void setWindowShape( int width,int height);
		static Dynamic setWindowShape_dyn();

		static Void setWindowTitle( ::String title);
		static Dynamic setWindowTitle_dyn();

		static Void enableSetupScreen( );
		static Dynamic enableSetupScreen_dyn();

		static Void disableSetupScreen( );
		static Dynamic disableSetupScreen_dyn();

		static Void setFullscreen( bool fullscreen);
		static Dynamic setFullscreen_dyn();

		static Void toggleFullscreen( );
		static Dynamic toggleFullscreen_dyn();

		static Void setVerticalSync( bool bSync);
		static Dynamic setVerticalSync_dyn();

		static ::of::app::BaseApp _appPtr; /* REM */ 
		static ::of::app::AppGlutWindow _windowPtr; /* REM */ 
		static Dynamic _ofRunApp; /* REM */ 
	Dynamic &_ofRunApp_dyn() { return _ofRunApp;}
		static Dynamic _ofSetupOpenGL; /* REM */ 
	Dynamic &_ofSetupOpenGL_dyn() { return _ofSetupOpenGL;}
		static Dynamic _ofGetFrameRate; /* REM */ 
	Dynamic &_ofGetFrameRate_dyn() { return _ofGetFrameRate;}
		static Dynamic _ofGetFrameNum; /* REM */ 
	Dynamic &_ofGetFrameNum_dyn() { return _ofGetFrameNum;}
		static Dynamic _ofSetFrameRate; /* REM */ 
	Dynamic &_ofSetFrameRate_dyn() { return _ofSetFrameRate;}
		static Dynamic _ofSleepMillis; /* REM */ 
	Dynamic &_ofSleepMillis_dyn() { return _ofSleepMillis;}
		static Dynamic _ofGetLastFrameTime; /* REM */ 
	Dynamic &_ofGetLastFrameTime_dyn() { return _ofGetLastFrameTime;}
		static Dynamic _ofHideCursor; /* REM */ 
	Dynamic &_ofHideCursor_dyn() { return _ofHideCursor;}
		static Dynamic _ofShowCursor; /* REM */ 
	Dynamic &_ofShowCursor_dyn() { return _ofShowCursor;}
		static Dynamic _ofGetWindowPositionX; /* REM */ 
	Dynamic &_ofGetWindowPositionX_dyn() { return _ofGetWindowPositionX;}
		static Dynamic _ofGetWindowPositionY; /* REM */ 
	Dynamic &_ofGetWindowPositionY_dyn() { return _ofGetWindowPositionY;}
		static Dynamic _ofGetScreenWidth; /* REM */ 
	Dynamic &_ofGetScreenWidth_dyn() { return _ofGetScreenWidth;}
		static Dynamic _ofGetScreenHeight; /* REM */ 
	Dynamic &_ofGetScreenHeight_dyn() { return _ofGetScreenHeight;}
		static Dynamic _ofGetWindowMode; /* REM */ 
	Dynamic &_ofGetWindowMode_dyn() { return _ofGetWindowMode;}
		static Dynamic _ofGetWidth; /* REM */ 
	Dynamic &_ofGetWidth_dyn() { return _ofGetWidth;}
		static Dynamic _ofGetHeight; /* REM */ 
	Dynamic &_ofGetHeight_dyn() { return _ofGetHeight;}
		static Dynamic _ofSetWindowPosition; /* REM */ 
	Dynamic &_ofSetWindowPosition_dyn() { return _ofSetWindowPosition;}
		static Dynamic _ofSetWindowShape; /* REM */ 
	Dynamic &_ofSetWindowShape_dyn() { return _ofSetWindowShape;}
		static Dynamic _ofSetWindowTitle; /* REM */ 
	Dynamic &_ofSetWindowTitle_dyn() { return _ofSetWindowTitle;}
		static Dynamic _ofEnableSetupScreen; /* REM */ 
	Dynamic &_ofEnableSetupScreen_dyn() { return _ofEnableSetupScreen;}
		static Dynamic _ofDisableSetupScreen; /* REM */ 
	Dynamic &_ofDisableSetupScreen_dyn() { return _ofDisableSetupScreen;}
		static Dynamic _ofSetFullscreen; /* REM */ 
	Dynamic &_ofSetFullscreen_dyn() { return _ofSetFullscreen;}
		static Dynamic _ofToggleFullscreen; /* REM */ 
	Dynamic &_ofToggleFullscreen_dyn() { return _ofToggleFullscreen;}
		static Dynamic _ofSetVerticalSync; /* REM */ 
	Dynamic &_ofSetVerticalSync_dyn() { return _ofSetVerticalSync;}
};

} // end namespace of
} // end namespace app

#endif /* INCLUDED_of_app_AppRunner */ 
