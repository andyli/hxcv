#include <hxcpp.h>

#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signal
#include <hsl/haxe/Signal.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace hsl{
namespace haxe{

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,addBubblingTarget,)

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,addNotificationTarget,)

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,bind,return )

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,bindAdvanced,return )

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,bindVoid,return )

HX_DEFINE_DYNAMIC_FUNC3(Signaler_obj,dispatch,)

HX_DEFINE_DYNAMIC_FUNC0(Signaler_obj,getIsListenedTo,return )

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,removeBubblingTarget,)

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,removeNotificationTarget,)

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,unbind,)

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,unbindAdvanced,)

HX_DEFINE_DYNAMIC_FUNC1(Signaler_obj,unbindVoid,)


} // end namespace hsl
} // end namespace haxe
