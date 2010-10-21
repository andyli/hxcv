#ifndef INCLUDED_of_events_Events
#define INCLUDED_of_events_Events

#include <hxcpp.h>

HX_DECLARE_CLASS2(hsl,haxe,DirectSignaler)
HX_DECLARE_CLASS2(hsl,haxe,Signaler)
HX_DECLARE_CLASS2(of,app,BaseApp)
HX_DECLARE_CLASS2(of,events,Events)
namespace of{
namespace events{


class Events_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Events_obj OBJ_;
		Events_obj();
		Void __construct(::of::app::BaseApp subject);

	public:
		static hx::ObjectPtr< Events_obj > __new(::of::app::BaseApp subject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Events_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Events"); }

		::hsl::haxe::DirectSignaler setup; /* REM */ 
		::hsl::haxe::DirectSignaler update; /* REM */ 
		::hsl::haxe::DirectSignaler draw; /* REM */ 
		::hsl::haxe::DirectSignaler exit; /* REM */ 
		::hsl::haxe::DirectSignaler windowResized; /* REM */ 
		::hsl::haxe::DirectSignaler keyPressed; /* REM */ 
		::hsl::haxe::DirectSignaler keyReleased; /* REM */ 
		::hsl::haxe::DirectSignaler mouseMoved; /* REM */ 
		::hsl::haxe::DirectSignaler mouseDragged; /* REM */ 
		::hsl::haxe::DirectSignaler mousePressed; /* REM */ 
		::hsl::haxe::DirectSignaler mouseReleased; /* REM */ 
		::hsl::haxe::DirectSignaler audioReceived; /* REM */ 
		::hsl::haxe::DirectSignaler audioRequested; /* REM */ 
};

} // end namespace of
} // end namespace events

#endif /* INCLUDED_of_events_Events */ 
