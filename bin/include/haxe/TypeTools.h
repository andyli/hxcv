#ifndef INCLUDED_haxe_TypeTools
#define INCLUDED_haxe_TypeTools

#include <hxcpp.h>

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,TypeTools)
namespace haxe{


class TypeTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TypeTools_obj OBJ_;
		TypeTools_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TypeTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TypeTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TypeTools"); }

		static ::List getClassNames( Dynamic value);
		static Dynamic getClassNames_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_TypeTools */ 
