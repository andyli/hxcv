#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_of_graphics_Image
#include <of/graphics/Image.h>
#endif
#ifndef INCLUDED_of_graphics_Texture
#include <of/graphics/Texture.h>
#endif
namespace of{
namespace graphics{

Void Image_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",12)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::graphics::Image_obj::_ofImage_new()) : Dynamic(handle) );
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",13)
	::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_setHandle"),2)(this->__Field(HX_CSTRING("__handle")),this);
}
;
	return null();
}

Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(handle);
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Image_obj::allocate( int w,int h,int type){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::allocate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",19)
		::of::graphics::Image_obj::_ofImage_allocate(this->__Field(HX_CSTRING("__handle")),w,h,type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,allocate,(void))

Void Image_obj::clear( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::clear")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",23)
		::of::graphics::Image_obj::_ofImage_clear(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clear,(void))

Void Image_obj::clone( ::of::graphics::Image mom){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::clone")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",28)
		::of::graphics::Image_obj::_ofImage_clone(this->__Field(HX_CSTRING("__handle")),mom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,clone,(void))

Void Image_obj::setUseTexture( bool bUse){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::setUseTexture")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",33)
		::of::graphics::Image_obj::_ofImage_setUseTexture(this->__Field(HX_CSTRING("__handle")),bUse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,setUseTexture,(void))

::of::graphics::Texture Image_obj::getTextureReference( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::getTextureReference")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",38)
	return ::of::graphics::Texture_obj::__new(::of::graphics::Image_obj::_ofImage_getTextureReference());
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getTextureReference,return )

bool Image_obj::loadImage( ::String fileName){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::loadImage")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",43)
	return ::of::graphics::Image_obj::_ofImage_loadImage(this->__Field(HX_CSTRING("__handle")),fileName);
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,loadImage,return )

Void Image_obj::saveImage( ::String fileName){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::saveImage")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",46)
		::of::graphics::Image_obj::_ofImage_saveImage(this->__Field(HX_CSTRING("__handle")),fileName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,saveImage,(void))

Array< unsigned char > Image_obj::getPixels( ){
	HX_SOURCE_PUSH("Image_obj::getPixels")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",52)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getPixels,return )

Void Image_obj::setFromPixels( Array< unsigned char > pixels,int w,int h,int newType,Dynamic __o_bOrderIsRGB){
bool bOrderIsRGB = __o_bOrderIsRGB.Default(true);
	HX_SOURCE_PUSH("Image_obj::setFromPixels");
{
		__SAFE_POINT
		struct _Function_1_1{
			inline static Dynamic Block( int &w,int &h,int &newType,Array< unsigned char > &pixels,bool &bOrderIsRGB){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("pixels") , pixels);
				__result->Add(HX_CSTRING("w") , w);
				__result->Add(HX_CSTRING("h") , h);
				__result->Add(HX_CSTRING("newType") , newType);
				__result->Add(HX_CSTRING("bOrderIsRGB") , bOrderIsRGB);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",57)
		::of::graphics::Image_obj::_ofImage_setFromPixels(this->__Field(HX_CSTRING("__handle")),_Function_1_1::Block(w,h,newType,pixels,bOrderIsRGB));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,setFromPixels,(void))

Void Image_obj::setImageType( int type){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::setImageType")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",61)
		::of::graphics::Image_obj::_ofImage_setImageType(this->__Field(HX_CSTRING("__handle")),type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,setImageType,(void))

Void Image_obj::resize( int newWidth,int newHeight){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::resize")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",65)
		::of::graphics::Image_obj::_ofImage_resize(this->__Field(HX_CSTRING("__handle")),newWidth,newHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

Void Image_obj::grabScreen( int x,int y,int w,int h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::grabScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",70)
		::of::graphics::Image_obj::_ofImage_grabScreen(this->__Field(HX_CSTRING("__handle")),x,y,w,h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,grabScreen,(void))

Void Image_obj::update( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::update")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",75)
		::of::graphics::Image_obj::_ofImage_update(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,update,(void))

Void Image_obj::setAnchorPercent( double xPct,double yPct){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::setAnchorPercent")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",83)
		::of::graphics::Image_obj::_ofImage_setAnchorPercent(this->__Field(HX_CSTRING("__handle")),xPct,yPct);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,setAnchorPercent,(void))

Void Image_obj::setAnchorPoint( double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::setAnchorPoint")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",87)
		::of::graphics::Image_obj::_ofImage_setAnchorPoint(this->__Field(HX_CSTRING("__handle")),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,setAnchorPoint,(void))

Void Image_obj::resetAnchor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::resetAnchor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",91)
		::of::graphics::Image_obj::_ofImage_resetAnchor(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,resetAnchor,(void))

Void Image_obj::draw( double x,double y,Dynamic w,Dynamic h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Image_obj::draw")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",97)
		if ((h == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",97)
			::of::graphics::Image_obj::_ofImage_draw2(this->__Field(HX_CSTRING("__handle")),x,y);
		}
		else{
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",97)
			::of::graphics::Image_obj::_ofImage_draw4(this->__Field(HX_CSTRING("__handle")),x,y,w,h);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,draw,(void))

double Image_obj::getHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",101)
	return ::of::graphics::Image_obj::_ofImage_getHeight(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getHeight,return )

double Image_obj::getWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",105)
	return ::of::graphics::Image_obj::_ofImage_getWidth(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getWidth,return )

int Image_obj::__getWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::__getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",118)
	return ::Std_obj::_int(::of::graphics::Image_obj::_ofImage_getWidth(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,__getWidth,return )

int Image_obj::__getHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::__getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",122)
	return ::Std_obj::_int(::of::graphics::Image_obj::_ofImage_getHeight(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,__getHeight,return )

int Image_obj::__getBpp( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::__getBpp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",126)
	return ::of::graphics::Image_obj::_ofImage_getBpp(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,__getBpp,return )

int Image_obj::__getType( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::__getType")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",130)
	return ::of::graphics::Image_obj::_ofImage_getType(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,__getType,return )

Array< unsigned char > Image_obj::__newByteData( int size){
	__SAFE_POINT
	HX_SOURCE_PUSH("Image_obj::__newByteData")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Image.hx",134)
	return this->_pixels = ::haxe::io::Bytes_obj::alloc(size)->b;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__newByteData,return )

Dynamic Image_obj::_ofImage_new;

Dynamic Image_obj::_ofImage_allocate;

Dynamic Image_obj::_ofImage_clear;

Dynamic Image_obj::_ofImage_clone;

Dynamic Image_obj::_ofImage_setUseTexture;

Dynamic Image_obj::_ofImage_getTextureReference;

Dynamic Image_obj::_ofImage_loadImage;

Dynamic Image_obj::_ofImage_saveImage;

Dynamic Image_obj::_ofImage_setFromPixels;

Dynamic Image_obj::_ofImage_setImageType;

Dynamic Image_obj::_ofImage_resize;

Dynamic Image_obj::_ofImage_grabScreen;

Dynamic Image_obj::_ofImage_update;

Dynamic Image_obj::_ofImage_setAnchorPercent;

Dynamic Image_obj::_ofImage_setAnchorPoint;

Dynamic Image_obj::_ofImage_resetAnchor;

Dynamic Image_obj::_ofImage_draw4;

Dynamic Image_obj::_ofImage_draw2;

Dynamic Image_obj::_ofImage_getHeight;

Dynamic Image_obj::_ofImage_getWidth;

Dynamic Image_obj::_ofImage_getBpp;

Dynamic Image_obj::_ofImage_getType;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(bpp,"bpp");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_END_CLASS();
}

Dynamic Image_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpp") ) { return __getBpp(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"type") ) { return __getType(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return __getWidth(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return __getHeight(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { return _pixels; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allocate") ) { return allocate_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"__getBpp") ) { return __getBpp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		if (HX_FIELD_EQ(inName,"saveImage") ) { return saveImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"__getType") ) { return __getType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grabScreen") ) { return grabScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"__getWidth") ) { return __getWidth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetAnchor") ) { return resetAnchor_dyn(); }
		if (HX_FIELD_EQ(inName,"__getHeight") ) { return __getHeight_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofImage_new") ) { return _ofImage_new; }
		if (HX_FIELD_EQ(inName,"setImageType") ) { return setImageType_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setUseTexture") ) { return setUseTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setFromPixels") ) { return setFromPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"__newByteData") ) { return __newByteData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofImage_clear") ) { return _ofImage_clear; }
		if (HX_FIELD_EQ(inName,"_ofImage_clone") ) { return _ofImage_clone; }
		if (HX_FIELD_EQ(inName,"_ofImage_draw4") ) { return _ofImage_draw4; }
		if (HX_FIELD_EQ(inName,"_ofImage_draw2") ) { return _ofImage_draw2; }
		if (HX_FIELD_EQ(inName,"setAnchorPoint") ) { return setAnchorPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofImage_resize") ) { return _ofImage_resize; }
		if (HX_FIELD_EQ(inName,"_ofImage_update") ) { return _ofImage_update; }
		if (HX_FIELD_EQ(inName,"_ofImage_getBpp") ) { return _ofImage_getBpp; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofImage_getType") ) { return _ofImage_getType; }
		if (HX_FIELD_EQ(inName,"setAnchorPercent") ) { return setAnchorPercent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofImage_allocate") ) { return _ofImage_allocate; }
		if (HX_FIELD_EQ(inName,"_ofImage_getWidth") ) { return _ofImage_getWidth; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofImage_loadImage") ) { return _ofImage_loadImage; }
		if (HX_FIELD_EQ(inName,"_ofImage_saveImage") ) { return _ofImage_saveImage; }
		if (HX_FIELD_EQ(inName,"_ofImage_getHeight") ) { return _ofImage_getHeight; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofImage_grabScreen") ) { return _ofImage_grabScreen; }
		if (HX_FIELD_EQ(inName,"getTextureReference") ) { return getTextureReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofImage_resetAnchor") ) { return _ofImage_resetAnchor; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofImage_setImageType") ) { return _ofImage_setImageType; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofImage_setUseTexture") ) { return _ofImage_setUseTexture; }
		if (HX_FIELD_EQ(inName,"_ofImage_setFromPixels") ) { return _ofImage_setFromPixels; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofImage_setAnchorPoint") ) { return _ofImage_setAnchorPoint; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofImage_setAnchorPercent") ) { return _ofImage_setAnchorPercent; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofImage_getTextureReference") ) { return _ofImage_getTextureReference; }
	}
	return super::__Field(inName);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpp") ) { bpp=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofImage_new") ) { _ofImage_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofImage_clear") ) { _ofImage_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_clone") ) { _ofImage_clone=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_draw4") ) { _ofImage_draw4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_draw2") ) { _ofImage_draw2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofImage_resize") ) { _ofImage_resize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_update") ) { _ofImage_update=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_getBpp") ) { _ofImage_getBpp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofImage_getType") ) { _ofImage_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofImage_allocate") ) { _ofImage_allocate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_getWidth") ) { _ofImage_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofImage_loadImage") ) { _ofImage_loadImage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_saveImage") ) { _ofImage_saveImage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_getHeight") ) { _ofImage_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofImage_grabScreen") ) { _ofImage_grabScreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofImage_resetAnchor") ) { _ofImage_resetAnchor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofImage_setImageType") ) { _ofImage_setImageType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofImage_setUseTexture") ) { _ofImage_setUseTexture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofImage_setFromPixels") ) { _ofImage_setFromPixels=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofImage_setAnchorPoint") ) { _ofImage_setAnchorPoint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofImage_setAnchorPercent") ) { _ofImage_setAnchorPercent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofImage_getTextureReference") ) { _ofImage_getTextureReference=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("bpp"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("_pixels"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofImage_new"),
	HX_CSTRING("_ofImage_allocate"),
	HX_CSTRING("_ofImage_clear"),
	HX_CSTRING("_ofImage_clone"),
	HX_CSTRING("_ofImage_setUseTexture"),
	HX_CSTRING("_ofImage_getTextureReference"),
	HX_CSTRING("_ofImage_loadImage"),
	HX_CSTRING("_ofImage_saveImage"),
	HX_CSTRING("_ofImage_setFromPixels"),
	HX_CSTRING("_ofImage_setImageType"),
	HX_CSTRING("_ofImage_resize"),
	HX_CSTRING("_ofImage_grabScreen"),
	HX_CSTRING("_ofImage_update"),
	HX_CSTRING("_ofImage_setAnchorPercent"),
	HX_CSTRING("_ofImage_setAnchorPoint"),
	HX_CSTRING("_ofImage_resetAnchor"),
	HX_CSTRING("_ofImage_draw4"),
	HX_CSTRING("_ofImage_draw2"),
	HX_CSTRING("_ofImage_getHeight"),
	HX_CSTRING("_ofImage_getWidth"),
	HX_CSTRING("_ofImage_getBpp"),
	HX_CSTRING("_ofImage_getType"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("allocate"),
	HX_CSTRING("clear"),
	HX_CSTRING("clone"),
	HX_CSTRING("setUseTexture"),
	HX_CSTRING("getTextureReference"),
	HX_CSTRING("loadImage"),
	HX_CSTRING("saveImage"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("setFromPixels"),
	HX_CSTRING("setImageType"),
	HX_CSTRING("resize"),
	HX_CSTRING("grabScreen"),
	HX_CSTRING("update"),
	HX_CSTRING("setAnchorPercent"),
	HX_CSTRING("setAnchorPoint"),
	HX_CSTRING("resetAnchor"),
	HX_CSTRING("draw"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("bpp"),
	HX_CSTRING("type"),
	HX_CSTRING("__handle"),
	HX_CSTRING("_pixels"),
	HX_CSTRING("__getWidth"),
	HX_CSTRING("__getHeight"),
	HX_CSTRING("__getBpp"),
	HX_CSTRING("__getType"),
	HX_CSTRING("__newByteData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_new,"_ofImage_new");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_allocate,"_ofImage_allocate");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_clear,"_ofImage_clear");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_clone,"_ofImage_clone");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_setUseTexture,"_ofImage_setUseTexture");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_getTextureReference,"_ofImage_getTextureReference");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_loadImage,"_ofImage_loadImage");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_saveImage,"_ofImage_saveImage");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_setFromPixels,"_ofImage_setFromPixels");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_setImageType,"_ofImage_setImageType");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_resize,"_ofImage_resize");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_grabScreen,"_ofImage_grabScreen");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_update,"_ofImage_update");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_setAnchorPercent,"_ofImage_setAnchorPercent");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_setAnchorPoint,"_ofImage_setAnchorPoint");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_resetAnchor,"_ofImage_resetAnchor");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_draw4,"_ofImage_draw4");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_draw2,"_ofImage_draw2");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_getHeight,"_ofImage_getHeight");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_getWidth,"_ofImage_getWidth");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_getBpp,"_ofImage_getBpp");
	HX_MARK_MEMBER_NAME(Image_obj::_ofImage_getType,"_ofImage_getType");
};

Class Image_obj::__mClass;

void Image_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.graphics.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Image_obj::__boot()
{
	hx::Static(_ofImage_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_new"),0);
	hx::Static(_ofImage_allocate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_allocate"),4);
	hx::Static(_ofImage_clear) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_clear"),1);
	hx::Static(_ofImage_clone) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_clone"),2);
	hx::Static(_ofImage_setUseTexture) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_setUseTexture"),2);
	hx::Static(_ofImage_getTextureReference) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_getTextureReference"),1);
	hx::Static(_ofImage_loadImage) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_loadImage"),2);
	hx::Static(_ofImage_saveImage) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_saveImage"),2);
	hx::Static(_ofImage_setFromPixels) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_setFromPixels"),2);
	hx::Static(_ofImage_setImageType) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_setImageType"),2);
	hx::Static(_ofImage_resize) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_resize"),3);
	hx::Static(_ofImage_grabScreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_grabScreen"),5);
	hx::Static(_ofImage_update) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_update"),1);
	hx::Static(_ofImage_setAnchorPercent) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_setAnchorPercent"),3);
	hx::Static(_ofImage_setAnchorPoint) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_setAnchorPoint"),3);
	hx::Static(_ofImage_resetAnchor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_resetAnchor"),1);
	hx::Static(_ofImage_draw4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_draw4"),5);
	hx::Static(_ofImage_draw2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_draw2"),3);
	hx::Static(_ofImage_getHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_getHeight"),1);
	hx::Static(_ofImage_getWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_getWidth"),1);
	hx::Static(_ofImage_getBpp) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_getBpp"),1);
	hx::Static(_ofImage_getType) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofImage_getType"),1);
}

} // end namespace of
} // end namespace graphics
