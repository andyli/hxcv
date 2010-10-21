#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_graphics_Texture
#include <of/graphics/Texture.h>
#endif
#ifndef INCLUDED_of_graphics__Texture_TextureData
#include <of/graphics/_Texture/TextureData.h>
#endif
#ifndef INCLUDED_of_utils_Point
#include <of/utils/Point.h>
#endif
namespace of{
namespace graphics{

Void Texture_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",11)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::graphics::Texture_obj::_ofTexture_new()) : Dynamic(handle) );
}
;
	return null();
}

Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(handle);
	return result;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Texture_obj::clone( ::of::graphics::Texture mom){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::clone")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",21)
		::of::graphics::Texture_obj::_ofTexture_clone(this->__Field(HX_CSTRING("__handle")),mom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,clone,(void))

Void Texture_obj::allocate( int w,int h,int internalGlDataType,Dynamic __o_bUseARBExtention){
bool bUseARBExtention = __o_bUseARBExtention.Default(true);
	HX_SOURCE_PUSH("Texture_obj::allocate");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",29)
		::of::graphics::Texture_obj::_ofTexture_allocate(this->__Field(HX_CSTRING("__handle")),w,h,internalGlDataType,bUseARBExtention);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,allocate,(void))

Void Texture_obj::clear( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::clear")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",33)
		::of::graphics::Texture_obj::_ofTexture_clear(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,clear,(void))

Void Texture_obj::loadData( Array< unsigned char > data,int w,int h,int glDataType){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::loadData")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",38)
		::of::graphics::Texture_obj::_ofTexture_loadData(this->__Field(HX_CSTRING("__handle")),data,w,h,glDataType);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,loadData,(void))

Void Texture_obj::loadScreenData( int x,int y,int w,int h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::loadScreenData")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",43)
		::of::graphics::Texture_obj::_ofTexture_loadScreenData(this->__Field(HX_CSTRING("__handle")),x,y,w,h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,loadScreenData,(void))

Void Texture_obj::setAnchorPercent( double xPct,double yPct){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::setAnchorPercent")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",50)
		::of::graphics::Texture_obj::_ofTexture_setAnchorPercent(this->__Field(HX_CSTRING("__handle")),xPct,yPct);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,setAnchorPercent,(void))

Void Texture_obj::setAnchorPoint( double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::setAnchorPoint")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",54)
		::of::graphics::Texture_obj::_ofTexture_setAnchorPoint(this->__Field(HX_CSTRING("__handle")),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,setAnchorPoint,(void))

Void Texture_obj::resetAnchor( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::resetAnchor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",58)
		::of::graphics::Texture_obj::_ofTexture_resetAnchor(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,resetAnchor,(void))

Void Texture_obj::draw( double x,double y,Dynamic w,Dynamic h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::draw")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",62)
		if ((h == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",62)
			::of::graphics::Texture_obj::_ofTexture_draw2(this->__Field(HX_CSTRING("__handle")),x,y);
		}
		else{
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",62)
			::of::graphics::Texture_obj::_ofTexture_draw4(this->__Field(HX_CSTRING("__handle")),x,y,w,h);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,draw,(void))

Void Texture_obj::bind( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::bind")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",68)
		::of::graphics::Texture_obj::_ofTexture_bind(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,bind,(void))

Void Texture_obj::unbind( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Texture_obj::unbind")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",72)
		::of::graphics::Texture_obj::_ofTexture_unbind(this->__Field(HX_CSTRING("__handle")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,unbind,(void))

::of::utils::Point Texture_obj::getCoordFromPoint( double xPos,double yPos){
	__SAFE_POINT
	HX_SOURCE_PUSH("Texture_obj::getCoordFromPoint")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",80)
	return ::of::utils::Point_obj::__new(null(),null(),null(),::of::graphics::Texture_obj::_ofTexture_getCoordFromPoint(this->__Field(HX_CSTRING("__handle")),xPos,yPos));
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,getCoordFromPoint,return )

::of::utils::Point Texture_obj::getCoordFromPercent( double xPts,double yPts){
	__SAFE_POINT
	HX_SOURCE_PUSH("Texture_obj::getCoordFromPercent")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",84)
	return ::of::utils::Point_obj::__new(null(),null(),null(),::of::graphics::Texture_obj::_ofTexture_getCoordFromPercent(this->__Field(HX_CSTRING("__handle")),xPts,yPts));
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,getCoordFromPercent,return )

bool Texture_obj::bAllocated( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Texture_obj::bAllocated")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",98)
	return ::of::graphics::Texture_obj::_ofTexture_bAllocated();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,bAllocated,return )

double Texture_obj::getHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Texture_obj::getHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",102)
	return ::of::graphics::Texture_obj::_ofTexture_getHeight(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getHeight,return )

double Texture_obj::getWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Texture_obj::getWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",106)
	return ::of::graphics::Texture_obj::_ofTexture_getWidth(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getWidth,return )

::of::graphics::_Texture::TextureData Texture_obj::getTextureData( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Texture_obj::getTextureData")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",110)
	return ::of::graphics::_Texture::TextureData_obj::__new(::of::graphics::Texture_obj::_ofTexture_getTextureData(this->__Field(HX_CSTRING("__handle"))));
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getTextureData,return )

Dynamic Texture_obj::_ofTexture_new;

Dynamic Texture_obj::_ofTexture_clone;

Dynamic Texture_obj::_ofTexture_allocate;

Dynamic Texture_obj::_ofTexture_clear;

Dynamic Texture_obj::_ofTexture_loadData;

Dynamic Texture_obj::_ofTexture_loadScreenData;

Dynamic Texture_obj::_ofTexture_setAnchorPercent;

Dynamic Texture_obj::_ofTexture_setAnchorPoint;

Dynamic Texture_obj::_ofTexture_resetAnchor;

Dynamic Texture_obj::_ofTexture_bind;

Dynamic Texture_obj::_ofTexture_unbind;

Dynamic Texture_obj::_ofTexture_getCoordFromPoint;

Dynamic Texture_obj::_ofTexture_getCoordFromPercent;

Dynamic Texture_obj::_ofTexture_bAllocated;

Dynamic Texture_obj::_ofTexture_draw4;

Dynamic Texture_obj::_ofTexture_draw2;

Dynamic Texture_obj::_ofTexture_getHeight;

Dynamic Texture_obj::_ofTexture_getWidth;

Dynamic Texture_obj::_ofTexture_getTextureData;


Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(texData,"texData");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic Texture_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texData") ) { return getTextureData(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allocate") ) { return allocate_dyn(); }
		if (HX_FIELD_EQ(inName,"loadData") ) { return loadData_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bAllocated") ) { return bAllocated_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetAnchor") ) { return resetAnchor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofTexture_new") ) { return _ofTexture_new; }
		if (HX_FIELD_EQ(inName,"loadScreenData") ) { return loadScreenData_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnchorPoint") ) { return setAnchorPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextureData") ) { return getTextureData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofTexture_bind") ) { return _ofTexture_bind; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofTexture_clone") ) { return _ofTexture_clone; }
		if (HX_FIELD_EQ(inName,"_ofTexture_clear") ) { return _ofTexture_clear; }
		if (HX_FIELD_EQ(inName,"_ofTexture_draw4") ) { return _ofTexture_draw4; }
		if (HX_FIELD_EQ(inName,"_ofTexture_draw2") ) { return _ofTexture_draw2; }
		if (HX_FIELD_EQ(inName,"setAnchorPercent") ) { return setAnchorPercent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofTexture_unbind") ) { return _ofTexture_unbind; }
		if (HX_FIELD_EQ(inName,"getCoordFromPoint") ) { return getCoordFromPoint_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofTexture_allocate") ) { return _ofTexture_allocate; }
		if (HX_FIELD_EQ(inName,"_ofTexture_loadData") ) { return _ofTexture_loadData; }
		if (HX_FIELD_EQ(inName,"_ofTexture_getWidth") ) { return _ofTexture_getWidth; }
		if (HX_FIELD_EQ(inName,"getCoordFromPercent") ) { return getCoordFromPercent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofTexture_getHeight") ) { return _ofTexture_getHeight; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofTexture_bAllocated") ) { return _ofTexture_bAllocated; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofTexture_resetAnchor") ) { return _ofTexture_resetAnchor; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofTexture_loadScreenData") ) { return _ofTexture_loadScreenData; }
		if (HX_FIELD_EQ(inName,"_ofTexture_setAnchorPoint") ) { return _ofTexture_setAnchorPoint; }
		if (HX_FIELD_EQ(inName,"_ofTexture_getTextureData") ) { return _ofTexture_getTextureData; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofTexture_setAnchorPercent") ) { return _ofTexture_setAnchorPercent; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofTexture_getCoordFromPoint") ) { return _ofTexture_getCoordFromPoint; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofTexture_getCoordFromPercent") ) { return _ofTexture_getCoordFromPercent; }
	}
	return super::__Field(inName);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texData") ) { texData=inValue.Cast< ::of::graphics::_Texture::TextureData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofTexture_new") ) { _ofTexture_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofTexture_bind") ) { _ofTexture_bind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofTexture_clone") ) { _ofTexture_clone=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTexture_clear") ) { _ofTexture_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTexture_draw4") ) { _ofTexture_draw4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTexture_draw2") ) { _ofTexture_draw2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofTexture_unbind") ) { _ofTexture_unbind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofTexture_allocate") ) { _ofTexture_allocate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTexture_loadData") ) { _ofTexture_loadData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTexture_getWidth") ) { _ofTexture_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofTexture_getHeight") ) { _ofTexture_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofTexture_bAllocated") ) { _ofTexture_bAllocated=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofTexture_resetAnchor") ) { _ofTexture_resetAnchor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofTexture_loadScreenData") ) { _ofTexture_loadScreenData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTexture_setAnchorPoint") ) { _ofTexture_setAnchorPoint=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTexture_getTextureData") ) { _ofTexture_getTextureData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofTexture_setAnchorPercent") ) { _ofTexture_setAnchorPercent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofTexture_getCoordFromPoint") ) { _ofTexture_getCoordFromPoint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_ofTexture_getCoordFromPercent") ) { _ofTexture_getCoordFromPercent=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("texData"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofTexture_new"),
	HX_CSTRING("_ofTexture_clone"),
	HX_CSTRING("_ofTexture_allocate"),
	HX_CSTRING("_ofTexture_clear"),
	HX_CSTRING("_ofTexture_loadData"),
	HX_CSTRING("_ofTexture_loadScreenData"),
	HX_CSTRING("_ofTexture_setAnchorPercent"),
	HX_CSTRING("_ofTexture_setAnchorPoint"),
	HX_CSTRING("_ofTexture_resetAnchor"),
	HX_CSTRING("_ofTexture_bind"),
	HX_CSTRING("_ofTexture_unbind"),
	HX_CSTRING("_ofTexture_getCoordFromPoint"),
	HX_CSTRING("_ofTexture_getCoordFromPercent"),
	HX_CSTRING("_ofTexture_bAllocated"),
	HX_CSTRING("_ofTexture_draw4"),
	HX_CSTRING("_ofTexture_draw2"),
	HX_CSTRING("_ofTexture_getHeight"),
	HX_CSTRING("_ofTexture_getWidth"),
	HX_CSTRING("_ofTexture_getTextureData"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("allocate"),
	HX_CSTRING("clear"),
	HX_CSTRING("loadData"),
	HX_CSTRING("loadScreenData"),
	HX_CSTRING("setAnchorPercent"),
	HX_CSTRING("setAnchorPoint"),
	HX_CSTRING("resetAnchor"),
	HX_CSTRING("draw"),
	HX_CSTRING("bind"),
	HX_CSTRING("unbind"),
	HX_CSTRING("getCoordFromPoint"),
	HX_CSTRING("getCoordFromPercent"),
	HX_CSTRING("bAllocated"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("getTextureData"),
	HX_CSTRING("texData"),
	HX_CSTRING("__handle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_new,"_ofTexture_new");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_clone,"_ofTexture_clone");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_allocate,"_ofTexture_allocate");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_clear,"_ofTexture_clear");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_loadData,"_ofTexture_loadData");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_loadScreenData,"_ofTexture_loadScreenData");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_setAnchorPercent,"_ofTexture_setAnchorPercent");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_setAnchorPoint,"_ofTexture_setAnchorPoint");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_resetAnchor,"_ofTexture_resetAnchor");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_bind,"_ofTexture_bind");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_unbind,"_ofTexture_unbind");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_getCoordFromPoint,"_ofTexture_getCoordFromPoint");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_getCoordFromPercent,"_ofTexture_getCoordFromPercent");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_bAllocated,"_ofTexture_bAllocated");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_draw4,"_ofTexture_draw4");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_draw2,"_ofTexture_draw2");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_getHeight,"_ofTexture_getHeight");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_getWidth,"_ofTexture_getWidth");
	HX_MARK_MEMBER_NAME(Texture_obj::_ofTexture_getTextureData,"_ofTexture_getTextureData");
};

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.graphics.Texture"), hx::TCanCast< Texture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Texture_obj::__boot()
{
	hx::Static(_ofTexture_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_new"),0);
	hx::Static(_ofTexture_clone) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_clone"),2);
	hx::Static(_ofTexture_allocate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_allocate"),5);
	hx::Static(_ofTexture_clear) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_clear"),1);
	hx::Static(_ofTexture_loadData) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_loadData"),5);
	hx::Static(_ofTexture_loadScreenData) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_loadScreenData"),5);
	hx::Static(_ofTexture_setAnchorPercent) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_setAnchorPercent"),3);
	hx::Static(_ofTexture_setAnchorPoint) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_setAnchorPoint"),3);
	hx::Static(_ofTexture_resetAnchor) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_resetAnchor"),1);
	hx::Static(_ofTexture_bind) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_bind"),1);
	hx::Static(_ofTexture_unbind) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_unbind"),1);
	hx::Static(_ofTexture_getCoordFromPoint) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_getCoordFromPoint"),3);
	hx::Static(_ofTexture_getCoordFromPercent) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_getCoordFromPercent"),3);
	hx::Static(_ofTexture_bAllocated) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_bAllocated"),1);
	hx::Static(_ofTexture_draw4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_draw4"),5);
	hx::Static(_ofTexture_draw2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_draw2"),3);
	hx::Static(_ofTexture_getHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_getHeight"),1);
	hx::Static(_ofTexture_getWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_getWidth"),1);
	hx::Static(_ofTexture_getTextureData) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTexture_getTextureData"),1);
}

} // end namespace of
} // end namespace graphics
