#ifndef INCLUDED_hsl_haxe_Bond
#define INCLUDED_hsl_haxe_Bond

#include <hxcpp.h>

HX_DECLARE_CLASS2(hsl,haxe,Bond)
namespace hsl{
namespace haxe{


class Bond_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bond_obj OBJ_;
		Bond_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Bond_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Bond_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bond"); }

		bool halted; /* REM */ 
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void halt( );
		Dynamic halt_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

};

} // end namespace hsl
} // end namespace haxe

#endif /* INCLUDED_hsl_haxe_Bond */ 
