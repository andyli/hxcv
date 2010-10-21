#ifndef INCLUDED_of_app_AppGlutWindow
#define INCLUDED_of_app_AppGlutWindow

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,app,AppGlutWindow)
HX_DECLARE_CLASS2(of,app,BaseApp)
HX_DECLARE_CLASS2(of,utils,Point)
namespace of{
namespace app{


class AppGlutWindow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AppGlutWindow_obj OBJ_;
		AppGlutWindow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppGlutWindow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppGlutWindow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppGlutWindow"); }

		virtual Void setupOpenGL( int w,int h,int screenMode);
		Dynamic setupOpenGL_dyn();

		virtual Void initializeWindow( );
		Dynamic initializeWindow_dyn();

		virtual Void runAppViaInfiniteLoop( ::of::app::BaseApp appPtr);
		Dynamic runAppViaInfiniteLoop_dyn();

		virtual Void setGlutDisplayString( ::String str);
		Dynamic setGlutDisplayString_dyn();

		virtual Void hideCursor( );
		Dynamic hideCursor_dyn();

		virtual Void showCursor( );
		Dynamic showCursor_dyn();

		virtual Void setFullscreen( bool fullScreen);
		Dynamic setFullscreen_dyn();

		virtual Void toggleFullscreen( );
		Dynamic toggleFullscreen_dyn();

		virtual Void setWindowTitle( ::String title);
		Dynamic setWindowTitle_dyn();

		virtual Void setWindowPosition( int x,int y);
		Dynamic setWindowPosition_dyn();

		virtual Void setWindowShape( int w,int h);
		Dynamic setWindowShape_dyn();

		virtual ::of::utils::Point getWindowPosition( );
		Dynamic getWindowPosition_dyn();

		virtual ::of::utils::Point getWindowSize( );
		Dynamic getWindowSize_dyn();

		virtual ::of::utils::Point getScreenSize( );
		Dynamic getScreenSize_dyn();

		virtual int getWindowMode( );
		Dynamic getWindowMode_dyn();

		virtual int getFrameNum( );
		Dynamic getFrameNum_dyn();

		virtual double getFrameRate( );
		Dynamic getFrameRate_dyn();

		virtual double getLastFrameTime( );
		Dynamic getLastFrameTime_dyn();

		virtual Void setFrameRate( double targetRate);
		Dynamic setFrameRate_dyn();

		virtual Void enableSetupScreen( );
		Dynamic enableSetupScreen_dyn();

		virtual Void disableSetupScreen( );
		Dynamic disableSetupScreen_dyn();

		::String displayString; /* REM */ 
		virtual ::String __getDisplayString( );
		Dynamic __getDisplayString_dyn();

		virtual ::String __setDisplayString( ::String str);
		Dynamic __setDisplayString_dyn();

		Dynamic __handle; /* REM */ 
		static Void exitApp( );
		static Dynamic exitApp_dyn();

		static Void display( );
		static Dynamic display_dyn();

		static Void mouse_cb( int button,int state,int x,int y);
		static Dynamic mouse_cb_dyn();

		static Void motion_cb( int x,int y);
		static Dynamic motion_cb_dyn();

		static Void passive_motion_cb( int x,int y);
		static Dynamic passive_motion_cb_dyn();

		static Void idle_cb( );
		static Dynamic idle_cb_dyn();

		static Void keyboard_cb( int key,int x,int y);
		static Dynamic keyboard_cb_dyn();

		static Void keyboard_up_cb( int key,int x,int y);
		static Dynamic keyboard_up_cb_dyn();

		static Void special_key_cb( int key,int x,int y);
		static Dynamic special_key_cb_dyn();

		static Void special_key_up_cb( int key,int x,int y);
		static Dynamic special_key_up_cb_dyn();

		static Void resize_cb( int w,int h);
		static Dynamic resize_cb_dyn();

		static Dynamic _ofAppGlutWindow_new; /* REM */ 
	Dynamic &_ofAppGlutWindow_new_dyn() { return _ofAppGlutWindow_new;}
		static Dynamic _ofAppGlutWindow_setupOpenGL; /* REM */ 
	Dynamic &_ofAppGlutWindow_setupOpenGL_dyn() { return _ofAppGlutWindow_setupOpenGL;}
		static Dynamic _ofAppGlutWindow_initializeWindow; /* REM */ 
	Dynamic &_ofAppGlutWindow_initializeWindow_dyn() { return _ofAppGlutWindow_initializeWindow;}
		static Dynamic _ofAppGlutWindow_runAppViaInfiniteLoop; /* REM */ 
	Dynamic &_ofAppGlutWindow_runAppViaInfiniteLoop_dyn() { return _ofAppGlutWindow_runAppViaInfiniteLoop;}
		static Dynamic _ofAppGlutWindow_setGlutDisplayString; /* REM */ 
	Dynamic &_ofAppGlutWindow_setGlutDisplayString_dyn() { return _ofAppGlutWindow_setGlutDisplayString;}
		static Dynamic _ofAppGlutWindow_hideCursor; /* REM */ 
	Dynamic &_ofAppGlutWindow_hideCursor_dyn() { return _ofAppGlutWindow_hideCursor;}
		static Dynamic _ofAppGlutWindow_showCursor; /* REM */ 
	Dynamic &_ofAppGlutWindow_showCursor_dyn() { return _ofAppGlutWindow_showCursor;}
		static Dynamic _ofAppGlutWindow_setFullscreen; /* REM */ 
	Dynamic &_ofAppGlutWindow_setFullscreen_dyn() { return _ofAppGlutWindow_setFullscreen;}
		static Dynamic _ofAppGlutWindow_toggleFullscreen; /* REM */ 
	Dynamic &_ofAppGlutWindow_toggleFullscreen_dyn() { return _ofAppGlutWindow_toggleFullscreen;}
		static Dynamic _ofAppGlutWindow_exitApp; /* REM */ 
	Dynamic &_ofAppGlutWindow_exitApp_dyn() { return _ofAppGlutWindow_exitApp;}
		static Dynamic _ofAppGlutWindow_setWindowTitle; /* REM */ 
	Dynamic &_ofAppGlutWindow_setWindowTitle_dyn() { return _ofAppGlutWindow_setWindowTitle;}
		static Dynamic _ofAppGlutWindow_setWindowPosition; /* REM */ 
	Dynamic &_ofAppGlutWindow_setWindowPosition_dyn() { return _ofAppGlutWindow_setWindowPosition;}
		static Dynamic _ofAppGlutWindow_setWindowShape; /* REM */ 
	Dynamic &_ofAppGlutWindow_setWindowShape_dyn() { return _ofAppGlutWindow_setWindowShape;}
		static Dynamic _ofAppGlutWindow_getWindowPosition; /* REM */ 
	Dynamic &_ofAppGlutWindow_getWindowPosition_dyn() { return _ofAppGlutWindow_getWindowPosition;}
		static Dynamic _ofAppGlutWindow_getWindowSize; /* REM */ 
	Dynamic &_ofAppGlutWindow_getWindowSize_dyn() { return _ofAppGlutWindow_getWindowSize;}
		static Dynamic _ofAppGlutWindow_getScreenSize; /* REM */ 
	Dynamic &_ofAppGlutWindow_getScreenSize_dyn() { return _ofAppGlutWindow_getScreenSize;}
		static Dynamic _ofAppGlutWindow_getWindowMode; /* REM */ 
	Dynamic &_ofAppGlutWindow_getWindowMode_dyn() { return _ofAppGlutWindow_getWindowMode;}
		static Dynamic _ofAppGlutWindow_getFrameNum; /* REM */ 
	Dynamic &_ofAppGlutWindow_getFrameNum_dyn() { return _ofAppGlutWindow_getFrameNum;}
		static Dynamic _ofAppGlutWindow_getFrameRate; /* REM */ 
	Dynamic &_ofAppGlutWindow_getFrameRate_dyn() { return _ofAppGlutWindow_getFrameRate;}
		static Dynamic _ofAppGlutWindow_getLastFrameTime; /* REM */ 
	Dynamic &_ofAppGlutWindow_getLastFrameTime_dyn() { return _ofAppGlutWindow_getLastFrameTime;}
		static Dynamic _ofAppGlutWindow_setFrameRate; /* REM */ 
	Dynamic &_ofAppGlutWindow_setFrameRate_dyn() { return _ofAppGlutWindow_setFrameRate;}
		static Dynamic _ofAppGlutWindow_enableSetupScreen; /* REM */ 
	Dynamic &_ofAppGlutWindow_enableSetupScreen_dyn() { return _ofAppGlutWindow_enableSetupScreen;}
		static Dynamic _ofAppGlutWindow_disableSetupScreen; /* REM */ 
	Dynamic &_ofAppGlutWindow_disableSetupScreen_dyn() { return _ofAppGlutWindow_disableSetupScreen;}
		static Dynamic _ofAppGlutWindow_display; /* REM */ 
	Dynamic &_ofAppGlutWindow_display_dyn() { return _ofAppGlutWindow_display;}
		static Dynamic _ofAppGlutWindow_mouse_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_mouse_cb_dyn() { return _ofAppGlutWindow_mouse_cb;}
		static Dynamic _ofAppGlutWindow_motion_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_motion_cb_dyn() { return _ofAppGlutWindow_motion_cb;}
		static Dynamic _ofAppGlutWindow_passive_motion_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_passive_motion_cb_dyn() { return _ofAppGlutWindow_passive_motion_cb;}
		static Dynamic _ofAppGlutWindow_idle_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_idle_cb_dyn() { return _ofAppGlutWindow_idle_cb;}
		static Dynamic _ofAppGlutWindow_keyboard_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_keyboard_cb_dyn() { return _ofAppGlutWindow_keyboard_cb;}
		static Dynamic _ofAppGlutWindow_keyboard_up_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_keyboard_up_cb_dyn() { return _ofAppGlutWindow_keyboard_up_cb;}
		static Dynamic _ofAppGlutWindow_special_key_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_special_key_cb_dyn() { return _ofAppGlutWindow_special_key_cb;}
		static Dynamic _ofAppGlutWindow_special_key_up_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_special_key_up_cb_dyn() { return _ofAppGlutWindow_special_key_up_cb;}
		static Dynamic _ofAppGlutWindow_resize_cb; /* REM */ 
	Dynamic &_ofAppGlutWindow_resize_cb_dyn() { return _ofAppGlutWindow_resize_cb;}
		static Dynamic _ofAppGlutWindow_getDisplayString; /* REM */ 
	Dynamic &_ofAppGlutWindow_getDisplayString_dyn() { return _ofAppGlutWindow_getDisplayString;}
		static Dynamic _ofAppGlutWindow_setDisplayString; /* REM */ 
	Dynamic &_ofAppGlutWindow_setDisplayString_dyn() { return _ofAppGlutWindow_setDisplayString;}
};

} // end namespace of
} // end namespace app

#endif /* INCLUDED_of_app_AppGlutWindow */ 
