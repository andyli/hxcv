#ifndef INCLUDED_of_video_VideoPlayer
#define INCLUDED_of_video_VideoPlayer

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,graphics,Texture)
HX_DECLARE_CLASS2(of,video,VideoPlayer)
namespace of{
namespace video{


class VideoPlayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VideoPlayer_obj OBJ_;
		VideoPlayer_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< VideoPlayer_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VideoPlayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("VideoPlayer"); }

		virtual bool loadMovie( ::String name);
		Dynamic loadMovie_dyn();

		virtual Void closeMovie( );
		Dynamic closeMovie_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void idleMovie( );
		Dynamic idleMovie_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual bool isFrameNew( );
		Dynamic isFrameNew_dyn();

		virtual Array< unsigned char > getPixels( );
		Dynamic getPixels_dyn();

		virtual double getPosition( );
		Dynamic getPosition_dyn();

		virtual double getSpeed( );
		Dynamic getSpeed_dyn();

		virtual double getDuration( );
		Dynamic getDuration_dyn();

		virtual bool getIsMovieDone( );
		Dynamic getIsMovieDone_dyn();

		virtual Void setPosition( double pct);
		Dynamic setPosition_dyn();

		virtual Void setVolume( int volume);
		Dynamic setVolume_dyn();

		virtual Void setLoopState( int state);
		Dynamic setLoopState_dyn();

		virtual Void setSpeed( double speed);
		Dynamic setSpeed_dyn();

		virtual Void setFrame( int frame);
		Dynamic setFrame_dyn();

		virtual Void setUseTexture( bool bUse);
		Dynamic setUseTexture_dyn();

		virtual ::of::graphics::Texture getTextureReference( );
		Dynamic getTextureReference_dyn();

		virtual Void draw( double x,double y,Dynamic w,Dynamic h);
		Dynamic draw_dyn();

		virtual Void setAnchorPercent( double xPct,double yPct);
		Dynamic setAnchorPercent_dyn();

		virtual Void setAnchorPoint( int x,int y);
		Dynamic setAnchorPoint_dyn();

		virtual Void resetAnchor( );
		Dynamic resetAnchor_dyn();

		virtual Void setPaused( bool bPause);
		Dynamic setPaused_dyn();

		virtual int getCurrentFrame( );
		Dynamic getCurrentFrame_dyn();

		virtual int getTotalNumFrames( );
		Dynamic getTotalNumFrames_dyn();

		virtual Void firstFrame( );
		Dynamic firstFrame_dyn();

		virtual Void nextFrame( );
		Dynamic nextFrame_dyn();

		virtual Void previousFrame( );
		Dynamic previousFrame_dyn();

		virtual double getHeight( );
		Dynamic getHeight_dyn();

		virtual double getWidth( );
		Dynamic getWidth_dyn();

		int width; /* REM */ 
		int height; /* REM */ 
		double speed; /* REM */ 
		bool bLoaded; /* REM */ 
		int nFrames; /* REM */ 
		Array< unsigned char > pixels; /* REM */ 
		bool bHavePixelsChanged; /* REM */ 
		::of::graphics::Texture tex; /* REM */ 
		bool bUseTexture; /* REM */ 
		bool allocated; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual int __get_width( );
		Dynamic __get_width_dyn();

		virtual int __set_width( int val);
		Dynamic __set_width_dyn();

		virtual int __get_height( );
		Dynamic __get_height_dyn();

		virtual int __set_height( int val);
		Dynamic __set_height_dyn();

		virtual double __get_speed( );
		Dynamic __get_speed_dyn();

		virtual double __set_speed( double val);
		Dynamic __set_speed_dyn();

		virtual bool __get_bLoaded( );
		Dynamic __get_bLoaded_dyn();

		virtual bool __set_bLoaded( bool val);
		Dynamic __set_bLoaded_dyn();

		virtual int __get_nFrames( );
		Dynamic __get_nFrames_dyn();

		virtual int __set_nFrames( int val);
		Dynamic __set_nFrames_dyn();

		virtual Array< unsigned char > __set_pixels( Array< unsigned char > val);
		Dynamic __set_pixels_dyn();

		virtual bool __get_bHavePixelsChanged( );
		Dynamic __get_bHavePixelsChanged_dyn();

		virtual bool __set_bHavePixelsChanged( bool val);
		Dynamic __set_bHavePixelsChanged_dyn();

		virtual ::of::graphics::Texture __set_tex( ::of::graphics::Texture val);
		Dynamic __set_tex_dyn();

		virtual bool __get_bUseTexture( );
		Dynamic __get_bUseTexture_dyn();

		virtual bool __set_bUseTexture( bool val);
		Dynamic __set_bUseTexture_dyn();

		virtual bool __get_allocated( );
		Dynamic __get_allocated_dyn();

		virtual bool __set_allocated( bool val);
		Dynamic __set_allocated_dyn();

		static Dynamic _ofVideoPlayer_new; /* REM */ 
	Dynamic &_ofVideoPlayer_new_dyn() { return _ofVideoPlayer_new;}
		static Dynamic _ofVideoPlayer_loadMovie; /* REM */ 
	Dynamic &_ofVideoPlayer_loadMovie_dyn() { return _ofVideoPlayer_loadMovie;}
		static Dynamic _ofVideoPlayer_closeMovie; /* REM */ 
	Dynamic &_ofVideoPlayer_closeMovie_dyn() { return _ofVideoPlayer_closeMovie;}
		static Dynamic _ofVideoPlayer_close; /* REM */ 
	Dynamic &_ofVideoPlayer_close_dyn() { return _ofVideoPlayer_close;}
		static Dynamic _ofVideoPlayer_update; /* REM */ 
	Dynamic &_ofVideoPlayer_update_dyn() { return _ofVideoPlayer_update;}
		static Dynamic _ofVideoPlayer_idleMovie; /* REM */ 
	Dynamic &_ofVideoPlayer_idleMovie_dyn() { return _ofVideoPlayer_idleMovie;}
		static Dynamic _ofVideoPlayer_play; /* REM */ 
	Dynamic &_ofVideoPlayer_play_dyn() { return _ofVideoPlayer_play;}
		static Dynamic _ofVideoPlayer_stop; /* REM */ 
	Dynamic &_ofVideoPlayer_stop_dyn() { return _ofVideoPlayer_stop;}
		static Dynamic _ofVideoPlayer_isFrameNew; /* REM */ 
	Dynamic &_ofVideoPlayer_isFrameNew_dyn() { return _ofVideoPlayer_isFrameNew;}
		static Dynamic _ofVideoPlayer_getPixels; /* REM */ 
	Dynamic &_ofVideoPlayer_getPixels_dyn() { return _ofVideoPlayer_getPixels;}
		static Dynamic _ofVideoPlayer_getPosition; /* REM */ 
	Dynamic &_ofVideoPlayer_getPosition_dyn() { return _ofVideoPlayer_getPosition;}
		static Dynamic _ofVideoPlayer_getSpeed; /* REM */ 
	Dynamic &_ofVideoPlayer_getSpeed_dyn() { return _ofVideoPlayer_getSpeed;}
		static Dynamic _ofVideoPlayer_getDuration; /* REM */ 
	Dynamic &_ofVideoPlayer_getDuration_dyn() { return _ofVideoPlayer_getDuration;}
		static Dynamic _ofVideoPlayer_getIsMovieDone; /* REM */ 
	Dynamic &_ofVideoPlayer_getIsMovieDone_dyn() { return _ofVideoPlayer_getIsMovieDone;}
		static Dynamic _ofVideoPlayer_setPosition; /* REM */ 
	Dynamic &_ofVideoPlayer_setPosition_dyn() { return _ofVideoPlayer_setPosition;}
		static Dynamic _ofVideoPlayer_setVolume; /* REM */ 
	Dynamic &_ofVideoPlayer_setVolume_dyn() { return _ofVideoPlayer_setVolume;}
		static Dynamic _ofVideoPlayer_setLoopState; /* REM */ 
	Dynamic &_ofVideoPlayer_setLoopState_dyn() { return _ofVideoPlayer_setLoopState;}
		static Dynamic _ofVideoPlayer_setSpeed; /* REM */ 
	Dynamic &_ofVideoPlayer_setSpeed_dyn() { return _ofVideoPlayer_setSpeed;}
		static Dynamic _ofVideoPlayer_setFrame; /* REM */ 
	Dynamic &_ofVideoPlayer_setFrame_dyn() { return _ofVideoPlayer_setFrame;}
		static Dynamic _ofVideoPlayer_setUseTexture; /* REM */ 
	Dynamic &_ofVideoPlayer_setUseTexture_dyn() { return _ofVideoPlayer_setUseTexture;}
		static Dynamic _ofVideoPlayer_getTextureReference; /* REM */ 
	Dynamic &_ofVideoPlayer_getTextureReference_dyn() { return _ofVideoPlayer_getTextureReference;}
		static Dynamic _ofVideoPlayer_draw4; /* REM */ 
	Dynamic &_ofVideoPlayer_draw4_dyn() { return _ofVideoPlayer_draw4;}
		static Dynamic _ofVideoPlayer_draw2; /* REM */ 
	Dynamic &_ofVideoPlayer_draw2_dyn() { return _ofVideoPlayer_draw2;}
		static Dynamic _ofVideoPlayer_setAnchorPercent; /* REM */ 
	Dynamic &_ofVideoPlayer_setAnchorPercent_dyn() { return _ofVideoPlayer_setAnchorPercent;}
		static Dynamic _ofVideoPlayer_setAnchorPoint; /* REM */ 
	Dynamic &_ofVideoPlayer_setAnchorPoint_dyn() { return _ofVideoPlayer_setAnchorPoint;}
		static Dynamic _ofVideoPlayer_resetAnchor; /* REM */ 
	Dynamic &_ofVideoPlayer_resetAnchor_dyn() { return _ofVideoPlayer_resetAnchor;}
		static Dynamic _ofVideoPlayer_setPaused; /* REM */ 
	Dynamic &_ofVideoPlayer_setPaused_dyn() { return _ofVideoPlayer_setPaused;}
		static Dynamic _ofVideoPlayer_getCurrentFrame; /* REM */ 
	Dynamic &_ofVideoPlayer_getCurrentFrame_dyn() { return _ofVideoPlayer_getCurrentFrame;}
		static Dynamic _ofVideoPlayer_getTotalNumFrames; /* REM */ 
	Dynamic &_ofVideoPlayer_getTotalNumFrames_dyn() { return _ofVideoPlayer_getTotalNumFrames;}
		static Dynamic _ofVideoPlayer_firstFrame; /* REM */ 
	Dynamic &_ofVideoPlayer_firstFrame_dyn() { return _ofVideoPlayer_firstFrame;}
		static Dynamic _ofVideoPlayer_nextFrame; /* REM */ 
	Dynamic &_ofVideoPlayer_nextFrame_dyn() { return _ofVideoPlayer_nextFrame;}
		static Dynamic _ofVideoPlayer_previousFrame; /* REM */ 
	Dynamic &_ofVideoPlayer_previousFrame_dyn() { return _ofVideoPlayer_previousFrame;}
		static Dynamic _ofVideoPlayer_get_width; /* REM */ 
	Dynamic &_ofVideoPlayer_get_width_dyn() { return _ofVideoPlayer_get_width;}
		static Dynamic _ofVideoPlayer_set_width; /* REM */ 
	Dynamic &_ofVideoPlayer_set_width_dyn() { return _ofVideoPlayer_set_width;}
		static Dynamic _ofVideoPlayer_get_height; /* REM */ 
	Dynamic &_ofVideoPlayer_get_height_dyn() { return _ofVideoPlayer_get_height;}
		static Dynamic _ofVideoPlayer_set_height; /* REM */ 
	Dynamic &_ofVideoPlayer_set_height_dyn() { return _ofVideoPlayer_set_height;}
		static Dynamic _ofVideoPlayer_get_speed; /* REM */ 
	Dynamic &_ofVideoPlayer_get_speed_dyn() { return _ofVideoPlayer_get_speed;}
		static Dynamic _ofVideoPlayer_set_speed; /* REM */ 
	Dynamic &_ofVideoPlayer_set_speed_dyn() { return _ofVideoPlayer_set_speed;}
		static Dynamic _ofVideoPlayer_get_bLoaded; /* REM */ 
	Dynamic &_ofVideoPlayer_get_bLoaded_dyn() { return _ofVideoPlayer_get_bLoaded;}
		static Dynamic _ofVideoPlayer_set_bLoaded; /* REM */ 
	Dynamic &_ofVideoPlayer_set_bLoaded_dyn() { return _ofVideoPlayer_set_bLoaded;}
		static Dynamic _ofVideoPlayer_get_nFrames; /* REM */ 
	Dynamic &_ofVideoPlayer_get_nFrames_dyn() { return _ofVideoPlayer_get_nFrames;}
		static Dynamic _ofVideoPlayer_set_nFrames; /* REM */ 
	Dynamic &_ofVideoPlayer_set_nFrames_dyn() { return _ofVideoPlayer_set_nFrames;}
		static Dynamic _ofVideoPlayer_set_pixels; /* REM */ 
	Dynamic &_ofVideoPlayer_set_pixels_dyn() { return _ofVideoPlayer_set_pixels;}
		static Dynamic _ofVideoPlayer_get_bHavePixelsChanged; /* REM */ 
	Dynamic &_ofVideoPlayer_get_bHavePixelsChanged_dyn() { return _ofVideoPlayer_get_bHavePixelsChanged;}
		static Dynamic _ofVideoPlayer_set_bHavePixelsChanged; /* REM */ 
	Dynamic &_ofVideoPlayer_set_bHavePixelsChanged_dyn() { return _ofVideoPlayer_set_bHavePixelsChanged;}
		static Dynamic _ofVideoPlayer_set_tex; /* REM */ 
	Dynamic &_ofVideoPlayer_set_tex_dyn() { return _ofVideoPlayer_set_tex;}
		static Dynamic _ofVideoPlayer_get_bUseTexture; /* REM */ 
	Dynamic &_ofVideoPlayer_get_bUseTexture_dyn() { return _ofVideoPlayer_get_bUseTexture;}
		static Dynamic _ofVideoPlayer_set_bUseTexture; /* REM */ 
	Dynamic &_ofVideoPlayer_set_bUseTexture_dyn() { return _ofVideoPlayer_set_bUseTexture;}
		static Dynamic _ofVideoPlayer_get_allocated; /* REM */ 
	Dynamic &_ofVideoPlayer_get_allocated_dyn() { return _ofVideoPlayer_get_allocated;}
		static Dynamic _ofVideoPlayer_set_allocated; /* REM */ 
	Dynamic &_ofVideoPlayer_set_allocated_dyn() { return _ofVideoPlayer_set_allocated;}
};

} // end namespace of
} // end namespace video

#endif /* INCLUDED_of_video_VideoPlayer */ 
