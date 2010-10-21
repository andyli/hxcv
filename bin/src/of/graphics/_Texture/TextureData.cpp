#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_graphics__Texture_TextureData
#include <of/graphics/_Texture/TextureData.h>
#endif
namespace of{
namespace graphics{
namespace _Texture{

Void TextureData_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",145)
	this->__FieldRef(HX_CSTRING("__handle")) = handle;
}
;
	return null();
}

TextureData_obj::~TextureData_obj() { }

Dynamic TextureData_obj::__CreateEmpty() { return  new TextureData_obj; }
hx::ObjectPtr< TextureData_obj > TextureData_obj::__new(Dynamic handle)
{  hx::ObjectPtr< TextureData_obj > result = new TextureData_obj();
	result->__construct(handle);
	return result;}

Dynamic TextureData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureData_obj > result = new TextureData_obj();
	result->__construct(inArgs[0]);
	return result;}

bool TextureData_obj::__get_bAllocated( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_bAllocated")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",192)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_bAllocated(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_bAllocated,return )

bool TextureData_obj::__set_bAllocated( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_bAllocated")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",195)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_bAllocated(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_bAllocated,return )

int TextureData_obj::__get_glType( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_glType")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",199)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_glType(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_glType,return )

int TextureData_obj::__set_glType( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_glType")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",202)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_glType(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_glType,return )

int TextureData_obj::__get_glTypeInternal( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_glTypeInternal")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",206)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_glTypeInternal(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_glTypeInternal,return )

int TextureData_obj::__set_glTypeInternal( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_glTypeInternal")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",209)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_glTypeInternal(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_glTypeInternal,return )

int TextureData_obj::__get_textureTarget( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_textureTarget")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",213)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_textureTarget(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_textureTarget,return )

int TextureData_obj::__set_textureTarget( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_textureTarget")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",216)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_textureTarget(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_textureTarget,return )

int TextureData_obj::__get_pixelType( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_pixelType")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",220)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_pixelType(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_pixelType,return )

int TextureData_obj::__set_pixelType( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_pixelType")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",223)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_pixelType(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_pixelType,return )

double TextureData_obj::__get_tex_t( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_tex_t")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",227)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_tex_t(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_tex_t,return )

double TextureData_obj::__set_tex_t( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_tex_t")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",230)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_tex_t(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_tex_t,return )

double TextureData_obj::__get_tex_u( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_tex_u")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",234)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_tex_u(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_tex_u,return )

double TextureData_obj::__set_tex_u( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_tex_u")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",237)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_tex_u(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_tex_u,return )

double TextureData_obj::__get_tex_w( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_tex_w")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",241)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_tex_w(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_tex_w,return )

double TextureData_obj::__set_tex_w( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_tex_w")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",244)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_tex_w(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_tex_w,return )

double TextureData_obj::__get_tex_h( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_tex_h")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",248)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_tex_h(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_tex_h,return )

double TextureData_obj::__set_tex_h( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_tex_h")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",251)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_tex_h(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_tex_h,return )

double TextureData_obj::__get_width( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_width")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",255)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_width(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_width,return )

double TextureData_obj::__set_width( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_width")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",258)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_width(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_width,return )

double TextureData_obj::__get_height( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_height")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",262)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_height(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_height,return )

double TextureData_obj::__set_height( double val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_height")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",265)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_height(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_height,return )

bool TextureData_obj::__get_bFlipTexture( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_bFlipTexture")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",269)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_bFlipTexture(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_bFlipTexture,return )

bool TextureData_obj::__set_bFlipTexture( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_bFlipTexture")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",272)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_bFlipTexture(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_bFlipTexture,return )

int TextureData_obj::__get_textureID( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__get_textureID")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",276)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_get_textureID(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureData_obj,__get_textureID,return )

int TextureData_obj::__set_textureID( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TextureData_obj::__set_textureID")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Texture.hx",279)
	return ::of::graphics::_Texture::TextureData_obj::_ofTextureData_set_textureID(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureData_obj,__set_textureID,return )

Dynamic TextureData_obj::_ofTextureData_get_bAllocated;

Dynamic TextureData_obj::_ofTextureData_set_bAllocated;

Dynamic TextureData_obj::_ofTextureData_get_glType;

Dynamic TextureData_obj::_ofTextureData_set_glType;

Dynamic TextureData_obj::_ofTextureData_get_glTypeInternal;

Dynamic TextureData_obj::_ofTextureData_set_glTypeInternal;

Dynamic TextureData_obj::_ofTextureData_get_textureTarget;

Dynamic TextureData_obj::_ofTextureData_set_textureTarget;

Dynamic TextureData_obj::_ofTextureData_get_pixelType;

Dynamic TextureData_obj::_ofTextureData_set_pixelType;

Dynamic TextureData_obj::_ofTextureData_get_tex_t;

Dynamic TextureData_obj::_ofTextureData_set_tex_t;

Dynamic TextureData_obj::_ofTextureData_get_tex_u;

Dynamic TextureData_obj::_ofTextureData_set_tex_u;

Dynamic TextureData_obj::_ofTextureData_get_tex_w;

Dynamic TextureData_obj::_ofTextureData_set_tex_w;

Dynamic TextureData_obj::_ofTextureData_get_tex_h;

Dynamic TextureData_obj::_ofTextureData_set_tex_h;

Dynamic TextureData_obj::_ofTextureData_get_width;

Dynamic TextureData_obj::_ofTextureData_set_width;

Dynamic TextureData_obj::_ofTextureData_get_height;

Dynamic TextureData_obj::_ofTextureData_set_height;

Dynamic TextureData_obj::_ofTextureData_get_bFlipTexture;

Dynamic TextureData_obj::_ofTextureData_set_bFlipTexture;

Dynamic TextureData_obj::_ofTextureData_get_textureID;

Dynamic TextureData_obj::_ofTextureData_set_textureID;


TextureData_obj::TextureData_obj()
{
}

void TextureData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureData);
	HX_MARK_MEMBER_NAME(bAllocated,"bAllocated");
	HX_MARK_MEMBER_NAME(glType,"glType");
	HX_MARK_MEMBER_NAME(glTypeInternal,"glTypeInternal");
	HX_MARK_MEMBER_NAME(textureTarget,"textureTarget");
	HX_MARK_MEMBER_NAME(pixelType,"pixelType");
	HX_MARK_MEMBER_NAME(tex_t,"tex_t");
	HX_MARK_MEMBER_NAME(tex_u,"tex_u");
	HX_MARK_MEMBER_NAME(tex_w,"tex_w");
	HX_MARK_MEMBER_NAME(tex_h,"tex_h");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(bFlipTexture,"bFlipTexture");
	HX_MARK_MEMBER_NAME(textureID,"textureID");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic TextureData_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tex_t") ) { return __get_tex_t(); }
		if (HX_FIELD_EQ(inName,"tex_u") ) { return __get_tex_u(); }
		if (HX_FIELD_EQ(inName,"tex_w") ) { return __get_tex_w(); }
		if (HX_FIELD_EQ(inName,"tex_h") ) { return __get_tex_h(); }
		if (HX_FIELD_EQ(inName,"width") ) { return __get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glType") ) { return __get_glType(); }
		if (HX_FIELD_EQ(inName,"height") ) { return __get_height(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pixelType") ) { return __get_pixelType(); }
		if (HX_FIELD_EQ(inName,"textureID") ) { return __get_textureID(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bAllocated") ) { return __get_bAllocated(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__get_tex_t") ) { return __get_tex_t_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_tex_t") ) { return __set_tex_t_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_tex_u") ) { return __get_tex_u_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_tex_u") ) { return __set_tex_u_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_tex_w") ) { return __get_tex_w_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_tex_w") ) { return __set_tex_w_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_tex_h") ) { return __get_tex_h_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_tex_h") ) { return __set_tex_h_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_width") ) { return __get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_width") ) { return __set_width_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bFlipTexture") ) { return __get_bFlipTexture(); }
		if (HX_FIELD_EQ(inName,"__get_glType") ) { return __get_glType_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_glType") ) { return __set_glType_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_height") ) { return __get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_height") ) { return __set_height_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureTarget") ) { return __get_textureTarget(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glTypeInternal") ) { return __get_glTypeInternal(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__get_pixelType") ) { return __get_pixelType_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_pixelType") ) { return __set_pixelType_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_textureID") ) { return __get_textureID_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_textureID") ) { return __set_textureID_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__get_bAllocated") ) { return __get_bAllocated_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bAllocated") ) { return __set_bAllocated_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__get_bFlipTexture") ) { return __get_bFlipTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bFlipTexture") ) { return __set_bFlipTexture_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__get_textureTarget") ) { return __get_textureTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_textureTarget") ) { return __set_textureTarget_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__get_glTypeInternal") ) { return __get_glTypeInternal_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_glTypeInternal") ) { return __set_glTypeInternal_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_t") ) { return _ofTextureData_get_tex_t; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_t") ) { return _ofTextureData_set_tex_t; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_u") ) { return _ofTextureData_get_tex_u; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_u") ) { return _ofTextureData_set_tex_u; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_w") ) { return _ofTextureData_get_tex_w; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_w") ) { return _ofTextureData_set_tex_w; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_h") ) { return _ofTextureData_get_tex_h; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_h") ) { return _ofTextureData_set_tex_h; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_width") ) { return _ofTextureData_get_width; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_width") ) { return _ofTextureData_set_width; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_glType") ) { return _ofTextureData_get_glType; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_glType") ) { return _ofTextureData_set_glType; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_height") ) { return _ofTextureData_get_height; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_height") ) { return _ofTextureData_set_height; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_pixelType") ) { return _ofTextureData_get_pixelType; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_pixelType") ) { return _ofTextureData_set_pixelType; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_textureID") ) { return _ofTextureData_get_textureID; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_textureID") ) { return _ofTextureData_set_textureID; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_bAllocated") ) { return _ofTextureData_get_bAllocated; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_bAllocated") ) { return _ofTextureData_set_bAllocated; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_bFlipTexture") ) { return _ofTextureData_get_bFlipTexture; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_bFlipTexture") ) { return _ofTextureData_set_bFlipTexture; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_textureTarget") ) { return _ofTextureData_get_textureTarget; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_textureTarget") ) { return _ofTextureData_set_textureTarget; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_glTypeInternal") ) { return _ofTextureData_get_glTypeInternal; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_glTypeInternal") ) { return _ofTextureData_set_glTypeInternal; }
	}
	return super::__Field(inName);
}

Dynamic TextureData_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tex_t") ) { return __set_tex_t(inValue); }
		if (HX_FIELD_EQ(inName,"tex_u") ) { return __set_tex_u(inValue); }
		if (HX_FIELD_EQ(inName,"tex_w") ) { return __set_tex_w(inValue); }
		if (HX_FIELD_EQ(inName,"tex_h") ) { return __set_tex_h(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { return __set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glType") ) { return __set_glType(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { return __set_height(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pixelType") ) { return __set_pixelType(inValue); }
		if (HX_FIELD_EQ(inName,"textureID") ) { return __set_textureID(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bAllocated") ) { return __set_bAllocated(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bFlipTexture") ) { return __set_bFlipTexture(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureTarget") ) { return __set_textureTarget(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glTypeInternal") ) { return __set_glTypeInternal(inValue); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_t") ) { _ofTextureData_get_tex_t=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_t") ) { _ofTextureData_set_tex_t=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_u") ) { _ofTextureData_get_tex_u=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_u") ) { _ofTextureData_set_tex_u=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_w") ) { _ofTextureData_get_tex_w=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_w") ) { _ofTextureData_set_tex_w=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_tex_h") ) { _ofTextureData_get_tex_h=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_tex_h") ) { _ofTextureData_set_tex_h=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_width") ) { _ofTextureData_get_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_width") ) { _ofTextureData_set_width=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_glType") ) { _ofTextureData_get_glType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_glType") ) { _ofTextureData_set_glType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_height") ) { _ofTextureData_get_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_height") ) { _ofTextureData_set_height=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_pixelType") ) { _ofTextureData_get_pixelType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_pixelType") ) { _ofTextureData_set_pixelType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_textureID") ) { _ofTextureData_get_textureID=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_textureID") ) { _ofTextureData_set_textureID=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_bAllocated") ) { _ofTextureData_get_bAllocated=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_bAllocated") ) { _ofTextureData_set_bAllocated=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_bFlipTexture") ) { _ofTextureData_get_bFlipTexture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_bFlipTexture") ) { _ofTextureData_set_bFlipTexture=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_textureTarget") ) { _ofTextureData_get_textureTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_textureTarget") ) { _ofTextureData_set_textureTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"_ofTextureData_get_glTypeInternal") ) { _ofTextureData_get_glTypeInternal=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTextureData_set_glTypeInternal") ) { _ofTextureData_set_glTypeInternal=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TextureData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bAllocated"));
	outFields->push(HX_CSTRING("glType"));
	outFields->push(HX_CSTRING("glTypeInternal"));
	outFields->push(HX_CSTRING("textureTarget"));
	outFields->push(HX_CSTRING("pixelType"));
	outFields->push(HX_CSTRING("tex_t"));
	outFields->push(HX_CSTRING("tex_u"));
	outFields->push(HX_CSTRING("tex_w"));
	outFields->push(HX_CSTRING("tex_h"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("bFlipTexture"));
	outFields->push(HX_CSTRING("textureID"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofTextureData_get_bAllocated"),
	HX_CSTRING("_ofTextureData_set_bAllocated"),
	HX_CSTRING("_ofTextureData_get_glType"),
	HX_CSTRING("_ofTextureData_set_glType"),
	HX_CSTRING("_ofTextureData_get_glTypeInternal"),
	HX_CSTRING("_ofTextureData_set_glTypeInternal"),
	HX_CSTRING("_ofTextureData_get_textureTarget"),
	HX_CSTRING("_ofTextureData_set_textureTarget"),
	HX_CSTRING("_ofTextureData_get_pixelType"),
	HX_CSTRING("_ofTextureData_set_pixelType"),
	HX_CSTRING("_ofTextureData_get_tex_t"),
	HX_CSTRING("_ofTextureData_set_tex_t"),
	HX_CSTRING("_ofTextureData_get_tex_u"),
	HX_CSTRING("_ofTextureData_set_tex_u"),
	HX_CSTRING("_ofTextureData_get_tex_w"),
	HX_CSTRING("_ofTextureData_set_tex_w"),
	HX_CSTRING("_ofTextureData_get_tex_h"),
	HX_CSTRING("_ofTextureData_set_tex_h"),
	HX_CSTRING("_ofTextureData_get_width"),
	HX_CSTRING("_ofTextureData_set_width"),
	HX_CSTRING("_ofTextureData_get_height"),
	HX_CSTRING("_ofTextureData_set_height"),
	HX_CSTRING("_ofTextureData_get_bFlipTexture"),
	HX_CSTRING("_ofTextureData_set_bFlipTexture"),
	HX_CSTRING("_ofTextureData_get_textureID"),
	HX_CSTRING("_ofTextureData_set_textureID"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("bAllocated"),
	HX_CSTRING("glType"),
	HX_CSTRING("glTypeInternal"),
	HX_CSTRING("textureTarget"),
	HX_CSTRING("pixelType"),
	HX_CSTRING("tex_t"),
	HX_CSTRING("tex_u"),
	HX_CSTRING("tex_w"),
	HX_CSTRING("tex_h"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("bFlipTexture"),
	HX_CSTRING("textureID"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__get_bAllocated"),
	HX_CSTRING("__set_bAllocated"),
	HX_CSTRING("__get_glType"),
	HX_CSTRING("__set_glType"),
	HX_CSTRING("__get_glTypeInternal"),
	HX_CSTRING("__set_glTypeInternal"),
	HX_CSTRING("__get_textureTarget"),
	HX_CSTRING("__set_textureTarget"),
	HX_CSTRING("__get_pixelType"),
	HX_CSTRING("__set_pixelType"),
	HX_CSTRING("__get_tex_t"),
	HX_CSTRING("__set_tex_t"),
	HX_CSTRING("__get_tex_u"),
	HX_CSTRING("__set_tex_u"),
	HX_CSTRING("__get_tex_w"),
	HX_CSTRING("__set_tex_w"),
	HX_CSTRING("__get_tex_h"),
	HX_CSTRING("__set_tex_h"),
	HX_CSTRING("__get_width"),
	HX_CSTRING("__set_width"),
	HX_CSTRING("__get_height"),
	HX_CSTRING("__set_height"),
	HX_CSTRING("__get_bFlipTexture"),
	HX_CSTRING("__set_bFlipTexture"),
	HX_CSTRING("__get_textureID"),
	HX_CSTRING("__set_textureID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_bAllocated,"_ofTextureData_get_bAllocated");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_bAllocated,"_ofTextureData_set_bAllocated");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_glType,"_ofTextureData_get_glType");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_glType,"_ofTextureData_set_glType");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_glTypeInternal,"_ofTextureData_get_glTypeInternal");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_glTypeInternal,"_ofTextureData_set_glTypeInternal");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_textureTarget,"_ofTextureData_get_textureTarget");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_textureTarget,"_ofTextureData_set_textureTarget");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_pixelType,"_ofTextureData_get_pixelType");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_pixelType,"_ofTextureData_set_pixelType");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_tex_t,"_ofTextureData_get_tex_t");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_tex_t,"_ofTextureData_set_tex_t");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_tex_u,"_ofTextureData_get_tex_u");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_tex_u,"_ofTextureData_set_tex_u");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_tex_w,"_ofTextureData_get_tex_w");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_tex_w,"_ofTextureData_set_tex_w");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_tex_h,"_ofTextureData_get_tex_h");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_tex_h,"_ofTextureData_set_tex_h");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_width,"_ofTextureData_get_width");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_width,"_ofTextureData_set_width");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_height,"_ofTextureData_get_height");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_height,"_ofTextureData_set_height");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_bFlipTexture,"_ofTextureData_get_bFlipTexture");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_bFlipTexture,"_ofTextureData_set_bFlipTexture");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_get_textureID,"_ofTextureData_get_textureID");
	HX_MARK_MEMBER_NAME(TextureData_obj::_ofTextureData_set_textureID,"_ofTextureData_set_textureID");
};

Class TextureData_obj::__mClass;

void TextureData_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.graphics._Texture.TextureData"), hx::TCanCast< TextureData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TextureData_obj::__boot()
{
	hx::Static(_ofTextureData_get_bAllocated) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_bAllocated"),1);
	hx::Static(_ofTextureData_set_bAllocated) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_bAllocated"),2);
	hx::Static(_ofTextureData_get_glType) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_glType"),1);
	hx::Static(_ofTextureData_set_glType) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_glType"),2);
	hx::Static(_ofTextureData_get_glTypeInternal) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_glTypeInternal"),1);
	hx::Static(_ofTextureData_set_glTypeInternal) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_glTypeInternal"),2);
	hx::Static(_ofTextureData_get_textureTarget) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_textureTarget"),1);
	hx::Static(_ofTextureData_set_textureTarget) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_textureTarget"),2);
	hx::Static(_ofTextureData_get_pixelType) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_pixelType"),1);
	hx::Static(_ofTextureData_set_pixelType) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_pixelType"),2);
	hx::Static(_ofTextureData_get_tex_t) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_tex_t"),1);
	hx::Static(_ofTextureData_set_tex_t) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_tex_t"),2);
	hx::Static(_ofTextureData_get_tex_u) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_tex_u"),1);
	hx::Static(_ofTextureData_set_tex_u) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_tex_u"),2);
	hx::Static(_ofTextureData_get_tex_w) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_tex_w"),1);
	hx::Static(_ofTextureData_set_tex_w) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_tex_w"),2);
	hx::Static(_ofTextureData_get_tex_h) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_tex_h"),1);
	hx::Static(_ofTextureData_set_tex_h) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_tex_h"),2);
	hx::Static(_ofTextureData_get_width) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_width"),1);
	hx::Static(_ofTextureData_set_width) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_width"),2);
	hx::Static(_ofTextureData_get_height) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_height"),1);
	hx::Static(_ofTextureData_set_height) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_height"),2);
	hx::Static(_ofTextureData_get_bFlipTexture) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_bFlipTexture"),1);
	hx::Static(_ofTextureData_set_bFlipTexture) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_bFlipTexture"),2);
	hx::Static(_ofTextureData_get_textureID) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_get_textureID"),1);
	hx::Static(_ofTextureData_set_textureID) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTextureData_set_textureID"),2);
}

} // end namespace of
} // end namespace graphics
} // end namespace _Texture
