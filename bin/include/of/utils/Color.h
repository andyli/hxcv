#ifndef INCLUDED_of_utils_Color
#define INCLUDED_of_utils_Color

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,Color)
namespace of{
namespace utils{


class Color_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Color_obj OBJ_;
		Color_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< Color_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Color_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Color"); }

		double r; /* REM */ 
		double g; /* REM */ 
		double b; /* REM */ 
		double a; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual double __getR( );
		Dynamic __getR_dyn();

		virtual double __setR( double r);
		Dynamic __setR_dyn();

		virtual double __getG( );
		Dynamic __getG_dyn();

		virtual double __setG( double g);
		Dynamic __setG_dyn();

		virtual double __getB( );
		Dynamic __getB_dyn();

		virtual double __setB( double b);
		Dynamic __setB_dyn();

		virtual double __getA( );
		Dynamic __getA_dyn();

		virtual double __setA( double a);
		Dynamic __setA_dyn();

		static Dynamic _ofColor_new; /* REM */ 
	Dynamic &_ofColor_new_dyn() { return _ofColor_new;}
		static Dynamic _ofColor_getR; /* REM */ 
	Dynamic &_ofColor_getR_dyn() { return _ofColor_getR;}
		static Dynamic _ofColor_getG; /* REM */ 
	Dynamic &_ofColor_getG_dyn() { return _ofColor_getG;}
		static Dynamic _ofColor_getB; /* REM */ 
	Dynamic &_ofColor_getB_dyn() { return _ofColor_getB;}
		static Dynamic _ofColor_getA; /* REM */ 
	Dynamic &_ofColor_getA_dyn() { return _ofColor_getA;}
		static Dynamic _ofColor_setR; /* REM */ 
	Dynamic &_ofColor_setR_dyn() { return _ofColor_setR;}
		static Dynamic _ofColor_setG; /* REM */ 
	Dynamic &_ofColor_setG_dyn() { return _ofColor_setG;}
		static Dynamic _ofColor_setB; /* REM */ 
	Dynamic &_ofColor_setB_dyn() { return _ofColor_setB;}
		static Dynamic _ofColor_setA; /* REM */ 
	Dynamic &_ofColor_setA_dyn() { return _ofColor_setA;}
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_Color */ 
