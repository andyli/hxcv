#ifndef INCLUDED_of_graphics_Texture
#define INCLUDED_of_graphics_Texture

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,graphics,Texture)
HX_DECLARE_CLASS3(of,graphics,_Texture,TextureData)
HX_DECLARE_CLASS2(of,utils,Point)
namespace of{
namespace graphics{


class Texture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< Texture_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		virtual Void clone( ::of::graphics::Texture mom);
		Dynamic clone_dyn();

		virtual Void allocate( int w,int h,int internalGlDataType,Dynamic bUseARBExtention);
		Dynamic allocate_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void loadData( Array< unsigned char > data,int w,int h,int glDataType);
		Dynamic loadData_dyn();

		virtual Void loadScreenData( int x,int y,int w,int h);
		Dynamic loadScreenData_dyn();

		virtual Void setAnchorPercent( double xPct,double yPct);
		Dynamic setAnchorPercent_dyn();

		virtual Void setAnchorPoint( double x,double y);
		Dynamic setAnchorPoint_dyn();

		virtual Void resetAnchor( );
		Dynamic resetAnchor_dyn();

		virtual Void draw( double x,double y,Dynamic w,Dynamic h);
		Dynamic draw_dyn();

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual Void unbind( );
		Dynamic unbind_dyn();

		virtual ::of::utils::Point getCoordFromPoint( double xPos,double yPos);
		Dynamic getCoordFromPoint_dyn();

		virtual ::of::utils::Point getCoordFromPercent( double xPts,double yPts);
		Dynamic getCoordFromPercent_dyn();

		virtual bool bAllocated( );
		Dynamic bAllocated_dyn();

		virtual double getHeight( );
		Dynamic getHeight_dyn();

		virtual double getWidth( );
		Dynamic getWidth_dyn();

		virtual ::of::graphics::_Texture::TextureData getTextureData( );
		Dynamic getTextureData_dyn();

		::of::graphics::_Texture::TextureData texData; /* REM */ 
		Dynamic __handle; /* REM */ 
		static Dynamic _ofTexture_new; /* REM */ 
	Dynamic &_ofTexture_new_dyn() { return _ofTexture_new;}
		static Dynamic _ofTexture_clone; /* REM */ 
	Dynamic &_ofTexture_clone_dyn() { return _ofTexture_clone;}
		static Dynamic _ofTexture_allocate; /* REM */ 
	Dynamic &_ofTexture_allocate_dyn() { return _ofTexture_allocate;}
		static Dynamic _ofTexture_clear; /* REM */ 
	Dynamic &_ofTexture_clear_dyn() { return _ofTexture_clear;}
		static Dynamic _ofTexture_loadData; /* REM */ 
	Dynamic &_ofTexture_loadData_dyn() { return _ofTexture_loadData;}
		static Dynamic _ofTexture_loadScreenData; /* REM */ 
	Dynamic &_ofTexture_loadScreenData_dyn() { return _ofTexture_loadScreenData;}
		static Dynamic _ofTexture_setAnchorPercent; /* REM */ 
	Dynamic &_ofTexture_setAnchorPercent_dyn() { return _ofTexture_setAnchorPercent;}
		static Dynamic _ofTexture_setAnchorPoint; /* REM */ 
	Dynamic &_ofTexture_setAnchorPoint_dyn() { return _ofTexture_setAnchorPoint;}
		static Dynamic _ofTexture_resetAnchor; /* REM */ 
	Dynamic &_ofTexture_resetAnchor_dyn() { return _ofTexture_resetAnchor;}
		static Dynamic _ofTexture_bind; /* REM */ 
	Dynamic &_ofTexture_bind_dyn() { return _ofTexture_bind;}
		static Dynamic _ofTexture_unbind; /* REM */ 
	Dynamic &_ofTexture_unbind_dyn() { return _ofTexture_unbind;}
		static Dynamic _ofTexture_getCoordFromPoint; /* REM */ 
	Dynamic &_ofTexture_getCoordFromPoint_dyn() { return _ofTexture_getCoordFromPoint;}
		static Dynamic _ofTexture_getCoordFromPercent; /* REM */ 
	Dynamic &_ofTexture_getCoordFromPercent_dyn() { return _ofTexture_getCoordFromPercent;}
		static Dynamic _ofTexture_bAllocated; /* REM */ 
	Dynamic &_ofTexture_bAllocated_dyn() { return _ofTexture_bAllocated;}
		static Dynamic _ofTexture_draw4; /* REM */ 
	Dynamic &_ofTexture_draw4_dyn() { return _ofTexture_draw4;}
		static Dynamic _ofTexture_draw2; /* REM */ 
	Dynamic &_ofTexture_draw2_dyn() { return _ofTexture_draw2;}
		static Dynamic _ofTexture_getHeight; /* REM */ 
	Dynamic &_ofTexture_getHeight_dyn() { return _ofTexture_getHeight;}
		static Dynamic _ofTexture_getWidth; /* REM */ 
	Dynamic &_ofTexture_getWidth_dyn() { return _ofTexture_getWidth;}
		static Dynamic _ofTexture_getTextureData; /* REM */ 
	Dynamic &_ofTexture_getTextureData_dyn() { return _ofTexture_getTextureData;}
};

} // end namespace of
} // end namespace graphics

#endif /* INCLUDED_of_graphics_Texture */ 
