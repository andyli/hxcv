#include <hxcpp.h>

#ifndef INCLUDED_of_utils_LogLevel
#include <of/utils/LogLevel.h>
#endif
namespace of{
namespace utils{

LogLevel LogLevel_obj::OF_LOG_ERROR;

LogLevel LogLevel_obj::OF_LOG_FATAL_ERROR;

LogLevel LogLevel_obj::OF_LOG_NOTICE;

LogLevel LogLevel_obj::OF_LOG_SILENT;

LogLevel LogLevel_obj::OF_LOG_VERBOSE;

LogLevel LogLevel_obj::OF_LOG_WARNING;

HX_DEFINE_CREATE_ENUM(LogLevel_obj)

int LogLevel_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("OF_LOG_ERROR")) return 3;
	if (inName==HX_CSTRING("OF_LOG_FATAL_ERROR")) return 4;
	if (inName==HX_CSTRING("OF_LOG_NOTICE")) return 1;
	if (inName==HX_CSTRING("OF_LOG_SILENT")) return 5;
	if (inName==HX_CSTRING("OF_LOG_VERBOSE")) return 0;
	if (inName==HX_CSTRING("OF_LOG_WARNING")) return 2;
	return super::__FindIndex(inName);
}

int LogLevel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("OF_LOG_ERROR")) return 0;
	if (inName==HX_CSTRING("OF_LOG_FATAL_ERROR")) return 0;
	if (inName==HX_CSTRING("OF_LOG_NOTICE")) return 0;
	if (inName==HX_CSTRING("OF_LOG_SILENT")) return 0;
	if (inName==HX_CSTRING("OF_LOG_VERBOSE")) return 0;
	if (inName==HX_CSTRING("OF_LOG_WARNING")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LogLevel_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("OF_LOG_ERROR")) return OF_LOG_ERROR;
	if (inName==HX_CSTRING("OF_LOG_FATAL_ERROR")) return OF_LOG_FATAL_ERROR;
	if (inName==HX_CSTRING("OF_LOG_NOTICE")) return OF_LOG_NOTICE;
	if (inName==HX_CSTRING("OF_LOG_SILENT")) return OF_LOG_SILENT;
	if (inName==HX_CSTRING("OF_LOG_VERBOSE")) return OF_LOG_VERBOSE;
	if (inName==HX_CSTRING("OF_LOG_WARNING")) return OF_LOG_WARNING;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("OF_LOG_VERBOSE"),
	HX_CSTRING("OF_LOG_NOTICE"),
	HX_CSTRING("OF_LOG_WARNING"),
	HX_CSTRING("OF_LOG_ERROR"),
	HX_CSTRING("OF_LOG_FATAL_ERROR"),
	HX_CSTRING("OF_LOG_SILENT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogLevel_obj::OF_LOG_ERROR,"OF_LOG_ERROR");
	HX_MARK_MEMBER_NAME(LogLevel_obj::OF_LOG_FATAL_ERROR,"OF_LOG_FATAL_ERROR");
	HX_MARK_MEMBER_NAME(LogLevel_obj::OF_LOG_NOTICE,"OF_LOG_NOTICE");
	HX_MARK_MEMBER_NAME(LogLevel_obj::OF_LOG_SILENT,"OF_LOG_SILENT");
	HX_MARK_MEMBER_NAME(LogLevel_obj::OF_LOG_VERBOSE,"OF_LOG_VERBOSE");
	HX_MARK_MEMBER_NAME(LogLevel_obj::OF_LOG_WARNING,"OF_LOG_WARNING");
};

static ::String sMemberFields[] = { ::String(null()) };
Class LogLevel_obj::__mClass;

Dynamic __Create_LogLevel_obj() { return new LogLevel_obj; }

void LogLevel_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.LogLevel"), hx::TCanCast< LogLevel_obj >,sStaticFields,sMemberFields,
	&__Create_LogLevel_obj, &__Create,
	&super::__SGetClass(), &CreateLogLevel_obj, sMarkStatics);
}

void LogLevel_obj::__boot()
{
Static(OF_LOG_ERROR) = hx::CreateEnum< LogLevel_obj >(HX_CSTRING("OF_LOG_ERROR"),3);
Static(OF_LOG_FATAL_ERROR) = hx::CreateEnum< LogLevel_obj >(HX_CSTRING("OF_LOG_FATAL_ERROR"),4);
Static(OF_LOG_NOTICE) = hx::CreateEnum< LogLevel_obj >(HX_CSTRING("OF_LOG_NOTICE"),1);
Static(OF_LOG_SILENT) = hx::CreateEnum< LogLevel_obj >(HX_CSTRING("OF_LOG_SILENT"),5);
Static(OF_LOG_VERBOSE) = hx::CreateEnum< LogLevel_obj >(HX_CSTRING("OF_LOG_VERBOSE"),0);
Static(OF_LOG_WARNING) = hx::CreateEnum< LogLevel_obj >(HX_CSTRING("OF_LOG_WARNING"),2);
}


} // end namespace of
} // end namespace utils
