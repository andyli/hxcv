#ifndef INCLUDED_hxcv_ds_IGray2DImage
#define INCLUDED_hxcv_ds_IGray2DImage

#include <hxcpp.h>

#include <hxcv/ds/I2DImage.h>
HX_DECLARE_CLASS2(hxcv,ds,I2DImage)
HX_DECLARE_CLASS2(hxcv,ds,IGray2DImage)
namespace hxcv{
namespace ds{


class IGray2DImage_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGray2DImage_obj OBJ_;
		virtual Dynamic getGray( int x,int y)=0;
		Dynamic getGray_dyn();
		virtual Void setGray( int x,int y,Dynamic val)=0;
		Dynamic setGray_dyn();
};

#define DELEGATE_hxcv_ds_IGray2DImage \
virtual Dynamic getGray( int x,int y) { return mDelegate->getGray(x,y);}  \
virtual Dynamic getGray_dyn() { return mDelegate->getGray_dyn();}  \
virtual Void setGray( int x,int y,Dynamic val) { return mDelegate->setGray(x,y,val);}  \
virtual Dynamic setGray_dyn() { return mDelegate->setGray_dyn();}  \


template<typename IMPL>
class IGray2DImage_delegate_ : public IGray2DImage_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGray2DImage_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_hxcv_ds_IGray2DImage
};

} // end namespace hxcv
} // end namespace ds

#endif /* INCLUDED_hxcv_ds_IGray2DImage */ 
