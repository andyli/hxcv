#include <hxcpp.h>

#ifndef INCLUDED_hxcv_ds_I2DImage
#include <hxcv/ds/I2DImage.h>
#endif
namespace hxcv{
namespace ds{

HX_DEFINE_DYNAMIC_FUNC3(I2DImage_obj,get,return )

HX_DEFINE_DYNAMIC_FUNC3(I2DImage_obj,getHex,return )

HX_DEFINE_DYNAMIC_FUNC4(I2DImage_obj,set,)

HX_DEFINE_DYNAMIC_FUNC3(I2DImage_obj,setHex,)

HX_DEFINE_DYNAMIC_FUNC0(I2DImage_obj,getPixels,return )

HX_DEFINE_DYNAMIC_FUNC1(I2DImage_obj,setPixels,)

HX_DEFINE_DYNAMIC_FUNC0(I2DImage_obj,lock,)

HX_DEFINE_DYNAMIC_FUNC0(I2DImage_obj,unlock,)

HX_DEFINE_DYNAMIC_FUNC0(I2DImage_obj,clone,return )

HX_DEFINE_DYNAMIC_FUNC0(I2DImage_obj,iterator,return )


} // end namespace hxcv
} // end namespace ds
