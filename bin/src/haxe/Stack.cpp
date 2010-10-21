#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Stack
#include <haxe/Stack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
namespace haxe{

Void Stack_obj::__construct()
{
	return null();
}

Stack_obj::~Stack_obj() { }

Dynamic Stack_obj::__CreateEmpty() { return  new Stack_obj; }
hx::ObjectPtr< Stack_obj > Stack_obj::__new()
{  hx::ObjectPtr< Stack_obj > result = new Stack_obj();
	result->__construct();
	return result;}

Dynamic Stack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stack_obj > result = new Stack_obj();
	result->__construct();
	return result;}

Array< ::haxe::StackItem > Stack_obj::callStack( ){
	HX_SOURCE_PUSH("Stack_obj::callStack")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",60)
	return Array_obj< ::haxe::StackItem >::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,callStack,return )

Array< ::haxe::StackItem > Stack_obj::exceptionStack( ){
	HX_SOURCE_PUSH("Stack_obj::exceptionStack")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",93)
	return Array_obj< ::haxe::StackItem >::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,exceptionStack,return )

::String Stack_obj::toString( Array< ::haxe::StackItem > stack){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stack_obj::toString")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",101)
	::StringBuf b = ::StringBuf_obj::__new();
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",102)
	{
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",102)
		int _g = 0;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",102)
		while((_g < stack->length)){
			__SAFE_POINT
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",102)
			::haxe::StackItem s = stack->__get(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",102)
			++(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",103)
			b->b[b->b->length] = HX_CSTRING("\nCalled from ");
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",104)
			::haxe::Stack_obj::itemToString(b,s);
		}
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",106)
	return b->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stack_obj,toString,return )

Void Stack_obj::itemToString( ::StringBuf b,::haxe::StackItem s){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stack_obj::itemToString")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",110)
		::haxe::StackItem _switch_1 = (s);
		switch((_switch_1)->GetIndex()){
			case 0: {
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",112)
				b->b[b->b->length] = HX_CSTRING("a C function");
			}
			;break;
			case 1: {
				::String m = _switch_1->__Param(0);
{
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",114)
					b->b[b->b->length] = HX_CSTRING("module ");
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",115)
					b->b[b->b->length] = m;
				}
			}
			;break;
			case 2: {
				int line = _switch_1->__Param(2);
				::String file = _switch_1->__Param(1);
				::haxe::StackItem s1 = _switch_1->__Param(0);
{
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",117)
					if ((s1 != null())){
						HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",118)
						::haxe::Stack_obj::itemToString(b,s1);
						HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",119)
						b->b[b->b->length] = HX_CSTRING(" (");
					}
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",121)
					b->b[b->b->length] = file;
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",122)
					b->b[b->b->length] = HX_CSTRING(" line ");
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",123)
					b->b[b->b->length] = line;
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",124)
					if ((s1 != null()))
						b->b[b->b->length] = HX_CSTRING(")");
				}
			}
			;break;
			case 3: {
				::String meth = _switch_1->__Param(1);
				::String cname = _switch_1->__Param(0);
{
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",126)
					b->b[b->b->length] = cname;
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",127)
					b->b[b->b->length] = HX_CSTRING(".");
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",128)
					b->b[b->b->length] = meth;
				}
			}
			;break;
			case 4: {
				int n = _switch_1->__Param(0);
{
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",130)
					b->b[b->b->length] = HX_CSTRING("local function #");
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",131)
					b->b[b->b->length] = n;
				}
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Stack_obj,itemToString,(void))

Dynamic Stack_obj::makeStack( Dynamic s){
	HX_SOURCE_PUSH("Stack_obj::makeStack")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/Stack.hx",190)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stack_obj,makeStack,return )


Stack_obj::Stack_obj()
{
}

void Stack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stack);
	HX_MARK_END_CLASS();
}

Dynamic Stack_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { return callStack_dyn(); }
		if (HX_FIELD_EQ(inName,"makeStack") ) { return makeStack_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemToString") ) { return itemToString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { return exceptionStack_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Stack_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Stack_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("callStack"),
	HX_CSTRING("exceptionStack"),
	HX_CSTRING("toString"),
	HX_CSTRING("itemToString"),
	HX_CSTRING("makeStack"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Stack_obj::__mClass;

void Stack_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Stack"), hx::TCanCast< Stack_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Stack_obj::__boot()
{
}

} // end namespace haxe
