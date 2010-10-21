#ifndef INCLUDED_of_utils_Rectangle
#define INCLUDED_of_utils_Rectangle

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,Rectangle)
namespace of{
namespace utils{


class Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< Rectangle_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Rectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rectangle"); }

		double x; /* REM */ 
		double y; /* REM */ 
		double width; /* REM */ 
		double height; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual double __getX( );
		Dynamic __getX_dyn();

		virtual double __setX( double x);
		Dynamic __setX_dyn();

		virtual double __getY( );
		Dynamic __getY_dyn();

		virtual double __setY( double y);
		Dynamic __setY_dyn();

		virtual double __getWidth( );
		Dynamic __getWidth_dyn();

		virtual double __setWidth( double width);
		Dynamic __setWidth_dyn();

		virtual double __getHeight( );
		Dynamic __getHeight_dyn();

		virtual double __setHeight( double height);
		Dynamic __setHeight_dyn();

		static Dynamic _ofRectangle_new; /* REM */ 
	Dynamic &_ofRectangle_new_dyn() { return _ofRectangle_new;}
		static Dynamic _ofRectangle_getX; /* REM */ 
	Dynamic &_ofRectangle_getX_dyn() { return _ofRectangle_getX;}
		static Dynamic _ofRectangle_getY; /* REM */ 
	Dynamic &_ofRectangle_getY_dyn() { return _ofRectangle_getY;}
		static Dynamic _ofRectangle_getWidth; /* REM */ 
	Dynamic &_ofRectangle_getWidth_dyn() { return _ofRectangle_getWidth;}
		static Dynamic _ofRectangle_getHeight; /* REM */ 
	Dynamic &_ofRectangle_getHeight_dyn() { return _ofRectangle_getHeight;}
		static Dynamic _ofRectangle_setX; /* REM */ 
	Dynamic &_ofRectangle_setX_dyn() { return _ofRectangle_setX;}
		static Dynamic _ofRectangle_setY; /* REM */ 
	Dynamic &_ofRectangle_setY_dyn() { return _ofRectangle_setY;}
		static Dynamic _ofRectangle_setWidth; /* REM */ 
	Dynamic &_ofRectangle_setWidth_dyn() { return _ofRectangle_setWidth;}
		static Dynamic _ofRectangle_setHeight; /* REM */ 
	Dynamic &_ofRectangle_setHeight_dyn() { return _ofRectangle_setHeight;}
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_Rectangle */ 
