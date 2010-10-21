#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_utils_Math
#include <of/utils/Math.h>
#endif
namespace of{
namespace utils{

Void Math_obj::__construct()
{
	return null();
}

Math_obj::~Math_obj() { }

Dynamic Math_obj::__CreateEmpty() { return  new Math_obj; }
hx::ObjectPtr< Math_obj > Math_obj::__new()
{  hx::ObjectPtr< Math_obj > result = new Math_obj();
	result->__construct();
	return result;}

Dynamic Math_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Math_obj > result = new Math_obj();
	result->__construct();
	return result;}

int Math_obj::nextPow2( int a){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::nextPow2")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",7)
	return ::of::utils::Math_obj::_ofNextPow2(a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Math_obj,nextPow2,return )

Void Math_obj::seedRandom( Dynamic val){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Math_obj::seedRandom")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",11)
		if ((val == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",11)
			::of::utils::Math_obj::_ofSeedRandom();
		}
		else{
			HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",11)
			::of::utils::Math_obj::_ofSeedRandom2(val);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Math_obj,seedRandom,(void))

double Math_obj::random( double val0,double val1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::random")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",16)
	return ::of::utils::Math_obj::_ofRandom(val0,val1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Math_obj,random,return )

double Math_obj::randomf( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::randomf")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",21)
	return ::of::utils::Math_obj::_ofRandomf();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Math_obj,randomf,return )

double Math_obj::randomuf( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::randomuf")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",26)
	return ::of::utils::Math_obj::_ofRandomf();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Math_obj,randomuf,return )

double Math_obj::normalize( double value,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::normalize")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",30)
	return ::of::utils::Math_obj::_ofNormalize(value,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Math_obj,normalize,return )

double Math_obj::map( double value,double inputMin,double inputMax,double outputMin,double outputMax,Dynamic __o_clamp){
bool clamp = __o_clamp.Default(false);
	HX_SOURCE_PUSH("Math_obj::map");
{
		__SAFE_POINT
		struct _Function_1_1{
			inline static Dynamic Block( double &outputMin,double &value,double &inputMin,double &outputMax,double &inputMax,bool &clamp){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("value") , value);
				__result->Add(HX_CSTRING("inputMin") , inputMin);
				__result->Add(HX_CSTRING("inputMax") , inputMax);
				__result->Add(HX_CSTRING("outputMin") , outputMin);
				__result->Add(HX_CSTRING("outputMax") , outputMax);
				__result->Add(HX_CSTRING("clamp") , clamp);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",34)
		return ::of::utils::Math_obj::_ofMap(_Function_1_1::Block(outputMin,value,inputMin,outputMax,inputMax,clamp));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Math_obj,map,return )

double Math_obj::clamp( double value,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::clamp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",38)
	return ::of::utils::Math_obj::_ofClamp(value,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Math_obj,clamp,return )

double Math_obj::lerp( double start,double stop,double amt){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::lerp")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",42)
	return ::of::utils::Math_obj::_ofLerp(start,stop,amt);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Math_obj,lerp,return )

double Math_obj::dist( double x1,double y1,double x2,double y2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::dist")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",46)
	return ::of::utils::Math_obj::_ofDist(x1,y1,x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Math_obj,dist,return )

double Math_obj::distSquared( double x1,double y1,double x2,double y2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::distSquared")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",50)
	return ::of::utils::Math_obj::_ofDistSquared(x1,y1,x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Math_obj,distSquared,return )

int Math_obj::sign( double n){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::sign")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",54)
	return ::of::utils::Math_obj::_ofSign(n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Math_obj,sign,return )

bool Math_obj::inRange( double t,double min,double max){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::inRange")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",58)
	return ::of::utils::Math_obj::_ofInRange(t,min,max);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Math_obj,inRange,return )

double Math_obj::radToDeg( double radians){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::radToDeg")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",62)
	return ::of::utils::Math_obj::_ofRadToDeg(radians);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Math_obj,radToDeg,return )

double Math_obj::degToRad( double degrees){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::degToRad")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",66)
	return ::of::utils::Math_obj::_ofDegToRad(degrees);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Math_obj,degToRad,return )

double Math_obj::randomWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::randomWidth")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",70)
	return ::of::utils::Math_obj::_ofRandomWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Math_obj,randomWidth,return )

double Math_obj::randomHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::randomHeight")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",74)
	return ::of::utils::Math_obj::_ofRandomHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Math_obj,randomHeight,return )

double Math_obj::noise( double x,Dynamic y,Dynamic z,Dynamic w){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::noise")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",79)
	if ((w != null()))
		return ::of::utils::Math_obj::_ofNoise4(x,y,z,w);
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",80)
	if ((z != null()))
		return ::of::utils::Math_obj::_ofNoise3(x,y,z);
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",81)
	if ((y != null()))
		return ::of::utils::Math_obj::_ofNoise2(x,y);
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",82)
	return ::of::utils::Math_obj::_ofNoise(x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Math_obj,noise,return )

double Math_obj::signedNoise( double x,Dynamic y,Dynamic z,Dynamic w){
	__SAFE_POINT
	HX_SOURCE_PUSH("Math_obj::signedNoise")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",87)
	if ((w != null()))
		return ::of::utils::Math_obj::_ofSignedNoise4(x,y,z,w);
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",88)
	if ((z != null()))
		return ::of::utils::Math_obj::_ofSignedNoise3(x,y,z);
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",89)
	if ((y != null()))
		return ::of::utils::Math_obj::_ofSignedNoise2(x,y);
	HX_SOURCE_POS("../../hxOpenFrameworks/of/utils/Math.hx",90)
	return ::of::utils::Math_obj::_ofSignedNoise(x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Math_obj,signedNoise,return )

Dynamic Math_obj::_ofNextPow2;

Dynamic Math_obj::_ofSeedRandom;

Dynamic Math_obj::_ofSeedRandom2;

Dynamic Math_obj::_ofRandom;

Dynamic Math_obj::_ofRandomf;

Dynamic Math_obj::_ofRandomuf;

Dynamic Math_obj::_ofNormalize;

Dynamic Math_obj::_ofMap;

Dynamic Math_obj::_ofClamp;

Dynamic Math_obj::_ofLerp;

Dynamic Math_obj::_ofDist;

Dynamic Math_obj::_ofDistSquared;

Dynamic Math_obj::_ofSign;

Dynamic Math_obj::_ofInRange;

Dynamic Math_obj::_ofRadToDeg;

Dynamic Math_obj::_ofDegToRad;

Dynamic Math_obj::_ofRandomWidth;

Dynamic Math_obj::_ofRandomHeight;

Dynamic Math_obj::_ofNoise;

Dynamic Math_obj::_ofNoise2;

Dynamic Math_obj::_ofNoise3;

Dynamic Math_obj::_ofNoise4;

Dynamic Math_obj::_ofSignedNoise;

Dynamic Math_obj::_ofSignedNoise2;

Dynamic Math_obj::_ofSignedNoise3;

Dynamic Math_obj::_ofSignedNoise4;


Math_obj::Math_obj()
{
}

void Math_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Math);
	HX_MARK_END_CLASS();
}

Dynamic Math_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofMap") ) { return _ofMap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"randomf") ) { return randomf_dyn(); }
		if (HX_FIELD_EQ(inName,"inRange") ) { return inRange_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofLerp") ) { return _ofLerp; }
		if (HX_FIELD_EQ(inName,"_ofDist") ) { return _ofDist; }
		if (HX_FIELD_EQ(inName,"_ofSign") ) { return _ofSign; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextPow2") ) { return nextPow2_dyn(); }
		if (HX_FIELD_EQ(inName,"randomuf") ) { return randomuf_dyn(); }
		if (HX_FIELD_EQ(inName,"radToDeg") ) { return radToDeg_dyn(); }
		if (HX_FIELD_EQ(inName,"degToRad") ) { return degToRad_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofClamp") ) { return _ofClamp; }
		if (HX_FIELD_EQ(inName,"_ofNoise") ) { return _ofNoise; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofRandom") ) { return _ofRandom; }
		if (HX_FIELD_EQ(inName,"_ofNoise2") ) { return _ofNoise2; }
		if (HX_FIELD_EQ(inName,"_ofNoise3") ) { return _ofNoise3; }
		if (HX_FIELD_EQ(inName,"_ofNoise4") ) { return _ofNoise4; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seedRandom") ) { return seedRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofRandomf") ) { return _ofRandomf; }
		if (HX_FIELD_EQ(inName,"_ofInRange") ) { return _ofInRange; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"distSquared") ) { return distSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"randomWidth") ) { return randomWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"signedNoise") ) { return signedNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofNextPow2") ) { return _ofNextPow2; }
		if (HX_FIELD_EQ(inName,"_ofRandomuf") ) { return _ofRandomuf; }
		if (HX_FIELD_EQ(inName,"_ofRadToDeg") ) { return _ofRadToDeg; }
		if (HX_FIELD_EQ(inName,"_ofDegToRad") ) { return _ofDegToRad; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"randomHeight") ) { return randomHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofNormalize") ) { return _ofNormalize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofSeedRandom") ) { return _ofSeedRandom; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofSeedRandom2") ) { return _ofSeedRandom2; }
		if (HX_FIELD_EQ(inName,"_ofDistSquared") ) { return _ofDistSquared; }
		if (HX_FIELD_EQ(inName,"_ofRandomWidth") ) { return _ofRandomWidth; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise") ) { return _ofSignedNoise; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofRandomHeight") ) { return _ofRandomHeight; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise2") ) { return _ofSignedNoise2; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise3") ) { return _ofSignedNoise3; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise4") ) { return _ofSignedNoise4; }
	}
	return super::__Field(inName);
}

Dynamic Math_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_ofMap") ) { _ofMap=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ofLerp") ) { _ofLerp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofDist") ) { _ofDist=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSign") ) { _ofSign=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ofClamp") ) { _ofClamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofNoise") ) { _ofNoise=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ofRandom") ) { _ofRandom=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofNoise2") ) { _ofNoise2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofNoise3") ) { _ofNoise3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofNoise4") ) { _ofNoise4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ofRandomf") ) { _ofRandomf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofInRange") ) { _ofInRange=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ofNextPow2") ) { _ofNextPow2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRandomuf") ) { _ofRandomuf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRadToDeg") ) { _ofRadToDeg=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofDegToRad") ) { _ofDegToRad=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofNormalize") ) { _ofNormalize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofSeedRandom") ) { _ofSeedRandom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofSeedRandom2") ) { _ofSeedRandom2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofDistSquared") ) { _ofDistSquared=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRandomWidth") ) { _ofRandomWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise") ) { _ofSignedNoise=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofRandomHeight") ) { _ofRandomHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise2") ) { _ofSignedNoise2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise3") ) { _ofSignedNoise3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSignedNoise4") ) { _ofSignedNoise4=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Math_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nextPow2"),
	HX_CSTRING("seedRandom"),
	HX_CSTRING("random"),
	HX_CSTRING("randomf"),
	HX_CSTRING("randomuf"),
	HX_CSTRING("normalize"),
	HX_CSTRING("map"),
	HX_CSTRING("clamp"),
	HX_CSTRING("lerp"),
	HX_CSTRING("dist"),
	HX_CSTRING("distSquared"),
	HX_CSTRING("sign"),
	HX_CSTRING("inRange"),
	HX_CSTRING("radToDeg"),
	HX_CSTRING("degToRad"),
	HX_CSTRING("randomWidth"),
	HX_CSTRING("randomHeight"),
	HX_CSTRING("noise"),
	HX_CSTRING("signedNoise"),
	HX_CSTRING("_ofNextPow2"),
	HX_CSTRING("_ofSeedRandom"),
	HX_CSTRING("_ofSeedRandom2"),
	HX_CSTRING("_ofRandom"),
	HX_CSTRING("_ofRandomf"),
	HX_CSTRING("_ofRandomuf"),
	HX_CSTRING("_ofNormalize"),
	HX_CSTRING("_ofMap"),
	HX_CSTRING("_ofClamp"),
	HX_CSTRING("_ofLerp"),
	HX_CSTRING("_ofDist"),
	HX_CSTRING("_ofDistSquared"),
	HX_CSTRING("_ofSign"),
	HX_CSTRING("_ofInRange"),
	HX_CSTRING("_ofRadToDeg"),
	HX_CSTRING("_ofDegToRad"),
	HX_CSTRING("_ofRandomWidth"),
	HX_CSTRING("_ofRandomHeight"),
	HX_CSTRING("_ofNoise"),
	HX_CSTRING("_ofNoise2"),
	HX_CSTRING("_ofNoise3"),
	HX_CSTRING("_ofNoise4"),
	HX_CSTRING("_ofSignedNoise"),
	HX_CSTRING("_ofSignedNoise2"),
	HX_CSTRING("_ofSignedNoise3"),
	HX_CSTRING("_ofSignedNoise4"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Math_obj::_ofNextPow2,"_ofNextPow2");
	HX_MARK_MEMBER_NAME(Math_obj::_ofSeedRandom,"_ofSeedRandom");
	HX_MARK_MEMBER_NAME(Math_obj::_ofSeedRandom2,"_ofSeedRandom2");
	HX_MARK_MEMBER_NAME(Math_obj::_ofRandom,"_ofRandom");
	HX_MARK_MEMBER_NAME(Math_obj::_ofRandomf,"_ofRandomf");
	HX_MARK_MEMBER_NAME(Math_obj::_ofRandomuf,"_ofRandomuf");
	HX_MARK_MEMBER_NAME(Math_obj::_ofNormalize,"_ofNormalize");
	HX_MARK_MEMBER_NAME(Math_obj::_ofMap,"_ofMap");
	HX_MARK_MEMBER_NAME(Math_obj::_ofClamp,"_ofClamp");
	HX_MARK_MEMBER_NAME(Math_obj::_ofLerp,"_ofLerp");
	HX_MARK_MEMBER_NAME(Math_obj::_ofDist,"_ofDist");
	HX_MARK_MEMBER_NAME(Math_obj::_ofDistSquared,"_ofDistSquared");
	HX_MARK_MEMBER_NAME(Math_obj::_ofSign,"_ofSign");
	HX_MARK_MEMBER_NAME(Math_obj::_ofInRange,"_ofInRange");
	HX_MARK_MEMBER_NAME(Math_obj::_ofRadToDeg,"_ofRadToDeg");
	HX_MARK_MEMBER_NAME(Math_obj::_ofDegToRad,"_ofDegToRad");
	HX_MARK_MEMBER_NAME(Math_obj::_ofRandomWidth,"_ofRandomWidth");
	HX_MARK_MEMBER_NAME(Math_obj::_ofRandomHeight,"_ofRandomHeight");
	HX_MARK_MEMBER_NAME(Math_obj::_ofNoise,"_ofNoise");
	HX_MARK_MEMBER_NAME(Math_obj::_ofNoise2,"_ofNoise2");
	HX_MARK_MEMBER_NAME(Math_obj::_ofNoise3,"_ofNoise3");
	HX_MARK_MEMBER_NAME(Math_obj::_ofNoise4,"_ofNoise4");
	HX_MARK_MEMBER_NAME(Math_obj::_ofSignedNoise,"_ofSignedNoise");
	HX_MARK_MEMBER_NAME(Math_obj::_ofSignedNoise2,"_ofSignedNoise2");
	HX_MARK_MEMBER_NAME(Math_obj::_ofSignedNoise3,"_ofSignedNoise3");
	HX_MARK_MEMBER_NAME(Math_obj::_ofSignedNoise4,"_ofSignedNoise4");
};

Class Math_obj::__mClass;

void Math_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.utils.Math"), hx::TCanCast< Math_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Math_obj::__boot()
{
	hx::Static(_ofNextPow2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNextPow2"),1);
	hx::Static(_ofSeedRandom) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSeedRandom"),0);
	hx::Static(_ofSeedRandom2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSeedRandom2"),1);
	hx::Static(_ofRandom) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRandom"),2);
	hx::Static(_ofRandomf) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRandomf"),0);
	hx::Static(_ofRandomuf) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRandomuf"),0);
	hx::Static(_ofNormalize) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNormalize"),3);
	hx::Static(_ofMap) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofMap"),1);
	hx::Static(_ofClamp) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofClamp"),3);
	hx::Static(_ofLerp) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofLerp"),3);
	hx::Static(_ofDist) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDist"),4);
	hx::Static(_ofDistSquared) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDistSquared"),4);
	hx::Static(_ofSign) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSign"),1);
	hx::Static(_ofInRange) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofInRange"),3);
	hx::Static(_ofRadToDeg) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRadToDeg"),1);
	hx::Static(_ofDegToRad) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDegToRad"),1);
	hx::Static(_ofRandomWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRandomWidth"),0);
	hx::Static(_ofRandomHeight) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRandomHeight"),0);
	hx::Static(_ofNoise) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNoise"),1);
	hx::Static(_ofNoise2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNoise2"),2);
	hx::Static(_ofNoise3) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNoise3"),3);
	hx::Static(_ofNoise4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNoise4"),4);
	hx::Static(_ofSignedNoise) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSignedNoise"),1);
	hx::Static(_ofSignedNoise2) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSignedNoise2"),2);
	hx::Static(_ofSignedNoise3) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSignedNoise3"),3);
	hx::Static(_ofSignedNoise4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSignedNoise4"),4);
}

} // end namespace of
} // end namespace utils
