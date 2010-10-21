#ifndef INCLUDED_of_sound_SoundStream
#define INCLUDED_of_sound_SoundStream

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,app,BaseApp)
HX_DECLARE_CLASS2(of,sound,SoundStream)
namespace of{
namespace sound{


class SoundStream_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundStream_obj OBJ_;
		SoundStream_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SoundStream_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundStream_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundStream"); }

		static Void soundStreamSetup( int nOutputChannels,int nInputChannels,::of::app::BaseApp OFSA,Dynamic sampleRate,Dynamic bufferSize,Dynamic nBuffers);
		static Dynamic soundStreamSetup_dyn();

		static Void soundStreamStop( );
		static Dynamic soundStreamStop_dyn();

		static Void soundStreamStart( );
		static Dynamic soundStreamStart_dyn();

		static Void soundStreamClose( );
		static Dynamic soundStreamClose_dyn();

		static Void soundStreamListDevices( );
		static Dynamic soundStreamListDevices_dyn();

		static Dynamic _ofSoundStreamSetup; /* REM */ 
	Dynamic &_ofSoundStreamSetup_dyn() { return _ofSoundStreamSetup;}
		static Dynamic _ofSoundStreamStop; /* REM */ 
	Dynamic &_ofSoundStreamStop_dyn() { return _ofSoundStreamStop;}
		static Dynamic _ofSoundStreamStart; /* REM */ 
	Dynamic &_ofSoundStreamStart_dyn() { return _ofSoundStreamStart;}
		static Dynamic _ofSoundStreamClose; /* REM */ 
	Dynamic &_ofSoundStreamClose_dyn() { return _ofSoundStreamClose;}
		static Dynamic _ofSoundStreamListDevices; /* REM */ 
	Dynamic &_ofSoundStreamListDevices_dyn() { return _ofSoundStreamListDevices;}
};

} // end namespace of
} // end namespace sound

#endif /* INCLUDED_of_sound_SoundStream */ 
