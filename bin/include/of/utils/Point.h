#ifndef INCLUDED_of_utils_Point
#define INCLUDED_of_utils_Point

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,Point)
namespace of{
namespace utils{


class Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();
		Void __construct(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic handle);

	public:
		static hx::ObjectPtr< Point_obj > __new(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Point_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Point"); }

		virtual Void set( double x,double y,double z);
		Dynamic set_dyn();

		double x; /* REM */ 
		double y; /* REM */ 
		double z; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual double __getX( );
		Dynamic __getX_dyn();

		virtual double __setX( double x);
		Dynamic __setX_dyn();

		virtual double __getY( );
		Dynamic __getY_dyn();

		virtual double __setY( double y);
		Dynamic __setY_dyn();

		virtual double __getZ( );
		Dynamic __getZ_dyn();

		virtual double __setZ( double x);
		Dynamic __setZ_dyn();

		static Dynamic _ofPoint_new; /* REM */ 
	Dynamic &_ofPoint_new_dyn() { return _ofPoint_new;}
		static Dynamic _ofPoint_getX; /* REM */ 
	Dynamic &_ofPoint_getX_dyn() { return _ofPoint_getX;}
		static Dynamic _ofPoint_getY; /* REM */ 
	Dynamic &_ofPoint_getY_dyn() { return _ofPoint_getY;}
		static Dynamic _ofPoint_getZ; /* REM */ 
		static Dynamic _ofPoint_setX; /* REM */ 
	Dynamic &_ofPoint_setX_dyn() { return _ofPoint_setX;}
		static Dynamic _ofPoint_setY; /* REM */ 
	Dynamic &_ofPoint_setY_dyn() { return _ofPoint_setY;}
		static Dynamic _ofPoint_setZ; /* REM */ 
		static Dynamic _ofPoint_set; /* REM */ 
	Dynamic &_ofPoint_set_dyn() { return _ofPoint_set;}
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_Point */ 
