#ifndef INCLUDED_of_utils_Constants
#define INCLUDED_of_utils_Constants

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,Constants)
HX_DECLARE_CLASS2(of,utils,LogLevel)
namespace of{
namespace utils{


class Constants_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Constants_obj OBJ_;
		Constants_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Constants_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Constants_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Constants"); }

		static int OF_VERSION; /* REM */ 
		static int OF_LOOP_NONE; /* REM */ 
		static int OF_LOOP_PALINDROME; /* REM */ 
		static int OF_LOOP_NORMAL; /* REM */ 
		static ::of::utils::LogLevel OF_DEFAULT_LOG_LEVEL; /* REM */ 
		static int OF_SERIAL_NO_DATA; /* REM */ 
		static int OF_SERIAL_ERROR; /* REM */ 
		static double PI; /* REM */ 
		static double TWO_PI; /* REM */ 
		static double M_TWO_PI; /* REM */ 
		static double FOUR_PI; /* REM */ 
		static double HALF_PI; /* REM */ 
		static int OF_FILLED; /* REM */ 
		static int OF_OUTLINE; /* REM */ 
		static int OF_WINDOW; /* REM */ 
		static int OF_FULLSCREEN; /* REM */ 
		static int OF_GAME_MODE; /* REM */ 
		static int OF_RECTMODE_CORNER; /* REM */ 
		static int OF_RECTMODE_CENTER; /* REM */ 
		static int OF_IMAGE_GRAYSCALE; /* REM */ 
		static int OF_IMAGE_COLOR; /* REM */ 
		static int OF_IMAGE_COLOR_ALPHA; /* REM */ 
		static int OF_IMAGE_UNDEFINED; /* REM */ 
		static int OF_MAX_STYLE_HISTORY; /* REM */ 
		static int OF_MAX_CIRCLE_PTS; /* REM */ 
		static int OF_POLY_WINDING_ODD; /* REM */ 
		static int OF_POLY_WINDING_NONZERO; /* REM */ 
		static int OF_POLY_WINDING_POSITIVE; /* REM */ 
		static int OF_POLY_WINDING_NEGATIVE; /* REM */ 
		static int OF_POLY_WINDING_ABS_GEQ_TWO; /* REM */ 
		static bool OF_CLOSE; /* REM */ 
		static int OF_KEY_MODIFIER; /* REM */ 
		static int OF_KEY_RETURN; /* REM */ 
		static int OF_KEY_ESC; /* REM */ 
		static int OF_KEY_BACKSPACE; /* REM */ 
		static int OF_KEY_DEL; /* REM */ 
		static int OF_KEY_F1; /* REM */ 
		static int OF_KEY_F2; /* REM */ 
		static int OF_KEY_F3; /* REM */ 
		static int OF_KEY_F4; /* REM */ 
		static int OF_KEY_F5; /* REM */ 
		static int OF_KEY_F6; /* REM */ 
		static int OF_KEY_F7; /* REM */ 
		static int OF_KEY_F8; /* REM */ 
		static int OF_KEY_F9; /* REM */ 
		static int OF_KEY_F10; /* REM */ 
		static int OF_KEY_F11; /* REM */ 
		static int OF_KEY_F12; /* REM */ 
		static int OF_KEY_LEFT; /* REM */ 
		static int OF_KEY_UP; /* REM */ 
		static int OF_KEY_RIGHT; /* REM */ 
		static int OF_KEY_DOWN; /* REM */ 
		static int OF_KEY_PAGE_UP; /* REM */ 
		static int OF_KEY_PAGE_DOWN; /* REM */ 
		static int OF_KEY_HOME; /* REM */ 
		static int OF_KEY_END; /* REM */ 
		static int OF_KEY_INSERT; /* REM */ 
		static int GL_RGB; /* REM */ 
		static int GL_RGBA; /* REM */ 
		static int GL_LUMINANCE; /* REM */ 
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_Constants */ 
