#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_graphics_TrueTypeFont
#include <of/graphics/TrueTypeFont.h>
#endif
#ifndef INCLUDED_of_utils_Point
#include <of/utils/Point.h>
#endif
#ifndef INCLUDED_of_utils_Rectangle
#include <of/utils/Rectangle.h>
#endif
namespace of{
namespace graphics{

Void TrueTypeFont_obj::__construct(Dynamic handle)
{
{
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",19)
	this->__FieldRef(HX_CSTRING("__handle")) = (  ((handle == null())) ? Dynamic(::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_new()) : Dynamic(handle) );
}
;
	return null();
}

TrueTypeFont_obj::~TrueTypeFont_obj() { }

Dynamic TrueTypeFont_obj::__CreateEmpty() { return  new TrueTypeFont_obj; }
hx::ObjectPtr< TrueTypeFont_obj > TrueTypeFont_obj::__new(Dynamic handle)
{  hx::ObjectPtr< TrueTypeFont_obj > result = new TrueTypeFont_obj();
	result->__construct(handle);
	return result;}

Dynamic TrueTypeFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TrueTypeFont_obj > result = new TrueTypeFont_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TrueTypeFont_obj::loadFont( ::String filename,int fontsize,Dynamic __o__bAntiAliased,Dynamic __o__bFullCharacterSet,Dynamic __o_makeContours){
bool _bAntiAliased = __o__bAntiAliased.Default(true);
bool _bFullCharacterSet = __o__bFullCharacterSet.Default(false);
bool makeContours = __o_makeContours.Default(false);
	HX_SOURCE_PUSH("TrueTypeFont_obj::loadFont");
{
		__SAFE_POINT
		struct _Function_1_1{
			inline static Dynamic Block( bool &_bAntiAliased,bool &makeContours,::String &filename,int &fontsize,bool &_bFullCharacterSet){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("filename") , filename);
				__result->Add(HX_CSTRING("fontsize") , fontsize);
				__result->Add(HX_CSTRING("_bAntiAliased") , _bAntiAliased);
				__result->Add(HX_CSTRING("_bFullCharacterSet") , _bFullCharacterSet);
				__result->Add(HX_CSTRING("makeContours") , makeContours);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",24)
		::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_loadFont(this->__Field(HX_CSTRING("__handle")),_Function_1_1::Block(_bAntiAliased,makeContours,filename,fontsize,_bFullCharacterSet));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(TrueTypeFont_obj,loadFont,(void))

double TrueTypeFont_obj::getLineHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::getLineHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",33)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_getLineHeight(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TrueTypeFont_obj,getLineHeight,return )

Void TrueTypeFont_obj::setLineHeight( double height){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TrueTypeFont_obj::setLineHeight")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",37)
		::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_setLineHeight(this->__Field(HX_CSTRING("__handle")),height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,setLineHeight,(void))

double TrueTypeFont_obj::stringWidth( ::String s){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::stringWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",41)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_stringWidth(this->__Field(HX_CSTRING("__handle")),s);
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,stringWidth,return )

double TrueTypeFont_obj::stringHeight( ::String s){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::stringHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",45)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_stringHeight(this->__Field(HX_CSTRING("__handle")),s);
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,stringHeight,return )

::of::utils::Rectangle TrueTypeFont_obj::getStringBoundingBox( ::String s,double x,double y){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::getStringBoundingBox")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",50)
	return ::of::utils::Rectangle_obj::__new(::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_getStringBoundingBox(this->__Field(HX_CSTRING("__handle")),s,x,y));
}


HX_DEFINE_DYNAMIC_FUNC3(TrueTypeFont_obj,getStringBoundingBox,return )

Void TrueTypeFont_obj::drawString( ::String s,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TrueTypeFont_obj::drawString")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",55)
		::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_drawString(this->__Field(HX_CSTRING("__handle")),s,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TrueTypeFont_obj,drawString,(void))

Void TrueTypeFont_obj::drawStringAsShapes( ::String s,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TrueTypeFont_obj::drawStringAsShapes")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",59)
		::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_drawStringAsShapes(this->__Field(HX_CSTRING("__handle")),s,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TrueTypeFont_obj,drawStringAsShapes,(void))

Dynamic TrueTypeFont_obj::getCharacterAsPoints( int character){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::getCharacterAsPoints")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic $t1,::Class $t2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",66)
			Array< ::Class > a1 = Array_obj< ::Class >::__new().Add($t2);
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",66)
			Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,f,Array< ::Class >,a1)
			::of::utils::Point run(Array< Dynamic > a2){
				__SAFE_POINT;
				return f->__get(0)(a1->__get(0),a2);
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",66)
			return  Dynamic(new _Function_2_1(f,a1));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",66)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_getCharacterAsPoints(this->__Field(HX_CSTRING("__handle")),character, Dynamic(new _Function_1_1())(::Type_obj::createInstance_dyn(),hx::ClassOf< ::of::utils::Point >()));
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,getCharacterAsPoints,return )

bool TrueTypeFont_obj::__get_bLoadedOk( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__get_bLoadedOk")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",72)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_get_bLoadedOk(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TrueTypeFont_obj,__get_bLoadedOk,return )

bool TrueTypeFont_obj::__set_bLoadedOk( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__set_bLoadedOk")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",75)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_set_bLoadedOk(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,__set_bLoadedOk,return )

bool TrueTypeFont_obj::__get_bAntiAlised( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__get_bAntiAlised")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",79)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_get_bAntiAlised(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TrueTypeFont_obj,__get_bAntiAlised,return )

bool TrueTypeFont_obj::__set_bAntiAlised( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__set_bAntiAlised")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",82)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_set_bAntiAlised(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,__set_bAntiAlised,return )

bool TrueTypeFont_obj::__get_bFullCharacterSet( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__get_bFullCharacterSet")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",86)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_get_bFullCharacterSet(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TrueTypeFont_obj,__get_bFullCharacterSet,return )

bool TrueTypeFont_obj::__set_bFullCharacterSet( bool val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__set_bFullCharacterSet")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",89)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_set_bFullCharacterSet(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,__set_bFullCharacterSet,return )

int TrueTypeFont_obj::__get_nCharacters( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__get_nCharacters")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",93)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_get_nCharacters(this->__Field(HX_CSTRING("__handle")));
}


HX_DEFINE_DYNAMIC_FUNC0(TrueTypeFont_obj,__get_nCharacters,return )

int TrueTypeFont_obj::__set_nCharacters( int val){
	__SAFE_POINT
	HX_SOURCE_PUSH("TrueTypeFont_obj::__set_nCharacters")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/TrueTypeFont.hx",96)
	return ::of::graphics::TrueTypeFont_obj::_ofTrueTypeFont_set_nCharacters(this->__Field(HX_CSTRING("__handle")),val);
}


HX_DEFINE_DYNAMIC_FUNC1(TrueTypeFont_obj,__set_nCharacters,return )

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_new;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_loadFont;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_getLineHeight;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_setLineHeight;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_stringWidth;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_stringHeight;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_getStringBoundingBox;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_drawString;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_drawStringAsShapes;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_getCharacterAsPoints;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_get_bLoadedOk;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_set_bLoadedOk;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_get_bAntiAlised;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_set_bAntiAlised;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_get_bFullCharacterSet;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_set_bFullCharacterSet;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_get_nCharacters;

Dynamic TrueTypeFont_obj::_ofTrueTypeFont_set_nCharacters;


TrueTypeFont_obj::TrueTypeFont_obj()
{
}

void TrueTypeFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrueTypeFont);
	HX_MARK_MEMBER_NAME(bLoadedOk,"bLoadedOk");
	HX_MARK_MEMBER_NAME(bAntiAlised,"bAntiAlised");
	HX_MARK_MEMBER_NAME(bFullCharacterSet,"bFullCharacterSet");
	HX_MARK_MEMBER_NAME(nCharacters,"nCharacters");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

Dynamic TrueTypeFont_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bLoadedOk") ) { return __get_bLoadedOk(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawString") ) { return drawString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bAntiAlised") ) { return __get_bAntiAlised(); }
		if (HX_FIELD_EQ(inName,"stringWidth") ) { return stringWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"nCharacters") ) { return __get_nCharacters(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stringHeight") ) { return stringHeight_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLineHeight") ) { return getLineHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineHeight") ) { return setLineHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__get_bLoadedOk") ) { return __get_bLoadedOk_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bLoadedOk") ) { return __set_bLoadedOk_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bFullCharacterSet") ) { return __get_bFullCharacterSet(); }
		if (HX_FIELD_EQ(inName,"__get_bAntiAlised") ) { return __get_bAntiAlised_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bAntiAlised") ) { return __set_bAntiAlised_dyn(); }
		if (HX_FIELD_EQ(inName,"__get_nCharacters") ) { return __get_nCharacters_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_nCharacters") ) { return __set_nCharacters_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawStringAsShapes") ) { return drawStringAsShapes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_new") ) { return _ofTrueTypeFont_new; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getStringBoundingBox") ) { return getStringBoundingBox_dyn(); }
		if (HX_FIELD_EQ(inName,"getCharacterAsPoints") ) { return getCharacterAsPoints_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__get_bFullCharacterSet") ) { return __get_bFullCharacterSet_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_bFullCharacterSet") ) { return __set_bFullCharacterSet_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_loadFont") ) { return _ofTrueTypeFont_loadFont; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_drawString") ) { return _ofTrueTypeFont_drawString; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_stringWidth") ) { return _ofTrueTypeFont_stringWidth; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_stringHeight") ) { return _ofTrueTypeFont_stringHeight; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_getLineHeight") ) { return _ofTrueTypeFont_getLineHeight; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_setLineHeight") ) { return _ofTrueTypeFont_setLineHeight; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_bLoadedOk") ) { return _ofTrueTypeFont_get_bLoadedOk; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_bLoadedOk") ) { return _ofTrueTypeFont_set_bLoadedOk; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_bAntiAlised") ) { return _ofTrueTypeFont_get_bAntiAlised; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_bAntiAlised") ) { return _ofTrueTypeFont_set_bAntiAlised; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_nCharacters") ) { return _ofTrueTypeFont_get_nCharacters; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_nCharacters") ) { return _ofTrueTypeFont_set_nCharacters; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_drawStringAsShapes") ) { return _ofTrueTypeFont_drawStringAsShapes; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_getStringBoundingBox") ) { return _ofTrueTypeFont_getStringBoundingBox; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_getCharacterAsPoints") ) { return _ofTrueTypeFont_getCharacterAsPoints; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_bFullCharacterSet") ) { return _ofTrueTypeFont_get_bFullCharacterSet; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_bFullCharacterSet") ) { return _ofTrueTypeFont_set_bFullCharacterSet; }
	}
	return super::__Field(inName);
}

Dynamic TrueTypeFont_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bLoadedOk") ) { return __set_bLoadedOk(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bAntiAlised") ) { return __set_bAntiAlised(inValue); }
		if (HX_FIELD_EQ(inName,"nCharacters") ) { return __set_nCharacters(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bFullCharacterSet") ) { return __set_bFullCharacterSet(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_new") ) { _ofTrueTypeFont_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_loadFont") ) { _ofTrueTypeFont_loadFont=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_drawString") ) { _ofTrueTypeFont_drawString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_stringWidth") ) { _ofTrueTypeFont_stringWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_stringHeight") ) { _ofTrueTypeFont_stringHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_getLineHeight") ) { _ofTrueTypeFont_getLineHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_setLineHeight") ) { _ofTrueTypeFont_setLineHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_bLoadedOk") ) { _ofTrueTypeFont_get_bLoadedOk=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_bLoadedOk") ) { _ofTrueTypeFont_set_bLoadedOk=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_bAntiAlised") ) { _ofTrueTypeFont_get_bAntiAlised=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_bAntiAlised") ) { _ofTrueTypeFont_set_bAntiAlised=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_nCharacters") ) { _ofTrueTypeFont_get_nCharacters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_nCharacters") ) { _ofTrueTypeFont_set_nCharacters=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_drawStringAsShapes") ) { _ofTrueTypeFont_drawStringAsShapes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_getStringBoundingBox") ) { _ofTrueTypeFont_getStringBoundingBox=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_getCharacterAsPoints") ) { _ofTrueTypeFont_getCharacterAsPoints=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_get_bFullCharacterSet") ) { _ofTrueTypeFont_get_bFullCharacterSet=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTrueTypeFont_set_bFullCharacterSet") ) { _ofTrueTypeFont_set_bFullCharacterSet=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TrueTypeFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bLoadedOk"));
	outFields->push(HX_CSTRING("bAntiAlised"));
	outFields->push(HX_CSTRING("bFullCharacterSet"));
	outFields->push(HX_CSTRING("nCharacters"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ofTrueTypeFont_new"),
	HX_CSTRING("_ofTrueTypeFont_loadFont"),
	HX_CSTRING("_ofTrueTypeFont_getLineHeight"),
	HX_CSTRING("_ofTrueTypeFont_setLineHeight"),
	HX_CSTRING("_ofTrueTypeFont_stringWidth"),
	HX_CSTRING("_ofTrueTypeFont_stringHeight"),
	HX_CSTRING("_ofTrueTypeFont_getStringBoundingBox"),
	HX_CSTRING("_ofTrueTypeFont_drawString"),
	HX_CSTRING("_ofTrueTypeFont_drawStringAsShapes"),
	HX_CSTRING("_ofTrueTypeFont_getCharacterAsPoints"),
	HX_CSTRING("_ofTrueTypeFont_get_bLoadedOk"),
	HX_CSTRING("_ofTrueTypeFont_set_bLoadedOk"),
	HX_CSTRING("_ofTrueTypeFont_get_bAntiAlised"),
	HX_CSTRING("_ofTrueTypeFont_set_bAntiAlised"),
	HX_CSTRING("_ofTrueTypeFont_get_bFullCharacterSet"),
	HX_CSTRING("_ofTrueTypeFont_set_bFullCharacterSet"),
	HX_CSTRING("_ofTrueTypeFont_get_nCharacters"),
	HX_CSTRING("_ofTrueTypeFont_set_nCharacters"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadFont"),
	HX_CSTRING("bLoadedOk"),
	HX_CSTRING("bAntiAlised"),
	HX_CSTRING("bFullCharacterSet"),
	HX_CSTRING("getLineHeight"),
	HX_CSTRING("setLineHeight"),
	HX_CSTRING("stringWidth"),
	HX_CSTRING("stringHeight"),
	HX_CSTRING("getStringBoundingBox"),
	HX_CSTRING("drawString"),
	HX_CSTRING("drawStringAsShapes"),
	HX_CSTRING("nCharacters"),
	HX_CSTRING("getCharacterAsPoints"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__get_bLoadedOk"),
	HX_CSTRING("__set_bLoadedOk"),
	HX_CSTRING("__get_bAntiAlised"),
	HX_CSTRING("__set_bAntiAlised"),
	HX_CSTRING("__get_bFullCharacterSet"),
	HX_CSTRING("__set_bFullCharacterSet"),
	HX_CSTRING("__get_nCharacters"),
	HX_CSTRING("__set_nCharacters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_new,"_ofTrueTypeFont_new");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_loadFont,"_ofTrueTypeFont_loadFont");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_getLineHeight,"_ofTrueTypeFont_getLineHeight");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_setLineHeight,"_ofTrueTypeFont_setLineHeight");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_stringWidth,"_ofTrueTypeFont_stringWidth");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_stringHeight,"_ofTrueTypeFont_stringHeight");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_getStringBoundingBox,"_ofTrueTypeFont_getStringBoundingBox");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_drawString,"_ofTrueTypeFont_drawString");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_drawStringAsShapes,"_ofTrueTypeFont_drawStringAsShapes");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_getCharacterAsPoints,"_ofTrueTypeFont_getCharacterAsPoints");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_get_bLoadedOk,"_ofTrueTypeFont_get_bLoadedOk");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_set_bLoadedOk,"_ofTrueTypeFont_set_bLoadedOk");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_get_bAntiAlised,"_ofTrueTypeFont_get_bAntiAlised");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_set_bAntiAlised,"_ofTrueTypeFont_set_bAntiAlised");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_get_bFullCharacterSet,"_ofTrueTypeFont_get_bFullCharacterSet");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_set_bFullCharacterSet,"_ofTrueTypeFont_set_bFullCharacterSet");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_get_nCharacters,"_ofTrueTypeFont_get_nCharacters");
	HX_MARK_MEMBER_NAME(TrueTypeFont_obj::_ofTrueTypeFont_set_nCharacters,"_ofTrueTypeFont_set_nCharacters");
};

Class TrueTypeFont_obj::__mClass;

void TrueTypeFont_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.graphics.TrueTypeFont"), hx::TCanCast< TrueTypeFont_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TrueTypeFont_obj::__boot()
{
	hx::Static(_ofTrueTypeFont_new) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_new"),0);
	hx::Static(_ofTrueTypeFont_loadFont) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_loadFont"),2);
	hx::Static(_ofTrueTypeFont_getLineHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_getLineHeight"),1);
	hx::Static(_ofTrueTypeFont_setLineHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_setLineHeight"),2);
	hx::Static(_ofTrueTypeFont_stringWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_stringWidth"),2);
	hx::Static(_ofTrueTypeFont_stringHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_stringHeight"),2);
	hx::Static(_ofTrueTypeFont_getStringBoundingBox) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_getStringBoundingBox"),4);
	hx::Static(_ofTrueTypeFont_drawString) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_drawString"),4);
	hx::Static(_ofTrueTypeFont_drawStringAsShapes) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_drawStringAsShapes"),4);
	hx::Static(_ofTrueTypeFont_getCharacterAsPoints) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_getCharacterAsPoints"),3);
	hx::Static(_ofTrueTypeFont_get_bLoadedOk) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_get_bLoadedOk"),1);
	hx::Static(_ofTrueTypeFont_set_bLoadedOk) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_set_bLoadedOk"),2);
	hx::Static(_ofTrueTypeFont_get_bAntiAlised) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_get_bAntiAlised"),1);
	hx::Static(_ofTrueTypeFont_set_bAntiAlised) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_set_bAntiAlised"),2);
	hx::Static(_ofTrueTypeFont_get_bFullCharacterSet) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_get_bFullCharacterSet"),1);
	hx::Static(_ofTrueTypeFont_set_bFullCharacterSet) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_set_bFullCharacterSet"),2);
	hx::Static(_ofTrueTypeFont_get_nCharacters) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_get_nCharacters"),1);
	hx::Static(_ofTrueTypeFont_set_nCharacters) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTrueTypeFont_set_nCharacters"),2);
}

} // end namespace of
} // end namespace graphics
