#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Stack
#include <haxe/Stack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_exception_Exception
#include <haxe/exception/Exception.h>
#endif
namespace haxe{
namespace exception{

Void Exception_obj::__construct(::String message,::haxe::exception::Exception innerException,Dynamic numberOfStackTraceShifts)
{
{
	struct _Function_1_1{
		inline static ::String Block( ::String &message){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",66)
			return message;
		}
	};
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",62)
	this->message = (  ((null() == message)) ? ::String(HX_CSTRING("Unknown exception")) : ::String(_Function_1_1::Block(message)) );
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",68)
	this->innerException = innerException;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",69)
	{
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",69)
		this->stackTraceArray = ::haxe::Stack_obj::callStack()->slice((numberOfStackTraceShifts + 1),null());
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",69)
		::Class exceptionClass = ::Type_obj::getClass(this);
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",69)
		while((hx::ClassOf< ::haxe::exception::Exception >() != exceptionClass)){
			__SAFE_POINT
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",69)
			this->stackTraceArray->shift();
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",69)
			exceptionClass = ::Type_obj::getSuperClass(exceptionClass);
		}
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",70)
	this->__FieldRef(HX_CSTRING("stackTrace")) = this->stackTraceArray;
}
;
	return null();
}

Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String message,::haxe::exception::Exception innerException,Dynamic numberOfStackTraceShifts)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(message,innerException,numberOfStackTraceShifts);
	return result;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Exception_obj::generateStackTrace( int numberOfStackTraceShifts){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Exception_obj::generateStackTrace")
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",79)
		this->stackTraceArray = ::haxe::Stack_obj::callStack()->slice((numberOfStackTraceShifts + 1),null());
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",81)
		::Class exceptionClass = ::Type_obj::getClass(this);
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",82)
		while((hx::ClassOf< ::haxe::exception::Exception >() != exceptionClass)){
			__SAFE_POINT
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",83)
			this->stackTraceArray->shift();
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",84)
			exceptionClass = ::Type_obj::getSuperClass(exceptionClass);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Exception_obj,generateStackTrace,(void))

::haxe::exception::Exception Exception_obj::getBaseException( ){
	HX_SOURCE_PUSH("Exception_obj::getBaseException")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",91)
	::haxe::exception::Exception result = this;
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",92)
	while((null() != result->innerException)){
		__SAFE_POINT
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",93)
		result = result->innerException;
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",95)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,getBaseException,return )

::String Exception_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Exception_obj::toString")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/exception/Exception.hx",98)
	return (this->message + ::haxe::Stack_obj::toString(this->stackTraceArray));
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(baseException,"baseException");
	HX_MARK_MEMBER_NAME(innerException,"innerException");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(stackTrace,"stackTrace");
	HX_MARK_MEMBER_NAME(stackTraceArray,"stackTraceArray");
	HX_MARK_END_CLASS();
}

Dynamic Exception_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stackTrace") ) { return stackTrace; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"baseException") ) { return getBaseException(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"innerException") ) { return innerException; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stackTraceArray") ) { return stackTraceArray; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getBaseException") ) { return getBaseException_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateStackTrace") ) { return generateStackTrace_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stackTrace") ) { stackTrace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"baseException") ) { baseException=inValue.Cast< ::haxe::exception::Exception >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"innerException") ) { innerException=inValue.Cast< ::haxe::exception::Exception >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stackTraceArray") ) { stackTraceArray=inValue.Cast< Array< ::haxe::StackItem > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("baseException"));
	outFields->push(HX_CSTRING("innerException"));
	outFields->push(HX_CSTRING("message"));
	outFields->push(HX_CSTRING("stackTrace"));
	outFields->push(HX_CSTRING("stackTraceArray"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("baseException"),
	HX_CSTRING("innerException"),
	HX_CSTRING("message"),
	HX_CSTRING("stackTrace"),
	HX_CSTRING("stackTraceArray"),
	HX_CSTRING("generateStackTrace"),
	HX_CSTRING("getBaseException"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Exception_obj::__mClass;

void Exception_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.exception.Exception"), hx::TCanCast< Exception_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Exception_obj::__boot()
{
}

} // end namespace haxe
} // end namespace exception
