#ifndef INCLUDED_of_sound_SoundPlayer
#define INCLUDED_of_sound_SoundPlayer

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,sound,SoundPlayer)
namespace of{
namespace sound{


class SoundPlayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundPlayer_obj OBJ_;
		SoundPlayer_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< SoundPlayer_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundPlayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundPlayer"); }

		virtual Void loadSound( ::String fileName,Dynamic stream);
		Dynamic loadSound_dyn();

		virtual Void unloadSound( );
		Dynamic unloadSound_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void setVolume( double vol);
		Dynamic setVolume_dyn();

		virtual Void setPan( double vol);
		Dynamic setPan_dyn();

		virtual Void setSpeed( double spd);
		Dynamic setSpeed_dyn();

		virtual Void setPaused( bool bP);
		Dynamic setPaused_dyn();

		virtual Void setLoop( bool bLp);
		Dynamic setLoop_dyn();

		virtual Void setMultiPlay( bool bMp);
		Dynamic setMultiPlay_dyn();

		virtual Void setPosition( double pct);
		Dynamic setPosition_dyn();

		virtual double getPosition( );
		Dynamic getPosition_dyn();

		virtual bool getIsPlaying( );
		Dynamic getIsPlaying_dyn();

		virtual double getSpeed( );
		Dynamic getSpeed_dyn();

		virtual double getPan( );
		Dynamic getPan_dyn();

		bool isStreaming; /* REM */ 
		bool bMultiPlay; /* REM */ 
		bool bLoop; /* REM */ 
		bool bLoadedOk; /* REM */ 
		bool bPaused; /* REM */ 
		double pan; /* REM */ 
		double volume; /* REM */ 
		double internalFreq; /* REM */ 
		double speed; /* REM */ 
		int length; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual bool __get_isStreaming( );
		Dynamic __get_isStreaming_dyn();

		virtual bool __set_isStreaming( bool val);
		Dynamic __set_isStreaming_dyn();

		virtual bool __get_bMultiPlay( );
		Dynamic __get_bMultiPlay_dyn();

		virtual bool __set_bMultiPlay( bool val);
		Dynamic __set_bMultiPlay_dyn();

		virtual bool __get_bLoop( );
		Dynamic __get_bLoop_dyn();

		virtual bool __set_bLoop( bool val);
		Dynamic __set_bLoop_dyn();

		virtual bool __get_bLoadedOk( );
		Dynamic __get_bLoadedOk_dyn();

		virtual bool __set_bLoadedOk( bool val);
		Dynamic __set_bLoadedOk_dyn();

		virtual bool __get_bPaused( );
		Dynamic __get_bPaused_dyn();

		virtual bool __set_bPaused( bool val);
		Dynamic __set_bPaused_dyn();

		virtual double __get_pan( );
		Dynamic __get_pan_dyn();

		virtual double __set_pan( double val);
		Dynamic __set_pan_dyn();

		virtual double __get_volume( );
		Dynamic __get_volume_dyn();

		virtual double __set_volume( double val);
		Dynamic __set_volume_dyn();

		virtual double __get_internalFreq( );
		Dynamic __get_internalFreq_dyn();

		virtual double __set_internalFreq( double val);
		Dynamic __set_internalFreq_dyn();

		virtual double __get_speed( );
		Dynamic __get_speed_dyn();

		virtual double __set_speed( double val);
		Dynamic __set_speed_dyn();

		virtual int __get_length( );
		Dynamic __get_length_dyn();

		virtual int __set_length( int val);
		Dynamic __set_length_dyn();

		static Void soundStopAll( );
		static Dynamic soundStopAll_dyn();

		static Void soundSetVolume( double vol);
		static Dynamic soundSetVolume_dyn();

		static Void soundUpdate( );
		static Dynamic soundUpdate_dyn();

		static Array< double > soundGetSpectrum( int nBands);
		static Dynamic soundGetSpectrum_dyn();

		static Void initializeFmod( );
		static Dynamic initializeFmod_dyn();

		static Void closeFmod( );
		static Dynamic closeFmod_dyn();

		static Dynamic _ofSoundStopAll; /* REM */ 
	Dynamic &_ofSoundStopAll_dyn() { return _ofSoundStopAll;}
		static Dynamic _ofSoundSetVolume; /* REM */ 
	Dynamic &_ofSoundSetVolume_dyn() { return _ofSoundSetVolume;}
		static Dynamic _ofSoundUpdate; /* REM */ 
	Dynamic &_ofSoundUpdate_dyn() { return _ofSoundUpdate;}
		static Dynamic _ofSoundGetSpectrum; /* REM */ 
	Dynamic &_ofSoundGetSpectrum_dyn() { return _ofSoundGetSpectrum;}
		static Dynamic _ofSoundPlayer_new; /* REM */ 
	Dynamic &_ofSoundPlayer_new_dyn() { return _ofSoundPlayer_new;}
		static Dynamic _ofSoundPlayer_initializeFmod; /* REM */ 
	Dynamic &_ofSoundPlayer_initializeFmod_dyn() { return _ofSoundPlayer_initializeFmod;}
		static Dynamic _ofSoundPlayer_closeFmod; /* REM */ 
	Dynamic &_ofSoundPlayer_closeFmod_dyn() { return _ofSoundPlayer_closeFmod;}
		static Dynamic _ofSoundPlayer_loadSound; /* REM */ 
	Dynamic &_ofSoundPlayer_loadSound_dyn() { return _ofSoundPlayer_loadSound;}
		static Dynamic _ofSoundPlayer_unloadSound; /* REM */ 
	Dynamic &_ofSoundPlayer_unloadSound_dyn() { return _ofSoundPlayer_unloadSound;}
		static Dynamic _ofSoundPlayer_play; /* REM */ 
	Dynamic &_ofSoundPlayer_play_dyn() { return _ofSoundPlayer_play;}
		static Dynamic _ofSoundPlayer_stop; /* REM */ 
	Dynamic &_ofSoundPlayer_stop_dyn() { return _ofSoundPlayer_stop;}
		static Dynamic _ofSoundPlayer_setVolume; /* REM */ 
	Dynamic &_ofSoundPlayer_setVolume_dyn() { return _ofSoundPlayer_setVolume;}
		static Dynamic _ofSoundPlayer_setPan; /* REM */ 
	Dynamic &_ofSoundPlayer_setPan_dyn() { return _ofSoundPlayer_setPan;}
		static Dynamic _ofSoundPlayer_setSpeed; /* REM */ 
	Dynamic &_ofSoundPlayer_setSpeed_dyn() { return _ofSoundPlayer_setSpeed;}
		static Dynamic _ofSoundPlayer_setPaused; /* REM */ 
	Dynamic &_ofSoundPlayer_setPaused_dyn() { return _ofSoundPlayer_setPaused;}
		static Dynamic _ofSoundPlayer_setLoop; /* REM */ 
	Dynamic &_ofSoundPlayer_setLoop_dyn() { return _ofSoundPlayer_setLoop;}
		static Dynamic _ofSoundPlayer_setMultiPlay; /* REM */ 
	Dynamic &_ofSoundPlayer_setMultiPlay_dyn() { return _ofSoundPlayer_setMultiPlay;}
		static Dynamic _ofSoundPlayer_setPosition; /* REM */ 
	Dynamic &_ofSoundPlayer_setPosition_dyn() { return _ofSoundPlayer_setPosition;}
		static Dynamic _ofSoundPlayer_getPosition; /* REM */ 
	Dynamic &_ofSoundPlayer_getPosition_dyn() { return _ofSoundPlayer_getPosition;}
		static Dynamic _ofSoundPlayer_getIsPlaying; /* REM */ 
	Dynamic &_ofSoundPlayer_getIsPlaying_dyn() { return _ofSoundPlayer_getIsPlaying;}
		static Dynamic _ofSoundPlayer_get_isStreaming; /* REM */ 
	Dynamic &_ofSoundPlayer_get_isStreaming_dyn() { return _ofSoundPlayer_get_isStreaming;}
		static Dynamic _ofSoundPlayer_set_isStreaming; /* REM */ 
	Dynamic &_ofSoundPlayer_set_isStreaming_dyn() { return _ofSoundPlayer_set_isStreaming;}
		static Dynamic _ofSoundPlayer_get_bMultiPlay; /* REM */ 
	Dynamic &_ofSoundPlayer_get_bMultiPlay_dyn() { return _ofSoundPlayer_get_bMultiPlay;}
		static Dynamic _ofSoundPlayer_set_bMultiPlay; /* REM */ 
	Dynamic &_ofSoundPlayer_set_bMultiPlay_dyn() { return _ofSoundPlayer_set_bMultiPlay;}
		static Dynamic _ofSoundPlayer_get_bLoop; /* REM */ 
	Dynamic &_ofSoundPlayer_get_bLoop_dyn() { return _ofSoundPlayer_get_bLoop;}
		static Dynamic _ofSoundPlayer_set_bLoop; /* REM */ 
	Dynamic &_ofSoundPlayer_set_bLoop_dyn() { return _ofSoundPlayer_set_bLoop;}
		static Dynamic _ofSoundPlayer_get_bLoadedOk; /* REM */ 
	Dynamic &_ofSoundPlayer_get_bLoadedOk_dyn() { return _ofSoundPlayer_get_bLoadedOk;}
		static Dynamic _ofSoundPlayer_set_bLoadedOk; /* REM */ 
	Dynamic &_ofSoundPlayer_set_bLoadedOk_dyn() { return _ofSoundPlayer_set_bLoadedOk;}
		static Dynamic _ofSoundPlayer_get_bPaused; /* REM */ 
	Dynamic &_ofSoundPlayer_get_bPaused_dyn() { return _ofSoundPlayer_get_bPaused;}
		static Dynamic _ofSoundPlayer_set_bPaused; /* REM */ 
	Dynamic &_ofSoundPlayer_set_bPaused_dyn() { return _ofSoundPlayer_set_bPaused;}
		static Dynamic _ofSoundPlayer_get_pan; /* REM */ 
	Dynamic &_ofSoundPlayer_get_pan_dyn() { return _ofSoundPlayer_get_pan;}
		static Dynamic _ofSoundPlayer_set_pan; /* REM */ 
	Dynamic &_ofSoundPlayer_set_pan_dyn() { return _ofSoundPlayer_set_pan;}
		static Dynamic _ofSoundPlayer_get_volume; /* REM */ 
	Dynamic &_ofSoundPlayer_get_volume_dyn() { return _ofSoundPlayer_get_volume;}
		static Dynamic _ofSoundPlayer_set_volume; /* REM */ 
	Dynamic &_ofSoundPlayer_set_volume_dyn() { return _ofSoundPlayer_set_volume;}
		static Dynamic _ofSoundPlayer_get_internalFreq; /* REM */ 
	Dynamic &_ofSoundPlayer_get_internalFreq_dyn() { return _ofSoundPlayer_get_internalFreq;}
		static Dynamic _ofSoundPlayer_set_internalFreq; /* REM */ 
	Dynamic &_ofSoundPlayer_set_internalFreq_dyn() { return _ofSoundPlayer_set_internalFreq;}
		static Dynamic _ofSoundPlayer_get_speed; /* REM */ 
	Dynamic &_ofSoundPlayer_get_speed_dyn() { return _ofSoundPlayer_get_speed;}
		static Dynamic _ofSoundPlayer_set_speed; /* REM */ 
	Dynamic &_ofSoundPlayer_set_speed_dyn() { return _ofSoundPlayer_set_speed;}
		static Dynamic _ofSoundPlayer_get_length; /* REM */ 
	Dynamic &_ofSoundPlayer_get_length_dyn() { return _ofSoundPlayer_get_length;}
		static Dynamic _ofSoundPlayer_set_length; /* REM */ 
	Dynamic &_ofSoundPlayer_set_length_dyn() { return _ofSoundPlayer_set_length;}
};

} // end namespace of
} // end namespace sound

#endif /* INCLUDED_of_sound_SoundPlayer */ 
