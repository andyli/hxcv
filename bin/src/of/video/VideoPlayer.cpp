#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_graphics_Texture
#include <of/graphics/Texture.h>
#endif
#ifndef INCLUDED_of_video_VideoPlayer
#include <of/video/VideoPlayer.h>
#endif
namespace of{
namespace video{

Void VideoPlayer_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",12)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::video::VideoPlayer_obj::_ofVideoPlayer_new()) : Dynamic(handle) );
}
;
	return null();
}

VideoPlayer_obj::~VideoPlayer_obj() { }

Dynamic VideoPlayer_obj::__CreateEmpty() { return  new VideoPlayer_obj; }
hx::ObjectPtr< VideoPlayer_obj > VideoPlayer_obj::__new(Dynamic handle)
{  hx::ObjectPtr< VideoPlayer_obj > result = new VideoPlayer_obj();
	result->__construct(handle);
	return result;}

Dynamic VideoPlayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VideoPlayer_obj > result = new VideoPlayer_obj();
	result->__construct(inArgs[0]);
	return result;}

bool VideoPlayer_obj::loadMovie( ::String name){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::loadMovie")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",17)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_loadMovie(this->__Field(HX_CSTRING("__handle")),name);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,loadMovie,return )

Void VideoPlayer_obj::closeMovie( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::closeMovie")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",21)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_closeMovie(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,closeMovie,(void))

Void VideoPlayer_obj::close( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::close")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",25)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_close(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,close,(void))

Void VideoPlayer_obj::update( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::update")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",30)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_update(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,update,(void))

Void VideoPlayer_obj::idleMovie( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::idleMovie")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",34)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_idleMovie(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,idleMovie,(void))

Void VideoPlayer_obj::play( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::play")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",38)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_play(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,play,(void))

Void VideoPlayer_obj::stop( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::stop")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",42)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_stop(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,stop,(void))

bool VideoPlayer_obj::isFrameNew( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::isFrameNew")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",47)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_isFrameNew(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,isFrameNew,return )

Array< unsigned char > VideoPlayer_obj::getPixels( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getPixels")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",51)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_getPixels(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getPixels,return )

double VideoPlayer_obj::getPosition( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getPosition")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",55)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_getPosition(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getPosition,return )

double VideoPlayer_obj::getSpeed( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getSpeed")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",59)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_getSpeed(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getSpeed,return )

double VideoPlayer_obj::getDuration( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getDuration")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",63)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_getDuration(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getDuration,return )

bool VideoPlayer_obj::getIsMovieDone( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getIsMovieDone")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",67)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_getIsMovieDone(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getIsMovieDone,return )

Void VideoPlayer_obj::setPosition( double pct){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setPosition")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",72)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setPosition(this->__Field(HX_CSTRING("__handle")),pct);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,setPosition,(void))

Void VideoPlayer_obj::setVolume( int volume){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setVolume")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",76)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setVolume(this->__Field(HX_CSTRING("__handle")),volume);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,setVolume,(void))

Void VideoPlayer_obj::setLoopState( int state){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setLoopState")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",80)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setLoopState(this->__Field(HX_CSTRING("__handle")),state);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,setLoopState,(void))

Void VideoPlayer_obj::setSpeed( double speed){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setSpeed")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",84)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setSpeed(this->__Field(HX_CSTRING("__handle")),speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,setSpeed,(void))

Void VideoPlayer_obj::setFrame( int frame){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",89)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setFrame(this->__Field(HX_CSTRING("__handle")),frame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,setFrame,(void))

Void VideoPlayer_obj::setUseTexture( bool bUse){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setUseTexture")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",94)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setUseTexture(this->__Field(HX_CSTRING("__handle")),bUse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,setUseTexture,(void))

::of::graphics::Texture VideoPlayer_obj::getTextureReference( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getTextureReference")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",98)
	return ::of::graphics::Texture_obj::__new(::of::video::VideoPlayer_obj::_ofVideoPlayer_getTextureReference(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getTextureReference,return )

Void VideoPlayer_obj::draw( double x,double y,Dynamic w,Dynamic h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::draw")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",102)
		if ((h == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",102)
			::of::video::VideoPlayer_obj::_ofVideoPlayer_draw2(this->__Field(HX_CSTRING("__handle")),x,y);
		}
		else{
			HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",102)
			::of::video::VideoPlayer_obj::_ofVideoPlayer_draw4(this->__Field(HX_CSTRING("__handle")),x,y,w,h);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VideoPlayer_obj,draw,(void))

Void VideoPlayer_obj::setAnchorPercent( double xPct,double yPct){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setAnchorPercent")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",109)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setAnchorPercent(this->__Field(HX_CSTRING("__handle")),xPct,yPct);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VideoPlayer_obj,setAnchorPercent,(void))

Void VideoPlayer_obj::setAnchorPoint( int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setAnchorPoint")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",113)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setAnchorPoint(this->__Field(HX_CSTRING("__handle")),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VideoPlayer_obj,setAnchorPoint,(void))

Void VideoPlayer_obj::resetAnchor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::resetAnchor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",117)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_resetAnchor(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,resetAnchor,(void))

Void VideoPlayer_obj::setPaused( bool bPause){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::setPaused")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",122)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_setPaused(this->__Field(HX_CSTRING("__handle")),bPause);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,setPaused,(void))

int VideoPlayer_obj::getCurrentFrame( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getCurrentFrame")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",127)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_getCurrentFrame(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getCurrentFrame,return )

int VideoPlayer_obj::getTotalNumFrames( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getTotalNumFrames")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",131)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_getTotalNumFrames(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getTotalNumFrames,return )

Void VideoPlayer_obj::firstFrame( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::firstFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",136)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_firstFrame(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,firstFrame,(void))

Void VideoPlayer_obj::nextFrame( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::nextFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",140)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_nextFrame(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,nextFrame,(void))

Void VideoPlayer_obj::previousFrame( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoPlayer_obj::previousFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",144)
		::of::video::VideoPlayer_obj::_ofVideoPlayer_previousFrame(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,previousFrame,(void))

double VideoPlayer_obj::getHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",149)
	return this->__get_height();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getHeight,return )

double VideoPlayer_obj::getWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",153)
	return this->__get_width();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,getWidth,return )

int VideoPlayer_obj::__get_width( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_width")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",183)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_width(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_width,return )

int VideoPlayer_obj::__set_width( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_width")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",186)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_width(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_width,return )

int VideoPlayer_obj::__get_height( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_height")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",190)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_height(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_height,return )

int VideoPlayer_obj::__set_height( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_height")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",193)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_height(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_height,return )

double VideoPlayer_obj::__get_speed( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_speed")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",197)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_speed(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_speed,return )

double VideoPlayer_obj::__set_speed( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_speed")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",200)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_speed(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_speed,return )

bool VideoPlayer_obj::__get_bLoaded( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_bLoaded")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",204)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_bLoaded(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_bLoaded,return )

bool VideoPlayer_obj::__set_bLoaded( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_bLoaded")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",207)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_bLoaded(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_bLoaded,return )

int VideoPlayer_obj::__get_nFrames( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_nFrames")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",211)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_nFrames(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_nFrames,return )

int VideoPlayer_obj::__set_nFrames( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_nFrames")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",214)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_nFrames(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_nFrames,return )

Array< unsigned char > VideoPlayer_obj::__set_pixels( Array< unsigned char > val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_pixels")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",218)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_pixels(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_pixels,return )

bool VideoPlayer_obj::__get_bHavePixelsChanged( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_bHavePixelsChanged")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",222)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_bHavePixelsChanged(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_bHavePixelsChanged,return )

bool VideoPlayer_obj::__set_bHavePixelsChanged( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_bHavePixelsChanged")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",225)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_bHavePixelsChanged(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_bHavePixelsChanged,return )

::of::graphics::Texture VideoPlayer_obj::__set_tex( ::of::graphics::Texture val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_tex")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",229)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_tex(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_tex,return )

bool VideoPlayer_obj::__get_bUseTexture( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_bUseTexture")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",233)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_bUseTexture(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_bUseTexture,return )

bool VideoPlayer_obj::__set_bUseTexture( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_bUseTexture")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",236)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_bUseTexture(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_bUseTexture,return )

bool VideoPlayer_obj::__get_allocated( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__get_allocated")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",240)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_get_allocated(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoPlayer_obj,__get_allocated,return )

bool VideoPlayer_obj::__set_allocated( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoPlayer_obj::__set_allocated")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoPlayer.hx",243)
	return ::of::video::VideoPlayer_obj::_ofVideoPlayer_set_allocated(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoPlayer_obj,__set_allocated,return )

Dynamic VideoPlayer_obj::_ofVideoPlayer_new;

Dynamic VideoPlayer_obj::_ofVideoPlayer_loadMovie;

Dynamic VideoPlayer_obj::_ofVideoPlayer_closeMovie;

Dynamic VideoPlayer_obj::_ofVideoPlayer_close;

Dynamic VideoPlayer_obj::_ofVideoPlayer_update;

Dynamic VideoPlayer_obj::_ofVideoPlayer_idleMovie;

Dynamic VideoPlayer_obj::_ofVideoPlayer_play;

Dynamic VideoPlayer_obj::_ofVideoPlayer_stop;

Dynamic VideoPlayer_obj::_ofVideoPlayer_isFrameNew;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getPixels;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getPosition;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getSpeed;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getDuration;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getIsMovieDone;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setPosition;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setVolume;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setLoopState;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setSpeed;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setFrame;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setUseTexture;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getTextureReference;

Dynamic VideoPlayer_obj::_ofVideoPlayer_draw4;

Dynamic VideoPlayer_obj::_ofVideoPlayer_draw2;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setAnchorPercent;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setAnchorPoint;

Dynamic VideoPlayer_obj::_ofVideoPlayer_resetAnchor;

Dynamic VideoPlayer_obj::_ofVideoPlayer_setPaused;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getCurrentFrame;

Dynamic VideoPlayer_obj::_ofVideoPlayer_getTotalNumFrames;

Dynamic VideoPlayer_obj::_ofVideoPlayer_firstFrame;

Dynamic VideoPlayer_obj::_ofVideoPlayer_nextFrame;

Dynamic VideoPlayer_obj::_ofVideoPlayer_previousFrame;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_width;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_width;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_height;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_height;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_speed;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_speed;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_bLoaded;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_bLoaded;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_nFrames;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_nFrames;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_pixels;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_bHavePixelsChanged;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_bHavePixelsChanged;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_tex;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_bUseTexture;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_bUseTexture;

Dynamic VideoPlayer_obj::_ofVideoPlayer_get_allocated;

Dynamic VideoPlayer_obj::_ofVideoPlayer_set_allocated;


VideoPlayer_obj::VideoPlayer_obj()
{
}

void VideoPlayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoPlayer);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(bLoaded,"bLoaded");
	HX_MARK_MEMBER_NAME(nFrames,"nFrames");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(bHavePixelsChanged,"bHavePixelsChanged");
	HX_MARK_MEMBER_NAME(tex,"tex");
	HX_MARK_MEMBER_NAME(bUseTexture,"bUseTexture");
	HX_MARK_MEMBER_NAME(allocated,"allocated");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic VideoPlayer_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tex") ) { return getTextureReference(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return __get_width(); }
		if (HX_FIELD_EQ(inName,"speed") ) { return __get_speed(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return __get_height(); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return getPixels(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bLoaded") ) { return __get_bLoaded(); }
		if (HX_FIELD_EQ(inName,"nFrames") ) { return __get_nFrames(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSpeed") ) { return getSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setSpeed") ) { return setSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadMovie") ) { return loadMovie_dyn(); }
		if (HX_FIELD_EQ(inName,"idleMovie") ) { return idleMovie_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"setPaused") ) { return setPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"allocated") ) { return __get_allocated(); }
		if (HX_FIELD_EQ(inName,"__set_tex") ) { return __set_tex_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"closeMovie") ) { return closeMovie_dyn(); }
		if (HX_FIELD_EQ(inName,"isFrameNew") ) { return isFrameNew_dyn(); }
		if (HX_FIELD_EQ(inName,"firstFrame") ) { return firstFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"resetAnchor") ) { return resetAnchor_dyn(); }
		if (HX_FIELD_EQ(inName,"bUseTexture") ) { return __get_bUseTexture(); }
		if (HX_FIELD_EQ(inName,"__get_width") ) { return __get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_width") ) { return __set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_speed") ) { return __get_speed_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_speed") ) { return __set_speed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setLoopState") ) { return setLoopState_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_height") ) { return __get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_height") ) { return __set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_pixels") ) { return __set_pixels_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setUseTexture") ) { return setUseTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"previousFrame") ) { return previousFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_bLoaded") ) { return __get_bLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bLoaded") ) { return __set_bLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_nFrames") ) { return __get_nFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_nFrames") ) { return __set_nFrames_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIsMovieDone") ) { return getIsMovieDone_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnchorPoint") ) { return setAnchorPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCurrentFrame") ) { return getCurrentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_allocated") ) { return __get_allocated_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_allocated") ) { return __set_allocated_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setAnchorPercent") ) { return setAnchorPercent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTotalNumFrames") ) { return getTotalNumFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_bUseTexture") ) { return __get_bUseTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bUseTexture") ) { return __set_bUseTexture_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_new") ) { return _ofVideoPlayer_new; }
		if (HX_FIELD_EQ(inName,"bHavePixelsChanged") ) { return __get_bHavePixelsChanged(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_play") ) { return _ofVideoPlayer_play; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_stop") ) { return _ofVideoPlayer_stop; }
		if (HX_FIELD_EQ(inName,"getTextureReference") ) { return getTextureReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_close") ) { return _ofVideoPlayer_close; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_draw4") ) { return _ofVideoPlayer_draw4; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_draw2") ) { return _ofVideoPlayer_draw2; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_update") ) { return _ofVideoPlayer_update; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_tex") ) { return _ofVideoPlayer_set_tex; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getSpeed") ) { return _ofVideoPlayer_getSpeed; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setSpeed") ) { return _ofVideoPlayer_setSpeed; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setFrame") ) { return _ofVideoPlayer_setFrame; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_loadMovie") ) { return _ofVideoPlayer_loadMovie; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_idleMovie") ) { return _ofVideoPlayer_idleMovie; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getPixels") ) { return _ofVideoPlayer_getPixels; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setVolume") ) { return _ofVideoPlayer_setVolume; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setPaused") ) { return _ofVideoPlayer_setPaused; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_nextFrame") ) { return _ofVideoPlayer_nextFrame; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_width") ) { return _ofVideoPlayer_get_width; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_width") ) { return _ofVideoPlayer_set_width; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_speed") ) { return _ofVideoPlayer_get_speed; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_speed") ) { return _ofVideoPlayer_set_speed; }
		if (HX_FIELD_EQ(inName,"__get_bHavePixelsChanged") ) { return __get_bHavePixelsChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bHavePixelsChanged") ) { return __set_bHavePixelsChanged_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_closeMovie") ) { return _ofVideoPlayer_closeMovie; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_isFrameNew") ) { return _ofVideoPlayer_isFrameNew; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_firstFrame") ) { return _ofVideoPlayer_firstFrame; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_height") ) { return _ofVideoPlayer_get_height; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_height") ) { return _ofVideoPlayer_set_height; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_pixels") ) { return _ofVideoPlayer_set_pixels; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getPosition") ) { return _ofVideoPlayer_getPosition; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getDuration") ) { return _ofVideoPlayer_getDuration; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setPosition") ) { return _ofVideoPlayer_setPosition; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_resetAnchor") ) { return _ofVideoPlayer_resetAnchor; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_bLoaded") ) { return _ofVideoPlayer_get_bLoaded; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_bLoaded") ) { return _ofVideoPlayer_set_bLoaded; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_nFrames") ) { return _ofVideoPlayer_get_nFrames; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_nFrames") ) { return _ofVideoPlayer_set_nFrames; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setLoopState") ) { return _ofVideoPlayer_setLoopState; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setUseTexture") ) { return _ofVideoPlayer_setUseTexture; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_previousFrame") ) { return _ofVideoPlayer_previousFrame; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_allocated") ) { return _ofVideoPlayer_get_allocated; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_allocated") ) { return _ofVideoPlayer_set_allocated; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getIsMovieDone") ) { return _ofVideoPlayer_getIsMovieDone; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setAnchorPoint") ) { return _ofVideoPlayer_setAnchorPoint; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getCurrentFrame") ) { return _ofVideoPlayer_getCurrentFrame; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_bUseTexture") ) { return _ofVideoPlayer_get_bUseTexture; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_bUseTexture") ) { return _ofVideoPlayer_set_bUseTexture; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setAnchorPercent") ) { return _ofVideoPlayer_setAnchorPercent; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getTotalNumFrames") ) { return _ofVideoPlayer_getTotalNumFrames; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getTextureReference") ) { return _ofVideoPlayer_getTextureReference; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_bHavePixelsChanged") ) { return _ofVideoPlayer_get_bHavePixelsChanged; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_bHavePixelsChanged") ) { return _ofVideoPlayer_set_bHavePixelsChanged; }
	}
	return super::__Field(inName);
}

Dynamic VideoPlayer_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tex") ) { return __set_tex(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return __set_width(inValue); }
		if (HX_FIELD_EQ(inName,"speed") ) { return __set_speed(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return __set_height(inValue); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return __set_pixels(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bLoaded") ) { return __set_bLoaded(inValue); }
		if (HX_FIELD_EQ(inName,"nFrames") ) { return __set_nFrames(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { return __set_allocated(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bUseTexture") ) { return __set_bUseTexture(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_new") ) { _ofVideoPlayer_new=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bHavePixelsChanged") ) { return __set_bHavePixelsChanged(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_play") ) { _ofVideoPlayer_play=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_stop") ) { _ofVideoPlayer_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_close") ) { _ofVideoPlayer_close=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_draw4") ) { _ofVideoPlayer_draw4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_draw2") ) { _ofVideoPlayer_draw2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_update") ) { _ofVideoPlayer_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_tex") ) { _ofVideoPlayer_set_tex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getSpeed") ) { _ofVideoPlayer_getSpeed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setSpeed") ) { _ofVideoPlayer_setSpeed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setFrame") ) { _ofVideoPlayer_setFrame=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_loadMovie") ) { _ofVideoPlayer_loadMovie=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_idleMovie") ) { _ofVideoPlayer_idleMovie=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getPixels") ) { _ofVideoPlayer_getPixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setVolume") ) { _ofVideoPlayer_setVolume=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setPaused") ) { _ofVideoPlayer_setPaused=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_nextFrame") ) { _ofVideoPlayer_nextFrame=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_width") ) { _ofVideoPlayer_get_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_width") ) { _ofVideoPlayer_set_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_speed") ) { _ofVideoPlayer_get_speed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_speed") ) { _ofVideoPlayer_set_speed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_closeMovie") ) { _ofVideoPlayer_closeMovie=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_isFrameNew") ) { _ofVideoPlayer_isFrameNew=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_firstFrame") ) { _ofVideoPlayer_firstFrame=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_height") ) { _ofVideoPlayer_get_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_height") ) { _ofVideoPlayer_set_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_pixels") ) { _ofVideoPlayer_set_pixels=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getPosition") ) { _ofVideoPlayer_getPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getDuration") ) { _ofVideoPlayer_getDuration=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setPosition") ) { _ofVideoPlayer_setPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_resetAnchor") ) { _ofVideoPlayer_resetAnchor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_bLoaded") ) { _ofVideoPlayer_get_bLoaded=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_bLoaded") ) { _ofVideoPlayer_set_bLoaded=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_nFrames") ) { _ofVideoPlayer_get_nFrames=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_nFrames") ) { _ofVideoPlayer_set_nFrames=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setLoopState") ) { _ofVideoPlayer_setLoopState=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setUseTexture") ) { _ofVideoPlayer_setUseTexture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_previousFrame") ) { _ofVideoPlayer_previousFrame=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_allocated") ) { _ofVideoPlayer_get_allocated=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_allocated") ) { _ofVideoPlayer_set_allocated=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getIsMovieDone") ) { _ofVideoPlayer_getIsMovieDone=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setAnchorPoint") ) { _ofVideoPlayer_setAnchorPoint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getCurrentFrame") ) { _ofVideoPlayer_getCurrentFrame=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_bUseTexture") ) { _ofVideoPlayer_get_bUseTexture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_bUseTexture") ) { _ofVideoPlayer_set_bUseTexture=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_setAnchorPercent") ) { _ofVideoPlayer_setAnchorPercent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getTotalNumFrames") ) { _ofVideoPlayer_getTotalNumFrames=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_getTextureReference") ) { _ofVideoPlayer_getTextureReference=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_get_bHavePixelsChanged") ) { _ofVideoPlayer_get_bHavePixelsChanged=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoPlayer_set_bHavePixelsChanged") ) { _ofVideoPlayer_set_bHavePixelsChanged=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void VideoPlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("bLoaded"));
	outFields->push(HX_CSTRING("nFrames"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("bHavePixelsChanged"));
	outFields->push(HX_CSTRING("tex"));
	outFields->push(HX_CSTRING("bUseTexture"));
	outFields->push(HX_CSTRING("allocated"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofVideoPlayer_new"),
	HX_CSTRING("_ofVideoPlayer_loadMovie"),
	HX_CSTRING("_ofVideoPlayer_closeMovie"),
	HX_CSTRING("_ofVideoPlayer_close"),
	HX_CSTRING("_ofVideoPlayer_update"),
	HX_CSTRING("_ofVideoPlayer_idleMovie"),
	HX_CSTRING("_ofVideoPlayer_play"),
	HX_CSTRING("_ofVideoPlayer_stop"),
	HX_CSTRING("_ofVideoPlayer_isFrameNew"),
	HX_CSTRING("_ofVideoPlayer_getPixels"),
	HX_CSTRING("_ofVideoPlayer_getPosition"),
	HX_CSTRING("_ofVideoPlayer_getSpeed"),
	HX_CSTRING("_ofVideoPlayer_getDuration"),
	HX_CSTRING("_ofVideoPlayer_getIsMovieDone"),
	HX_CSTRING("_ofVideoPlayer_setPosition"),
	HX_CSTRING("_ofVideoPlayer_setVolume"),
	HX_CSTRING("_ofVideoPlayer_setLoopState"),
	HX_CSTRING("_ofVideoPlayer_setSpeed"),
	HX_CSTRING("_ofVideoPlayer_setFrame"),
	HX_CSTRING("_ofVideoPlayer_setUseTexture"),
	HX_CSTRING("_ofVideoPlayer_getTextureReference"),
	HX_CSTRING("_ofVideoPlayer_draw4"),
	HX_CSTRING("_ofVideoPlayer_draw2"),
	HX_CSTRING("_ofVideoPlayer_setAnchorPercent"),
	HX_CSTRING("_ofVideoPlayer_setAnchorPoint"),
	HX_CSTRING("_ofVideoPlayer_resetAnchor"),
	HX_CSTRING("_ofVideoPlayer_setPaused"),
	HX_CSTRING("_ofVideoPlayer_getCurrentFrame"),
	HX_CSTRING("_ofVideoPlayer_getTotalNumFrames"),
	HX_CSTRING("_ofVideoPlayer_firstFrame"),
	HX_CSTRING("_ofVideoPlayer_nextFrame"),
	HX_CSTRING("_ofVideoPlayer_previousFrame"),
	HX_CSTRING("_ofVideoPlayer_get_width"),
	HX_CSTRING("_ofVideoPlayer_set_width"),
	HX_CSTRING("_ofVideoPlayer_get_height"),
	HX_CSTRING("_ofVideoPlayer_set_height"),
	HX_CSTRING("_ofVideoPlayer_get_speed"),
	HX_CSTRING("_ofVideoPlayer_set_speed"),
	HX_CSTRING("_ofVideoPlayer_get_bLoaded"),
	HX_CSTRING("_ofVideoPlayer_set_bLoaded"),
	HX_CSTRING("_ofVideoPlayer_get_nFrames"),
	HX_CSTRING("_ofVideoPlayer_set_nFrames"),
	HX_CSTRING("_ofVideoPlayer_set_pixels"),
	HX_CSTRING("_ofVideoPlayer_get_bHavePixelsChanged"),
	HX_CSTRING("_ofVideoPlayer_set_bHavePixelsChanged"),
	HX_CSTRING("_ofVideoPlayer_set_tex"),
	HX_CSTRING("_ofVideoPlayer_get_bUseTexture"),
	HX_CSTRING("_ofVideoPlayer_set_bUseTexture"),
	HX_CSTRING("_ofVideoPlayer_get_allocated"),
	HX_CSTRING("_ofVideoPlayer_set_allocated"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadMovie"),
	HX_CSTRING("closeMovie"),
	HX_CSTRING("close"),
	HX_CSTRING("update"),
	HX_CSTRING("idleMovie"),
	HX_CSTRING("play"),
	HX_CSTRING("stop"),
	HX_CSTRING("isFrameNew"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("getSpeed"),
	HX_CSTRING("getDuration"),
	HX_CSTRING("getIsMovieDone"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setVolume"),
	HX_CSTRING("setLoopState"),
	HX_CSTRING("setSpeed"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("setUseTexture"),
	HX_CSTRING("getTextureReference"),
	HX_CSTRING("draw"),
	HX_CSTRING("setAnchorPercent"),
	HX_CSTRING("setAnchorPoint"),
	HX_CSTRING("resetAnchor"),
	HX_CSTRING("setPaused"),
	HX_CSTRING("getCurrentFrame"),
	HX_CSTRING("getTotalNumFrames"),
	HX_CSTRING("firstFrame"),
	HX_CSTRING("nextFrame"),
	HX_CSTRING("previousFrame"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("speed"),
	HX_CSTRING("bLoaded"),
	HX_CSTRING("nFrames"),
	HX_CSTRING("pixels"),
	HX_CSTRING("bHavePixelsChanged"),
	HX_CSTRING("tex"),
	HX_CSTRING("bUseTexture"),
	HX_CSTRING("allocated"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__get_width"),
	HX_CSTRING("__set_width"),
	HX_CSTRING("__get_height"),
	HX_CSTRING("__set_height"),
	HX_CSTRING("__get_speed"),
	HX_CSTRING("__set_speed"),
	HX_CSTRING("__get_bLoaded"),
	HX_CSTRING("__set_bLoaded"),
	HX_CSTRING("__get_nFrames"),
	HX_CSTRING("__set_nFrames"),
	HX_CSTRING("__set_pixels"),
	HX_CSTRING("__get_bHavePixelsChanged"),
	HX_CSTRING("__set_bHavePixelsChanged"),
	HX_CSTRING("__set_tex"),
	HX_CSTRING("__get_bUseTexture"),
	HX_CSTRING("__set_bUseTexture"),
	HX_CSTRING("__get_allocated"),
	HX_CSTRING("__set_allocated"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_new,"_ofVideoPlayer_new");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_loadMovie,"_ofVideoPlayer_loadMovie");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_closeMovie,"_ofVideoPlayer_closeMovie");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_close,"_ofVideoPlayer_close");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_update,"_ofVideoPlayer_update");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_idleMovie,"_ofVideoPlayer_idleMovie");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_play,"_ofVideoPlayer_play");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_stop,"_ofVideoPlayer_stop");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_isFrameNew,"_ofVideoPlayer_isFrameNew");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getPixels,"_ofVideoPlayer_getPixels");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getPosition,"_ofVideoPlayer_getPosition");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getSpeed,"_ofVideoPlayer_getSpeed");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getDuration,"_ofVideoPlayer_getDuration");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getIsMovieDone,"_ofVideoPlayer_getIsMovieDone");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setPosition,"_ofVideoPlayer_setPosition");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setVolume,"_ofVideoPlayer_setVolume");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setLoopState,"_ofVideoPlayer_setLoopState");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setSpeed,"_ofVideoPlayer_setSpeed");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setFrame,"_ofVideoPlayer_setFrame");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setUseTexture,"_ofVideoPlayer_setUseTexture");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getTextureReference,"_ofVideoPlayer_getTextureReference");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_draw4,"_ofVideoPlayer_draw4");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_draw2,"_ofVideoPlayer_draw2");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setAnchorPercent,"_ofVideoPlayer_setAnchorPercent");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setAnchorPoint,"_ofVideoPlayer_setAnchorPoint");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_resetAnchor,"_ofVideoPlayer_resetAnchor");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_setPaused,"_ofVideoPlayer_setPaused");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getCurrentFrame,"_ofVideoPlayer_getCurrentFrame");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_getTotalNumFrames,"_ofVideoPlayer_getTotalNumFrames");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_firstFrame,"_ofVideoPlayer_firstFrame");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_nextFrame,"_ofVideoPlayer_nextFrame");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_previousFrame,"_ofVideoPlayer_previousFrame");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_width,"_ofVideoPlayer_get_width");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_width,"_ofVideoPlayer_set_width");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_height,"_ofVideoPlayer_get_height");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_height,"_ofVideoPlayer_set_height");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_speed,"_ofVideoPlayer_get_speed");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_speed,"_ofVideoPlayer_set_speed");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_bLoaded,"_ofVideoPlayer_get_bLoaded");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_bLoaded,"_ofVideoPlayer_set_bLoaded");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_nFrames,"_ofVideoPlayer_get_nFrames");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_nFrames,"_ofVideoPlayer_set_nFrames");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_pixels,"_ofVideoPlayer_set_pixels");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_bHavePixelsChanged,"_ofVideoPlayer_get_bHavePixelsChanged");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_bHavePixelsChanged,"_ofVideoPlayer_set_bHavePixelsChanged");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_tex,"_ofVideoPlayer_set_tex");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_bUseTexture,"_ofVideoPlayer_get_bUseTexture");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_bUseTexture,"_ofVideoPlayer_set_bUseTexture");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_get_allocated,"_ofVideoPlayer_get_allocated");
	HX_MARK_MEMBER_NAME(VideoPlayer_obj::_ofVideoPlayer_set_allocated,"_ofVideoPlayer_set_allocated");
};

Class VideoPlayer_obj::__mClass;

void VideoPlayer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.video.VideoPlayer"), hx::TCanCast< VideoPlayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void VideoPlayer_obj::__boot()
{
	hx::Static(_ofVideoPlayer_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_new"),0);
	hx::Static(_ofVideoPlayer_loadMovie) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_loadMovie"),2);
	hx::Static(_ofVideoPlayer_closeMovie) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_closeMovie"),1);
	hx::Static(_ofVideoPlayer_close) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_close"),1);
	hx::Static(_ofVideoPlayer_update) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_update"),1);
	hx::Static(_ofVideoPlayer_idleMovie) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_idleMovie"),1);
	hx::Static(_ofVideoPlayer_play) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_play"),1);
	hx::Static(_ofVideoPlayer_stop) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_stop"),1);
	hx::Static(_ofVideoPlayer_isFrameNew) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_isFrameNew"),1);
	hx::Static(_ofVideoPlayer_getPixels) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getPixels"),1);
	hx::Static(_ofVideoPlayer_getPosition) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getPosition"),1);
	hx::Static(_ofVideoPlayer_getSpeed) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getSpeed"),1);
	hx::Static(_ofVideoPlayer_getDuration) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getDuration"),1);
	hx::Static(_ofVideoPlayer_getIsMovieDone) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getIsMovieDone"),1);
	hx::Static(_ofVideoPlayer_setPosition) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setPosition"),2);
	hx::Static(_ofVideoPlayer_setVolume) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setVolume"),2);
	hx::Static(_ofVideoPlayer_setLoopState) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setLoopState"),2);
	hx::Static(_ofVideoPlayer_setSpeed) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setSpeed"),2);
	hx::Static(_ofVideoPlayer_setFrame) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setFrame"),2);
	hx::Static(_ofVideoPlayer_setUseTexture) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setUseTexture"),2);
	hx::Static(_ofVideoPlayer_getTextureReference) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getTextureReference"),1);
	hx::Static(_ofVideoPlayer_draw4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_draw4"),5);
	hx::Static(_ofVideoPlayer_draw2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_draw2"),3);
	hx::Static(_ofVideoPlayer_setAnchorPercent) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setAnchorPercent"),3);
	hx::Static(_ofVideoPlayer_setAnchorPoint) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setAnchorPoint"),3);
	hx::Static(_ofVideoPlayer_resetAnchor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_resetAnchor"),1);
	hx::Static(_ofVideoPlayer_setPaused) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_setPaused"),2);
	hx::Static(_ofVideoPlayer_getCurrentFrame) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getCurrentFrame"),1);
	hx::Static(_ofVideoPlayer_getTotalNumFrames) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_getTotalNumFrames"),1);
	hx::Static(_ofVideoPlayer_firstFrame) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_firstFrame"),1);
	hx::Static(_ofVideoPlayer_nextFrame) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_nextFrame"),1);
	hx::Static(_ofVideoPlayer_previousFrame) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_previousFrame"),1);
	hx::Static(_ofVideoPlayer_get_width) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_width"),1);
	hx::Static(_ofVideoPlayer_set_width) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_width"),2);
	hx::Static(_ofVideoPlayer_get_height) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_height"),1);
	hx::Static(_ofVideoPlayer_set_height) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_height"),2);
	hx::Static(_ofVideoPlayer_get_speed) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_speed"),1);
	hx::Static(_ofVideoPlayer_set_speed) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_speed"),2);
	hx::Static(_ofVideoPlayer_get_bLoaded) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_bLoaded"),1);
	hx::Static(_ofVideoPlayer_set_bLoaded) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_bLoaded"),2);
	hx::Static(_ofVideoPlayer_get_nFrames) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_nFrames"),1);
	hx::Static(_ofVideoPlayer_set_nFrames) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_nFrames"),2);
	hx::Static(_ofVideoPlayer_set_pixels) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_pixels"),2);
	hx::Static(_ofVideoPlayer_get_bHavePixelsChanged) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_bHavePixelsChanged"),1);
	hx::Static(_ofVideoPlayer_set_bHavePixelsChanged) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_bHavePixelsChanged"),2);
	hx::Static(_ofVideoPlayer_set_tex) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_tex"),2);
	hx::Static(_ofVideoPlayer_get_bUseTexture) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_bUseTexture"),1);
	hx::Static(_ofVideoPlayer_set_bUseTexture) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_bUseTexture"),2);
	hx::Static(_ofVideoPlayer_get_allocated) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_get_allocated"),1);
	hx::Static(_ofVideoPlayer_set_allocated) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoPlayer_set_allocated"),2);
}

} // end namespace of
} // end namespace video
