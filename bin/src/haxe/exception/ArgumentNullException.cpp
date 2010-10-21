#include <hxcpp.h>

#ifndef INCLUDED_haxe_exception_ArgumentNullException
#include <haxe/exception/ArgumentNullException.h>
#endif
#ifndef INCLUDED_haxe_exception_Exception
#include <haxe/exception/Exception.h>
#endif
namespace haxe{
namespace exception{

Void ArgumentNullException_obj::__construct(::String argumentName,Dynamic numberOfStackTraceShifts)
{
{
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/ArgumentNullException.hx",37)
	super::__construct((((HX_CSTRING("Argument ") + argumentName)) + HX_CSTRING(" must be non-null")),null(),numberOfStackTraceShifts);
}
;
	return null();
}

ArgumentNullException_obj::~ArgumentNullException_obj() { }

Dynamic ArgumentNullException_obj::__CreateEmpty() { return  new ArgumentNullException_obj; }
hx::ObjectPtr< ArgumentNullException_obj > ArgumentNullException_obj::__new(::String argumentName,Dynamic numberOfStackTraceShifts)
{  hx::ObjectPtr< ArgumentNullException_obj > result = new ArgumentNullException_obj();
	result->__construct(argumentName,numberOfStackTraceShifts);
	return result;}

Dynamic ArgumentNullException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArgumentNullException_obj > result = new ArgumentNullException_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


ArgumentNullException_obj::ArgumentNullException_obj()
{
}

void ArgumentNullException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArgumentNullException);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ArgumentNullException_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic ArgumentNullException_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArgumentNullException_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArgumentNullException_obj::__mClass;

void ArgumentNullException_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.exception.ArgumentNullException"), hx::TCanCast< ArgumentNullException_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArgumentNullException_obj::__boot()
{
}

} // end namespace haxe
} // end namespace exception
