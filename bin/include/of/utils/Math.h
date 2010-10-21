#ifndef INCLUDED_of_utils_Math
#define INCLUDED_of_utils_Math

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,utils,Math)
namespace of{
namespace utils{


class Math_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Math_obj OBJ_;
		Math_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Math_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Math_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Math"); }

		static int nextPow2( int a);
		static Dynamic nextPow2_dyn();

		static Void seedRandom( Dynamic val);
		static Dynamic seedRandom_dyn();

		static double random( double val0,double val1);
		static Dynamic random_dyn();

		static double randomf( );
		static Dynamic randomf_dyn();

		static double randomuf( );
		static Dynamic randomuf_dyn();

		static double normalize( double value,double min,double max);
		static Dynamic normalize_dyn();

		static double map( double value,double inputMin,double inputMax,double outputMin,double outputMax,Dynamic clamp);
		static Dynamic map_dyn();

		static double clamp( double value,double min,double max);
		static Dynamic clamp_dyn();

		static double lerp( double start,double stop,double amt);
		static Dynamic lerp_dyn();

		static double dist( double x1,double y1,double x2,double y2);
		static Dynamic dist_dyn();

		static double distSquared( double x1,double y1,double x2,double y2);
		static Dynamic distSquared_dyn();

		static int sign( double n);
		static Dynamic sign_dyn();

		static bool inRange( double t,double min,double max);
		static Dynamic inRange_dyn();

		static double radToDeg( double radians);
		static Dynamic radToDeg_dyn();

		static double degToRad( double degrees);
		static Dynamic degToRad_dyn();

		static double randomWidth( );
		static Dynamic randomWidth_dyn();

		static double randomHeight( );
		static Dynamic randomHeight_dyn();

		static double noise( double x,Dynamic y,Dynamic z,Dynamic w);
		static Dynamic noise_dyn();

		static double signedNoise( double x,Dynamic y,Dynamic z,Dynamic w);
		static Dynamic signedNoise_dyn();

		static Dynamic _ofNextPow2; /* REM */ 
	Dynamic &_ofNextPow2_dyn() { return _ofNextPow2;}
		static Dynamic _ofSeedRandom; /* REM */ 
	Dynamic &_ofSeedRandom_dyn() { return _ofSeedRandom;}
		static Dynamic _ofSeedRandom2; /* REM */ 
	Dynamic &_ofSeedRandom2_dyn() { return _ofSeedRandom2;}
		static Dynamic _ofRandom; /* REM */ 
	Dynamic &_ofRandom_dyn() { return _ofRandom;}
		static Dynamic _ofRandomf; /* REM */ 
	Dynamic &_ofRandomf_dyn() { return _ofRandomf;}
		static Dynamic _ofRandomuf; /* REM */ 
		static Dynamic _ofNormalize; /* REM */ 
	Dynamic &_ofNormalize_dyn() { return _ofNormalize;}
		static Dynamic _ofMap; /* REM */ 
	Dynamic &_ofMap_dyn() { return _ofMap;}
		static Dynamic _ofClamp; /* REM */ 
	Dynamic &_ofClamp_dyn() { return _ofClamp;}
		static Dynamic _ofLerp; /* REM */ 
	Dynamic &_ofLerp_dyn() { return _ofLerp;}
		static Dynamic _ofDist; /* REM */ 
	Dynamic &_ofDist_dyn() { return _ofDist;}
		static Dynamic _ofDistSquared; /* REM */ 
	Dynamic &_ofDistSquared_dyn() { return _ofDistSquared;}
		static Dynamic _ofSign; /* REM */ 
	Dynamic &_ofSign_dyn() { return _ofSign;}
		static Dynamic _ofInRange; /* REM */ 
	Dynamic &_ofInRange_dyn() { return _ofInRange;}
		static Dynamic _ofRadToDeg; /* REM */ 
	Dynamic &_ofRadToDeg_dyn() { return _ofRadToDeg;}
		static Dynamic _ofDegToRad; /* REM */ 
	Dynamic &_ofDegToRad_dyn() { return _ofDegToRad;}
		static Dynamic _ofRandomWidth; /* REM */ 
	Dynamic &_ofRandomWidth_dyn() { return _ofRandomWidth;}
		static Dynamic _ofRandomHeight; /* REM */ 
	Dynamic &_ofRandomHeight_dyn() { return _ofRandomHeight;}
		static Dynamic _ofNoise; /* REM */ 
	Dynamic &_ofNoise_dyn() { return _ofNoise;}
		static Dynamic _ofNoise2; /* REM */ 
	Dynamic &_ofNoise2_dyn() { return _ofNoise2;}
		static Dynamic _ofNoise3; /* REM */ 
	Dynamic &_ofNoise3_dyn() { return _ofNoise3;}
		static Dynamic _ofNoise4; /* REM */ 
	Dynamic &_ofNoise4_dyn() { return _ofNoise4;}
		static Dynamic _ofSignedNoise; /* REM */ 
	Dynamic &_ofSignedNoise_dyn() { return _ofSignedNoise;}
		static Dynamic _ofSignedNoise2; /* REM */ 
	Dynamic &_ofSignedNoise2_dyn() { return _ofSignedNoise2;}
		static Dynamic _ofSignedNoise3; /* REM */ 
	Dynamic &_ofSignedNoise3_dyn() { return _ofSignedNoise3;}
		static Dynamic _ofSignedNoise4; /* REM */ 
	Dynamic &_ofSignedNoise4_dyn() { return _ofSignedNoise4;}
};

} // end namespace of
} // end namespace utils

#endif /* INCLUDED_of_utils_Math */ 
