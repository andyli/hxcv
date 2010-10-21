#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_app_BaseApp
#include <of/app/BaseApp.h>
#endif
#ifndef INCLUDED_of_sound_SoundStream
#include <of/sound/SoundStream.h>
#endif
namespace of{
namespace sound{

Void SoundStream_obj::__construct()
{
	return null();
}

SoundStream_obj::~SoundStream_obj() { }

Dynamic SoundStream_obj::__CreateEmpty() { return  new SoundStream_obj; }
hx::ObjectPtr< SoundStream_obj > SoundStream_obj::__new()
{  hx::ObjectPtr< SoundStream_obj > result = new SoundStream_obj();
	result->__construct();
	return result;}

Dynamic SoundStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundStream_obj > result = new SoundStream_obj();
	result->__construct();
	return result;}

Void SoundStream_obj::soundStreamSetup( int nOutputChannels,int nInputChannels,::of::app::BaseApp OFSA,Dynamic __o_sampleRate,Dynamic __o_bufferSize,Dynamic __o_nBuffers){
int sampleRate = __o_sampleRate.Default(44100);
int bufferSize = __o_bufferSize.Default(256);
int nBuffers = __o_nBuffers.Default(4);
	HX_SOURCE_PUSH("SoundStream_obj::soundStreamSetup");
{
		__SAFE_POINT
		struct _Function_1_1{
			inline static Dynamic Block( int &nInputChannels,int &sampleRate,int &bufferSize,int &nOutputChannels,int &nBuffers,::of::app::BaseApp &OFSA){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("nOutputChannels") , nOutputChannels);
				__result->Add(HX_CSTRING("nInputChannels") , nInputChannels);
				__result->Add(HX_CSTRING("OFSA") , OFSA->__Field(HX_CSTRING("__handle")));
				__result->Add(HX_CSTRING("sampleRate") , sampleRate);
				__result->Add(HX_CSTRING("bufferSize") , bufferSize);
				__result->Add(HX_CSTRING("nBuffers") , nBuffers);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundStream.hx",9)
		::of::sound::SoundStream_obj::_ofSoundStreamSetup(_Function_1_1::Block(nInputChannels,sampleRate,bufferSize,nOutputChannels,nBuffers,OFSA));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(SoundStream_obj,soundStreamSetup,(void))

Void SoundStream_obj::soundStreamStop( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundStream_obj::soundStreamStop")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundStream.hx",20)
		::of::sound::SoundStream_obj::_ofSoundStreamStop();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundStream_obj,soundStreamStop,(void))

Void SoundStream_obj::soundStreamStart( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundStream_obj::soundStreamStart")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundStream.hx",24)
		::of::sound::SoundStream_obj::_ofSoundStreamStart();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundStream_obj,soundStreamStart,(void))

Void SoundStream_obj::soundStreamClose( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundStream_obj::soundStreamClose")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundStream.hx",28)
		::of::sound::SoundStream_obj::_ofSoundStreamClose();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundStream_obj,soundStreamClose,(void))

Void SoundStream_obj::soundStreamListDevices( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundStream_obj::soundStreamListDevices")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundStream.hx",32)
		::of::sound::SoundStream_obj::_ofSoundStreamListDevices();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundStream_obj,soundStreamListDevices,(void))

Dynamic SoundStream_obj::_ofSoundStreamSetup;

Dynamic SoundStream_obj::_ofSoundStreamStop;

Dynamic SoundStream_obj::_ofSoundStreamStart;

Dynamic SoundStream_obj::_ofSoundStreamClose;

Dynamic SoundStream_obj::_ofSoundStreamListDevices;


SoundStream_obj::SoundStream_obj()
{
}

void SoundStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundStream);
	HX_MARK_END_CLASS();
}

Dynamic SoundStream_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"soundStreamStop") ) { return soundStreamStop_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundStreamSetup") ) { return soundStreamSetup_dyn(); }
		if (HX_FIELD_EQ(inName,"soundStreamStart") ) { return soundStreamStart_dyn(); }
		if (HX_FIELD_EQ(inName,"soundStreamClose") ) { return soundStreamClose_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofSoundStreamStop") ) { return _ofSoundStreamStop; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofSoundStreamSetup") ) { return _ofSoundStreamSetup; }
		if (HX_FIELD_EQ(inName,"_ofSoundStreamStart") ) { return _ofSoundStreamStart; }
		if (HX_FIELD_EQ(inName,"_ofSoundStreamClose") ) { return _ofSoundStreamClose; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"soundStreamListDevices") ) { return soundStreamListDevices_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofSoundStreamListDevices") ) { return _ofSoundStreamListDevices; }
	}
	return super::__Field(inName);
}

Dynamic SoundStream_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"_ofSoundStreamStop") ) { _ofSoundStreamStop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofSoundStreamSetup") ) { _ofSoundStreamSetup=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundStreamStart") ) { _ofSoundStreamStart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundStreamClose") ) { _ofSoundStreamClose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofSoundStreamListDevices") ) { _ofSoundStreamListDevices=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SoundStream_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("soundStreamSetup"),
	HX_CSTRING("soundStreamStop"),
	HX_CSTRING("soundStreamStart"),
	HX_CSTRING("soundStreamClose"),
	HX_CSTRING("soundStreamListDevices"),
	HX_CSTRING("_ofSoundStreamSetup"),
	HX_CSTRING("_ofSoundStreamStop"),
	HX_CSTRING("_ofSoundStreamStart"),
	HX_CSTRING("_ofSoundStreamClose"),
	HX_CSTRING("_ofSoundStreamListDevices"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundStream_obj::_ofSoundStreamSetup,"_ofSoundStreamSetup");
	HX_MARK_MEMBER_NAME(SoundStream_obj::_ofSoundStreamStop,"_ofSoundStreamStop");
	HX_MARK_MEMBER_NAME(SoundStream_obj::_ofSoundStreamStart,"_ofSoundStreamStart");
	HX_MARK_MEMBER_NAME(SoundStream_obj::_ofSoundStreamClose,"_ofSoundStreamClose");
	HX_MARK_MEMBER_NAME(SoundStream_obj::_ofSoundStreamListDevices,"_ofSoundStreamListDevices");
};

Class SoundStream_obj::__mClass;

void SoundStream_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.sound.SoundStream"), hx::TCanCast< SoundStream_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SoundStream_obj::__boot()
{
	hx::Static(_ofSoundStreamSetup) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundStreamSetup"),1);
	hx::Static(_ofSoundStreamStop) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundStreamStop"),0);
	hx::Static(_ofSoundStreamStart) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundStreamStart"),0);
	hx::Static(_ofSoundStreamClose) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundStreamClose"),0);
	hx::Static(_ofSoundStreamListDevices) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundStreamListDevices"),0);
}

} // end namespace of
} // end namespace sound
