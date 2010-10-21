#ifndef INCLUDED_haxe_exception_Exception
#define INCLUDED_haxe_exception_Exception

#include <hxcpp.h>

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,exception,Exception)
namespace haxe{
namespace exception{


class Exception_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();
		Void __construct(::String message,::haxe::exception::Exception innerException,Dynamic numberOfStackTraceShifts);

	public:
		static hx::ObjectPtr< Exception_obj > __new(::String message,::haxe::exception::Exception innerException,Dynamic numberOfStackTraceShifts);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Exception_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Exception"); }

		::haxe::exception::Exception baseException; /* REM */ 
		::haxe::exception::Exception innerException; /* REM */ 
		::String message; /* REM */ 
		Dynamic stackTrace; /* REM */ 
		Array< ::haxe::StackItem > stackTraceArray; /* REM */ 
		virtual Void generateStackTrace( int numberOfStackTraceShifts);
		Dynamic generateStackTrace_dyn();

		virtual ::haxe::exception::Exception getBaseException( );
		Dynamic getBaseException_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace exception

#endif /* INCLUDED_haxe_exception_Exception */ 
