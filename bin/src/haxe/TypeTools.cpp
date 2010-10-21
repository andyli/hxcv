#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_TypeTools
#include <haxe/TypeTools.h>
#endif
namespace haxe{

Void TypeTools_obj::__construct()
{
	return null();
}

TypeTools_obj::~TypeTools_obj() { }

Dynamic TypeTools_obj::__CreateEmpty() { return  new TypeTools_obj; }
hx::ObjectPtr< TypeTools_obj > TypeTools_obj::__new()
{  hx::ObjectPtr< TypeTools_obj > result = new TypeTools_obj();
	result->__construct();
	return result;}

Dynamic TypeTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeTools_obj > result = new TypeTools_obj();
	result->__construct();
	return result;}

::List TypeTools_obj::getClassNames( Dynamic value){
	__SAFE_POINT
	HX_SOURCE_PUSH("TypeTools_obj::getClassNames")
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",41)
	::List result = ::List_obj::__new();
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &value){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",46)
			return value;
		}
	};
	struct _Function_1_2{
		inline static ::Class Block( Dynamic &value){
			HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",49)
			return ::Type_obj::getClass(value);
		}
	};
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",43)
	::Class valueClass = (  (::Std_obj::is(value,hx::ClassOf< ::Class >())) ? ::Class(_Function_1_1::Block(value)) : ::Class(_Function_1_2::Block(value)) );
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",52)
	while((null() != valueClass)){
		__SAFE_POINT
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",53)
		result->add(::Type_obj::getClassName(valueClass));
		HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",54)
		valueClass = ::Type_obj::getSuperClass(valueClass);
	}
	HX_SOURCE_POS("D:\\repo\\hxhsl\\hsl-pico source/haxe/TypeTools.hx",56)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTools_obj,getClassNames,return )


TypeTools_obj::TypeTools_obj()
{
}

void TypeTools_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TypeTools);
	HX_MARK_END_CLASS();
}

Dynamic TypeTools_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"getClassNames") ) { return getClassNames_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TypeTools_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TypeTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getClassNames"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TypeTools_obj::__mClass;

void TypeTools_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.TypeTools"), hx::TCanCast< TypeTools_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TypeTools_obj::__boot()
{
}

} // end namespace haxe
