#ifndef INCLUDED_hxcv_ds_IRGB2DImage
#define INCLUDED_hxcv_ds_IRGB2DImage

#include <hxcpp.h>

#include <hxcv/ds/I2DImage.h>
HX_DECLARE_CLASS2(hxcv,ds,I2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IRGB2DImage)
namespace hxcv{
namespace ds{


class IRGB2DImage_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IRGB2DImage_obj OBJ_;
		virtual Dynamic getR( int x,int y)=0;
		Dynamic getR_dyn();
		virtual Void setR( int x,int y,Dynamic val)=0;
		Dynamic setR_dyn();
		virtual Dynamic getG( int x,int y)=0;
		Dynamic getG_dyn();
		virtual Void setG( int x,int y,Dynamic val)=0;
		Dynamic setG_dyn();
		virtual Dynamic getB( int x,int y)=0;
		Dynamic getB_dyn();
		virtual Void setB( int x,int y,Dynamic val)=0;
		Dynamic setB_dyn();
};

#define DELEGATE_hxcv_ds_IRGB2DImage \
virtual Dynamic getR( int x,int y) { return mDelegate->getR(x,y);}  \
virtual Dynamic getR_dyn() { return mDelegate->getR_dyn();}  \
virtual Void setR( int x,int y,Dynamic val) { return mDelegate->setR(x,y,val);}  \
virtual Dynamic setR_dyn() { return mDelegate->setR_dyn();}  \
virtual Dynamic getG( int x,int y) { return mDelegate->getG(x,y);}  \
virtual Dynamic getG_dyn() { return mDelegate->getG_dyn();}  \
virtual Void setG( int x,int y,Dynamic val) { return mDelegate->setG(x,y,val);}  \
virtual Dynamic setG_dyn() { return mDelegate->setG_dyn();}  \
virtual Dynamic getB( int x,int y) { return mDelegate->getB(x,y);}  \
virtual Dynamic getB_dyn() { return mDelegate->getB_dyn();}  \
virtual Void setB( int x,int y,Dynamic val) { return mDelegate->setB(x,y,val);}  \
virtual Dynamic setB_dyn() { return mDelegate->setB_dyn();}  \


template<typename IMPL>
class IRGB2DImage_delegate_ : public IRGB2DImage_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IRGB2DImage_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_hxcv_ds_IRGB2DImage
};

} // end namespace hxcv
} // end namespace ds

#endif /* INCLUDED_hxcv_ds_IRGB2DImage */ 
