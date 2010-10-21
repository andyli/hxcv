#include <hxcpp.h>

#ifndef INCLUDED_cpp_Sys
#include <cpp/Sys.h>
#endif
#ifndef INCLUDED_of_utils_Constants
#include <of/utils/Constants.h>
#endif
#ifndef INCLUDED_of_utils_LogLevel
#include <of/utils/LogLevel.h>
#endif
namespace of{
namespace utils{

Void Constants_obj::__construct()
{
	return null();
}

Constants_obj::~Constants_obj() { }

Dynamic Constants_obj::__CreateEmpty() { return  new Constants_obj; }
hx::ObjectPtr< Constants_obj > Constants_obj::__new()
{  hx::ObjectPtr< Constants_obj > result = new Constants_obj();
	result->__construct();
	return result;}

Dynamic Constants_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Constants_obj > result = new Constants_obj();
	result->__construct();
	return result;}

int Constants_obj::OF_VERSION;

int Constants_obj::OF_LOOP_NONE;

int Constants_obj::OF_LOOP_PALINDROME;

int Constants_obj::OF_LOOP_NORMAL;

::of::utils::LogLevel Constants_obj::OF_DEFAULT_LOG_LEVEL;

int Constants_obj::OF_SERIAL_NO_DATA;

int Constants_obj::OF_SERIAL_ERROR;

double Constants_obj::PI;

double Constants_obj::TWO_PI;

double Constants_obj::M_TWO_PI;

double Constants_obj::FOUR_PI;

double Constants_obj::HALF_PI;

int Constants_obj::OF_FILLED;

int Constants_obj::OF_OUTLINE;

int Constants_obj::OF_WINDOW;

int Constants_obj::OF_FULLSCREEN;

int Constants_obj::OF_GAME_MODE;

int Constants_obj::OF_RECTMODE_CORNER;

int Constants_obj::OF_RECTMODE_CENTER;

int Constants_obj::OF_IMAGE_GRAYSCALE;

int Constants_obj::OF_IMAGE_COLOR;

int Constants_obj::OF_IMAGE_COLOR_ALPHA;

int Constants_obj::OF_IMAGE_UNDEFINED;

int Constants_obj::OF_MAX_STYLE_HISTORY;

int Constants_obj::OF_MAX_CIRCLE_PTS;

int Constants_obj::OF_POLY_WINDING_ODD;

int Constants_obj::OF_POLY_WINDING_NONZERO;

int Constants_obj::OF_POLY_WINDING_POSITIVE;

int Constants_obj::OF_POLY_WINDING_NEGATIVE;

int Constants_obj::OF_POLY_WINDING_ABS_GEQ_TWO;

bool Constants_obj::OF_CLOSE;

int Constants_obj::OF_KEY_MODIFIER;

int Constants_obj::OF_KEY_RETURN;

int Constants_obj::OF_KEY_ESC;

int Constants_obj::OF_KEY_BACKSPACE;

int Constants_obj::OF_KEY_DEL;

int Constants_obj::OF_KEY_F1;

int Constants_obj::OF_KEY_F2;

int Constants_obj::OF_KEY_F3;

int Constants_obj::OF_KEY_F4;

int Constants_obj::OF_KEY_F5;

int Constants_obj::OF_KEY_F6;

int Constants_obj::OF_KEY_F7;

int Constants_obj::OF_KEY_F8;

int Constants_obj::OF_KEY_F9;

int Constants_obj::OF_KEY_F10;

int Constants_obj::OF_KEY_F11;

int Constants_obj::OF_KEY_F12;

int Constants_obj::OF_KEY_LEFT;

int Constants_obj::OF_KEY_UP;

int Constants_obj::OF_KEY_RIGHT;

int Constants_obj::OF_KEY_DOWN;

int Constants_obj::OF_KEY_PAGE_UP;

int Constants_obj::OF_KEY_PAGE_DOWN;

int Constants_obj::OF_KEY_HOME;

int Constants_obj::OF_KEY_END;

int Constants_obj::OF_KEY_INSERT;

int Constants_obj::GL_RGB;

int Constants_obj::GL_RGBA;

int Constants_obj::GL_LUMINANCE;


Constants_obj::Constants_obj()
{
}

void Constants_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Constants);
	HX_MARK_END_CLASS();
}

Dynamic Constants_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"PI") ) { return PI; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"TWO_PI") ) { return TWO_PI; }
		if (HX_FIELD_EQ(inName,"GL_RGB") ) { return GL_RGB; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FOUR_PI") ) { return FOUR_PI; }
		if (HX_FIELD_EQ(inName,"HALF_PI") ) { return HALF_PI; }
		if (HX_FIELD_EQ(inName,"GL_RGBA") ) { return GL_RGBA; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"M_TWO_PI") ) { return M_TWO_PI; }
		if (HX_FIELD_EQ(inName,"OF_CLOSE") ) { return OF_CLOSE; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OF_FILLED") ) { return OF_FILLED; }
		if (HX_FIELD_EQ(inName,"OF_WINDOW") ) { return OF_WINDOW; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F1") ) { return OF_KEY_F1; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F2") ) { return OF_KEY_F2; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F3") ) { return OF_KEY_F3; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F4") ) { return OF_KEY_F4; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F5") ) { return OF_KEY_F5; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F6") ) { return OF_KEY_F6; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F7") ) { return OF_KEY_F7; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F8") ) { return OF_KEY_F8; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F9") ) { return OF_KEY_F9; }
		if (HX_FIELD_EQ(inName,"OF_KEY_UP") ) { return OF_KEY_UP; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"OF_VERSION") ) { return OF_VERSION; }
		if (HX_FIELD_EQ(inName,"OF_OUTLINE") ) { return OF_OUTLINE; }
		if (HX_FIELD_EQ(inName,"OF_KEY_ESC") ) { return OF_KEY_ESC; }
		if (HX_FIELD_EQ(inName,"OF_KEY_DEL") ) { return OF_KEY_DEL; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F10") ) { return OF_KEY_F10; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F11") ) { return OF_KEY_F11; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F12") ) { return OF_KEY_F12; }
		if (HX_FIELD_EQ(inName,"OF_KEY_END") ) { return OF_KEY_END; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"OF_KEY_LEFT") ) { return OF_KEY_LEFT; }
		if (HX_FIELD_EQ(inName,"OF_KEY_DOWN") ) { return OF_KEY_DOWN; }
		if (HX_FIELD_EQ(inName,"OF_KEY_HOME") ) { return OF_KEY_HOME; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"OF_LOOP_NONE") ) { return OF_LOOP_NONE; }
		if (HX_FIELD_EQ(inName,"OF_GAME_MODE") ) { return OF_GAME_MODE; }
		if (HX_FIELD_EQ(inName,"OF_KEY_RIGHT") ) { return OF_KEY_RIGHT; }
		if (HX_FIELD_EQ(inName,"GL_LUMINANCE") ) { return GL_LUMINANCE; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"OF_FULLSCREEN") ) { return OF_FULLSCREEN; }
		if (HX_FIELD_EQ(inName,"OF_KEY_RETURN") ) { return OF_KEY_RETURN; }
		if (HX_FIELD_EQ(inName,"OF_KEY_INSERT") ) { return OF_KEY_INSERT; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"OF_LOOP_NORMAL") ) { return OF_LOOP_NORMAL; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_COLOR") ) { return OF_IMAGE_COLOR; }
		if (HX_FIELD_EQ(inName,"OF_KEY_PAGE_UP") ) { return OF_KEY_PAGE_UP; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"OF_SERIAL_ERROR") ) { return OF_SERIAL_ERROR; }
		if (HX_FIELD_EQ(inName,"OF_KEY_MODIFIER") ) { return OF_KEY_MODIFIER; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OF_KEY_BACKSPACE") ) { return OF_KEY_BACKSPACE; }
		if (HX_FIELD_EQ(inName,"OF_KEY_PAGE_DOWN") ) { return OF_KEY_PAGE_DOWN; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OF_SERIAL_NO_DATA") ) { return OF_SERIAL_NO_DATA; }
		if (HX_FIELD_EQ(inName,"OF_MAX_CIRCLE_PTS") ) { return OF_MAX_CIRCLE_PTS; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OF_LOOP_PALINDROME") ) { return OF_LOOP_PALINDROME; }
		if (HX_FIELD_EQ(inName,"OF_RECTMODE_CORNER") ) { return OF_RECTMODE_CORNER; }
		if (HX_FIELD_EQ(inName,"OF_RECTMODE_CENTER") ) { return OF_RECTMODE_CENTER; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_GRAYSCALE") ) { return OF_IMAGE_GRAYSCALE; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_UNDEFINED") ) { return OF_IMAGE_UNDEFINED; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_ODD") ) { return OF_POLY_WINDING_ODD; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"OF_DEFAULT_LOG_LEVEL") ) { return OF_DEFAULT_LOG_LEVEL; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_COLOR_ALPHA") ) { return OF_IMAGE_COLOR_ALPHA; }
		if (HX_FIELD_EQ(inName,"OF_MAX_STYLE_HISTORY") ) { return OF_MAX_STYLE_HISTORY; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_NONZERO") ) { return OF_POLY_WINDING_NONZERO; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_POSITIVE") ) { return OF_POLY_WINDING_POSITIVE; }
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_NEGATIVE") ) { return OF_POLY_WINDING_NEGATIVE; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_ABS_GEQ_TWO") ) { return OF_POLY_WINDING_ABS_GEQ_TWO; }
	}
	return super::__Field(inName);
}

Dynamic Constants_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"PI") ) { PI=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"TWO_PI") ) { TWO_PI=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GL_RGB") ) { GL_RGB=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FOUR_PI") ) { FOUR_PI=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HALF_PI") ) { HALF_PI=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GL_RGBA") ) { GL_RGBA=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"M_TWO_PI") ) { M_TWO_PI=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_CLOSE") ) { OF_CLOSE=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OF_FILLED") ) { OF_FILLED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_WINDOW") ) { OF_WINDOW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F1") ) { OF_KEY_F1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F2") ) { OF_KEY_F2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F3") ) { OF_KEY_F3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F4") ) { OF_KEY_F4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F5") ) { OF_KEY_F5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F6") ) { OF_KEY_F6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F7") ) { OF_KEY_F7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F8") ) { OF_KEY_F8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F9") ) { OF_KEY_F9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_UP") ) { OF_KEY_UP=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"OF_VERSION") ) { OF_VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_OUTLINE") ) { OF_OUTLINE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_ESC") ) { OF_KEY_ESC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_DEL") ) { OF_KEY_DEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F10") ) { OF_KEY_F10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F11") ) { OF_KEY_F11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_F12") ) { OF_KEY_F12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_END") ) { OF_KEY_END=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"OF_KEY_LEFT") ) { OF_KEY_LEFT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_DOWN") ) { OF_KEY_DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_HOME") ) { OF_KEY_HOME=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"OF_LOOP_NONE") ) { OF_LOOP_NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_GAME_MODE") ) { OF_GAME_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_RIGHT") ) { OF_KEY_RIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GL_LUMINANCE") ) { GL_LUMINANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"OF_FULLSCREEN") ) { OF_FULLSCREEN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_RETURN") ) { OF_KEY_RETURN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_INSERT") ) { OF_KEY_INSERT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"OF_LOOP_NORMAL") ) { OF_LOOP_NORMAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_COLOR") ) { OF_IMAGE_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_PAGE_UP") ) { OF_KEY_PAGE_UP=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"OF_SERIAL_ERROR") ) { OF_SERIAL_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_MODIFIER") ) { OF_KEY_MODIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OF_KEY_BACKSPACE") ) { OF_KEY_BACKSPACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_KEY_PAGE_DOWN") ) { OF_KEY_PAGE_DOWN=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OF_SERIAL_NO_DATA") ) { OF_SERIAL_NO_DATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_MAX_CIRCLE_PTS") ) { OF_MAX_CIRCLE_PTS=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OF_LOOP_PALINDROME") ) { OF_LOOP_PALINDROME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_RECTMODE_CORNER") ) { OF_RECTMODE_CORNER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_RECTMODE_CENTER") ) { OF_RECTMODE_CENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_GRAYSCALE") ) { OF_IMAGE_GRAYSCALE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_UNDEFINED") ) { OF_IMAGE_UNDEFINED=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_ODD") ) { OF_POLY_WINDING_ODD=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"OF_DEFAULT_LOG_LEVEL") ) { OF_DEFAULT_LOG_LEVEL=inValue.Cast< ::of::utils::LogLevel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_IMAGE_COLOR_ALPHA") ) { OF_IMAGE_COLOR_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_MAX_STYLE_HISTORY") ) { OF_MAX_STYLE_HISTORY=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_NONZERO") ) { OF_POLY_WINDING_NONZERO=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_POSITIVE") ) { OF_POLY_WINDING_POSITIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_NEGATIVE") ) { OF_POLY_WINDING_NEGATIVE=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"OF_POLY_WINDING_ABS_GEQ_TWO") ) { OF_POLY_WINDING_ABS_GEQ_TWO=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Constants_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("OF_VERSION"),
	HX_CSTRING("OF_LOOP_NONE"),
	HX_CSTRING("OF_LOOP_PALINDROME"),
	HX_CSTRING("OF_LOOP_NORMAL"),
	HX_CSTRING("OF_DEFAULT_LOG_LEVEL"),
	HX_CSTRING("OF_SERIAL_NO_DATA"),
	HX_CSTRING("OF_SERIAL_ERROR"),
	HX_CSTRING("PI"),
	HX_CSTRING("TWO_PI"),
	HX_CSTRING("M_TWO_PI"),
	HX_CSTRING("FOUR_PI"),
	HX_CSTRING("HALF_PI"),
	HX_CSTRING("OF_FILLED"),
	HX_CSTRING("OF_OUTLINE"),
	HX_CSTRING("OF_WINDOW"),
	HX_CSTRING("OF_FULLSCREEN"),
	HX_CSTRING("OF_GAME_MODE"),
	HX_CSTRING("OF_RECTMODE_CORNER"),
	HX_CSTRING("OF_RECTMODE_CENTER"),
	HX_CSTRING("OF_IMAGE_GRAYSCALE"),
	HX_CSTRING("OF_IMAGE_COLOR"),
	HX_CSTRING("OF_IMAGE_COLOR_ALPHA"),
	HX_CSTRING("OF_IMAGE_UNDEFINED"),
	HX_CSTRING("OF_MAX_STYLE_HISTORY"),
	HX_CSTRING("OF_MAX_CIRCLE_PTS"),
	HX_CSTRING("OF_POLY_WINDING_ODD"),
	HX_CSTRING("OF_POLY_WINDING_NONZERO"),
	HX_CSTRING("OF_POLY_WINDING_POSITIVE"),
	HX_CSTRING("OF_POLY_WINDING_NEGATIVE"),
	HX_CSTRING("OF_POLY_WINDING_ABS_GEQ_TWO"),
	HX_CSTRING("OF_CLOSE"),
	HX_CSTRING("OF_KEY_MODIFIER"),
	HX_CSTRING("OF_KEY_RETURN"),
	HX_CSTRING("OF_KEY_ESC"),
	HX_CSTRING("OF_KEY_BACKSPACE"),
	HX_CSTRING("OF_KEY_DEL"),
	HX_CSTRING("OF_KEY_F1"),
	HX_CSTRING("OF_KEY_F2"),
	HX_CSTRING("OF_KEY_F3"),
	HX_CSTRING("OF_KEY_F4"),
	HX_CSTRING("OF_KEY_F5"),
	HX_CSTRING("OF_KEY_F6"),
	HX_CSTRING("OF_KEY_F7"),
	HX_CSTRING("OF_KEY_F8"),
	HX_CSTRING("OF_KEY_F9"),
	HX_CSTRING("OF_KEY_F10"),
	HX_CSTRING("OF_KEY_F11"),
	HX_CSTRING("OF_KEY_F12"),
	HX_CSTRING("OF_KEY_LEFT"),
	HX_CSTRING("OF_KEY_UP"),
	HX_CSTRING("OF_KEY_RIGHT"),
	HX_CSTRING("OF_KEY_DOWN"),
	HX_CSTRING("OF_KEY_PAGE_UP"),
	HX_CSTRING("OF_KEY_PAGE_DOWN"),
	HX_CSTRING("OF_KEY_HOME"),
	HX_CSTRING("OF_KEY_END"),
	HX_CSTRING("OF_KEY_INSERT"),
	HX_CSTRING("GL_RGB"),
	HX_CSTRING("GL_RGBA"),
	HX_CSTRING("GL_LUMINANCE"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Constants_obj::OF_VERSION,"OF_VERSION");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_LOOP_NONE,"OF_LOOP_NONE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_LOOP_PALINDROME,"OF_LOOP_PALINDROME");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_LOOP_NORMAL,"OF_LOOP_NORMAL");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_DEFAULT_LOG_LEVEL,"OF_DEFAULT_LOG_LEVEL");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_SERIAL_NO_DATA,"OF_SERIAL_NO_DATA");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_SERIAL_ERROR,"OF_SERIAL_ERROR");
	HX_MARK_MEMBER_NAME(Constants_obj::PI,"PI");
	HX_MARK_MEMBER_NAME(Constants_obj::TWO_PI,"TWO_PI");
	HX_MARK_MEMBER_NAME(Constants_obj::M_TWO_PI,"M_TWO_PI");
	HX_MARK_MEMBER_NAME(Constants_obj::FOUR_PI,"FOUR_PI");
	HX_MARK_MEMBER_NAME(Constants_obj::HALF_PI,"HALF_PI");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_FILLED,"OF_FILLED");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_OUTLINE,"OF_OUTLINE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_WINDOW,"OF_WINDOW");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_FULLSCREEN,"OF_FULLSCREEN");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_GAME_MODE,"OF_GAME_MODE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_RECTMODE_CORNER,"OF_RECTMODE_CORNER");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_RECTMODE_CENTER,"OF_RECTMODE_CENTER");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_IMAGE_GRAYSCALE,"OF_IMAGE_GRAYSCALE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_IMAGE_COLOR,"OF_IMAGE_COLOR");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_IMAGE_COLOR_ALPHA,"OF_IMAGE_COLOR_ALPHA");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_IMAGE_UNDEFINED,"OF_IMAGE_UNDEFINED");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_MAX_STYLE_HISTORY,"OF_MAX_STYLE_HISTORY");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_MAX_CIRCLE_PTS,"OF_MAX_CIRCLE_PTS");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_POLY_WINDING_ODD,"OF_POLY_WINDING_ODD");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_POLY_WINDING_NONZERO,"OF_POLY_WINDING_NONZERO");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_POLY_WINDING_POSITIVE,"OF_POLY_WINDING_POSITIVE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_POLY_WINDING_NEGATIVE,"OF_POLY_WINDING_NEGATIVE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_POLY_WINDING_ABS_GEQ_TWO,"OF_POLY_WINDING_ABS_GEQ_TWO");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_CLOSE,"OF_CLOSE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_MODIFIER,"OF_KEY_MODIFIER");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_RETURN,"OF_KEY_RETURN");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_ESC,"OF_KEY_ESC");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_BACKSPACE,"OF_KEY_BACKSPACE");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_DEL,"OF_KEY_DEL");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F1,"OF_KEY_F1");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F2,"OF_KEY_F2");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F3,"OF_KEY_F3");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F4,"OF_KEY_F4");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F5,"OF_KEY_F5");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F6,"OF_KEY_F6");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F7,"OF_KEY_F7");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F8,"OF_KEY_F8");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F9,"OF_KEY_F9");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F10,"OF_KEY_F10");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F11,"OF_KEY_F11");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_F12,"OF_KEY_F12");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_LEFT,"OF_KEY_LEFT");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_UP,"OF_KEY_UP");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_RIGHT,"OF_KEY_RIGHT");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_DOWN,"OF_KEY_DOWN");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_PAGE_UP,"OF_KEY_PAGE_UP");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_PAGE_DOWN,"OF_KEY_PAGE_DOWN");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_HOME,"OF_KEY_HOME");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_END,"OF_KEY_END");
	HX_MARK_MEMBER_NAME(Constants_obj::OF_KEY_INSERT,"OF_KEY_INSERT");
	HX_MARK_MEMBER_NAME(Constants_obj::GL_RGB,"GL_RGB");
	HX_MARK_MEMBER_NAME(Constants_obj::GL_RGBA,"GL_RGBA");
	HX_MARK_MEMBER_NAME(Constants_obj::GL_LUMINANCE,"GL_LUMINANCE");
};

Class Constants_obj::__mClass;

void Constants_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.Constants"), hx::TCanCast< Constants_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Constants_obj::__boot()
{
	hx::Static(OF_VERSION) = 6;
	hx::Static(OF_LOOP_NONE) = 1;
	hx::Static(OF_LOOP_PALINDROME) = 2;
	hx::Static(OF_LOOP_NORMAL) = 3;
	hx::Static(OF_DEFAULT_LOG_LEVEL) = ::of::utils::LogLevel_obj::OF_LOG_WARNING;
	hx::Static(OF_SERIAL_NO_DATA) = -2;
	hx::Static(OF_SERIAL_ERROR) = -1;
	hx::Static(PI) = 3.14159265358979323846;
	hx::Static(TWO_PI) = 6.28318530717958647693;
	hx::Static(M_TWO_PI) = 6.28318530717958647693;
	hx::Static(FOUR_PI) = 12.56637061435917295385;
	hx::Static(HALF_PI) = 1.57079632679489661923;
	hx::Static(OF_FILLED) = 1;
	hx::Static(OF_OUTLINE) = 2;
	hx::Static(OF_WINDOW) = 0;
	hx::Static(OF_FULLSCREEN) = 1;
	hx::Static(OF_GAME_MODE) = 2;
	hx::Static(OF_RECTMODE_CORNER) = 0;
	hx::Static(OF_RECTMODE_CENTER) = 1;
	hx::Static(OF_IMAGE_GRAYSCALE) = 0;
	hx::Static(OF_IMAGE_COLOR) = 1;
	hx::Static(OF_IMAGE_COLOR_ALPHA) = 2;
	hx::Static(OF_IMAGE_UNDEFINED) = 3;
	hx::Static(OF_MAX_STYLE_HISTORY) = 32;
	hx::Static(OF_MAX_CIRCLE_PTS) = 1024;
	hx::Static(OF_POLY_WINDING_ODD) = 100130;
	hx::Static(OF_POLY_WINDING_NONZERO) = 100131;
	hx::Static(OF_POLY_WINDING_POSITIVE) = 100132;
	hx::Static(OF_POLY_WINDING_NEGATIVE) = 100133;
	hx::Static(OF_POLY_WINDING_ABS_GEQ_TWO) = 100134;
	hx::Static(OF_CLOSE) = true;
	hx::Static(OF_KEY_MODIFIER) = 256;
	hx::Static(OF_KEY_RETURN) = 13;
	hx::Static(OF_KEY_ESC) = 27;
	hx::Static(OF_KEY_BACKSPACE) = (  ((::cpp::Sys_obj::systemName() == HX_CSTRING("Mac"))) ? int(127) : int(8) );
	hx::Static(OF_KEY_DEL) = (  ((::cpp::Sys_obj::systemName() == HX_CSTRING("Mac"))) ? int(8) : int(127) );
	hx::Static(OF_KEY_F1) = 257;
	hx::Static(OF_KEY_F2) = 258;
	hx::Static(OF_KEY_F3) = 259;
	hx::Static(OF_KEY_F4) = 260;
	hx::Static(OF_KEY_F5) = 261;
	hx::Static(OF_KEY_F6) = 262;
	hx::Static(OF_KEY_F7) = 263;
	hx::Static(OF_KEY_F8) = 264;
	hx::Static(OF_KEY_F9) = 265;
	hx::Static(OF_KEY_F10) = 266;
	hx::Static(OF_KEY_F11) = 267;
	hx::Static(OF_KEY_F12) = 268;
	hx::Static(OF_KEY_LEFT) = 356;
	hx::Static(OF_KEY_UP) = 357;
	hx::Static(OF_KEY_RIGHT) = 358;
	hx::Static(OF_KEY_DOWN) = 359;
	hx::Static(OF_KEY_PAGE_UP) = 360;
	hx::Static(OF_KEY_PAGE_DOWN) = 361;
	hx::Static(OF_KEY_HOME) = 362;
	hx::Static(OF_KEY_END) = 363;
	hx::Static(OF_KEY_INSERT) = 364;
	hx::Static(GL_RGB) = 6407;
	hx::Static(GL_RGBA) = 6408;
	hx::Static(GL_LUMINANCE) = 6409;
}

} // end namespace of
} // end namespace utils
