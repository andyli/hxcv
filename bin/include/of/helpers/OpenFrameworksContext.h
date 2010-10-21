#ifndef INCLUDED_of_helpers_OpenFrameworksContext
#define INCLUDED_of_helpers_OpenFrameworksContext

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,app,AppGlutWindow)
HX_DECLARE_CLASS2(of,app,BaseApp)
HX_DECLARE_CLASS2(of,helpers,OpenFrameworksContext)
HX_DECLARE_CLASS2(of,utils,LogLevel)
HX_DECLARE_CLASS2(of,utils,Style)
namespace of{
namespace helpers{


class OpenFrameworksContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpenFrameworksContext_obj OBJ_;
		OpenFrameworksContext_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< OpenFrameworksContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OpenFrameworksContext_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpenFrameworksContext"); }

		static Void runApp( ::of::app::BaseApp _,::of::app::BaseApp app);
		static Dynamic runApp_dyn();

		static Void setupOpenGL( ::of::app::BaseApp _,::of::app::AppGlutWindow window,int w,int h,int screenMode);
		static Dynamic setupOpenGL_dyn();

		static ::of::app::BaseApp getAppPtr( ::of::app::BaseApp _);
		static Dynamic getAppPtr_dyn();

		static ::of::app::AppGlutWindow getWindowPtr( ::of::app::BaseApp _);
		static Dynamic getWindowPtr_dyn();

		static double getFrameRate( ::of::app::BaseApp _);
		static Dynamic getFrameRate_dyn();

		static int getFrameNum( ::of::app::BaseApp _);
		static Dynamic getFrameNum_dyn();

		static Void setFrameRate( ::of::app::BaseApp _,int targetRate);
		static Dynamic setFrameRate_dyn();

		static Void sleepMillis( ::of::app::BaseApp _,int millis);
		static Dynamic sleepMillis_dyn();

		static double getLastFrameTime( ::of::app::BaseApp _);
		static Dynamic getLastFrameTime_dyn();

		static Void hideCursor( ::of::app::BaseApp _);
		static Dynamic hideCursor_dyn();

		static Void showCursor( ::of::app::BaseApp _);
		static Dynamic showCursor_dyn();

		static int getWindowPositionX( ::of::app::BaseApp _);
		static Dynamic getWindowPositionX_dyn();

		static int getWindowPositionY( ::of::app::BaseApp _);
		static Dynamic getWindowPositionY_dyn();

		static int getScreenWidth( ::of::app::BaseApp _);
		static Dynamic getScreenWidth_dyn();

		static int getScreenHeight( ::of::app::BaseApp _);
		static Dynamic getScreenHeight_dyn();

		static int getWindowMode( ::of::app::BaseApp _);
		static Dynamic getWindowMode_dyn();

		static int getWidth( ::of::app::BaseApp _);
		static Dynamic getWidth_dyn();

		static int getHeight( ::of::app::BaseApp _);
		static Dynamic getHeight_dyn();

		static Void setWindowPosition( ::of::app::BaseApp _,int x,int y);
		static Dynamic setWindowPosition_dyn();

		static Void setWindowShape( ::of::app::BaseApp _,int width,int height);
		static Dynamic setWindowShape_dyn();

		static Void setWindowTitle( ::of::app::BaseApp _,::String title);
		static Dynamic setWindowTitle_dyn();

		static Void enableSetupScreen( ::of::app::BaseApp _);
		static Dynamic enableSetupScreen_dyn();

		static Void disableSetupScreen( ::of::app::BaseApp _);
		static Dynamic disableSetupScreen_dyn();

		static Void setFullscreen( ::of::app::BaseApp _,bool fullscreen);
		static Dynamic setFullscreen_dyn();

		static Void toggleFullscreen( ::of::app::BaseApp _);
		static Dynamic toggleFullscreen_dyn();

		static Void setVerticalSync( ::of::app::BaseApp _,bool bSync);
		static Dynamic setVerticalSync_dyn();

		static int nextPow2( ::of::app::BaseApp _,int input);
		static Dynamic nextPow2_dyn();

		static Void resetElapsedTimeCounter( ::of::app::BaseApp _);
		static Dynamic resetElapsedTimeCounter_dyn();

		static double getElapsedTimef( ::of::app::BaseApp _);
		static Dynamic getElapsedTimef_dyn();

		static int getElapsedTimeMillis( ::of::app::BaseApp _);
		static Dynamic getElapsedTimeMillis_dyn();

		static int getSeconds( ::of::app::BaseApp _);
		static Dynamic getSeconds_dyn();

		static int getMinutes( ::of::app::BaseApp _);
		static Dynamic getMinutes_dyn();

		static int getHours( ::of::app::BaseApp _);
		static Dynamic getHours_dyn();

		static double getSystemTime( ::of::app::BaseApp _);
		static Dynamic getSystemTime_dyn();

		static int getYear( ::of::app::BaseApp _);
		static Dynamic getYear_dyn();

		static int getMonth( ::of::app::BaseApp _);
		static Dynamic getMonth_dyn();

		static int getDay( ::of::app::BaseApp _);
		static Dynamic getDay_dyn();

		static int getWeekday( ::of::app::BaseApp _);
		static Dynamic getWeekday_dyn();

		static Void launchBrowser( ::of::app::BaseApp _,::String url);
		static Dynamic launchBrowser_dyn();

		static Void enableDataPath( ::of::app::BaseApp _);
		static Dynamic enableDataPath_dyn();

		static Void disableDataPath( ::of::app::BaseApp _);
		static Dynamic disableDataPath_dyn();

		static ::String toDataPath( ::of::app::BaseApp _,::String path,Dynamic absolute);
		static Dynamic toDataPath_dyn();

		static Void setDataPathRoot( ::of::app::BaseApp _,::String root);
		static Dynamic setDataPathRoot_dyn();

		static ::String toString( ::of::app::BaseApp _,double value,Dynamic precision);
		static Dynamic toString_dyn();

		static int toInt( ::of::app::BaseApp _,::String intString);
		static Dynamic toInt_dyn();

		static double toFloat( ::of::app::BaseApp _,::String floatString);
		static Dynamic toFloat_dyn();

		static ::String getVersionInfo( ::of::app::BaseApp _);
		static Dynamic getVersionInfo_dyn();

		static Void saveScreen( ::of::app::BaseApp _,::String filename);
		static Dynamic saveScreen_dyn();

		static Void saveFrame( ::of::app::BaseApp _);
		static Dynamic saveFrame_dyn();

		static Array< ::String > splitString( ::of::app::BaseApp _,::String text,::String delimiter);
		static Dynamic splitString_dyn();

		static Void setLogLevel( ::of::app::BaseApp _,::of::utils::LogLevel logLevel);
		static Dynamic setLogLevel_dyn();

		static Void ofLog( ::of::app::BaseApp _,::of::utils::LogLevel logLevel,::String message);
		static Dynamic ofLog_dyn();

		static Void setConsoleColor( ::of::app::BaseApp _,int color);
		static Dynamic setConsoleColor_dyn();

		static Void restoreConsoleColor( ::of::app::BaseApp _);
		static Dynamic restoreConsoleColor_dyn();

		static Void seedRandom( ::of::app::BaseApp _,Dynamic val);
		static Dynamic seedRandom_dyn();

		static double random( ::of::app::BaseApp _,double val0,double val1);
		static Dynamic random_dyn();

		static double randomf( ::of::app::BaseApp _);
		static Dynamic randomf_dyn();

		static double randomuf( ::of::app::BaseApp _);
		static Dynamic randomuf_dyn();

		static double normalize( ::of::app::BaseApp _,double value,double min,double max);
		static Dynamic normalize_dyn();

		static double map( ::of::app::BaseApp _,double value,double inputMin,double inputMax,double outputMin,double outputMax,Dynamic clamp);
		static Dynamic map_dyn();

		static double clamp( ::of::app::BaseApp _,double value,double min,double max);
		static Dynamic clamp_dyn();

		static double lerp( ::of::app::BaseApp _,double start,double stop,double amt);
		static Dynamic lerp_dyn();

		static double dist( ::of::app::BaseApp _,double x1,double y1,double x2,double y2);
		static Dynamic dist_dyn();

		static double distSquared( ::of::app::BaseApp _,double x1,double y1,double x2,double y2);
		static Dynamic distSquared_dyn();

		static int sign( ::of::app::BaseApp _,double n);
		static Dynamic sign_dyn();

		static bool inRange( ::of::app::BaseApp _,double t,double min,double max);
		static Dynamic inRange_dyn();

		static double radToDeg( ::of::app::BaseApp _,double radians);
		static Dynamic radToDeg_dyn();

		static double degToRad( ::of::app::BaseApp _,double degrees);
		static Dynamic degToRad_dyn();

		static double randomWidth( ::of::app::BaseApp _);
		static Dynamic randomWidth_dyn();

		static double randomHeight( ::of::app::BaseApp _);
		static Dynamic randomHeight_dyn();

		static double noise( ::of::app::BaseApp _,double x,Dynamic y,Dynamic z,Dynamic w);
		static Dynamic noise_dyn();

		static double signedNoise( ::of::app::BaseApp _,double x,Dynamic y,Dynamic z,Dynamic w);
		static Dynamic signedNoise_dyn();

		static double abs( ::of::app::BaseApp _,double v);
		static Dynamic abs_dyn();

		static double min( ::of::app::BaseApp _,double a,double b);
		static Dynamic min_dyn();

		static double max( ::of::app::BaseApp _,double a,double b);
		static Dynamic max_dyn();

		static double sin( ::of::app::BaseApp _,double v);
		static Dynamic sin_dyn();

		static double cos( ::of::app::BaseApp _,double v);
		static Dynamic cos_dyn();

		static double atan2( ::of::app::BaseApp _,double y,double x);
		static Dynamic atan2_dyn();

		static double tan( ::of::app::BaseApp _,double v);
		static Dynamic tan_dyn();

		static double exp( ::of::app::BaseApp _,double v);
		static Dynamic exp_dyn();

		static double sqrt( ::of::app::BaseApp _,double v);
		static Dynamic sqrt_dyn();

		static int round( ::of::app::BaseApp _,double v);
		static Dynamic round_dyn();

		static int floor( ::of::app::BaseApp _,double v);
		static Dynamic floor_dyn();

		static int ceil( ::of::app::BaseApp _,double v);
		static Dynamic ceil_dyn();

		static double atan( ::of::app::BaseApp _,double v);
		static Dynamic atan_dyn();

		static double asin( ::of::app::BaseApp _,double v);
		static Dynamic asin_dyn();

		static double acos( ::of::app::BaseApp _,double v);
		static Dynamic acos_dyn();

		static double pow( ::of::app::BaseApp _,double v,double exp);
		static Dynamic pow_dyn();

		static double log( ::of::app::BaseApp _,double v);
		static Dynamic log_dyn();

		static Void background( ::of::app::BaseApp _,int r,int g,int b);
		static Dynamic background_dyn();

		static Void setBackgroundAuto( ::of::app::BaseApp _,bool bManual);
		static Dynamic setBackgroundAuto_dyn();

		static Void setRectMode( ::of::app::BaseApp _,int mode);
		static Dynamic setRectMode_dyn();

		static bool getUsingArbTex( ::of::app::BaseApp _);
		static Dynamic getUsingArbTex_dyn();

		static Void enableArbTex( ::of::app::BaseApp _);
		static Dynamic enableArbTex_dyn();

		static Void disableArbTex( ::of::app::BaseApp _);
		static Dynamic disableArbTex_dyn();

		static bool bClearBg( ::of::app::BaseApp _);
		static Dynamic bClearBg_dyn();

		static int getRectMode( ::of::app::BaseApp _);
		static Dynamic getRectMode_dyn();

		static Void setCurveResolution( ::of::app::BaseApp _,int res);
		static Dynamic setCurveResolution_dyn();

		static Void triangle( ::of::app::BaseApp _,double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic triangle_dyn();

		static Void circle( ::of::app::BaseApp _,double x,double y,double radius);
		static Dynamic circle_dyn();

		static Void ellipse( ::of::app::BaseApp _,double x,double y,double width,double height);
		static Dynamic ellipse_dyn();

		static Void line( ::of::app::BaseApp _,double x1,double y1,double x2,double y2);
		static Dynamic line_dyn();

		static Void rect( ::of::app::BaseApp _,double x1,double y1,double w,double h);
		static Dynamic rect_dyn();

		static Void setCircleResolution( ::of::app::BaseApp _,int res);
		static Dynamic setCircleResolution_dyn();

		static Void curve( ::of::app::BaseApp _,double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic curve_dyn();

		static Void bezier( ::of::app::BaseApp _,double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic bezier_dyn();

		static Void noFill( ::of::app::BaseApp _);
		static Dynamic noFill_dyn();

		static Void fill( ::of::app::BaseApp _);
		static Dynamic fill_dyn();

		static Void setLineWidth( ::of::app::BaseApp _,double lineWidth);
		static Dynamic setLineWidth_dyn();

		static Void setColor( ::of::app::BaseApp _,int rOrHex,Dynamic g,Dynamic b,Dynamic a);
		static Dynamic setColor_dyn();

		static Void enableAlphaBlending( ::of::app::BaseApp _);
		static Dynamic enableAlphaBlending_dyn();

		static Void disableAlphaBlending( ::of::app::BaseApp _);
		static Dynamic disableAlphaBlending_dyn();

		static Void enableSmoothing( ::of::app::BaseApp _);
		static Dynamic enableSmoothing_dyn();

		static Void disableSmoothing( ::of::app::BaseApp _);
		static Dynamic disableSmoothing_dyn();

		static ::of::utils::Style getStyle( ::of::app::BaseApp _);
		static Dynamic getStyle_dyn();

		static Void setStyle( ::of::app::BaseApp _,::of::utils::Style style);
		static Dynamic setStyle_dyn();

		static Void pushStyle( ::of::app::BaseApp _);
		static Dynamic pushStyle_dyn();

		static Void popStyle( ::of::app::BaseApp _);
		static Dynamic popStyle_dyn();

		static Void pushMatrix( ::of::app::BaseApp _);
		static Dynamic pushMatrix_dyn();

		static Void popMatrix( ::of::app::BaseApp _);
		static Dynamic popMatrix_dyn();

		static Void translate( ::of::app::BaseApp _,double x,double y,Dynamic z);
		static Dynamic translate_dyn();

		static Void scale( ::of::app::BaseApp _,double xAmnt,double yAmnt,Dynamic zAmnt);
		static Dynamic scale_dyn();

		static Void rotate( ::of::app::BaseApp _,double degrees,Dynamic vecX,Dynamic vecY,Dynamic vecZ);
		static Dynamic rotate_dyn();

		static Void rotateX( ::of::app::BaseApp _,double degrees);
		static Dynamic rotateX_dyn();

		static Void rotateY( ::of::app::BaseApp _,double degrees);
		static Dynamic rotateY_dyn();

		static Void rotateZ( ::of::app::BaseApp _,double degrees);
		static Dynamic rotateZ_dyn();

		static Void drawBitmapString( ::of::app::BaseApp _,::String textString,double x,double y);
		static Dynamic drawBitmapString_dyn();

		static Void setupGraphicDefaults( ::of::app::BaseApp _);
		static Dynamic setupGraphicDefaults_dyn();

		static Void setupScreen( ::of::app::BaseApp _);
		static Dynamic setupScreen_dyn();

		static Void curveVertex( ::of::app::BaseApp _,double x,double y);
		static Dynamic curveVertex_dyn();

		static Void bezierVertex( ::of::app::BaseApp _,double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic bezierVertex_dyn();

		static Void setPolyMode( ::of::app::BaseApp _,int mode);
		static Dynamic setPolyMode_dyn();

		static Void beginShape( ::of::app::BaseApp _);
		static Dynamic beginShape_dyn();

		static Void vertex( ::of::app::BaseApp _,double x,double y);
		static Dynamic vertex_dyn();

		static Void endShape( ::of::app::BaseApp _,Dynamic bClose);
		static Dynamic endShape_dyn();

		static Void nextContour( ::of::app::BaseApp _,Dynamic bClose);
		static Dynamic nextContour_dyn();

		static Void soundStopAll( ::of::app::BaseApp _);
		static Dynamic soundStopAll_dyn();

		static Void soundSetVolume( ::of::app::BaseApp _,double vol);
		static Dynamic soundSetVolume_dyn();

		static Void soundUpdate( ::of::app::BaseApp _);
		static Dynamic soundUpdate_dyn();

		static Array< double > soundGetSpectrum( ::of::app::BaseApp _,int nBands);
		static Dynamic soundGetSpectrum_dyn();

		static Void soundStreamSetup( ::of::app::BaseApp _,int nOutputChannels,int nInputChannels,::of::app::BaseApp OFSA,Dynamic sampleRate,Dynamic bufferSize,Dynamic nBuffers);
		static Dynamic soundStreamSetup_dyn();

		static Void soundStreamStop( ::of::app::BaseApp _);
		static Dynamic soundStreamStop_dyn();

		static Void soundStreamStart( ::of::app::BaseApp _);
		static Dynamic soundStreamStart_dyn();

		static Void soundStreamClose( ::of::app::BaseApp _);
		static Dynamic soundStreamClose_dyn();

		static Void soundStreamListDevices( ::of::app::BaseApp _);
		static Dynamic soundStreamListDevices_dyn();

};

} // end namespace of
} // end namespace helpers

#endif /* INCLUDED_of_helpers_OpenFrameworksContext */ 
