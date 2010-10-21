#ifndef INCLUDED_hxcv_ds_of_OFARGB2DImage
#define INCLUDED_hxcv_ds_of_OFARGB2DImage

#include <hxcpp.h>

#include <hxcv/ds/IARGB2DImage.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxcv,ds,I2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IARGB2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IRGB2DImage)
HX_DECLARE_CLASS3(hxcv,ds,of,OFARGB2DImage)
HX_DECLARE_CLASS2(of,graphics,Image)
namespace hxcv{
namespace ds{
namespace of{


class OFARGB2DImage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OFARGB2DImage_obj OBJ_;
		OFARGB2DImage_obj();
		Void __construct(::of::graphics::Image img);

	public:
		static hx::ObjectPtr< OFARGB2DImage_obj > __new(::of::graphics::Image img);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OFARGB2DImage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::hxcv::ds::IARGB2DImage_obj *()
			{ return new ::hxcv::ds::IARGB2DImage_delegate_< OFARGB2DImage_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("OFARGB2DImage"); }

		virtual int get( int x,int y,int channel);
		Dynamic get_dyn();

		virtual int getHex( int x,int y,Dynamic alpha);
		Dynamic getHex_dyn();

		virtual Void set( int x,int y,int channel,int val);
		Dynamic set_dyn();

		virtual Void setHex( int x,int y,int val);
		Dynamic setHex_dyn();

		virtual Array< int > getPixels( );
		Dynamic getPixels_dyn();

		virtual Void setPixels( Array< int > src);
		Dynamic setPixels_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

		virtual ::hxcv::ds::I2DImage clone( );
		Dynamic clone_dyn();

		int width; /* REM */ 
		int height; /* REM */ 
		int numOfChannels; /* REM */ 
		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		::of::graphics::Image ofImage; /* REM */ 
		::haxe::io::Bytes pixels; /* REM */ 
		virtual int getA( int x,int y);
		Dynamic getA_dyn();

		virtual Void setA( int x,int y,int val);
		Dynamic setA_dyn();

		virtual int getR( int x,int y);
		Dynamic getR_dyn();

		virtual Void setR( int x,int y,int val);
		Dynamic setR_dyn();

		virtual int getG( int x,int y);
		Dynamic getG_dyn();

		virtual Void setG( int x,int y,int val);
		Dynamic setG_dyn();

		virtual int getB( int x,int y);
		Dynamic getB_dyn();

		virtual Void setB( int x,int y,int val);
		Dynamic setB_dyn();

};

} // end namespace hxcv
} // end namespace ds
} // end namespace of

#endif /* INCLUDED_hxcv_ds_of_OFARGB2DImage */ 
