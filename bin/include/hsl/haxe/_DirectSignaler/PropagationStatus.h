#ifndef INCLUDED_hsl_haxe__DirectSignaler_PropagationStatus
#define INCLUDED_hsl_haxe__DirectSignaler_PropagationStatus

#include <hxcpp.h>

HX_DECLARE_CLASS3(hsl,haxe,_DirectSignaler,PropagationStatus)
namespace hsl{
namespace haxe{
namespace _DirectSignaler{


class PropagationStatus_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PropagationStatus_obj OBJ_;
		PropagationStatus_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PropagationStatus_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PropagationStatus_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PropagationStatus"); }

		static int IMMEDIATELY_STOPPED; /* REM */ 
		static int STOPPED; /* REM */ 
		static int UNDISTURBED; /* REM */ 
};

} // end namespace hsl
} // end namespace haxe
} // end namespace _DirectSignaler

#endif /* INCLUDED_hsl_haxe__DirectSignaler_PropagationStatus */ 
