#ifndef INCLUDED_OFExample
#define INCLUDED_OFExample

#include <hxcpp.h>

#include <of/app/BaseApp.h>
HX_DECLARE_CLASS0(OFExample)
HX_DECLARE_CLASS2(hxcv,ds,I2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IARGB2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IRGB2DImage)
HX_DECLARE_CLASS3(hxcv,ds,of,OFARGB2DImage)
HX_DECLARE_CLASS2(of,app,BaseApp)
HX_DECLARE_CLASS2(of,graphics,Image)


class OFExample_obj : public ::of::app::BaseApp_obj{
	public:
		typedef ::of::app::BaseApp_obj super;
		typedef OFExample_obj OBJ_;
		OFExample_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< OFExample_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OFExample_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("OFExample"); }

		::hxcv::ds::of::OFARGB2DImage img; /* REM */ 
		::of::graphics::Image ofImg; /* REM */ 
		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_OFExample */ 
