#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_graphics_Texture
#include <of/graphics/Texture.h>
#endif
#ifndef INCLUDED_of_video_VideoGrabber
#include <of/video/VideoGrabber.h>
#endif
namespace of{
namespace video{

Void VideoGrabber_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",12)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::video::VideoGrabber_obj::_ofVideoGrabber_new()) : Dynamic(handle) );
}
;
	return null();
}

VideoGrabber_obj::~VideoGrabber_obj() { }

Dynamic VideoGrabber_obj::__CreateEmpty() { return  new VideoGrabber_obj; }
hx::ObjectPtr< VideoGrabber_obj > VideoGrabber_obj::__new(Dynamic handle)
{  hx::ObjectPtr< VideoGrabber_obj > result = new VideoGrabber_obj();
	result->__construct(handle);
	return result;}

Dynamic VideoGrabber_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VideoGrabber_obj > result = new VideoGrabber_obj();
	result->__construct(inArgs[0]);
	return result;}

Void VideoGrabber_obj::listDevices( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::listDevices")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",16)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_listDevices(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,listDevices,(void))

bool VideoGrabber_obj::isFrameNew( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::isFrameNew")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",20)
	return ::of::video::VideoGrabber_obj::_ofVideoGrabber_isFrameNew(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,isFrameNew,return )

Void VideoGrabber_obj::grabFrame( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::grabFrame")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",24)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_grabFrame(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,grabFrame,(void))

Void VideoGrabber_obj::close( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::close")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",28)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_close(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,close,(void))

bool VideoGrabber_obj::initGrabber( int w,int h,Dynamic __o_bTexture){
bool bTexture = __o_bTexture.Default(true);
	HX_SOURCE_PUSH("VideoGrabber_obj::initGrabber");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",32)
		return ::of::video::VideoGrabber_obj::_ofVideoGrabber_initGrabber(this->__Field(HX_CSTRING("__handle")),w,h,bTexture);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(VideoGrabber_obj,initGrabber,return )

Void VideoGrabber_obj::videoSettings( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::videoSettings")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",36)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_videoSettings(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,videoSettings,(void))

Array< unsigned char > VideoGrabber_obj::getPixels( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::getPixels")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",40)
	return ::of::video::VideoGrabber_obj::_ofVideoGrabber_getPixels(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,getPixels,return )

::of::graphics::Texture VideoGrabber_obj::getTextureReference( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::getTextureReference")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",44)
	return ::of::graphics::Texture_obj::__new(::of::video::VideoGrabber_obj::_ofVideoGrabber_getTextureReference(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,getTextureReference,return )

Void VideoGrabber_obj::setVerbose( bool bTalkToMe){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::setVerbose")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",48)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_setVerbose(this->__Field(HX_CSTRING("__handle")),bTalkToMe);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoGrabber_obj,setVerbose,(void))

Void VideoGrabber_obj::setDeviceID( int _deviceID){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::setDeviceID")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",52)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_setDeviceID(this->__Field(HX_CSTRING("__handle")),_deviceID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoGrabber_obj,setDeviceID,(void))

Void VideoGrabber_obj::setDesiredFrameRate( int framerate){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::setDesiredFrameRate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",56)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_setDesiredFrameRate(this->__Field(HX_CSTRING("__handle")),framerate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoGrabber_obj,setDesiredFrameRate,(void))

Void VideoGrabber_obj::setUseTexture( bool bUse){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::setUseTexture")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",60)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_setUseTexture(this->__Field(HX_CSTRING("__handle")),bUse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VideoGrabber_obj,setUseTexture,(void))

Void VideoGrabber_obj::draw( double x,double y,Dynamic w,Dynamic h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::draw")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",64)
		if ((h == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",64)
			::of::video::VideoGrabber_obj::_ofVideoGrabber_draw2(this->__Field(HX_CSTRING("__handle")),x,y);
		}
		else{
			HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",64)
			::of::video::VideoGrabber_obj::_ofVideoGrabber_draw4(this->__Field(HX_CSTRING("__handle")),x,y,w,h);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VideoGrabber_obj,draw,(void))

Void VideoGrabber_obj::update( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::update")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",68)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_update(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,update,(void))

Void VideoGrabber_obj::setAnchorPercent( double xPct,double yPct){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::setAnchorPercent")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",77)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_setAnchorPercent(this->__Field(HX_CSTRING("__handle")),xPct,yPct);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VideoGrabber_obj,setAnchorPercent,(void))

Void VideoGrabber_obj::setAnchorPoint( int x,int y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::setAnchorPoint")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",81)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_setAnchorPoint(this->__Field(HX_CSTRING("__handle")),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VideoGrabber_obj,setAnchorPoint,(void))

Void VideoGrabber_obj::resetAnchor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("VideoGrabber_obj::resetAnchor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",85)
		::of::video::VideoGrabber_obj::_ofVideoGrabber_resetAnchor(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,resetAnchor,(void))

double VideoGrabber_obj::getHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",90)
	return this->__get_height();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,getHeight,return )

double VideoGrabber_obj::getWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",94)
	return this->__get_width();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,getWidth,return )

int VideoGrabber_obj::__get_height( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::__get_height")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",101)
	return ::of::video::VideoGrabber_obj::_ofVideoGrabber_get_height(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,__get_height,return )

int VideoGrabber_obj::__set_height( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::__set_height")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",104)
	return ::of::video::VideoGrabber_obj::_ofVideoGrabber_set_height(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoGrabber_obj,__set_height,return )

int VideoGrabber_obj::__get_width( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::__get_width")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",108)
	return ::of::video::VideoGrabber_obj::_ofVideoGrabber_get_width(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(VideoGrabber_obj,__get_width,return )

int VideoGrabber_obj::__set_width( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("VideoGrabber_obj::__set_width")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/video/VideoGrabber.hx",111)
	return ::of::video::VideoGrabber_obj::_ofVideoGrabber_set_width(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(VideoGrabber_obj,__set_width,return )

Dynamic VideoGrabber_obj::_ofVideoGrabber_new;

Dynamic VideoGrabber_obj::_ofVideoGrabber_listDevices;

Dynamic VideoGrabber_obj::_ofVideoGrabber_isFrameNew;

Dynamic VideoGrabber_obj::_ofVideoGrabber_grabFrame;

Dynamic VideoGrabber_obj::_ofVideoGrabber_close;

Dynamic VideoGrabber_obj::_ofVideoGrabber_initGrabber;

Dynamic VideoGrabber_obj::_ofVideoGrabber_videoSettings;

Dynamic VideoGrabber_obj::_ofVideoGrabber_getPixels;

Dynamic VideoGrabber_obj::_ofVideoGrabber_getTextureReference;

Dynamic VideoGrabber_obj::_ofVideoGrabber_setVerbose;

Dynamic VideoGrabber_obj::_ofVideoGrabber_setDeviceID;

Dynamic VideoGrabber_obj::_ofVideoGrabber_setDesiredFrameRate;

Dynamic VideoGrabber_obj::_ofVideoGrabber_setUseTexture;

Dynamic VideoGrabber_obj::_ofVideoGrabber_draw4;

Dynamic VideoGrabber_obj::_ofVideoGrabber_draw2;

Dynamic VideoGrabber_obj::_ofVideoGrabber_update;

Dynamic VideoGrabber_obj::_ofVideoGrabber_setAnchorPercent;

Dynamic VideoGrabber_obj::_ofVideoGrabber_setAnchorPoint;

Dynamic VideoGrabber_obj::_ofVideoGrabber_resetAnchor;

Dynamic VideoGrabber_obj::_ofVideoGrabber_get_height;

Dynamic VideoGrabber_obj::_ofVideoGrabber_set_height;

Dynamic VideoGrabber_obj::_ofVideoGrabber_get_width;

Dynamic VideoGrabber_obj::_ofVideoGrabber_set_width;


VideoGrabber_obj::VideoGrabber_obj()
{
}

void VideoGrabber_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoGrabber);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic VideoGrabber_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return __get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return __get_height(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grabFrame") ) { return grabFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFrameNew") ) { return isFrameNew_dyn(); }
		if (HX_FIELD_EQ(inName,"setVerbose") ) { return setVerbose_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listDevices") ) { return listDevices_dyn(); }
		if (HX_FIELD_EQ(inName,"initGrabber") ) { return initGrabber_dyn(); }
		if (HX_FIELD_EQ(inName,"setDeviceID") ) { return setDeviceID_dyn(); }
		if (HX_FIELD_EQ(inName,"resetAnchor") ) { return resetAnchor_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_width") ) { return __get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_width") ) { return __set_width_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__get_height") ) { return __get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_height") ) { return __set_height_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"videoSettings") ) { return videoSettings_dyn(); }
		if (HX_FIELD_EQ(inName,"setUseTexture") ) { return setUseTexture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setAnchorPoint") ) { return setAnchorPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setAnchorPercent") ) { return setAnchorPercent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_new") ) { return _ofVideoGrabber_new; }
		if (HX_FIELD_EQ(inName,"getTextureReference") ) { return getTextureReference_dyn(); }
		if (HX_FIELD_EQ(inName,"setDesiredFrameRate") ) { return setDesiredFrameRate_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_close") ) { return _ofVideoGrabber_close; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_draw4") ) { return _ofVideoGrabber_draw4; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_draw2") ) { return _ofVideoGrabber_draw2; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_update") ) { return _ofVideoGrabber_update; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_grabFrame") ) { return _ofVideoGrabber_grabFrame; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_getPixels") ) { return _ofVideoGrabber_getPixels; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_get_width") ) { return _ofVideoGrabber_get_width; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_set_width") ) { return _ofVideoGrabber_set_width; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_isFrameNew") ) { return _ofVideoGrabber_isFrameNew; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setVerbose") ) { return _ofVideoGrabber_setVerbose; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_get_height") ) { return _ofVideoGrabber_get_height; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_set_height") ) { return _ofVideoGrabber_set_height; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_listDevices") ) { return _ofVideoGrabber_listDevices; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_initGrabber") ) { return _ofVideoGrabber_initGrabber; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setDeviceID") ) { return _ofVideoGrabber_setDeviceID; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_resetAnchor") ) { return _ofVideoGrabber_resetAnchor; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_videoSettings") ) { return _ofVideoGrabber_videoSettings; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setUseTexture") ) { return _ofVideoGrabber_setUseTexture; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setAnchorPoint") ) { return _ofVideoGrabber_setAnchorPoint; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setAnchorPercent") ) { return _ofVideoGrabber_setAnchorPercent; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_getTextureReference") ) { return _ofVideoGrabber_getTextureReference; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setDesiredFrameRate") ) { return _ofVideoGrabber_setDesiredFrameRate; }
	}
	return super::__Field(inName);
}

Dynamic VideoGrabber_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return __set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return __set_height(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_new") ) { _ofVideoGrabber_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_close") ) { _ofVideoGrabber_close=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_draw4") ) { _ofVideoGrabber_draw4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_draw2") ) { _ofVideoGrabber_draw2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_update") ) { _ofVideoGrabber_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_grabFrame") ) { _ofVideoGrabber_grabFrame=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_getPixels") ) { _ofVideoGrabber_getPixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_get_width") ) { _ofVideoGrabber_get_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_set_width") ) { _ofVideoGrabber_set_width=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_isFrameNew") ) { _ofVideoGrabber_isFrameNew=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setVerbose") ) { _ofVideoGrabber_setVerbose=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_get_height") ) { _ofVideoGrabber_get_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_set_height") ) { _ofVideoGrabber_set_height=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_listDevices") ) { _ofVideoGrabber_listDevices=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_initGrabber") ) { _ofVideoGrabber_initGrabber=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setDeviceID") ) { _ofVideoGrabber_setDeviceID=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_resetAnchor") ) { _ofVideoGrabber_resetAnchor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_videoSettings") ) { _ofVideoGrabber_videoSettings=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setUseTexture") ) { _ofVideoGrabber_setUseTexture=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setAnchorPoint") ) { _ofVideoGrabber_setAnchorPoint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setAnchorPercent") ) { _ofVideoGrabber_setAnchorPercent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_getTextureReference") ) { _ofVideoGrabber_getTextureReference=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVideoGrabber_setDesiredFrameRate") ) { _ofVideoGrabber_setDesiredFrameRate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void VideoGrabber_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofVideoGrabber_new"),
	HX_CSTRING("_ofVideoGrabber_listDevices"),
	HX_CSTRING("_ofVideoGrabber_isFrameNew"),
	HX_CSTRING("_ofVideoGrabber_grabFrame"),
	HX_CSTRING("_ofVideoGrabber_close"),
	HX_CSTRING("_ofVideoGrabber_initGrabber"),
	HX_CSTRING("_ofVideoGrabber_videoSettings"),
	HX_CSTRING("_ofVideoGrabber_getPixels"),
	HX_CSTRING("_ofVideoGrabber_getTextureReference"),
	HX_CSTRING("_ofVideoGrabber_setVerbose"),
	HX_CSTRING("_ofVideoGrabber_setDeviceID"),
	HX_CSTRING("_ofVideoGrabber_setDesiredFrameRate"),
	HX_CSTRING("_ofVideoGrabber_setUseTexture"),
	HX_CSTRING("_ofVideoGrabber_draw4"),
	HX_CSTRING("_ofVideoGrabber_draw2"),
	HX_CSTRING("_ofVideoGrabber_update"),
	HX_CSTRING("_ofVideoGrabber_setAnchorPercent"),
	HX_CSTRING("_ofVideoGrabber_setAnchorPoint"),
	HX_CSTRING("_ofVideoGrabber_resetAnchor"),
	HX_CSTRING("_ofVideoGrabber_get_height"),
	HX_CSTRING("_ofVideoGrabber_set_height"),
	HX_CSTRING("_ofVideoGrabber_get_width"),
	HX_CSTRING("_ofVideoGrabber_set_width"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("listDevices"),
	HX_CSTRING("isFrameNew"),
	HX_CSTRING("grabFrame"),
	HX_CSTRING("close"),
	HX_CSTRING("initGrabber"),
	HX_CSTRING("videoSettings"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getTextureReference"),
	HX_CSTRING("setVerbose"),
	HX_CSTRING("setDeviceID"),
	HX_CSTRING("setDesiredFrameRate"),
	HX_CSTRING("setUseTexture"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("setAnchorPercent"),
	HX_CSTRING("setAnchorPoint"),
	HX_CSTRING("resetAnchor"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("__get_height"),
	HX_CSTRING("__set_height"),
	HX_CSTRING("__get_width"),
	HX_CSTRING("__set_width"),
	HX_CSTRING("__handle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_new,"_ofVideoGrabber_new");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_listDevices,"_ofVideoGrabber_listDevices");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_isFrameNew,"_ofVideoGrabber_isFrameNew");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_grabFrame,"_ofVideoGrabber_grabFrame");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_close,"_ofVideoGrabber_close");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_initGrabber,"_ofVideoGrabber_initGrabber");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_videoSettings,"_ofVideoGrabber_videoSettings");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_getPixels,"_ofVideoGrabber_getPixels");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_getTextureReference,"_ofVideoGrabber_getTextureReference");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_setVerbose,"_ofVideoGrabber_setVerbose");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_setDeviceID,"_ofVideoGrabber_setDeviceID");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_setDesiredFrameRate,"_ofVideoGrabber_setDesiredFrameRate");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_setUseTexture,"_ofVideoGrabber_setUseTexture");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_draw4,"_ofVideoGrabber_draw4");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_draw2,"_ofVideoGrabber_draw2");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_update,"_ofVideoGrabber_update");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_setAnchorPercent,"_ofVideoGrabber_setAnchorPercent");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_setAnchorPoint,"_ofVideoGrabber_setAnchorPoint");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_resetAnchor,"_ofVideoGrabber_resetAnchor");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_get_height,"_ofVideoGrabber_get_height");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_set_height,"_ofVideoGrabber_set_height");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_get_width,"_ofVideoGrabber_get_width");
	HX_MARK_MEMBER_NAME(VideoGrabber_obj::_ofVideoGrabber_set_width,"_ofVideoGrabber_set_width");
};

Class VideoGrabber_obj::__mClass;

void VideoGrabber_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.video.VideoGrabber"), hx::TCanCast< VideoGrabber_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void VideoGrabber_obj::__boot()
{
	hx::Static(_ofVideoGrabber_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_new"),0);
	hx::Static(_ofVideoGrabber_listDevices) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_listDevices"),1);
	hx::Static(_ofVideoGrabber_isFrameNew) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_isFrameNew"),1);
	hx::Static(_ofVideoGrabber_grabFrame) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_grabFrame"),1);
	hx::Static(_ofVideoGrabber_close) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_close"),1);
	hx::Static(_ofVideoGrabber_initGrabber) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_initGrabber"),4);
	hx::Static(_ofVideoGrabber_videoSettings) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_videoSettings"),1);
	hx::Static(_ofVideoGrabber_getPixels) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_getPixels"),1);
	hx::Static(_ofVideoGrabber_getTextureReference) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_getTextureReference"),1);
	hx::Static(_ofVideoGrabber_setVerbose) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_setVerbose"),2);
	hx::Static(_ofVideoGrabber_setDeviceID) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_setDeviceID"),2);
	hx::Static(_ofVideoGrabber_setDesiredFrameRate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_setDesiredFrameRate"),2);
	hx::Static(_ofVideoGrabber_setUseTexture) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_setUseTexture"),2);
	hx::Static(_ofVideoGrabber_draw4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_draw4"),5);
	hx::Static(_ofVideoGrabber_draw2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_draw2"),3);
	hx::Static(_ofVideoGrabber_update) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_update"),1);
	hx::Static(_ofVideoGrabber_setAnchorPercent) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_setAnchorPercent"),3);
	hx::Static(_ofVideoGrabber_setAnchorPoint) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_setAnchorPoint"),3);
	hx::Static(_ofVideoGrabber_resetAnchor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_resetAnchor"),1);
	hx::Static(_ofVideoGrabber_get_height) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_get_height"),1);
	hx::Static(_ofVideoGrabber_set_height) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_set_height"),2);
	hx::Static(_ofVideoGrabber_get_width) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_get_width"),1);
	hx::Static(_ofVideoGrabber_set_width) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVideoGrabber_set_width"),2);
}

} // end namespace of
} // end namespace video
