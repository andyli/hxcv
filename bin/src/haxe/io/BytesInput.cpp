#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void BytesInput_obj::__construct(::haxe::io::Bytes b,Dynamic pos,Dynamic len)
{
{
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",36)
	if ((pos == null()))
		pos = 0;
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",37)
	if ((len == null()))
		len = (b->length - pos);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",38)
	if ((bool((pos < 0)) || bool((bool((len < 0)) || bool(((pos + len) > b->length))))))
		hx::Throw (::haxe::io::Error_obj::OutsideBounds);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",50)
	this->b = b->b;
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",51)
	this->pos = pos;
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",52)
	this->len = len;
}
;
	return null();
}

BytesInput_obj::~BytesInput_obj() { }

Dynamic BytesInput_obj::__CreateEmpty() { return  new BytesInput_obj; }
hx::ObjectPtr< BytesInput_obj > BytesInput_obj::__new(::haxe::io::Bytes b,Dynamic pos,Dynamic len)
{  hx::ObjectPtr< BytesInput_obj > result = new BytesInput_obj();
	result->__construct(b,pos,len);
	return result;}

Dynamic BytesInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesInput_obj > result = new BytesInput_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int BytesInput_obj::readByte( ){
	HX_SOURCE_PUSH("BytesInput_obj::readByte")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",60)
	if ((this->len == 0))
		hx::Throw (::haxe::io::Eof_obj::__new());
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",62)
	(this->len)--;
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",68)
	return this->b->__get((this->pos)++);
}


HX_DEFINE_DYNAMIC_FUNC0(BytesInput_obj,readByte,return )

int BytesInput_obj::readBytes( ::haxe::io::Bytes buf,int pos,int len){
	HX_SOURCE_PUSH("BytesInput_obj::readBytes")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",77)
	if ((bool((pos < 0)) || bool((bool((len < 0)) || bool(((pos + len) > buf->length))))))
		hx::Throw (::haxe::io::Error_obj::OutsideBounds);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",84)
	if ((bool((this->len == 0)) && bool((len > 0))))
		hx::Throw (::haxe::io::Eof_obj::__new());
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",86)
	if ((this->len < len))
		len = this->len;
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",93)
	Array< unsigned char > b1 = this->b;
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",94)
	Array< unsigned char > b2 = buf->b;
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",95)
	{
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",95)
		int _g = 0;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",95)
		while((_g < len)){
			__SAFE_POINT
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",95)
			int i = (_g)++;
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",96)
			b2[(pos + i)] = b1->__get((this->pos + i));
		}
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",98)
	hx::AddEq(this->pos,len);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",99)
	hx::SubEq(this->len,len);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe/std/haxe/io/BytesInput.hx",101)
	return len;
}


HX_DEFINE_DYNAMIC_FUNC3(BytesInput_obj,readBytes,return )


BytesInput_obj::BytesInput_obj()
{
}

void BytesInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesInput);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(len,"len");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic BytesInput_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"len") ) { return len; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic BytesInput_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void BytesInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("len"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("b"),
	HX_CSTRING("pos"),
	HX_CSTRING("len"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class BytesInput_obj::__mClass;

void BytesInput_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.BytesInput"), hx::TCanCast< BytesInput_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BytesInput_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
