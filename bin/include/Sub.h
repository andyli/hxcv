#ifndef INCLUDED_Sub
#define INCLUDED_Sub

#include <hxcpp.h>

#include <Base.h>
HX_DECLARE_CLASS0(Base)
HX_DECLARE_CLASS0(Sub)


class Sub_obj : public ::Base_obj{
	public:
		typedef ::Base_obj super;
		typedef Sub_obj OBJ_;
		Sub_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Sub_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sub"); }

		virtual Void mthd( );
		Dynamic mthd_dyn();

};


#endif /* INCLUDED_Sub */ 
