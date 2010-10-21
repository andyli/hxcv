#ifndef INCLUDED_hxcv_ds_I2DImage
#define INCLUDED_hxcv_ds_I2DImage

#include <hxcpp.h>

HX_DECLARE_CLASS2(hxcv,ds,I2DImage)
namespace hxcv{
namespace ds{


class I2DImage_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef I2DImage_obj OBJ_;
		virtual Dynamic get( int x,int y,int channel)=0;
		Dynamic get_dyn();
		virtual int getHex( int x,int y,Dynamic alpha=null())=0;
		Dynamic getHex_dyn();
		virtual Void set( int x,int y,int channel,Dynamic val)=0;
		Dynamic set_dyn();
		virtual Void setHex( int x,int y,Dynamic val)=0;
		Dynamic setHex_dyn();
		virtual Array< Dynamic > getPixels( )=0;
		Dynamic getPixels_dyn();
		virtual Void setPixels( Array< Dynamic > src)=0;
		Dynamic setPixels_dyn();
		virtual Void lock( )=0;
		Dynamic lock_dyn();
		virtual Void unlock( )=0;
		Dynamic unlock_dyn();
		virtual ::hxcv::ds::I2DImage clone( )=0;
		Dynamic clone_dyn();
		
		
		
		virtual Dynamic iterator( )=0;
		Dynamic iterator_dyn();
};

#define DELEGATE_hxcv_ds_I2DImage \
virtual Dynamic get( int x,int y,int channel) { return mDelegate->get(x,y,channel);}  \
virtual Dynamic get_dyn() { return mDelegate->get_dyn();}  \
virtual int getHex( int x,int y,Dynamic alpha=null()) { return mDelegate->getHex(x,y,alpha);}  \
virtual Dynamic getHex_dyn() { return mDelegate->getHex_dyn();}  \
virtual Void set( int x,int y,int channel,Dynamic val) { return mDelegate->set(x,y,channel,val);}  \
virtual Dynamic set_dyn() { return mDelegate->set_dyn();}  \
virtual Void setHex( int x,int y,Dynamic val) { return mDelegate->setHex(x,y,val);}  \
virtual Dynamic setHex_dyn() { return mDelegate->setHex_dyn();}  \
virtual Array< Dynamic > getPixels( ) { return mDelegate->getPixels();}  \
virtual Dynamic getPixels_dyn() { return mDelegate->getPixels_dyn();}  \
virtual Void setPixels( Array< Dynamic > src) { return mDelegate->setPixels(src);}  \
virtual Dynamic setPixels_dyn() { return mDelegate->setPixels_dyn();}  \
virtual Void lock( ) { return mDelegate->lock();}  \
virtual Dynamic lock_dyn() { return mDelegate->lock_dyn();}  \
virtual Void unlock( ) { return mDelegate->unlock();}  \
virtual Dynamic unlock_dyn() { return mDelegate->unlock_dyn();}  \
virtual ::hxcv::ds::I2DImage clone( ) { return mDelegate->clone();}  \
virtual Dynamic clone_dyn() { return mDelegate->clone_dyn();}  \
virtual Dynamic iterator( ) { return mDelegate->iterator();}  \
virtual Dynamic iterator_dyn() { return mDelegate->iterator_dyn();}  \


template<typename IMPL>
class I2DImage_delegate_ : public I2DImage_obj
{
	protected:
		IMPL *mDelegate;
	public:
		I2DImage_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_hxcv_ds_I2DImage
};

} // end namespace hxcv
} // end namespace ds

#endif /* INCLUDED_hxcv_ds_I2DImage */ 
