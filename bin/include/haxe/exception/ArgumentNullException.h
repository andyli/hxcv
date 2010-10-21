#ifndef INCLUDED_haxe_exception_ArgumentNullException
#define INCLUDED_haxe_exception_ArgumentNullException

#include <hxcpp.h>

#include <haxe/exception/Exception.h>
HX_DECLARE_CLASS2(haxe,exception,ArgumentNullException)
HX_DECLARE_CLASS2(haxe,exception,Exception)
namespace haxe{
namespace exception{


class ArgumentNullException_obj : public ::haxe::exception::Exception_obj{
	public:
		typedef ::haxe::exception::Exception_obj super;
		typedef ArgumentNullException_obj OBJ_;
		ArgumentNullException_obj();
		Void __construct(::String argumentName,Dynamic numberOfStackTraceShifts);

	public:
		static hx::ObjectPtr< ArgumentNullException_obj > __new(::String argumentName,Dynamic numberOfStackTraceShifts);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArgumentNullException_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArgumentNullException"); }

};

} // end namespace haxe
} // end namespace exception

#endif /* INCLUDED_haxe_exception_ArgumentNullException */ 
