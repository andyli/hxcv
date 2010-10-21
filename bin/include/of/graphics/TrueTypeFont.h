#ifndef INCLUDED_of_graphics_TrueTypeFont
#define INCLUDED_of_graphics_TrueTypeFont

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,graphics,TrueTypeFont)
HX_DECLARE_CLASS2(of,utils,Point)
HX_DECLARE_CLASS2(of,utils,Rectangle)
namespace of{
namespace graphics{


class TrueTypeFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TrueTypeFont_obj OBJ_;
		TrueTypeFont_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< TrueTypeFont_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TrueTypeFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TrueTypeFont"); }

		virtual Void loadFont( ::String filename,int fontsize,Dynamic _bAntiAliased,Dynamic _bFullCharacterSet,Dynamic makeContours);
		Dynamic loadFont_dyn();

		bool bLoadedOk; /* REM */ 
		bool bAntiAlised; /* REM */ 
		bool bFullCharacterSet; /* REM */ 
		virtual double getLineHeight( );
		Dynamic getLineHeight_dyn();

		virtual Void setLineHeight( double height);
		Dynamic setLineHeight_dyn();

		virtual double stringWidth( ::String s);
		Dynamic stringWidth_dyn();

		virtual double stringHeight( ::String s);
		Dynamic stringHeight_dyn();

		virtual ::of::utils::Rectangle getStringBoundingBox( ::String s,double x,double y);
		Dynamic getStringBoundingBox_dyn();

		virtual Void drawString( ::String s,double x,double y);
		Dynamic drawString_dyn();

		virtual Void drawStringAsShapes( ::String s,double x,double y);
		Dynamic drawStringAsShapes_dyn();

		int nCharacters; /* REM */ 
		virtual Dynamic getCharacterAsPoints( int character);
		Dynamic getCharacterAsPoints_dyn();

		Dynamic __handle; /* REM */ 
		virtual bool __get_bLoadedOk( );
		Dynamic __get_bLoadedOk_dyn();

		virtual bool __set_bLoadedOk( bool val);
		Dynamic __set_bLoadedOk_dyn();

		virtual bool __get_bAntiAlised( );
		Dynamic __get_bAntiAlised_dyn();

		virtual bool __set_bAntiAlised( bool val);
		Dynamic __set_bAntiAlised_dyn();

		virtual bool __get_bFullCharacterSet( );
		Dynamic __get_bFullCharacterSet_dyn();

		virtual bool __set_bFullCharacterSet( bool val);
		Dynamic __set_bFullCharacterSet_dyn();

		virtual int __get_nCharacters( );
		Dynamic __get_nCharacters_dyn();

		virtual int __set_nCharacters( int val);
		Dynamic __set_nCharacters_dyn();

		static Dynamic _ofTrueTypeFont_new; /* REM */ 
	Dynamic &_ofTrueTypeFont_new_dyn() { return _ofTrueTypeFont_new;}
		static Dynamic _ofTrueTypeFont_loadFont; /* REM */ 
	Dynamic &_ofTrueTypeFont_loadFont_dyn() { return _ofTrueTypeFont_loadFont;}
		static Dynamic _ofTrueTypeFont_getLineHeight; /* REM */ 
	Dynamic &_ofTrueTypeFont_getLineHeight_dyn() { return _ofTrueTypeFont_getLineHeight;}
		static Dynamic _ofTrueTypeFont_setLineHeight; /* REM */ 
	Dynamic &_ofTrueTypeFont_setLineHeight_dyn() { return _ofTrueTypeFont_setLineHeight;}
		static Dynamic _ofTrueTypeFont_stringWidth; /* REM */ 
	Dynamic &_ofTrueTypeFont_stringWidth_dyn() { return _ofTrueTypeFont_stringWidth;}
		static Dynamic _ofTrueTypeFont_stringHeight; /* REM */ 
	Dynamic &_ofTrueTypeFont_stringHeight_dyn() { return _ofTrueTypeFont_stringHeight;}
		static Dynamic _ofTrueTypeFont_getStringBoundingBox; /* REM */ 
	Dynamic &_ofTrueTypeFont_getStringBoundingBox_dyn() { return _ofTrueTypeFont_getStringBoundingBox;}
		static Dynamic _ofTrueTypeFont_drawString; /* REM */ 
	Dynamic &_ofTrueTypeFont_drawString_dyn() { return _ofTrueTypeFont_drawString;}
		static Dynamic _ofTrueTypeFont_drawStringAsShapes; /* REM */ 
	Dynamic &_ofTrueTypeFont_drawStringAsShapes_dyn() { return _ofTrueTypeFont_drawStringAsShapes;}
		static Dynamic _ofTrueTypeFont_getCharacterAsPoints; /* REM */ 
	Dynamic &_ofTrueTypeFont_getCharacterAsPoints_dyn() { return _ofTrueTypeFont_getCharacterAsPoints;}
		static Dynamic _ofTrueTypeFont_get_bLoadedOk; /* REM */ 
	Dynamic &_ofTrueTypeFont_get_bLoadedOk_dyn() { return _ofTrueTypeFont_get_bLoadedOk;}
		static Dynamic _ofTrueTypeFont_set_bLoadedOk; /* REM */ 
	Dynamic &_ofTrueTypeFont_set_bLoadedOk_dyn() { return _ofTrueTypeFont_set_bLoadedOk;}
		static Dynamic _ofTrueTypeFont_get_bAntiAlised; /* REM */ 
	Dynamic &_ofTrueTypeFont_get_bAntiAlised_dyn() { return _ofTrueTypeFont_get_bAntiAlised;}
		static Dynamic _ofTrueTypeFont_set_bAntiAlised; /* REM */ 
	Dynamic &_ofTrueTypeFont_set_bAntiAlised_dyn() { return _ofTrueTypeFont_set_bAntiAlised;}
		static Dynamic _ofTrueTypeFont_get_bFullCharacterSet; /* REM */ 
	Dynamic &_ofTrueTypeFont_get_bFullCharacterSet_dyn() { return _ofTrueTypeFont_get_bFullCharacterSet;}
		static Dynamic _ofTrueTypeFont_set_bFullCharacterSet; /* REM */ 
	Dynamic &_ofTrueTypeFont_set_bFullCharacterSet_dyn() { return _ofTrueTypeFont_set_bFullCharacterSet;}
		static Dynamic _ofTrueTypeFont_get_nCharacters; /* REM */ 
	Dynamic &_ofTrueTypeFont_get_nCharacters_dyn() { return _ofTrueTypeFont_get_nCharacters;}
		static Dynamic _ofTrueTypeFont_set_nCharacters; /* REM */ 
	Dynamic &_ofTrueTypeFont_set_nCharacters_dyn() { return _ofTrueTypeFont_set_nCharacters;}
};

} // end namespace of
} // end namespace graphics

#endif /* INCLUDED_of_graphics_TrueTypeFont */ 
