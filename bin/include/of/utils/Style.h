#ifndef INCLUDED_of_utils_Style
#define INCLUDED_of_utils_Style

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,Color)
HX_DECLARE_CLASS2(of,utils,Style)
namespace of{
namespace utils{


class Style_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Style_obj OBJ_;
		Style_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< Style_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Style_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Style"); }

		::of::utils::Color color; /* REM */ 
		int polyMode; /* REM */ 
		int rectMode; /* REM */ 
		bool bFill; /* REM */ 
		bool blending; /* REM */ 
		bool smoothing; /* REM */ 
		int circleResolution; /* REM */ 
		double lineWidth; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual int __getPolyMode( );
		Dynamic __getPolyMode_dyn();

		virtual int __setPolyMode( int val);
		Dynamic __setPolyMode_dyn();

		virtual int __getRectMode( );
		Dynamic __getRectMode_dyn();

		virtual int __setRectMode( int val);
		Dynamic __setRectMode_dyn();

		virtual bool __getBFill( );
		Dynamic __getBFill_dyn();

		virtual bool __setBFill( bool val);
		Dynamic __setBFill_dyn();

		virtual bool __getBlending( );
		Dynamic __getBlending_dyn();

		virtual bool __setBlending( bool val);
		Dynamic __setBlending_dyn();

		virtual bool __getSmoothing( );
		Dynamic __getSmoothing_dyn();

		virtual bool __setSmoothing( bool val);
		Dynamic __setSmoothing_dyn();

		virtual int __getCircleResolution( );
		Dynamic __getCircleResolution_dyn();

		virtual int __setCircleResolution( int val);
		Dynamic __setCircleResolution_dyn();

		virtual double __getLineWidth( );
		Dynamic __getLineWidth_dyn();

		virtual double __setLineWidth( double val);
		Dynamic __setLineWidth_dyn();

		static Dynamic _ofStyle_new; /* REM */ 
	Dynamic &_ofStyle_new_dyn() { return _ofStyle_new;}
		static Dynamic _ofStyle_getColor; /* REM */ 
	Dynamic &_ofStyle_getColor_dyn() { return _ofStyle_getColor;}
		static Dynamic _ofStyle_getPolyMode; /* REM */ 
	Dynamic &_ofStyle_getPolyMode_dyn() { return _ofStyle_getPolyMode;}
		static Dynamic _ofStyle_setPolyMode; /* REM */ 
	Dynamic &_ofStyle_setPolyMode_dyn() { return _ofStyle_setPolyMode;}
		static Dynamic _ofStyle_getRectMode; /* REM */ 
	Dynamic &_ofStyle_getRectMode_dyn() { return _ofStyle_getRectMode;}
		static Dynamic _ofStyle_setRectMode; /* REM */ 
	Dynamic &_ofStyle_setRectMode_dyn() { return _ofStyle_setRectMode;}
		static Dynamic _ofStyle_getBFill; /* REM */ 
	Dynamic &_ofStyle_getBFill_dyn() { return _ofStyle_getBFill;}
		static Dynamic _ofStyle_setBFill; /* REM */ 
	Dynamic &_ofStyle_setBFill_dyn() { return _ofStyle_setBFill;}
		static Dynamic _ofStyle_getBlending; /* REM */ 
	Dynamic &_ofStyle_getBlending_dyn() { return _ofStyle_getBlending;}
		static Dynamic _ofStyle_setBlending; /* REM */ 
	Dynamic &_ofStyle_setBlending_dyn() { return _ofStyle_setBlending;}
		static Dynamic _ofStyle_getSmoothing; /* REM */ 
	Dynamic &_ofStyle_getSmoothing_dyn() { return _ofStyle_getSmoothing;}
		static Dynamic _ofStyle_setSmoothing; /* REM */ 
	Dynamic &_ofStyle_setSmoothing_dyn() { return _ofStyle_setSmoothing;}
		static Dynamic _ofStyle_getCircleResolution; /* REM */ 
	Dynamic &_ofStyle_getCircleResolution_dyn() { return _ofStyle_getCircleResolution;}
		static Dynamic _ofStyle_setCircleResolution; /* REM */ 
	Dynamic &_ofStyle_setCircleResolution_dyn() { return _ofStyle_setCircleResolution;}
		static Dynamic _ofStyle_getLineWidth; /* REM */ 
	Dynamic &_ofStyle_getLineWidth_dyn() { return _ofStyle_getLineWidth;}
		static Dynamic _ofStyle_setLineWidth; /* REM */ 
	Dynamic &_ofStyle_setLineWidth_dyn() { return _ofStyle_setLineWidth;}
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_Style */ 
