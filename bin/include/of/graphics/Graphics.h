#ifndef INCLUDED_of_graphics_Graphics
#define INCLUDED_of_graphics_Graphics

#include <hxcpp.h>

HX_DECLARE_CLASS2(of,graphics,Graphics)
HX_DECLARE_CLASS2(of,utils,Style)
namespace of{
namespace graphics{


class Graphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Graphics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Graphics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Graphics"); }

		static Void background( int r,int g,int b);
		static Dynamic background_dyn();

		static Void setBackgroundAuto( bool bManual);
		static Dynamic setBackgroundAuto_dyn();

		static Void setRectMode( int mode);
		static Dynamic setRectMode_dyn();

		static bool getUsingArbTex( );
		static Dynamic getUsingArbTex_dyn();

		static Void enableArbTex( );
		static Dynamic enableArbTex_dyn();

		static Void disableArbTex( );
		static Dynamic disableArbTex_dyn();

		static bool bClearBg( );
		static Dynamic bClearBg_dyn();

		static int getRectMode( );
		static Dynamic getRectMode_dyn();

		static Void setCurveResolution( int res);
		static Dynamic setCurveResolution_dyn();

		static Void triangle( double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic triangle_dyn();

		static Void circle( double x,double y,double radius);
		static Dynamic circle_dyn();

		static Void ellipse( double x,double y,double width,double height);
		static Dynamic ellipse_dyn();

		static Void line( double x1,double y1,double x2,double y2);
		static Dynamic line_dyn();

		static Void rect( double x1,double y1,double w,double h);
		static Dynamic rect_dyn();

		static Void setCircleResolution( int res);
		static Dynamic setCircleResolution_dyn();

		static Void curve( double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic curve_dyn();

		static Void bezier( double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic bezier_dyn();

		static Void noFill( );
		static Dynamic noFill_dyn();

		static Void fill( );
		static Dynamic fill_dyn();

		static Void setLineWidth( double lineWidth);
		static Dynamic setLineWidth_dyn();

		static Void setColor( int rOrHex,Dynamic g,Dynamic b,Dynamic a);
		static Dynamic setColor_dyn();

		static Void enableAlphaBlending( );
		static Dynamic enableAlphaBlending_dyn();

		static Void disableAlphaBlending( );
		static Dynamic disableAlphaBlending_dyn();

		static Void enableSmoothing( );
		static Dynamic enableSmoothing_dyn();

		static Void disableSmoothing( );
		static Dynamic disableSmoothing_dyn();

		static ::of::utils::Style getStyle( );
		static Dynamic getStyle_dyn();

		static Void setStyle( ::of::utils::Style style);
		static Dynamic setStyle_dyn();

		static Void pushStyle( );
		static Dynamic pushStyle_dyn();

		static Void popStyle( );
		static Dynamic popStyle_dyn();

		static Void pushMatrix( );
		static Dynamic pushMatrix_dyn();

		static Void popMatrix( );
		static Dynamic popMatrix_dyn();

		static Void translate( double x,double y,Dynamic z);
		static Dynamic translate_dyn();

		static Void scale( double xAmnt,double yAmnt,Dynamic zAmnt);
		static Dynamic scale_dyn();

		static Void rotate( double degrees,Dynamic vecX,Dynamic vecY,Dynamic vecZ);
		static Dynamic rotate_dyn();

		static Void rotateX( double degrees);
		static Dynamic rotateX_dyn();

		static Void rotateY( double degrees);
		static Dynamic rotateY_dyn();

		static Void rotateZ( double degrees);
		static Dynamic rotateZ_dyn();

		static Void drawBitmapString( ::String textString,double x,double y);
		static Dynamic drawBitmapString_dyn();

		static Void setupGraphicDefaults( );
		static Dynamic setupGraphicDefaults_dyn();

		static Void setupScreen( );
		static Dynamic setupScreen_dyn();

		static Void curveVertex( double x,double y);
		static Dynamic curveVertex_dyn();

		static Void bezierVertex( double x1,double y1,double x2,double y2,double x3,double y3);
		static Dynamic bezierVertex_dyn();

		static Void setPolyMode( int mode);
		static Dynamic setPolyMode_dyn();

		static Void beginShape( );
		static Dynamic beginShape_dyn();

		static Void vertex( double x,double y);
		static Dynamic vertex_dyn();

		static Void endShape( Dynamic bClose);
		static Dynamic endShape_dyn();

		static Void nextContour( Dynamic bClose);
		static Dynamic nextContour_dyn();

		static Dynamic _ofBackground; /* REM */ 
	Dynamic &_ofBackground_dyn() { return _ofBackground;}
		static Dynamic _ofSetBackgroundAuto; /* REM */ 
	Dynamic &_ofSetBackgroundAuto_dyn() { return _ofSetBackgroundAuto;}
		static Dynamic _ofSetRectMode; /* REM */ 
	Dynamic &_ofSetRectMode_dyn() { return _ofSetRectMode;}
		static Dynamic _ofGetUsingArbTex; /* REM */ 
	Dynamic &_ofGetUsingArbTex_dyn() { return _ofGetUsingArbTex;}
		static Dynamic _ofEnableArbTex; /* REM */ 
	Dynamic &_ofEnableArbTex_dyn() { return _ofEnableArbTex;}
		static Dynamic _ofDisableArbTex; /* REM */ 
	Dynamic &_ofDisableArbTex_dyn() { return _ofDisableArbTex;}
		static Dynamic _ofbClearBg; /* REM */ 
	Dynamic &_ofbClearBg_dyn() { return _ofbClearBg;}
		static Dynamic _ofGetRectMode; /* REM */ 
	Dynamic &_ofGetRectMode_dyn() { return _ofGetRectMode;}
		static Dynamic _ofSetCurveResolution; /* REM */ 
	Dynamic &_ofSetCurveResolution_dyn() { return _ofSetCurveResolution;}
		static Dynamic _ofTriangle; /* REM */ 
	Dynamic &_ofTriangle_dyn() { return _ofTriangle;}
		static Dynamic _ofCircle; /* REM */ 
	Dynamic &_ofCircle_dyn() { return _ofCircle;}
		static Dynamic _ofEllipse; /* REM */ 
	Dynamic &_ofEllipse_dyn() { return _ofEllipse;}
		static Dynamic _ofLine; /* REM */ 
	Dynamic &_ofLine_dyn() { return _ofLine;}
		static Dynamic _ofRect; /* REM */ 
	Dynamic &_ofRect_dyn() { return _ofRect;}
		static Dynamic _ofSetCircleResolution; /* REM */ 
	Dynamic &_ofSetCircleResolution_dyn() { return _ofSetCircleResolution;}
		static Dynamic _ofCurve; /* REM */ 
	Dynamic &_ofCurve_dyn() { return _ofCurve;}
		static Dynamic _ofBezier; /* REM */ 
	Dynamic &_ofBezier_dyn() { return _ofBezier;}
		static Dynamic _ofNoFill; /* REM */ 
	Dynamic &_ofNoFill_dyn() { return _ofNoFill;}
		static Dynamic _ofFill; /* REM */ 
	Dynamic &_ofFill_dyn() { return _ofFill;}
		static Dynamic _ofSetLineWidth; /* REM */ 
	Dynamic &_ofSetLineWidth_dyn() { return _ofSetLineWidth;}
		static Dynamic _ofSetColor3; /* REM */ 
	Dynamic &_ofSetColor3_dyn() { return _ofSetColor3;}
		static Dynamic _ofSetColor4; /* REM */ 
	Dynamic &_ofSetColor4_dyn() { return _ofSetColor4;}
		static Dynamic _ofSetColor1; /* REM */ 
	Dynamic &_ofSetColor1_dyn() { return _ofSetColor1;}
		static Dynamic _ofEnableAlphaBlending; /* REM */ 
	Dynamic &_ofEnableAlphaBlending_dyn() { return _ofEnableAlphaBlending;}
		static Dynamic _ofDisableAlphaBlending; /* REM */ 
	Dynamic &_ofDisableAlphaBlending_dyn() { return _ofDisableAlphaBlending;}
		static Dynamic _ofEnableSmoothing; /* REM */ 
	Dynamic &_ofEnableSmoothing_dyn() { return _ofEnableSmoothing;}
		static Dynamic _ofDisableSmoothing; /* REM */ 
	Dynamic &_ofDisableSmoothing_dyn() { return _ofDisableSmoothing;}
		static Dynamic _ofGetStyle; /* REM */ 
	Dynamic &_ofGetStyle_dyn() { return _ofGetStyle;}
		static Dynamic _ofSetStyle; /* REM */ 
	Dynamic &_ofSetStyle_dyn() { return _ofSetStyle;}
		static Dynamic _ofPushStyle; /* REM */ 
	Dynamic &_ofPushStyle_dyn() { return _ofPushStyle;}
		static Dynamic _ofPopStyle; /* REM */ 
	Dynamic &_ofPopStyle_dyn() { return _ofPopStyle;}
		static Dynamic _ofPushMatrix; /* REM */ 
	Dynamic &_ofPushMatrix_dyn() { return _ofPushMatrix;}
		static Dynamic _ofPopMatrix; /* REM */ 
	Dynamic &_ofPopMatrix_dyn() { return _ofPopMatrix;}
		static Dynamic _ofTranslate; /* REM */ 
	Dynamic &_ofTranslate_dyn() { return _ofTranslate;}
		static Dynamic _ofScale; /* REM */ 
	Dynamic &_ofScale_dyn() { return _ofScale;}
		static Dynamic _ofRotate4; /* REM */ 
	Dynamic &_ofRotate4_dyn() { return _ofRotate4;}
		static Dynamic _ofRotate1; /* REM */ 
	Dynamic &_ofRotate1_dyn() { return _ofRotate1;}
		static Dynamic _ofRotateX; /* REM */ 
	Dynamic &_ofRotateX_dyn() { return _ofRotateX;}
		static Dynamic _ofRotateY; /* REM */ 
	Dynamic &_ofRotateY_dyn() { return _ofRotateY;}
		static Dynamic _ofRotateZ; /* REM */ 
	Dynamic &_ofRotateZ_dyn() { return _ofRotateZ;}
		static Dynamic _ofDrawBitmapString; /* REM */ 
	Dynamic &_ofDrawBitmapString_dyn() { return _ofDrawBitmapString;}
		static Dynamic _ofSetupGraphicDefaults; /* REM */ 
	Dynamic &_ofSetupGraphicDefaults_dyn() { return _ofSetupGraphicDefaults;}
		static Dynamic _ofSetupScreen; /* REM */ 
	Dynamic &_ofSetupScreen_dyn() { return _ofSetupScreen;}
		static Dynamic _ofCurveVertex; /* REM */ 
	Dynamic &_ofCurveVertex_dyn() { return _ofCurveVertex;}
		static Dynamic _ofBezierVertex; /* REM */ 
	Dynamic &_ofBezierVertex_dyn() { return _ofBezierVertex;}
		static Dynamic _ofSetPolyMode; /* REM */ 
	Dynamic &_ofSetPolyMode_dyn() { return _ofSetPolyMode;}
		static Dynamic _ofBeginShape; /* REM */ 
	Dynamic &_ofBeginShape_dyn() { return _ofBeginShape;}
		static Dynamic _ofVertex; /* REM */ 
	Dynamic &_ofVertex_dyn() { return _ofVertex;}
		static Dynamic _ofEndShape; /* REM */ 
	Dynamic &_ofEndShape_dyn() { return _ofEndShape;}
		static Dynamic _ofNextContour; /* REM */ 
	Dynamic &_ofNextContour_dyn() { return _ofNextContour;}
};

} // end namespace of
} // end namespace graphics

#endif /* INCLUDED_of_graphics_Graphics */ 
