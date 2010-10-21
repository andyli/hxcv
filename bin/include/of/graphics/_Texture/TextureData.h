#ifndef INCLUDED_of_graphics__Texture_TextureData
#define INCLUDED_of_graphics__Texture_TextureData

#include <hxcpp.h>

HX_DECLARE_CLASS3(of,graphics,_Texture,TextureData)
namespace of{
namespace graphics{
namespace _Texture{


class TextureData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureData_obj OBJ_;
		TextureData_obj();
		Void __construct(Dynamic handle);

	public:
		static hx::ObjectPtr< TextureData_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureData"); }

		bool bAllocated; /* REM */ 
		int glType; /* REM */ 
		int glTypeInternal; /* REM */ 
		int textureTarget; /* REM */ 
		int pixelType; /* REM */ 
		double tex_t; /* REM */ 
		double tex_u; /* REM */ 
		double tex_w; /* REM */ 
		double tex_h; /* REM */ 
		double width; /* REM */ 
		double height; /* REM */ 
		bool bFlipTexture; /* REM */ 
		int textureID; /* REM */ 
		Dynamic __handle; /* REM */ 
		virtual bool __get_bAllocated( );
		Dynamic __get_bAllocated_dyn();

		virtual bool __set_bAllocated( bool val);
		Dynamic __set_bAllocated_dyn();

		virtual int __get_glType( );
		Dynamic __get_glType_dyn();

		virtual int __set_glType( int val);
		Dynamic __set_glType_dyn();

		virtual int __get_glTypeInternal( );
		Dynamic __get_glTypeInternal_dyn();

		virtual int __set_glTypeInternal( int val);
		Dynamic __set_glTypeInternal_dyn();

		virtual int __get_textureTarget( );
		Dynamic __get_textureTarget_dyn();

		virtual int __set_textureTarget( int val);
		Dynamic __set_textureTarget_dyn();

		virtual int __get_pixelType( );
		Dynamic __get_pixelType_dyn();

		virtual int __set_pixelType( int val);
		Dynamic __set_pixelType_dyn();

		virtual double __get_tex_t( );
		Dynamic __get_tex_t_dyn();

		virtual double __set_tex_t( double val);
		Dynamic __set_tex_t_dyn();

		virtual double __get_tex_u( );
		Dynamic __get_tex_u_dyn();

		virtual double __set_tex_u( double val);
		Dynamic __set_tex_u_dyn();

		virtual double __get_tex_w( );
		Dynamic __get_tex_w_dyn();

		virtual double __set_tex_w( double val);
		Dynamic __set_tex_w_dyn();

		virtual double __get_tex_h( );
		Dynamic __get_tex_h_dyn();

		virtual double __set_tex_h( double val);
		Dynamic __set_tex_h_dyn();

		virtual double __get_width( );
		Dynamic __get_width_dyn();

		virtual double __set_width( double val);
		Dynamic __set_width_dyn();

		virtual double __get_height( );
		Dynamic __get_height_dyn();

		virtual double __set_height( double val);
		Dynamic __set_height_dyn();

		virtual bool __get_bFlipTexture( );
		Dynamic __get_bFlipTexture_dyn();

		virtual bool __set_bFlipTexture( bool val);
		Dynamic __set_bFlipTexture_dyn();

		virtual int __get_textureID( );
		Dynamic __get_textureID_dyn();

		virtual int __set_textureID( int val);
		Dynamic __set_textureID_dyn();

		static Dynamic _ofTextureData_get_bAllocated; /* REM */ 
	Dynamic &_ofTextureData_get_bAllocated_dyn() { return _ofTextureData_get_bAllocated;}
		static Dynamic _ofTextureData_set_bAllocated; /* REM */ 
	Dynamic &_ofTextureData_set_bAllocated_dyn() { return _ofTextureData_set_bAllocated;}
		static Dynamic _ofTextureData_get_glType; /* REM */ 
	Dynamic &_ofTextureData_get_glType_dyn() { return _ofTextureData_get_glType;}
		static Dynamic _ofTextureData_set_glType; /* REM */ 
	Dynamic &_ofTextureData_set_glType_dyn() { return _ofTextureData_set_glType;}
		static Dynamic _ofTextureData_get_glTypeInternal; /* REM */ 
	Dynamic &_ofTextureData_get_glTypeInternal_dyn() { return _ofTextureData_get_glTypeInternal;}
		static Dynamic _ofTextureData_set_glTypeInternal; /* REM */ 
	Dynamic &_ofTextureData_set_glTypeInternal_dyn() { return _ofTextureData_set_glTypeInternal;}
		static Dynamic _ofTextureData_get_textureTarget; /* REM */ 
	Dynamic &_ofTextureData_get_textureTarget_dyn() { return _ofTextureData_get_textureTarget;}
		static Dynamic _ofTextureData_set_textureTarget; /* REM */ 
	Dynamic &_ofTextureData_set_textureTarget_dyn() { return _ofTextureData_set_textureTarget;}
		static Dynamic _ofTextureData_get_pixelType; /* REM */ 
	Dynamic &_ofTextureData_get_pixelType_dyn() { return _ofTextureData_get_pixelType;}
		static Dynamic _ofTextureData_set_pixelType; /* REM */ 
	Dynamic &_ofTextureData_set_pixelType_dyn() { return _ofTextureData_set_pixelType;}
		static Dynamic _ofTextureData_get_tex_t; /* REM */ 
	Dynamic &_ofTextureData_get_tex_t_dyn() { return _ofTextureData_get_tex_t;}
		static Dynamic _ofTextureData_set_tex_t; /* REM */ 
	Dynamic &_ofTextureData_set_tex_t_dyn() { return _ofTextureData_set_tex_t;}
		static Dynamic _ofTextureData_get_tex_u; /* REM */ 
	Dynamic &_ofTextureData_get_tex_u_dyn() { return _ofTextureData_get_tex_u;}
		static Dynamic _ofTextureData_set_tex_u; /* REM */ 
	Dynamic &_ofTextureData_set_tex_u_dyn() { return _ofTextureData_set_tex_u;}
		static Dynamic _ofTextureData_get_tex_w; /* REM */ 
	Dynamic &_ofTextureData_get_tex_w_dyn() { return _ofTextureData_get_tex_w;}
		static Dynamic _ofTextureData_set_tex_w; /* REM */ 
	Dynamic &_ofTextureData_set_tex_w_dyn() { return _ofTextureData_set_tex_w;}
		static Dynamic _ofTextureData_get_tex_h; /* REM */ 
	Dynamic &_ofTextureData_get_tex_h_dyn() { return _ofTextureData_get_tex_h;}
		static Dynamic _ofTextureData_set_tex_h; /* REM */ 
	Dynamic &_ofTextureData_set_tex_h_dyn() { return _ofTextureData_set_tex_h;}
		static Dynamic _ofTextureData_get_width; /* REM */ 
	Dynamic &_ofTextureData_get_width_dyn() { return _ofTextureData_get_width;}
		static Dynamic _ofTextureData_set_width; /* REM */ 
	Dynamic &_ofTextureData_set_width_dyn() { return _ofTextureData_set_width;}
		static Dynamic _ofTextureData_get_height; /* REM */ 
	Dynamic &_ofTextureData_get_height_dyn() { return _ofTextureData_get_height;}
		static Dynamic _ofTextureData_set_height; /* REM */ 
	Dynamic &_ofTextureData_set_height_dyn() { return _ofTextureData_set_height;}
		static Dynamic _ofTextureData_get_bFlipTexture; /* REM */ 
	Dynamic &_ofTextureData_get_bFlipTexture_dyn() { return _ofTextureData_get_bFlipTexture;}
		static Dynamic _ofTextureData_set_bFlipTexture; /* REM */ 
	Dynamic &_ofTextureData_set_bFlipTexture_dyn() { return _ofTextureData_set_bFlipTexture;}
		static Dynamic _ofTextureData_get_textureID; /* REM */ 
	Dynamic &_ofTextureData_get_textureID_dyn() { return _ofTextureData_get_textureID;}
		static Dynamic _ofTextureData_set_textureID; /* REM */ 
	Dynamic &_ofTextureData_set_textureID_dyn() { return _ofTextureData_set_textureID;}
};

} // end namespace of
} // end namespace graphics
} // end namespace _Texture

#endif /* INCLUDED_of_graphics__Texture_TextureData */ 
