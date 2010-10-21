#ifndef INCLUDED_hsl_haxe__DirectSignaler_LinkedBond
#define INCLUDED_hsl_haxe__DirectSignaler_LinkedBond

#include <hxcpp.h>

#include <hsl/haxe/Bond.h>
HX_DECLARE_CLASS2(hsl,haxe,Bond)
HX_DECLARE_CLASS3(hsl,haxe,_DirectSignaler,LinkedBond)
namespace hsl{
namespace haxe{
namespace _DirectSignaler{


class LinkedBond_obj : public ::hsl::haxe::Bond_obj{
	public:
		typedef ::hsl::haxe::Bond_obj super;
		typedef LinkedBond_obj OBJ_;
		LinkedBond_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LinkedBond_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LinkedBond_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("LinkedBond"); }

		bool destroyed; /* REM */ 
		::hsl::haxe::_DirectSignaler::LinkedBond next; /* REM */ 
		::hsl::haxe::_DirectSignaler::LinkedBond previous; /* REM */ 
		virtual int callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus);
		Dynamic callListener_dyn();

		virtual bool determineEquals( ::hsl::haxe::_DirectSignaler::LinkedBond value);
		Dynamic determineEquals_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void unlink( );
		Dynamic unlink_dyn();

};

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler

#endif /* INCLUDED_hsl_haxe__DirectSignaler_LinkedBond */ 
