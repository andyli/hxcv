#ifndef INCLUDED_of_app_BaseApp
#define INCLUDED_of_app_BaseApp

#include <hxcpp.h>

HX_DECLARE_CLASS2(hsl,haxe,Signaler)
HX_DECLARE_CLASS2(of,app,BaseApp)
HX_DECLARE_CLASS2(of,events,Events)
namespace of{
namespace app{


class BaseApp_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BaseApp_obj OBJ_;
		BaseApp_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BaseApp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BaseApp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("BaseApp"); }

		::of::events::Events events; /* REM */ 
		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void exit( );
		Dynamic exit_dyn();

		virtual Void windowResized( int w,int h);
		Dynamic windowResized_dyn();

		virtual Void keyPressed( int key);
		Dynamic keyPressed_dyn();

		virtual Void keyReleased( int key);
		Dynamic keyReleased_dyn();

		virtual Void mouseMoved( int x,int y);
		Dynamic mouseMoved_dyn();

		virtual Void mouseDragged( int x,int y,int button);
		Dynamic mouseDragged_dyn();

		virtual Void mousePressed( int x,int y,int button);
		Dynamic mousePressed_dyn();

		virtual Void mouseReleased( Dynamic x,Dynamic y,Dynamic button);
		Dynamic mouseReleased_dyn();

		virtual Void audioReceived( Array< double > input,int bufferSize,int nChannels);
		Dynamic audioReceived_dyn();

		virtual Void audioRequested( Array< double > output,int bufferSize,int nChannels);
		Dynamic audioRequested_dyn();

		int mouseX; /* REM */ 
		int mouseY; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual int __getMouseX( );
		Dynamic __getMouseX_dyn();

		virtual int __getMouseY( );
		Dynamic __getMouseY_dyn();

		virtual Void __mouseDragged( Dynamic args);
		Dynamic __mouseDragged_dyn();

		virtual Void __mousePressed( Dynamic args);
		Dynamic __mousePressed_dyn();

		virtual Void __mouseReleased( Dynamic args);
		Dynamic __mouseReleased_dyn();

		virtual Void __audioReceived( Dynamic args);
		Dynamic __audioReceived_dyn();

		virtual Void __audioRequested( Dynamic args);
		Dynamic __audioRequested_dyn();

		virtual Void __dispatch( ::hsl::haxe::Signaler signaler,Dynamic args);
		Dynamic __dispatch_dyn();

		static Dynamic _ofBaseApp_new; /* REM */ 
	Dynamic &_ofBaseApp_new_dyn() { return _ofBaseApp_new;}
		static Dynamic _ofBaseApp_getMouseX; /* REM */ 
	Dynamic &_ofBaseApp_getMouseX_dyn() { return _ofBaseApp_getMouseX;}
		static Dynamic _ofBaseApp_getMouseY; /* REM */ 
	Dynamic &_ofBaseApp_getMouseY_dyn() { return _ofBaseApp_getMouseY;}
};

} // end namespace of
} // end namespace app

#endif /* INCLUDED_of_app_BaseApp */ 
