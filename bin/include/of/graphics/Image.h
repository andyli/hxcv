#ifndef INCLUDED_of_graphics_Image
#define INCLUDED_of_graphics_Image

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,graphics,Image)
HX_DECLARE_CLASS2(of,graphics,Texture)
namespace of{
namespace graphics{


class Image_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< Image_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Image_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Image"); }

		virtual Void allocate( int w,int h,int type);
		Dynamic allocate_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void clone( ::of::graphics::Image mom);
		Dynamic clone_dyn();

		virtual Void setUseTexture( bool bUse);
		Dynamic setUseTexture_dyn();

		virtual ::of::graphics::Texture getTextureReference( );
		Dynamic getTextureReference_dyn();

		virtual bool loadImage( ::String fileName);
		Dynamic loadImage_dyn();

		virtual Void saveImage( ::String fileName);
		Dynamic saveImage_dyn();

		virtual Array< unsigned char > getPixels( );
		Dynamic getPixels_dyn();

		virtual Void setFromPixels( Array< unsigned char > pixels,int w,int h,int newType,Dynamic bOrderIsRGB);
		Dynamic setFromPixels_dyn();

		virtual Void setImageType( int type);
		Dynamic setImageType_dyn();

		virtual Void resize( int newWidth,int newHeight);
		Dynamic resize_dyn();

		virtual Void grabScreen( int x,int y,int w,int h);
		Dynamic grabScreen_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void setAnchorPercent( double xPct,double yPct);
		Dynamic setAnchorPercent_dyn();

		virtual Void setAnchorPoint( double x,double y);
		Dynamic setAnchorPoint_dyn();

		virtual Void resetAnchor( );
		Dynamic resetAnchor_dyn();

		virtual Void draw( double x,double y,Dynamic w,Dynamic h);
		Dynamic draw_dyn();

		virtual double getHeight( );
		Dynamic getHeight_dyn();

		virtual double getWidth( );
		Dynamic getWidth_dyn();

		int width; /* REM */ 
		int height; /* REM */ 
		int bpp; /* REM */ 
		int type; /* REM */ 
		Dynamic __handle; /* REM */ 
		Array< unsigned char > _pixels; /* REM */ 
		virtual int __getWidth( );
		Dynamic __getWidth_dyn();

		virtual int __getHeight( );
		Dynamic __getHeight_dyn();

		virtual int __getBpp( );
		Dynamic __getBpp_dyn();

		virtual int __getType( );
		Dynamic __getType_dyn();

		virtual Array< unsigned char > __newByteData( int size);
		Dynamic __newByteData_dyn();

		static Dynamic _ofImage_new; /* REM */ 
	Dynamic &_ofImage_new_dyn() { return _ofImage_new;}
		static Dynamic _ofImage_allocate; /* REM */ 
	Dynamic &_ofImage_allocate_dyn() { return _ofImage_allocate;}
		static Dynamic _ofImage_clear; /* REM */ 
	Dynamic &_ofImage_clear_dyn() { return _ofImage_clear;}
		static Dynamic _ofImage_clone; /* REM */ 
	Dynamic &_ofImage_clone_dyn() { return _ofImage_clone;}
		static Dynamic _ofImage_setUseTexture; /* REM */ 
	Dynamic &_ofImage_setUseTexture_dyn() { return _ofImage_setUseTexture;}
		static Dynamic _ofImage_getTextureReference; /* REM */ 
	Dynamic &_ofImage_getTextureReference_dyn() { return _ofImage_getTextureReference;}
		static Dynamic _ofImage_loadImage; /* REM */ 
	Dynamic &_ofImage_loadImage_dyn() { return _ofImage_loadImage;}
		static Dynamic _ofImage_saveImage; /* REM */ 
	Dynamic &_ofImage_saveImage_dyn() { return _ofImage_saveImage;}
		static Dynamic _ofImage_setFromPixels; /* REM */ 
	Dynamic &_ofImage_setFromPixels_dyn() { return _ofImage_setFromPixels;}
		static Dynamic _ofImage_setImageType; /* REM */ 
	Dynamic &_ofImage_setImageType_dyn() { return _ofImage_setImageType;}
		static Dynamic _ofImage_resize; /* REM */ 
	Dynamic &_ofImage_resize_dyn() { return _ofImage_resize;}
		static Dynamic _ofImage_grabScreen; /* REM */ 
	Dynamic &_ofImage_grabScreen_dyn() { return _ofImage_grabScreen;}
		static Dynamic _ofImage_update; /* REM */ 
	Dynamic &_ofImage_update_dyn() { return _ofImage_update;}
		static Dynamic _ofImage_setAnchorPercent; /* REM */ 
	Dynamic &_ofImage_setAnchorPercent_dyn() { return _ofImage_setAnchorPercent;}
		static Dynamic _ofImage_setAnchorPoint; /* REM */ 
	Dynamic &_ofImage_setAnchorPoint_dyn() { return _ofImage_setAnchorPoint;}
		static Dynamic _ofImage_resetAnchor; /* REM */ 
	Dynamic &_ofImage_resetAnchor_dyn() { return _ofImage_resetAnchor;}
		static Dynamic _ofImage_draw4; /* REM */ 
	Dynamic &_ofImage_draw4_dyn() { return _ofImage_draw4;}
		static Dynamic _ofImage_draw2; /* REM */ 
	Dynamic &_ofImage_draw2_dyn() { return _ofImage_draw2;}
		static Dynamic _ofImage_getHeight; /* REM */ 
	Dynamic &_ofImage_getHeight_dyn() { return _ofImage_getHeight;}
		static Dynamic _ofImage_getWidth; /* REM */ 
	Dynamic &_ofImage_getWidth_dyn() { return _ofImage_getWidth;}
		static Dynamic _ofImage_getBpp; /* REM */ 
	Dynamic &_ofImage_getBpp_dyn() { return _ofImage_getBpp;}
		static Dynamic _ofImage_getType; /* REM */ 
	Dynamic &_ofImage_getType_dyn() { return _ofImage_getType;}
};

} // end namespace of
} // end namespace graphics

#endif /* INCLUDED_of_graphics_Image */ 
