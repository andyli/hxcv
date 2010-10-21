#include <hxcpp.h>

#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
namespace hsl{
namespace haxe{

Void Bond_obj::__construct()
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Bond.hx",47)
	this->halted = false;
}
;
	return null();
}

Bond_obj::~Bond_obj() { }

Dynamic Bond_obj::__CreateEmpty() { return  new Bond_obj; }
hx::ObjectPtr< Bond_obj > Bond_obj::__new()
{  hx::ObjectPtr< Bond_obj > result = new Bond_obj();
	result->__construct();
	return result;}

Dynamic Bond_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bond_obj > result = new Bond_obj();
	result->__construct();
	return result;}

Void Bond_obj::destroy( ){
{
		HX_SOURCE_PUSH("Bond_obj::destroy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bond_obj,destroy,(void))

Void Bond_obj::halt( ){
{
		HX_SOURCE_PUSH("Bond_obj::halt")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Bond.hx",61)
		this->halted = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bond_obj,halt,(void))

Void Bond_obj::resume( ){
{
		HX_SOURCE_PUSH("Bond_obj::resume")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/hsl/haxe/Bond.hx",68)
		this->halted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bond_obj,resume,(void))


Bond_obj::Bond_obj()
{
}

void Bond_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bond);
	HX_MARK_MEMBER_NAME(halted,"halted");
	HX_MARK_END_CLASS();
}

Dynamic Bond_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"halt") ) { return halt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"halted") ) { return halted; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Bond_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"halted") ) { halted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Bond_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("halted"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("halted"),
	HX_CSTRING("destroy"),
	HX_CSTRING("halt"),
	HX_CSTRING("resume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Bond_obj::__mClass;

void Bond_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hsl.haxe.Bond"), hx::TCanCast< Bond_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Bond_obj::__boot()
{
}

} // end namespace hsl
} // end namespace haxe
