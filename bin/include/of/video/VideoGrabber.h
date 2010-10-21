#ifndef INCLUDED_of_video_VideoGrabber
#define INCLUDED_of_video_VideoGrabber

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,graphics,Texture)
HX_DECLARE_CLASS2(of,video,VideoGrabber)
namespace of{
namespace video{


class VideoGrabber_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VideoGrabber_obj OBJ_;
		VideoGrabber_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< VideoGrabber_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VideoGrabber_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("VideoGrabber"); }

		virtual Void listDevices( );
		Dynamic listDevices_dyn();

		virtual bool isFrameNew( );
		Dynamic isFrameNew_dyn();

		virtual Void grabFrame( );
		Dynamic grabFrame_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual bool initGrabber( int w,int h,Dynamic bTexture);
		Dynamic initGrabber_dyn();

		virtual Void videoSettings( );
		Dynamic videoSettings_dyn();

		virtual Array< unsigned char > getPixels( );
		Dynamic getPixels_dyn();

		virtual ::of::graphics::Texture getTextureReference( );
		Dynamic getTextureReference_dyn();

		virtual Void setVerbose( bool bTalkToMe);
		Dynamic setVerbose_dyn();

		virtual Void setDeviceID( int _deviceID);
		Dynamic setDeviceID_dyn();

		virtual Void setDesiredFrameRate( int framerate);
		Dynamic setDesiredFrameRate_dyn();

		virtual Void setUseTexture( bool bUse);
		Dynamic setUseTexture_dyn();

		virtual Void draw( double x,double y,Dynamic w,Dynamic h);
		Dynamic draw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void setAnchorPercent( double xPct,double yPct);
		Dynamic setAnchorPercent_dyn();

		virtual Void setAnchorPoint( int x,int y);
		Dynamic setAnchorPoint_dyn();

		virtual Void resetAnchor( );
		Dynamic resetAnchor_dyn();

		virtual double getHeight( );
		Dynamic getHeight_dyn();

		virtual double getWidth( );
		Dynamic getWidth_dyn();

		int height; /* REM */ 
		int width; /* REM */ 
		virtual int __get_height( );
		Dynamic __get_height_dyn();

		virtual int __set_height( int val);
		Dynamic __set_height_dyn();

		virtual int __get_width( );
		Dynamic __get_width_dyn();

		virtual int __set_width( int val);
		Dynamic __set_width_dyn();

		Dynamic __handle; /* REM */ 
		static Dynamic _ofVideoGrabber_new; /* REM */ 
	Dynamic &_ofVideoGrabber_new_dyn() { return _ofVideoGrabber_new;}
		static Dynamic _ofVideoGrabber_listDevices; /* REM */ 
	Dynamic &_ofVideoGrabber_listDevices_dyn() { return _ofVideoGrabber_listDevices;}
		static Dynamic _ofVideoGrabber_isFrameNew; /* REM */ 
	Dynamic &_ofVideoGrabber_isFrameNew_dyn() { return _ofVideoGrabber_isFrameNew;}
		static Dynamic _ofVideoGrabber_grabFrame; /* REM */ 
	Dynamic &_ofVideoGrabber_grabFrame_dyn() { return _ofVideoGrabber_grabFrame;}
		static Dynamic _ofVideoGrabber_close; /* REM */ 
	Dynamic &_ofVideoGrabber_close_dyn() { return _ofVideoGrabber_close;}
		static Dynamic _ofVideoGrabber_initGrabber; /* REM */ 
	Dynamic &_ofVideoGrabber_initGrabber_dyn() { return _ofVideoGrabber_initGrabber;}
		static Dynamic _ofVideoGrabber_videoSettings; /* REM */ 
	Dynamic &_ofVideoGrabber_videoSettings_dyn() { return _ofVideoGrabber_videoSettings;}
		static Dynamic _ofVideoGrabber_getPixels; /* REM */ 
	Dynamic &_ofVideoGrabber_getPixels_dyn() { return _ofVideoGrabber_getPixels;}
		static Dynamic _ofVideoGrabber_getTextureReference; /* REM */ 
	Dynamic &_ofVideoGrabber_getTextureReference_dyn() { return _ofVideoGrabber_getTextureReference;}
		static Dynamic _ofVideoGrabber_setVerbose; /* REM */ 
	Dynamic &_ofVideoGrabber_setVerbose_dyn() { return _ofVideoGrabber_setVerbose;}
		static Dynamic _ofVideoGrabber_setDeviceID; /* REM */ 
	Dynamic &_ofVideoGrabber_setDeviceID_dyn() { return _ofVideoGrabber_setDeviceID;}
		static Dynamic _ofVideoGrabber_setDesiredFrameRate; /* REM */ 
	Dynamic &_ofVideoGrabber_setDesiredFrameRate_dyn() { return _ofVideoGrabber_setDesiredFrameRate;}
		static Dynamic _ofVideoGrabber_setUseTexture; /* REM */ 
	Dynamic &_ofVideoGrabber_setUseTexture_dyn() { return _ofVideoGrabber_setUseTexture;}
		static Dynamic _ofVideoGrabber_draw4; /* REM */ 
	Dynamic &_ofVideoGrabber_draw4_dyn() { return _ofVideoGrabber_draw4;}
		static Dynamic _ofVideoGrabber_draw2; /* REM */ 
	Dynamic &_ofVideoGrabber_draw2_dyn() { return _ofVideoGrabber_draw2;}
		static Dynamic _ofVideoGrabber_update; /* REM */ 
	Dynamic &_ofVideoGrabber_update_dyn() { return _ofVideoGrabber_update;}
		static Dynamic _ofVideoGrabber_setAnchorPercent; /* REM */ 
	Dynamic &_ofVideoGrabber_setAnchorPercent_dyn() { return _ofVideoGrabber_setAnchorPercent;}
		static Dynamic _ofVideoGrabber_setAnchorPoint; /* REM */ 
	Dynamic &_ofVideoGrabber_setAnchorPoint_dyn() { return _ofVideoGrabber_setAnchorPoint;}
		static Dynamic _ofVideoGrabber_resetAnchor; /* REM */ 
	Dynamic &_ofVideoGrabber_resetAnchor_dyn() { return _ofVideoGrabber_resetAnchor;}
		static Dynamic _ofVideoGrabber_get_height; /* REM */ 
	Dynamic &_ofVideoGrabber_get_height_dyn() { return _ofVideoGrabber_get_height;}
		static Dynamic _ofVideoGrabber_set_height; /* REM */ 
	Dynamic &_ofVideoGrabber_set_height_dyn() { return _ofVideoGrabber_set_height;}
		static Dynamic _ofVideoGrabber_get_width; /* REM */ 
	Dynamic &_ofVideoGrabber_get_width_dyn() { return _ofVideoGrabber_get_width;}
		static Dynamic _ofVideoGrabber_set_width; /* REM */ 
	Dynamic &_ofVideoGrabber_set_width_dyn() { return _ofVideoGrabber_set_width;}
};

} // end namespace of
} // end namespace video

#endif /* INCLUDED_of_video_VideoGrabber */ 
