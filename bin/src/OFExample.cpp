#include <hxcpp.h>

#ifndef INCLUDED_OFExample
#include <OFExample.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxcv_ds_I2DImage
#include <hxcv/ds/I2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_IARGB2DImage
#include <hxcv/ds/IARGB2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_IRGB2DImage
#include <hxcv/ds/IRGB2DImage.h>
#endif
#ifndef INCLUDED_hxcv_ds_of_OFARGB2DImage
#include <hxcv/ds/of/OFARGB2DImage.h>
#endif
#ifndef INCLUDED_of_app_AppGlutWindow
#include <of/app/AppGlutWindow.h>
#endif
#ifndef INCLUDED_of_app_AppRunner
#include <of/app/AppRunner.h>
#endif
#ifndef INCLUDED_of_app_BaseApp
#include <of/app/BaseApp.h>
#endif
#ifndef INCLUDED_of_graphics_Graphics
#include <of/graphics/Graphics.h>
#endif
#ifndef INCLUDED_of_graphics_Image
#include <of/graphics/Image.h>
#endif

Void OFExample_obj::__construct()
{
{
	HX_SOURCE_POS("OFExample.hx",11)
	super::__construct();
}
;
	return null();
}

OFExample_obj::~OFExample_obj() { }

Dynamic OFExample_obj::__CreateEmpty() { return  new OFExample_obj; }
hx::ObjectPtr< OFExample_obj > OFExample_obj::__new()
{  hx::ObjectPtr< OFExample_obj > result = new OFExample_obj();
	result->__construct();
	return result;}

Dynamic OFExample_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OFExample_obj > result = new OFExample_obj();
	result->__construct();
	return result;}

Void OFExample_obj::setup( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFExample_obj::setup")
		HX_SOURCE_POS("OFExample.hx",16)
		this->ofImg = ::of::graphics::Image_obj::__new(null());
		HX_SOURCE_POS("OFExample.hx",17)
		this->ofImg->allocate(200,100,2);
		HX_SOURCE_POS("OFExample.hx",19)
		this->img = ::hxcv::ds::of::OFARGB2DImage_obj::__new(this->ofImg);
		HX_SOURCE_POS("OFExample.hx",21)
		::of::graphics::Graphics_obj::enableAlphaBlending();
		HX_SOURCE_POS("OFExample.hx",22)
		Dynamic();
		HX_SOURCE_POS("OFExample.hx",23)
		{
			HX_SOURCE_POS("OFExample.hx",23)
			int _g1 = 0;
			int _g = this->img->width;
			HX_SOURCE_POS("OFExample.hx",23)
			while((_g1 < _g)){
				__SAFE_POINT
				HX_SOURCE_POS("OFExample.hx",23)
				int i = (_g1)++;
				HX_SOURCE_POS("OFExample.hx",24)
				{
					HX_SOURCE_POS("OFExample.hx",24)
					int _g3 = 0;
					int _g2 = this->img->height;
					HX_SOURCE_POS("OFExample.hx",24)
					while((_g3 < _g2)){
						__SAFE_POINT
						HX_SOURCE_POS("OFExample.hx",24)
						int j = (_g3)++;
						HX_SOURCE_POS("OFExample.hx",26)
						{
							HX_SOURCE_POS("OFExample.hx",26)
							::hxcv::ds::of::OFARGB2DImage _g4 = this->img;
							HX_SOURCE_POS("OFExample.hx",26)
							_g4->pixels->b[((((j * _g4->width) + i)) * 4)] = 255;
						}
						HX_SOURCE_POS("OFExample.hx",27)
						{
							HX_SOURCE_POS("OFExample.hx",27)
							::hxcv::ds::of::OFARGB2DImage _g4 = this->img;
							HX_SOURCE_POS("OFExample.hx",27)
							_g4->pixels->b[(((((j * _g4->width) + i)) * 4) + 3)] = 17;
						}
					}
				}
			}
		}
		HX_SOURCE_POS("OFExample.hx",30)
		this->img->ofImage->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OFExample_obj,setup,(void))

Void OFExample_obj::draw( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFExample_obj::draw")
		HX_SOURCE_POS("OFExample.hx",34)
		this->img->ofImage->draw(100,100,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OFExample_obj,draw,(void))

Void OFExample_obj::main( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OFExample_obj::main")
		HX_SOURCE_POS("OFExample.hx",38)
		::of::app::AppRunner_obj::setupOpenGL(::of::app::AppGlutWindow_obj::__new(),1024,768,0);
		HX_SOURCE_POS("OFExample.hx",39)
		::of::app::AppRunner_obj::runApp(::OFExample_obj::__new());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OFExample_obj,main,(void))


OFExample_obj::OFExample_obj()
{
}

void OFExample_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OFExample);
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(ofImg,"ofImg");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic OFExample_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { return img; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ofImg") ) { return ofImg; }
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic OFExample_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { img=inValue.Cast< ::hxcv::ds::of::OFARGB2DImage >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ofImg") ) { ofImg=inValue.Cast< ::of::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void OFExample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("img"));
	outFields->push(HX_CSTRING("ofImg"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("img"),
	HX_CSTRING("ofImg"),
	HX_CSTRING("setup"),
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class OFExample_obj::__mClass;

void OFExample_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("OFExample"), hx::TCanCast< OFExample_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OFExample_obj::__boot()
{
}

