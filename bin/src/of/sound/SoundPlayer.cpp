#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_sound_SoundPlayer
#include <of/sound/SoundPlayer.h>
#endif
namespace of{
namespace sound{

Void SoundPlayer_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",26)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::sound::SoundPlayer_obj::_ofSoundPlayer_new()) : Dynamic(handle) );
}
;
	return null();
}

SoundPlayer_obj::~SoundPlayer_obj() { }

Dynamic SoundPlayer_obj::__CreateEmpty() { return  new SoundPlayer_obj; }
hx::ObjectPtr< SoundPlayer_obj > SoundPlayer_obj::__new(Dynamic handle)
{  hx::ObjectPtr< SoundPlayer_obj > result = new SoundPlayer_obj();
	result->__construct(handle);
	return result;}

Dynamic SoundPlayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundPlayer_obj > result = new SoundPlayer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SoundPlayer_obj::loadSound( ::String fileName,Dynamic __o_stream){
bool stream = __o_stream.Default(false);
	HX_SOURCE_PUSH("SoundPlayer_obj::loadSound");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",39)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_loadSound(this->__Field(HX_CSTRING("__handle")),fileName,stream);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SoundPlayer_obj,loadSound,(void))

Void SoundPlayer_obj::unloadSound( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::unloadSound")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",43)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_unloadSound(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,unloadSound,(void))

Void SoundPlayer_obj::play( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::play")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",47)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_play(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,play,(void))

Void SoundPlayer_obj::stop( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::stop")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",51)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_stop(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,stop,(void))

Void SoundPlayer_obj::setVolume( double vol){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::setVolume")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",56)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_setVolume(this->__Field(HX_CSTRING("__handle")),vol);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,setVolume,(void))

Void SoundPlayer_obj::setPan( double vol){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::setPan")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",60)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_setPan(this->__Field(HX_CSTRING("__handle")),vol);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,setPan,(void))

Void SoundPlayer_obj::setSpeed( double spd){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::setSpeed")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",64)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_setSpeed(this->__Field(HX_CSTRING("__handle")),spd);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,setSpeed,(void))

Void SoundPlayer_obj::setPaused( bool bP){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::setPaused")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",68)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_setPaused(this->__Field(HX_CSTRING("__handle")),bP);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,setPaused,(void))

Void SoundPlayer_obj::setLoop( bool bLp){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::setLoop")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",72)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_setLoop(this->__Field(HX_CSTRING("__handle")),bLp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,setLoop,(void))

Void SoundPlayer_obj::setMultiPlay( bool bMp){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::setMultiPlay")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",76)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_setMultiPlay(this->__Field(HX_CSTRING("__handle")),bMp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,setMultiPlay,(void))

Void SoundPlayer_obj::setPosition( double pct){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::setPosition")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",80)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_setPosition(this->__Field(HX_CSTRING("__handle")),pct);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,setPosition,(void))

double SoundPlayer_obj::getPosition( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::getPosition")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",85)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_getPosition(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,getPosition,return )

bool SoundPlayer_obj::getIsPlaying( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::getIsPlaying")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",89)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_getIsPlaying(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,getIsPlaying,return )

double SoundPlayer_obj::getSpeed( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::getSpeed")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",93)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_speed(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,getSpeed,return )

double SoundPlayer_obj::getPan( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::getPan")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",97)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_pan(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,getPan,return )

bool SoundPlayer_obj::__get_isStreaming( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_isStreaming")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",117)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_isStreaming(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_isStreaming,return )

bool SoundPlayer_obj::__set_isStreaming( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_isStreaming")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",120)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_isStreaming(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_isStreaming,return )

bool SoundPlayer_obj::__get_bMultiPlay( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_bMultiPlay")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",124)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_bMultiPlay(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_bMultiPlay,return )

bool SoundPlayer_obj::__set_bMultiPlay( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_bMultiPlay")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",127)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_bMultiPlay(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_bMultiPlay,return )

bool SoundPlayer_obj::__get_bLoop( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_bLoop")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",131)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_bLoop(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_bLoop,return )

bool SoundPlayer_obj::__set_bLoop( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_bLoop")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",134)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_bLoop(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_bLoop,return )

bool SoundPlayer_obj::__get_bLoadedOk( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_bLoadedOk")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",138)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_bLoadedOk(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_bLoadedOk,return )

bool SoundPlayer_obj::__set_bLoadedOk( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_bLoadedOk")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",141)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_bLoadedOk(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_bLoadedOk,return )

bool SoundPlayer_obj::__get_bPaused( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_bPaused")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",145)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_bPaused(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_bPaused,return )

bool SoundPlayer_obj::__set_bPaused( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_bPaused")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",148)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_bPaused(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_bPaused,return )

double SoundPlayer_obj::__get_pan( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_pan")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",152)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_pan(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_pan,return )

double SoundPlayer_obj::__set_pan( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_pan")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",155)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_pan(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_pan,return )

double SoundPlayer_obj::__get_volume( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_volume")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",159)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_volume(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_volume,return )

double SoundPlayer_obj::__set_volume( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_volume")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",162)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_volume(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_volume,return )

double SoundPlayer_obj::__get_internalFreq( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_internalFreq")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",166)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_internalFreq(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_internalFreq,return )

double SoundPlayer_obj::__set_internalFreq( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_internalFreq")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",169)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_internalFreq(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_internalFreq,return )

double SoundPlayer_obj::__get_speed( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_speed")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",173)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_speed(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_speed,return )

double SoundPlayer_obj::__set_speed( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_speed")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",176)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_speed(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_speed,return )

int SoundPlayer_obj::__get_length( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__get_length")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",180)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_get_length(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,__get_length,return )

int SoundPlayer_obj::__set_length( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::__set_length")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",183)
	return ::of::sound::SoundPlayer_obj::_ofSoundPlayer_set_length(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,__set_length,return )

Void SoundPlayer_obj::soundStopAll( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::soundStopAll")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",8)
		::of::sound::SoundPlayer_obj::_ofSoundStopAll();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,soundStopAll,(void))

Void SoundPlayer_obj::soundSetVolume( double vol){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::soundSetVolume")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",12)
		::of::sound::SoundPlayer_obj::_ofSoundSetVolume(vol);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,soundSetVolume,(void))

Void SoundPlayer_obj::soundUpdate( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::soundUpdate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",17)
		::of::sound::SoundPlayer_obj::_ofSoundUpdate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,soundUpdate,(void))

Array< double > SoundPlayer_obj::soundGetSpectrum( int nBands){
	__SAFE_POINT
	HX_SOURCE_PUSH("SoundPlayer_obj::soundGetSpectrum")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",22)
	return ::of::sound::SoundPlayer_obj::_ofSoundGetSpectrum(nBands);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundPlayer_obj,soundGetSpectrum,return )

Void SoundPlayer_obj::initializeFmod( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::initializeFmod")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",30)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_initializeFmod();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,initializeFmod,(void))

Void SoundPlayer_obj::closeFmod( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SoundPlayer_obj::closeFmod")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/sound/SoundPlayer.hx",34)
		::of::sound::SoundPlayer_obj::_ofSoundPlayer_closeFmod();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundPlayer_obj,closeFmod,(void))

Dynamic SoundPlayer_obj::_ofSoundStopAll;

Dynamic SoundPlayer_obj::_ofSoundSetVolume;

Dynamic SoundPlayer_obj::_ofSoundUpdate;

Dynamic SoundPlayer_obj::_ofSoundGetSpectrum;

Dynamic SoundPlayer_obj::_ofSoundPlayer_new;

Dynamic SoundPlayer_obj::_ofSoundPlayer_initializeFmod;

Dynamic SoundPlayer_obj::_ofSoundPlayer_closeFmod;

Dynamic SoundPlayer_obj::_ofSoundPlayer_loadSound;

Dynamic SoundPlayer_obj::_ofSoundPlayer_unloadSound;

Dynamic SoundPlayer_obj::_ofSoundPlayer_play;

Dynamic SoundPlayer_obj::_ofSoundPlayer_stop;

Dynamic SoundPlayer_obj::_ofSoundPlayer_setVolume;

Dynamic SoundPlayer_obj::_ofSoundPlayer_setPan;

Dynamic SoundPlayer_obj::_ofSoundPlayer_setSpeed;

Dynamic SoundPlayer_obj::_ofSoundPlayer_setPaused;

Dynamic SoundPlayer_obj::_ofSoundPlayer_setLoop;

Dynamic SoundPlayer_obj::_ofSoundPlayer_setMultiPlay;

Dynamic SoundPlayer_obj::_ofSoundPlayer_setPosition;

Dynamic SoundPlayer_obj::_ofSoundPlayer_getPosition;

Dynamic SoundPlayer_obj::_ofSoundPlayer_getIsPlaying;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_isStreaming;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_isStreaming;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_bMultiPlay;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_bMultiPlay;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_bLoop;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_bLoop;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_bLoadedOk;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_bLoadedOk;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_bPaused;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_bPaused;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_pan;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_pan;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_volume;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_volume;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_internalFreq;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_internalFreq;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_speed;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_speed;

Dynamic SoundPlayer_obj::_ofSoundPlayer_get_length;

Dynamic SoundPlayer_obj::_ofSoundPlayer_set_length;


SoundPlayer_obj::SoundPlayer_obj()
{
}

void SoundPlayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundPlayer);
	HX_MARK_MEMBER_NAME(isStreaming,"isStreaming");
	HX_MARK_MEMBER_NAME(bMultiPlay,"bMultiPlay");
	HX_MARK_MEMBER_NAME(bLoop,"bLoop");
	HX_MARK_MEMBER_NAME(bLoadedOk,"bLoadedOk");
	HX_MARK_MEMBER_NAME(bPaused,"bPaused");
	HX_MARK_MEMBER_NAME(pan,"pan");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(internalFreq,"internalFreq");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic SoundPlayer_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return __get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bLoop") ) { return __get_bLoop(); }
		if (HX_FIELD_EQ(inName,"speed") ) { return __get_speed(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setPan") ) { return setPan_dyn(); }
		if (HX_FIELD_EQ(inName,"getPan") ) { return getPan_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return __get_volume(); }
		if (HX_FIELD_EQ(inName,"length") ) { return __get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLoop") ) { return setLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"bPaused") ) { return __get_bPaused(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setSpeed") ) { return setSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpeed") ) { return getSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"closeFmod") ) { return closeFmod_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"setPaused") ) { return setPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"bLoadedOk") ) { return __get_bLoadedOk(); }
		if (HX_FIELD_EQ(inName,"__get_pan") ) { return __get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_pan") ) { return __set_pan_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bMultiPlay") ) { return __get_bMultiPlay(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundUpdate") ) { return soundUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"unloadSound") ) { return unloadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"isStreaming") ) { return __get_isStreaming(); }
		if (HX_FIELD_EQ(inName,"__get_bLoop") ) { return __get_bLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bLoop") ) { return __set_bLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_speed") ) { return __get_speed_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_speed") ) { return __set_speed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"soundStopAll") ) { return soundStopAll_dyn(); }
		if (HX_FIELD_EQ(inName,"setMultiPlay") ) { return setMultiPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsPlaying") ) { return getIsPlaying_dyn(); }
		if (HX_FIELD_EQ(inName,"internalFreq") ) { return __get_internalFreq(); }
		if (HX_FIELD_EQ(inName,"__get_volume") ) { return __get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_volume") ) { return __set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_length") ) { return __get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_length") ) { return __set_length_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__get_bPaused") ) { return __get_bPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bPaused") ) { return __set_bPaused_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundSetVolume") ) { return soundSetVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeFmod") ) { return initializeFmod_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofSoundUpdate") ) { return _ofSoundUpdate; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofSoundStopAll") ) { return _ofSoundStopAll; }
		if (HX_FIELD_EQ(inName,"__get_bLoadedOk") ) { return __get_bLoadedOk_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bLoadedOk") ) { return __set_bLoadedOk_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundGetSpectrum") ) { return soundGetSpectrum_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_bMultiPlay") ) { return __get_bMultiPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bMultiPlay") ) { return __set_bMultiPlay_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofSoundSetVolume") ) { return _ofSoundSetVolume; }
		if (HX_FIELD_EQ(inName,"__get_isStreaming") ) { return __get_isStreaming_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_isStreaming") ) { return __set_isStreaming_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_new") ) { return _ofSoundPlayer_new; }
		if (HX_FIELD_EQ(inName,"__get_internalFreq") ) { return __get_internalFreq_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_internalFreq") ) { return __set_internalFreq_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofSoundGetSpectrum") ) { return _ofSoundGetSpectrum; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_play") ) { return _ofSoundPlayer_play; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_stop") ) { return _ofSoundPlayer_stop; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setPan") ) { return _ofSoundPlayer_setPan; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setLoop") ) { return _ofSoundPlayer_setLoop; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_pan") ) { return _ofSoundPlayer_get_pan; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_pan") ) { return _ofSoundPlayer_set_pan; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setSpeed") ) { return _ofSoundPlayer_setSpeed; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_closeFmod") ) { return _ofSoundPlayer_closeFmod; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_loadSound") ) { return _ofSoundPlayer_loadSound; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setVolume") ) { return _ofSoundPlayer_setVolume; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setPaused") ) { return _ofSoundPlayer_setPaused; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bLoop") ) { return _ofSoundPlayer_get_bLoop; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bLoop") ) { return _ofSoundPlayer_set_bLoop; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_speed") ) { return _ofSoundPlayer_get_speed; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_speed") ) { return _ofSoundPlayer_set_speed; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_volume") ) { return _ofSoundPlayer_get_volume; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_volume") ) { return _ofSoundPlayer_set_volume; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_length") ) { return _ofSoundPlayer_get_length; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_length") ) { return _ofSoundPlayer_set_length; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_unloadSound") ) { return _ofSoundPlayer_unloadSound; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setPosition") ) { return _ofSoundPlayer_setPosition; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_getPosition") ) { return _ofSoundPlayer_getPosition; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bPaused") ) { return _ofSoundPlayer_get_bPaused; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bPaused") ) { return _ofSoundPlayer_set_bPaused; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setMultiPlay") ) { return _ofSoundPlayer_setMultiPlay; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_getIsPlaying") ) { return _ofSoundPlayer_getIsPlaying; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bLoadedOk") ) { return _ofSoundPlayer_get_bLoadedOk; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bLoadedOk") ) { return _ofSoundPlayer_set_bLoadedOk; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_initializeFmod") ) { return _ofSoundPlayer_initializeFmod; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bMultiPlay") ) { return _ofSoundPlayer_get_bMultiPlay; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bMultiPlay") ) { return _ofSoundPlayer_set_bMultiPlay; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_isStreaming") ) { return _ofSoundPlayer_get_isStreaming; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_isStreaming") ) { return _ofSoundPlayer_set_isStreaming; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_internalFreq") ) { return _ofSoundPlayer_get_internalFreq; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_internalFreq") ) { return _ofSoundPlayer_set_internalFreq; }
	}
	return super::__Field(inName);
}

Dynamic SoundPlayer_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return __set_pan(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bLoop") ) { return __set_bLoop(inValue); }
		if (HX_FIELD_EQ(inName,"speed") ) { return __set_speed(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return __set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"length") ) { return __set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bPaused") ) { return __set_bPaused(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bLoadedOk") ) { return __set_bLoadedOk(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bMultiPlay") ) { return __set_bMultiPlay(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isStreaming") ) { return __set_isStreaming(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"internalFreq") ) { return __set_internalFreq(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofSoundUpdate") ) { _ofSoundUpdate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofSoundStopAll") ) { _ofSoundStopAll=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofSoundSetVolume") ) { _ofSoundSetVolume=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_new") ) { _ofSoundPlayer_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofSoundGetSpectrum") ) { _ofSoundGetSpectrum=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_play") ) { _ofSoundPlayer_play=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_stop") ) { _ofSoundPlayer_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setPan") ) { _ofSoundPlayer_setPan=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setLoop") ) { _ofSoundPlayer_setLoop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_pan") ) { _ofSoundPlayer_get_pan=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_pan") ) { _ofSoundPlayer_set_pan=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setSpeed") ) { _ofSoundPlayer_setSpeed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_closeFmod") ) { _ofSoundPlayer_closeFmod=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_loadSound") ) { _ofSoundPlayer_loadSound=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setVolume") ) { _ofSoundPlayer_setVolume=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setPaused") ) { _ofSoundPlayer_setPaused=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bLoop") ) { _ofSoundPlayer_get_bLoop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bLoop") ) { _ofSoundPlayer_set_bLoop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_speed") ) { _ofSoundPlayer_get_speed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_speed") ) { _ofSoundPlayer_set_speed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_volume") ) { _ofSoundPlayer_get_volume=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_volume") ) { _ofSoundPlayer_set_volume=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_length") ) { _ofSoundPlayer_get_length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_length") ) { _ofSoundPlayer_set_length=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_unloadSound") ) { _ofSoundPlayer_unloadSound=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setPosition") ) { _ofSoundPlayer_setPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_getPosition") ) { _ofSoundPlayer_getPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bPaused") ) { _ofSoundPlayer_get_bPaused=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bPaused") ) { _ofSoundPlayer_set_bPaused=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_setMultiPlay") ) { _ofSoundPlayer_setMultiPlay=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_getIsPlaying") ) { _ofSoundPlayer_getIsPlaying=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bLoadedOk") ) { _ofSoundPlayer_get_bLoadedOk=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bLoadedOk") ) { _ofSoundPlayer_set_bLoadedOk=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_initializeFmod") ) { _ofSoundPlayer_initializeFmod=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_bMultiPlay") ) { _ofSoundPlayer_get_bMultiPlay=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_bMultiPlay") ) { _ofSoundPlayer_set_bMultiPlay=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_isStreaming") ) { _ofSoundPlayer_get_isStreaming=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_isStreaming") ) { _ofSoundPlayer_set_isStreaming=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_get_internalFreq") ) { _ofSoundPlayer_get_internalFreq=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSoundPlayer_set_internalFreq") ) { _ofSoundPlayer_set_internalFreq=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SoundPlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isStreaming"));
	outFields->push(HX_CSTRING("bMultiPlay"));
	outFields->push(HX_CSTRING("bLoop"));
	outFields->push(HX_CSTRING("bLoadedOk"));
	outFields->push(HX_CSTRING("bPaused"));
	outFields->push(HX_CSTRING("pan"));
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("internalFreq"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("soundStopAll"),
	HX_CSTRING("soundSetVolume"),
	HX_CSTRING("soundUpdate"),
	HX_CSTRING("soundGetSpectrum"),
	HX_CSTRING("initializeFmod"),
	HX_CSTRING("closeFmod"),
	HX_CSTRING("_ofSoundStopAll"),
	HX_CSTRING("_ofSoundSetVolume"),
	HX_CSTRING("_ofSoundUpdate"),
	HX_CSTRING("_ofSoundGetSpectrum"),
	HX_CSTRING("_ofSoundPlayer_new"),
	HX_CSTRING("_ofSoundPlayer_initializeFmod"),
	HX_CSTRING("_ofSoundPlayer_closeFmod"),
	HX_CSTRING("_ofSoundPlayer_loadSound"),
	HX_CSTRING("_ofSoundPlayer_unloadSound"),
	HX_CSTRING("_ofSoundPlayer_play"),
	HX_CSTRING("_ofSoundPlayer_stop"),
	HX_CSTRING("_ofSoundPlayer_setVolume"),
	HX_CSTRING("_ofSoundPlayer_setPan"),
	HX_CSTRING("_ofSoundPlayer_setSpeed"),
	HX_CSTRING("_ofSoundPlayer_setPaused"),
	HX_CSTRING("_ofSoundPlayer_setLoop"),
	HX_CSTRING("_ofSoundPlayer_setMultiPlay"),
	HX_CSTRING("_ofSoundPlayer_setPosition"),
	HX_CSTRING("_ofSoundPlayer_getPosition"),
	HX_CSTRING("_ofSoundPlayer_getIsPlaying"),
	HX_CSTRING("_ofSoundPlayer_get_isStreaming"),
	HX_CSTRING("_ofSoundPlayer_set_isStreaming"),
	HX_CSTRING("_ofSoundPlayer_get_bMultiPlay"),
	HX_CSTRING("_ofSoundPlayer_set_bMultiPlay"),
	HX_CSTRING("_ofSoundPlayer_get_bLoop"),
	HX_CSTRING("_ofSoundPlayer_set_bLoop"),
	HX_CSTRING("_ofSoundPlayer_get_bLoadedOk"),
	HX_CSTRING("_ofSoundPlayer_set_bLoadedOk"),
	HX_CSTRING("_ofSoundPlayer_get_bPaused"),
	HX_CSTRING("_ofSoundPlayer_set_bPaused"),
	HX_CSTRING("_ofSoundPlayer_get_pan"),
	HX_CSTRING("_ofSoundPlayer_set_pan"),
	HX_CSTRING("_ofSoundPlayer_get_volume"),
	HX_CSTRING("_ofSoundPlayer_set_volume"),
	HX_CSTRING("_ofSoundPlayer_get_internalFreq"),
	HX_CSTRING("_ofSoundPlayer_set_internalFreq"),
	HX_CSTRING("_ofSoundPlayer_get_speed"),
	HX_CSTRING("_ofSoundPlayer_set_speed"),
	HX_CSTRING("_ofSoundPlayer_get_length"),
	HX_CSTRING("_ofSoundPlayer_set_length"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadSound"),
	HX_CSTRING("unloadSound"),
	HX_CSTRING("play"),
	HX_CSTRING("stop"),
	HX_CSTRING("setVolume"),
	HX_CSTRING("setPan"),
	HX_CSTRING("setSpeed"),
	HX_CSTRING("setPaused"),
	HX_CSTRING("setLoop"),
	HX_CSTRING("setMultiPlay"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("getIsPlaying"),
	HX_CSTRING("getSpeed"),
	HX_CSTRING("getPan"),
	HX_CSTRING("isStreaming"),
	HX_CSTRING("bMultiPlay"),
	HX_CSTRING("bLoop"),
	HX_CSTRING("bLoadedOk"),
	HX_CSTRING("bPaused"),
	HX_CSTRING("pan"),
	HX_CSTRING("volume"),
	HX_CSTRING("internalFreq"),
	HX_CSTRING("speed"),
	HX_CSTRING("length"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__get_isStreaming"),
	HX_CSTRING("__set_isStreaming"),
	HX_CSTRING("__get_bMultiPlay"),
	HX_CSTRING("__set_bMultiPlay"),
	HX_CSTRING("__get_bLoop"),
	HX_CSTRING("__set_bLoop"),
	HX_CSTRING("__get_bLoadedOk"),
	HX_CSTRING("__set_bLoadedOk"),
	HX_CSTRING("__get_bPaused"),
	HX_CSTRING("__set_bPaused"),
	HX_CSTRING("__get_pan"),
	HX_CSTRING("__set_pan"),
	HX_CSTRING("__get_volume"),
	HX_CSTRING("__set_volume"),
	HX_CSTRING("__get_internalFreq"),
	HX_CSTRING("__set_internalFreq"),
	HX_CSTRING("__get_speed"),
	HX_CSTRING("__set_speed"),
	HX_CSTRING("__get_length"),
	HX_CSTRING("__set_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundStopAll,"_ofSoundStopAll");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundSetVolume,"_ofSoundSetVolume");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundUpdate,"_ofSoundUpdate");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundGetSpectrum,"_ofSoundGetSpectrum");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_new,"_ofSoundPlayer_new");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_initializeFmod,"_ofSoundPlayer_initializeFmod");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_closeFmod,"_ofSoundPlayer_closeFmod");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_loadSound,"_ofSoundPlayer_loadSound");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_unloadSound,"_ofSoundPlayer_unloadSound");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_play,"_ofSoundPlayer_play");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_stop,"_ofSoundPlayer_stop");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_setVolume,"_ofSoundPlayer_setVolume");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_setPan,"_ofSoundPlayer_setPan");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_setSpeed,"_ofSoundPlayer_setSpeed");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_setPaused,"_ofSoundPlayer_setPaused");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_setLoop,"_ofSoundPlayer_setLoop");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_setMultiPlay,"_ofSoundPlayer_setMultiPlay");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_setPosition,"_ofSoundPlayer_setPosition");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_getPosition,"_ofSoundPlayer_getPosition");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_getIsPlaying,"_ofSoundPlayer_getIsPlaying");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_isStreaming,"_ofSoundPlayer_get_isStreaming");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_isStreaming,"_ofSoundPlayer_set_isStreaming");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_bMultiPlay,"_ofSoundPlayer_get_bMultiPlay");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_bMultiPlay,"_ofSoundPlayer_set_bMultiPlay");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_bLoop,"_ofSoundPlayer_get_bLoop");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_bLoop,"_ofSoundPlayer_set_bLoop");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_bLoadedOk,"_ofSoundPlayer_get_bLoadedOk");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_bLoadedOk,"_ofSoundPlayer_set_bLoadedOk");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_bPaused,"_ofSoundPlayer_get_bPaused");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_bPaused,"_ofSoundPlayer_set_bPaused");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_pan,"_ofSoundPlayer_get_pan");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_pan,"_ofSoundPlayer_set_pan");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_volume,"_ofSoundPlayer_get_volume");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_volume,"_ofSoundPlayer_set_volume");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_internalFreq,"_ofSoundPlayer_get_internalFreq");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_internalFreq,"_ofSoundPlayer_set_internalFreq");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_speed,"_ofSoundPlayer_get_speed");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_speed,"_ofSoundPlayer_set_speed");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_get_length,"_ofSoundPlayer_get_length");
	HX_MARK_MEMBER_NAME(SoundPlayer_obj::_ofSoundPlayer_set_length,"_ofSoundPlayer_set_length");
};

Class SoundPlayer_obj::__mClass;

void SoundPlayer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.sound.SoundPlayer"), hx::TCanCast< SoundPlayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SoundPlayer_obj::__boot()
{
	hx::Static(_ofSoundStopAll) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundStopAll"),0);
	hx::Static(_ofSoundSetVolume) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundSetVolume"),1);
	hx::Static(_ofSoundUpdate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundUpdate"),0);
	hx::Static(_ofSoundGetSpectrum) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundGetSpectrum"),1);
	hx::Static(_ofSoundPlayer_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_new"),0);
	hx::Static(_ofSoundPlayer_initializeFmod) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_initializeFmod"),0);
	hx::Static(_ofSoundPlayer_closeFmod) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_closeFmod"),0);
	hx::Static(_ofSoundPlayer_loadSound) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_loadSound"),3);
	hx::Static(_ofSoundPlayer_unloadSound) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_unloadSound"),1);
	hx::Static(_ofSoundPlayer_play) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_play"),1);
	hx::Static(_ofSoundPlayer_stop) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_stop"),1);
	hx::Static(_ofSoundPlayer_setVolume) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_setVolume"),2);
	hx::Static(_ofSoundPlayer_setPan) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_setPan"),2);
	hx::Static(_ofSoundPlayer_setSpeed) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_setSpeed"),2);
	hx::Static(_ofSoundPlayer_setPaused) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_setPaused"),2);
	hx::Static(_ofSoundPlayer_setLoop) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_setLoop"),2);
	hx::Static(_ofSoundPlayer_setMultiPlay) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_setMultiPlay"),2);
	hx::Static(_ofSoundPlayer_setPosition) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_setPosition"),2);
	hx::Static(_ofSoundPlayer_getPosition) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_getPosition"),1);
	hx::Static(_ofSoundPlayer_getIsPlaying) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_getIsPlaying"),1);
	hx::Static(_ofSoundPlayer_get_isStreaming) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_isStreaming"),1);
	hx::Static(_ofSoundPlayer_set_isStreaming) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_isStreaming"),2);
	hx::Static(_ofSoundPlayer_get_bMultiPlay) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_bMultiPlay"),1);
	hx::Static(_ofSoundPlayer_set_bMultiPlay) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_bMultiPlay"),2);
	hx::Static(_ofSoundPlayer_get_bLoop) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_bLoop"),1);
	hx::Static(_ofSoundPlayer_set_bLoop) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_bLoop"),2);
	hx::Static(_ofSoundPlayer_get_bLoadedOk) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_bLoadedOk"),1);
	hx::Static(_ofSoundPlayer_set_bLoadedOk) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_bLoadedOk"),2);
	hx::Static(_ofSoundPlayer_get_bPaused) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_bPaused"),1);
	hx::Static(_ofSoundPlayer_set_bPaused) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_bPaused"),2);
	hx::Static(_ofSoundPlayer_get_pan) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_pan"),1);
	hx::Static(_ofSoundPlayer_set_pan) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_pan"),2);
	hx::Static(_ofSoundPlayer_get_volume) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_volume"),1);
	hx::Static(_ofSoundPlayer_set_volume) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_volume"),2);
	hx::Static(_ofSoundPlayer_get_internalFreq) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_internalFreq"),1);
	hx::Static(_ofSoundPlayer_set_internalFreq) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_internalFreq"),2);
	hx::Static(_ofSoundPlayer_get_speed) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_speed"),1);
	hx::Static(_ofSoundPlayer_set_speed) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_speed"),2);
	hx::Static(_ofSoundPlayer_get_length) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_get_length"),1);
	hx::Static(_ofSoundPlayer_set_length) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSoundPlayer_set_length"),2);
}

} // end namespace of
} // end namespace sound
