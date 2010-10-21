#ifndef INCLUDED_hsl_haxe__DirectSignaler_AdvancedBond
#define INCLUDED_hsl_haxe__DirectSignaler_AdvancedBond

#include <hxcpp.h>

#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
HX_DECLARE_CLASS2(hsl,haxe,Bond)
HX_DECLARE_CLASS2(hsl,haxe,Signal)
HX_DECLARE_CLASS3(hsl,haxe,_DirectSignaler,AdvancedBond)
HX_DECLARE_CLASS3(hsl,haxe,_DirectSignaler,LinkedBond)
namespace hsl{
namespace haxe{
namespace _DirectSignaler{


class AdvancedBond_obj : public ::hsl::haxe::_DirectSignaler::LinkedBond_obj{
	public:
		typedef ::hsl::haxe::_DirectSignaler::LinkedBond_obj super;
		typedef AdvancedBond_obj OBJ_;
		AdvancedBond_obj();
		Void __construct(Dynamic listener);

	public:
		static hx::ObjectPtr< AdvancedBond_obj > __new(Dynamic listener);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AdvancedBond_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("AdvancedBond"); }

		Dynamic listener; /* REM */ 
	Dynamic &listener_dyn() { return listener;}
		virtual int callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus);
		Dynamic callListener_dyn();

		virtual bool determineEquals( ::hsl::haxe::_DirectSignaler::LinkedBond value);
		Dynamic determineEquals_dyn();

};

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler

#endif /* INCLUDED_hsl_haxe__DirectSignaler_AdvancedBond */ 
