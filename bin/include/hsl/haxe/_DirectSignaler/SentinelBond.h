#ifndef INCLUDED_hsl_haxe__DirectSignaler_SentinelBond
#define INCLUDED_hsl_haxe__DirectSignaler_SentinelBond

#include <hxcpp.h>

#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
HX_DECLARE_CLASS2(hsl,haxe,Bond)
HX_DECLARE_CLASS3(hsl,haxe,_DirectSignaler,LinkedBond)
HX_DECLARE_CLASS3(hsl,haxe,_DirectSignaler,SentinelBond)
namespace hsl{
namespace haxe{
namespace _DirectSignaler{


class SentinelBond_obj : public ::hsl::haxe::_DirectSignaler::LinkedBond_obj{
	public:
		typedef ::hsl::haxe::_DirectSignaler::LinkedBond_obj super;
		typedef SentinelBond_obj OBJ_;
		SentinelBond_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SentinelBond_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SentinelBond_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SentinelBond"); }

		bool isConnected; /* REM */ 
		virtual ::hsl::haxe::_DirectSignaler::LinkedBond add( ::hsl::haxe::_DirectSignaler::LinkedBond value);
		Dynamic add_dyn();

		virtual int callListener( Dynamic data,Dynamic currentTarget,Dynamic origin,int propagationStatus);
		Dynamic callListener_dyn();

		virtual bool getIsConnected( );
		Dynamic getIsConnected_dyn();

		virtual Void remove( ::hsl::haxe::_DirectSignaler::LinkedBond value);
		Dynamic remove_dyn();

};

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler

#endif /* INCLUDED_hsl_haxe__DirectSignaler_SentinelBond */ 
