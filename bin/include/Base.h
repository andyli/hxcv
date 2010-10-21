#ifndef INCLUDED_Base
#define INCLUDED_Base

#include <hxcpp.h>

HX_DECLARE_CLASS0(Base)


class Base_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Base_obj OBJ_;
		Base_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Base_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Base_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Base"); }

		virtual Void mthd( );
		Dynamic mthd_dyn();

};


#endif /* INCLUDED_Base */ 
