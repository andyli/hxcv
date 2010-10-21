#ifndef INCLUDED_of_utils_LogLevel
#define INCLUDED_of_utils_LogLevel

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,LogLevel)
namespace of{
namespace utils{


class LogLevel_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LogLevel_obj OBJ_;

	public:
		LogLevel_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("of.utils.LogLevel"); }
		::String __ToString() const { return HX_CSTRING("LogLevel.") + tag; }

		static LogLevel OF_LOG_ERROR;
		static LogLevel OF_LOG_FATAL_ERROR;
		static LogLevel OF_LOG_NOTICE;
		static LogLevel OF_LOG_SILENT;
		static LogLevel OF_LOG_VERBOSE;
		static LogLevel OF_LOG_WARNING;
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_LogLevel */ 
