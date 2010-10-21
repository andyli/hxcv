#ifndef INCLUDED_hxcv_ds_IARGB2DImage
#define INCLUDED_hxcv_ds_IARGB2DImage

#include <hxcpp.h>

#include <hxcv/ds/IRGB2DImage.h>
HX_DECLARE_CLASS2(hxcv,ds,I2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IARGB2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IRGB2DImage)
namespace hxcv{
namespace ds{


class IARGB2DImage_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IARGB2DImage_obj OBJ_;
		virtual Dynamic getA( int x,int y)=0;
		Dynamic getA_dyn();
		virtual Void setA( int x,int y,Dynamic val)=0;
		Dynamic setA_dyn();
};

#define DELEGATE_hxcv_ds_IARGB2DImage \
virtual Dynamic getA( int x,int y) { return mDelegate->getA(x,y);}  \
virtual Dynamic getA_dyn() { return mDelegate->getA_dyn();}  \
virtual Void setA( int x,int y,Dynamic val) { return mDelegate->setA(x,y,val);}  \
virtual Dynamic setA_dyn() { return mDelegate->setA_dyn();}  \


template<typename IMPL>
class IARGB2DImage_delegate_ : public IARGB2DImage_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IARGB2DImage_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_hxcv_ds_IARGB2DImage
};

} // end namespace hxcv
} // end namespace ds

#endif /* INCLUDED_hxcv_ds_IARGB2DImage */ 
