#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_of_graphics_Graphics
#include <of/graphics/Graphics.h>
#endif
#ifndef INCLUDED_of_utils_Style
#include <of/utils/Style.h>
#endif
namespace of{
namespace graphics{

Void Graphics_obj::__construct()
{
	return null();
}

Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new()
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct();
	return result;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct();
	return result;}

Void Graphics_obj::background( int r,int g,int b){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::background")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",13)
		::of::graphics::Graphics_obj::_ofBackground(r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,background,(void))

Void Graphics_obj::setBackgroundAuto( bool bManual){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setBackgroundAuto")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",19)
		::of::graphics::Graphics_obj::_ofSetBackgroundAuto(bManual);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setBackgroundAuto,(void))

Void Graphics_obj::setRectMode( int mode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setRectMode")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",23)
		::of::graphics::Graphics_obj::_ofSetRectMode(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setRectMode,(void))

bool Graphics_obj::getUsingArbTex( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Graphics_obj::getUsingArbTex")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",28)
	return ::of::graphics::Graphics_obj::_ofGetUsingArbTex();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,getUsingArbTex,return )

Void Graphics_obj::enableArbTex( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::enableArbTex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",31)
		::of::graphics::Graphics_obj::_ofEnableArbTex();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,enableArbTex,(void))

Void Graphics_obj::disableArbTex( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::disableArbTex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",34)
		::of::graphics::Graphics_obj::_ofDisableArbTex();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,disableArbTex,(void))

bool Graphics_obj::bClearBg( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Graphics_obj::bClearBg")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",39)
	return ::of::graphics::Graphics_obj::_ofbClearBg();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,bClearBg,return )

int Graphics_obj::getRectMode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Graphics_obj::getRectMode")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",44)
	return ::of::graphics::Graphics_obj::_ofGetRectMode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,getRectMode,return )

Void Graphics_obj::setCurveResolution( int res){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setCurveResolution")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",48)
		::of::graphics::Graphics_obj::_ofSetCurveResolution(res);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setCurveResolution,(void))

Void Graphics_obj::triangle( double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::triangle")
		struct _Function_1_1{
			inline static Dynamic Block( double &y1,double &x2,double &x1,double &y3,double &y2,double &x3){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x1") , x1);
				__result->Add(HX_CSTRING("y1") , y1);
				__result->Add(HX_CSTRING("x2") , x2);
				__result->Add(HX_CSTRING("y2") , y2);
				__result->Add(HX_CSTRING("x3") , x3);
				__result->Add(HX_CSTRING("y3") , y3);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",53)
		::of::graphics::Graphics_obj::_ofTriangle(_Function_1_1::Block(y1,x2,x1,y3,y2,x3));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,triangle,(void))

Void Graphics_obj::circle( double x,double y,double radius){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::circle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",56)
		::of::graphics::Graphics_obj::_ofCircle(x,y,radius);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,circle,(void))

Void Graphics_obj::ellipse( double x,double y,double width,double height){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::ellipse")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",59)
		::of::graphics::Graphics_obj::_ofEllipse(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,ellipse,(void))

Void Graphics_obj::line( double x1,double y1,double x2,double y2){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::line")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",62)
		::of::graphics::Graphics_obj::_ofLine(x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,line,(void))

Void Graphics_obj::rect( double x1,double y1,double w,double h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::rect")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",65)
		::of::graphics::Graphics_obj::_ofRect(x1,y1,w,h);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,rect,(void))

Void Graphics_obj::setCircleResolution( int res){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setCircleResolution")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",70)
		::of::graphics::Graphics_obj::_ofSetCircleResolution(res);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setCircleResolution,(void))

Void Graphics_obj::curve( double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::curve")
		struct _Function_1_1{
			inline static Dynamic Block( double &x2,double &x1,double &y3,double &x0,double &y2,double &y1,double &y0,double &x3){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x0") , x0);
				__result->Add(HX_CSTRING("y0") , y0);
				__result->Add(HX_CSTRING("x1") , x1);
				__result->Add(HX_CSTRING("y1") , y1);
				__result->Add(HX_CSTRING("x2") , x2);
				__result->Add(HX_CSTRING("y2") , y2);
				__result->Add(HX_CSTRING("x3") , x3);
				__result->Add(HX_CSTRING("y3") , y3);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",74)
		::of::graphics::Graphics_obj::_ofCurve(_Function_1_1::Block(x2,x1,y3,x0,y2,y1,y0,x3));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,curve,(void))

Void Graphics_obj::bezier( double x0,double y0,double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::bezier")
		struct _Function_1_1{
			inline static Dynamic Block( double &x2,double &x1,double &y3,double &x0,double &y2,double &y1,double &y0,double &x3){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x0") , x0);
				__result->Add(HX_CSTRING("y0") , y0);
				__result->Add(HX_CSTRING("x1") , x1);
				__result->Add(HX_CSTRING("y1") , y1);
				__result->Add(HX_CSTRING("x2") , x2);
				__result->Add(HX_CSTRING("y2") , y2);
				__result->Add(HX_CSTRING("x3") , x3);
				__result->Add(HX_CSTRING("y3") , y3);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",77)
		::of::graphics::Graphics_obj::_ofBezier(_Function_1_1::Block(x2,x1,y3,x0,y2,y1,y0,x3));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,bezier,(void))

Void Graphics_obj::noFill( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::noFill")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",83)
		::of::graphics::Graphics_obj::_ofNoFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,noFill,(void))

Void Graphics_obj::fill( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::fill")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",86)
		::of::graphics::Graphics_obj::_ofFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,fill,(void))

Void Graphics_obj::setLineWidth( double lineWidth){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setLineWidth")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",90)
		::of::graphics::Graphics_obj::_ofSetLineWidth(lineWidth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setLineWidth,(void))

Void Graphics_obj::setColor( int rOrHex,Dynamic g,Dynamic b,Dynamic a){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setColor")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",98)
		if ((a != null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",98)
			::of::graphics::Graphics_obj::_ofSetColor4(rOrHex,g,b,a);
		}
		else{
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",99)
			if ((b != null())){
				HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",99)
				::of::graphics::Graphics_obj::_ofSetColor3(rOrHex,g,b);
			}
			else{
				HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",100)
				::of::graphics::Graphics_obj::_ofSetColor1(rOrHex);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,setColor,(void))

Void Graphics_obj::enableAlphaBlending( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::enableAlphaBlending")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",106)
		::of::graphics::Graphics_obj::_ofEnableAlphaBlending();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,enableAlphaBlending,(void))

Void Graphics_obj::disableAlphaBlending( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::disableAlphaBlending")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",109)
		::of::graphics::Graphics_obj::_ofDisableAlphaBlending();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,disableAlphaBlending,(void))

Void Graphics_obj::enableSmoothing( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::enableSmoothing")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",114)
		::of::graphics::Graphics_obj::_ofEnableSmoothing();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,enableSmoothing,(void))

Void Graphics_obj::disableSmoothing( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::disableSmoothing")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",117)
		::of::graphics::Graphics_obj::_ofDisableSmoothing();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,disableSmoothing,(void))

::of::utils::Style Graphics_obj::getStyle( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Graphics_obj::getStyle")
	HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",123)
	return ::of::utils::Style_obj::__new(::of::graphics::Graphics_obj::_ofGetStyle());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,getStyle,return )

Void Graphics_obj::setStyle( ::of::utils::Style style){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",126)
		::of::graphics::Graphics_obj::_ofSetStyle(style->__Field(HX_CSTRING("__handle")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setStyle,(void))

Void Graphics_obj::pushStyle( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::pushStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",130)
		::of::graphics::Graphics_obj::_ofPushStyle();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,pushStyle,(void))

Void Graphics_obj::popStyle( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::popStyle")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",133)
		::of::graphics::Graphics_obj::_ofPopStyle();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,popStyle,(void))

Void Graphics_obj::pushMatrix( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::pushMatrix")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",138)
		::of::graphics::Graphics_obj::_ofPushMatrix();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,pushMatrix,(void))

Void Graphics_obj::popMatrix( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::popMatrix")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",141)
		::of::graphics::Graphics_obj::_ofPopMatrix();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,popMatrix,(void))

Void Graphics_obj::translate( double x,double y,Dynamic __o_z){
double z = __o_z.Default(0);
	HX_SOURCE_PUSH("Graphics_obj::translate");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",144)
		::of::graphics::Graphics_obj::_ofTranslate(x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,translate,(void))

Void Graphics_obj::scale( double xAmnt,double yAmnt,Dynamic __o_zAmnt){
double zAmnt = __o_zAmnt.Default(1);
	HX_SOURCE_PUSH("Graphics_obj::scale");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",147)
		::of::graphics::Graphics_obj::_ofScale(xAmnt,yAmnt,zAmnt);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,scale,(void))

Void Graphics_obj::rotate( double degrees,Dynamic vecX,Dynamic vecY,Dynamic vecZ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::rotate")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",150)
		if ((vecX == null())){
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",150)
			::of::graphics::Graphics_obj::_ofRotate1(degrees);
		}
		else{
			HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",151)
			::of::graphics::Graphics_obj::_ofRotate4(degrees,vecX,vecY,vecZ);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,rotate,(void))

Void Graphics_obj::rotateX( double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::rotateX")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",154)
		::of::graphics::Graphics_obj::_ofRotateX(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,rotateX,(void))

Void Graphics_obj::rotateY( double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::rotateY")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",157)
		::of::graphics::Graphics_obj::_ofRotateY(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,rotateY,(void))

Void Graphics_obj::rotateZ( double degrees){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::rotateZ")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",160)
		::of::graphics::Graphics_obj::_ofRotateZ(degrees);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,rotateZ,(void))

Void Graphics_obj::drawBitmapString( ::String textString,double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::drawBitmapString")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",166)
		::of::graphics::Graphics_obj::_ofDrawBitmapString(textString,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawBitmapString,(void))

Void Graphics_obj::setupGraphicDefaults( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setupGraphicDefaults")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",171)
		::of::graphics::Graphics_obj::_ofSetupGraphicDefaults();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,setupGraphicDefaults,(void))

Void Graphics_obj::setupScreen( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setupScreen")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",174)
		::of::graphics::Graphics_obj::_ofSetupScreen();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,setupScreen,(void))

Void Graphics_obj::curveVertex( double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::curveVertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",178)
		::of::graphics::Graphics_obj::_ofCurveVertex(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,curveVertex,(void))

Void Graphics_obj::bezierVertex( double x1,double y1,double x2,double y2,double x3,double y3){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::bezierVertex")
		struct _Function_1_1{
			inline static Dynamic Block( double &y1,double &x2,double &x1,double &y3,double &y2,double &x3){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x1") , x1);
				__result->Add(HX_CSTRING("y1") , y1);
				__result->Add(HX_CSTRING("x2") , x2);
				__result->Add(HX_CSTRING("y2") , y2);
				__result->Add(HX_CSTRING("x3") , x3);
				__result->Add(HX_CSTRING("y3") , y3);
				return __result;
			}
		};
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",181)
		::of::graphics::Graphics_obj::_ofBezierVertex(_Function_1_1::Block(y1,x2,x1,y3,y2,x3));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,bezierVertex,(void))

Void Graphics_obj::setPolyMode( int mode){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::setPolyMode")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",186)
		::of::graphics::Graphics_obj::_ofSetPolyMode(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setPolyMode,(void))

Void Graphics_obj::beginShape( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::beginShape")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",189)
		::of::graphics::Graphics_obj::_ofBeginShape();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,beginShape,(void))

Void Graphics_obj::vertex( double x,double y){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Graphics_obj::vertex")
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",192)
		::of::graphics::Graphics_obj::_ofVertex(x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,vertex,(void))

Void Graphics_obj::endShape( Dynamic __o_bClose){
bool bClose = __o_bClose.Default(false);
	HX_SOURCE_PUSH("Graphics_obj::endShape");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",195)
		::of::graphics::Graphics_obj::_ofEndShape(bClose);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,endShape,(void))

Void Graphics_obj::nextContour( Dynamic __o_bClose){
bool bClose = __o_bClose.Default(false);
	HX_SOURCE_PUSH("Graphics_obj::nextContour");
{
		__SAFE_POINT
		HX_SOURCE_POS("../../hxOpenFrameworks/of/graphics/Graphics.hx",200)
		::of::graphics::Graphics_obj::_ofNextContour(bClose);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,nextContour,(void))

Dynamic Graphics_obj::_ofBackground;

Dynamic Graphics_obj::_ofSetBackgroundAuto;

Dynamic Graphics_obj::_ofSetRectMode;

Dynamic Graphics_obj::_ofGetUsingArbTex;

Dynamic Graphics_obj::_ofEnableArbTex;

Dynamic Graphics_obj::_ofDisableArbTex;

Dynamic Graphics_obj::_ofbClearBg;

Dynamic Graphics_obj::_ofGetRectMode;

Dynamic Graphics_obj::_ofSetCurveResolution;

Dynamic Graphics_obj::_ofTriangle;

Dynamic Graphics_obj::_ofCircle;

Dynamic Graphics_obj::_ofEllipse;

Dynamic Graphics_obj::_ofLine;

Dynamic Graphics_obj::_ofRect;

Dynamic Graphics_obj::_ofSetCircleResolution;

Dynamic Graphics_obj::_ofCurve;

Dynamic Graphics_obj::_ofBezier;

Dynamic Graphics_obj::_ofNoFill;

Dynamic Graphics_obj::_ofFill;

Dynamic Graphics_obj::_ofSetLineWidth;

Dynamic Graphics_obj::_ofSetColor3;

Dynamic Graphics_obj::_ofSetColor4;

Dynamic Graphics_obj::_ofSetColor1;

Dynamic Graphics_obj::_ofEnableAlphaBlending;

Dynamic Graphics_obj::_ofDisableAlphaBlending;

Dynamic Graphics_obj::_ofEnableSmoothing;

Dynamic Graphics_obj::_ofDisableSmoothing;

Dynamic Graphics_obj::_ofGetStyle;

Dynamic Graphics_obj::_ofSetStyle;

Dynamic Graphics_obj::_ofPushStyle;

Dynamic Graphics_obj::_ofPopStyle;

Dynamic Graphics_obj::_ofPushMatrix;

Dynamic Graphics_obj::_ofPopMatrix;

Dynamic Graphics_obj::_ofTranslate;

Dynamic Graphics_obj::_ofScale;

Dynamic Graphics_obj::_ofRotate4;

Dynamic Graphics_obj::_ofRotate1;

Dynamic Graphics_obj::_ofRotateX;

Dynamic Graphics_obj::_ofRotateY;

Dynamic Graphics_obj::_ofRotateZ;

Dynamic Graphics_obj::_ofDrawBitmapString;

Dynamic Graphics_obj::_ofSetupGraphicDefaults;

Dynamic Graphics_obj::_ofSetupScreen;

Dynamic Graphics_obj::_ofCurveVertex;

Dynamic Graphics_obj::_ofBezierVertex;

Dynamic Graphics_obj::_ofSetPolyMode;

Dynamic Graphics_obj::_ofBeginShape;

Dynamic Graphics_obj::_ofVertex;

Dynamic Graphics_obj::_ofEndShape;

Dynamic Graphics_obj::_ofNextContour;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_END_CLASS();
}

Dynamic Graphics_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"curve") ) { return curve_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle_dyn(); }
		if (HX_FIELD_EQ(inName,"bezier") ) { return bezier_dyn(); }
		if (HX_FIELD_EQ(inName,"noFill") ) { return noFill_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ellipse") ) { return ellipse_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateX") ) { return rotateX_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateY") ) { return rotateY_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateZ") ) { return rotateZ_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofLine") ) { return _ofLine; }
		if (HX_FIELD_EQ(inName,"_ofRect") ) { return _ofRect; }
		if (HX_FIELD_EQ(inName,"_ofFill") ) { return _ofFill; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bClearBg") ) { return bClearBg_dyn(); }
		if (HX_FIELD_EQ(inName,"triangle") ) { return triangle_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"setStyle") ) { return setStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"popStyle") ) { return popStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"endShape") ) { return endShape_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofCurve") ) { return _ofCurve; }
		if (HX_FIELD_EQ(inName,"_ofScale") ) { return _ofScale; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pushStyle") ) { return pushStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"popMatrix") ) { return popMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofCircle") ) { return _ofCircle; }
		if (HX_FIELD_EQ(inName,"_ofBezier") ) { return _ofBezier; }
		if (HX_FIELD_EQ(inName,"_ofNoFill") ) { return _ofNoFill; }
		if (HX_FIELD_EQ(inName,"_ofVertex") ) { return _ofVertex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background_dyn(); }
		if (HX_FIELD_EQ(inName,"pushMatrix") ) { return pushMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"beginShape") ) { return beginShape_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofEllipse") ) { return _ofEllipse; }
		if (HX_FIELD_EQ(inName,"_ofRotate4") ) { return _ofRotate4; }
		if (HX_FIELD_EQ(inName,"_ofRotate1") ) { return _ofRotate1; }
		if (HX_FIELD_EQ(inName,"_ofRotateX") ) { return _ofRotateX; }
		if (HX_FIELD_EQ(inName,"_ofRotateY") ) { return _ofRotateY; }
		if (HX_FIELD_EQ(inName,"_ofRotateZ") ) { return _ofRotateZ; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRectMode") ) { return setRectMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getRectMode") ) { return getRectMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setupScreen") ) { return setupScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"curveVertex") ) { return curveVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"setPolyMode") ) { return setPolyMode_dyn(); }
		if (HX_FIELD_EQ(inName,"nextContour") ) { return nextContour_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofbClearBg") ) { return _ofbClearBg; }
		if (HX_FIELD_EQ(inName,"_ofTriangle") ) { return _ofTriangle; }
		if (HX_FIELD_EQ(inName,"_ofGetStyle") ) { return _ofGetStyle; }
		if (HX_FIELD_EQ(inName,"_ofSetStyle") ) { return _ofSetStyle; }
		if (HX_FIELD_EQ(inName,"_ofPopStyle") ) { return _ofPopStyle; }
		if (HX_FIELD_EQ(inName,"_ofEndShape") ) { return _ofEndShape; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enableArbTex") ) { return enableArbTex_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineWidth") ) { return setLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"bezierVertex") ) { return bezierVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofSetColor3") ) { return _ofSetColor3; }
		if (HX_FIELD_EQ(inName,"_ofSetColor4") ) { return _ofSetColor4; }
		if (HX_FIELD_EQ(inName,"_ofSetColor1") ) { return _ofSetColor1; }
		if (HX_FIELD_EQ(inName,"_ofPushStyle") ) { return _ofPushStyle; }
		if (HX_FIELD_EQ(inName,"_ofPopMatrix") ) { return _ofPopMatrix; }
		if (HX_FIELD_EQ(inName,"_ofTranslate") ) { return _ofTranslate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disableArbTex") ) { return disableArbTex_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofBackground") ) { return _ofBackground; }
		if (HX_FIELD_EQ(inName,"_ofPushMatrix") ) { return _ofPushMatrix; }
		if (HX_FIELD_EQ(inName,"_ofBeginShape") ) { return _ofBeginShape; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getUsingArbTex") ) { return getUsingArbTex_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofSetRectMode") ) { return _ofSetRectMode; }
		if (HX_FIELD_EQ(inName,"_ofGetRectMode") ) { return _ofGetRectMode; }
		if (HX_FIELD_EQ(inName,"_ofSetupScreen") ) { return _ofSetupScreen; }
		if (HX_FIELD_EQ(inName,"_ofCurveVertex") ) { return _ofCurveVertex; }
		if (HX_FIELD_EQ(inName,"_ofSetPolyMode") ) { return _ofSetPolyMode; }
		if (HX_FIELD_EQ(inName,"_ofNextContour") ) { return _ofNextContour; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableSmoothing") ) { return enableSmoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofEnableArbTex") ) { return _ofEnableArbTex; }
		if (HX_FIELD_EQ(inName,"_ofSetLineWidth") ) { return _ofSetLineWidth; }
		if (HX_FIELD_EQ(inName,"_ofBezierVertex") ) { return _ofBezierVertex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableSmoothing") ) { return disableSmoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"drawBitmapString") ) { return drawBitmapString_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofDisableArbTex") ) { return _ofDisableArbTex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setBackgroundAuto") ) { return setBackgroundAuto_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofGetUsingArbTex") ) { return _ofGetUsingArbTex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setCurveResolution") ) { return setCurveResolution_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofEnableSmoothing") ) { return _ofEnableSmoothing; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setCircleResolution") ) { return setCircleResolution_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAlphaBlending") ) { return enableAlphaBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofDisableSmoothing") ) { return _ofDisableSmoothing; }
		if (HX_FIELD_EQ(inName,"_ofDrawBitmapString") ) { return _ofDrawBitmapString; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"disableAlphaBlending") ) { return disableAlphaBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"setupGraphicDefaults") ) { return setupGraphicDefaults_dyn(); }
		if (HX_FIELD_EQ(inName,"_ofSetBackgroundAuto") ) { return _ofSetBackgroundAuto; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofSetCurveResolution") ) { return _ofSetCurveResolution; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofSetCircleResolution") ) { return _ofSetCircleResolution; }
		if (HX_FIELD_EQ(inName,"_ofEnableAlphaBlending") ) { return _ofEnableAlphaBlending; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofDisableAlphaBlending") ) { return _ofDisableAlphaBlending; }
		if (HX_FIELD_EQ(inName,"_ofSetupGraphicDefaults") ) { return _ofSetupGraphicDefaults; }
	}
	return super::__Field(inName);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_ofLine") ) { _ofLine=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRect") ) { _ofRect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofFill") ) { _ofFill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ofCurve") ) { _ofCurve=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofScale") ) { _ofScale=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ofCircle") ) { _ofCircle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofBezier") ) { _ofBezier=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofNoFill") ) { _ofNoFill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofVertex") ) { _ofVertex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ofEllipse") ) { _ofEllipse=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRotate4") ) { _ofRotate4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRotate1") ) { _ofRotate1=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRotateX") ) { _ofRotateX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRotateY") ) { _ofRotateY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofRotateZ") ) { _ofRotateZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ofbClearBg") ) { _ofbClearBg=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTriangle") ) { _ofTriangle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetStyle") ) { _ofGetStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetStyle") ) { _ofSetStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPopStyle") ) { _ofPopStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofEndShape") ) { _ofEndShape=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ofSetColor3") ) { _ofSetColor3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetColor4") ) { _ofSetColor4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetColor1") ) { _ofSetColor1=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPushStyle") ) { _ofPushStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPopMatrix") ) { _ofPopMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofTranslate") ) { _ofTranslate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ofBackground") ) { _ofBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofPushMatrix") ) { _ofPushMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofBeginShape") ) { _ofBeginShape=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ofSetRectMode") ) { _ofSetRectMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofGetRectMode") ) { _ofGetRectMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetupScreen") ) { _ofSetupScreen=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofCurveVertex") ) { _ofCurveVertex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetPolyMode") ) { _ofSetPolyMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofNextContour") ) { _ofNextContour=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ofEnableArbTex") ) { _ofEnableArbTex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetLineWidth") ) { _ofSetLineWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofBezierVertex") ) { _ofBezierVertex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ofDisableArbTex") ) { _ofDisableArbTex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_ofGetUsingArbTex") ) { _ofGetUsingArbTex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ofEnableSmoothing") ) { _ofEnableSmoothing=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ofDisableSmoothing") ) { _ofDisableSmoothing=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofDrawBitmapString") ) { _ofDrawBitmapString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ofSetBackgroundAuto") ) { _ofSetBackgroundAuto=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ofSetCurveResolution") ) { _ofSetCurveResolution=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ofSetCircleResolution") ) { _ofSetCircleResolution=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofEnableAlphaBlending") ) { _ofEnableAlphaBlending=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_ofDisableAlphaBlending") ) { _ofDisableAlphaBlending=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ofSetupGraphicDefaults") ) { _ofSetupGraphicDefaults=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("setBackgroundAuto"),
	HX_CSTRING("setRectMode"),
	HX_CSTRING("getUsingArbTex"),
	HX_CSTRING("enableArbTex"),
	HX_CSTRING("disableArbTex"),
	HX_CSTRING("bClearBg"),
	HX_CSTRING("getRectMode"),
	HX_CSTRING("setCurveResolution"),
	HX_CSTRING("triangle"),
	HX_CSTRING("circle"),
	HX_CSTRING("ellipse"),
	HX_CSTRING("line"),
	HX_CSTRING("rect"),
	HX_CSTRING("setCircleResolution"),
	HX_CSTRING("curve"),
	HX_CSTRING("bezier"),
	HX_CSTRING("noFill"),
	HX_CSTRING("fill"),
	HX_CSTRING("setLineWidth"),
	HX_CSTRING("setColor"),
	HX_CSTRING("enableAlphaBlending"),
	HX_CSTRING("disableAlphaBlending"),
	HX_CSTRING("enableSmoothing"),
	HX_CSTRING("disableSmoothing"),
	HX_CSTRING("getStyle"),
	HX_CSTRING("setStyle"),
	HX_CSTRING("pushStyle"),
	HX_CSTRING("popStyle"),
	HX_CSTRING("pushMatrix"),
	HX_CSTRING("popMatrix"),
	HX_CSTRING("translate"),
	HX_CSTRING("scale"),
	HX_CSTRING("rotate"),
	HX_CSTRING("rotateX"),
	HX_CSTRING("rotateY"),
	HX_CSTRING("rotateZ"),
	HX_CSTRING("drawBitmapString"),
	HX_CSTRING("setupGraphicDefaults"),
	HX_CSTRING("setupScreen"),
	HX_CSTRING("curveVertex"),
	HX_CSTRING("bezierVertex"),
	HX_CSTRING("setPolyMode"),
	HX_CSTRING("beginShape"),
	HX_CSTRING("vertex"),
	HX_CSTRING("endShape"),
	HX_CSTRING("nextContour"),
	HX_CSTRING("_ofBackground"),
	HX_CSTRING("_ofSetBackgroundAuto"),
	HX_CSTRING("_ofSetRectMode"),
	HX_CSTRING("_ofGetUsingArbTex"),
	HX_CSTRING("_ofEnableArbTex"),
	HX_CSTRING("_ofDisableArbTex"),
	HX_CSTRING("_ofbClearBg"),
	HX_CSTRING("_ofGetRectMode"),
	HX_CSTRING("_ofSetCurveResolution"),
	HX_CSTRING("_ofTriangle"),
	HX_CSTRING("_ofCircle"),
	HX_CSTRING("_ofEllipse"),
	HX_CSTRING("_ofLine"),
	HX_CSTRING("_ofRect"),
	HX_CSTRING("_ofSetCircleResolution"),
	HX_CSTRING("_ofCurve"),
	HX_CSTRING("_ofBezier"),
	HX_CSTRING("_ofNoFill"),
	HX_CSTRING("_ofFill"),
	HX_CSTRING("_ofSetLineWidth"),
	HX_CSTRING("_ofSetColor3"),
	HX_CSTRING("_ofSetColor4"),
	HX_CSTRING("_ofSetColor1"),
	HX_CSTRING("_ofEnableAlphaBlending"),
	HX_CSTRING("_ofDisableAlphaBlending"),
	HX_CSTRING("_ofEnableSmoothing"),
	HX_CSTRING("_ofDisableSmoothing"),
	HX_CSTRING("_ofGetStyle"),
	HX_CSTRING("_ofSetStyle"),
	HX_CSTRING("_ofPushStyle"),
	HX_CSTRING("_ofPopStyle"),
	HX_CSTRING("_ofPushMatrix"),
	HX_CSTRING("_ofPopMatrix"),
	HX_CSTRING("_ofTranslate"),
	HX_CSTRING("_ofScale"),
	HX_CSTRING("_ofRotate4"),
	HX_CSTRING("_ofRotate1"),
	HX_CSTRING("_ofRotateX"),
	HX_CSTRING("_ofRotateY"),
	HX_CSTRING("_ofRotateZ"),
	HX_CSTRING("_ofDrawBitmapString"),
	HX_CSTRING("_ofSetupGraphicDefaults"),
	HX_CSTRING("_ofSetupScreen"),
	HX_CSTRING("_ofCurveVertex"),
	HX_CSTRING("_ofBezierVertex"),
	HX_CSTRING("_ofSetPolyMode"),
	HX_CSTRING("_ofBeginShape"),
	HX_CSTRING("_ofVertex"),
	HX_CSTRING("_ofEndShape"),
	HX_CSTRING("_ofNextContour"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofBackground,"_ofBackground");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetBackgroundAuto,"_ofSetBackgroundAuto");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetRectMode,"_ofSetRectMode");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofGetUsingArbTex,"_ofGetUsingArbTex");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofEnableArbTex,"_ofEnableArbTex");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofDisableArbTex,"_ofDisableArbTex");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofbClearBg,"_ofbClearBg");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofGetRectMode,"_ofGetRectMode");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetCurveResolution,"_ofSetCurveResolution");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofTriangle,"_ofTriangle");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofCircle,"_ofCircle");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofEllipse,"_ofEllipse");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofLine,"_ofLine");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofRect,"_ofRect");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetCircleResolution,"_ofSetCircleResolution");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofCurve,"_ofCurve");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofBezier,"_ofBezier");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofNoFill,"_ofNoFill");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofFill,"_ofFill");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetLineWidth,"_ofSetLineWidth");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetColor3,"_ofSetColor3");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetColor4,"_ofSetColor4");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetColor1,"_ofSetColor1");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofEnableAlphaBlending,"_ofEnableAlphaBlending");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofDisableAlphaBlending,"_ofDisableAlphaBlending");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofEnableSmoothing,"_ofEnableSmoothing");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofDisableSmoothing,"_ofDisableSmoothing");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofGetStyle,"_ofGetStyle");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetStyle,"_ofSetStyle");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofPushStyle,"_ofPushStyle");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofPopStyle,"_ofPopStyle");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofPushMatrix,"_ofPushMatrix");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofPopMatrix,"_ofPopMatrix");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofTranslate,"_ofTranslate");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofScale,"_ofScale");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofRotate4,"_ofRotate4");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofRotate1,"_ofRotate1");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofRotateX,"_ofRotateX");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofRotateY,"_ofRotateY");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofRotateZ,"_ofRotateZ");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofDrawBitmapString,"_ofDrawBitmapString");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetupGraphicDefaults,"_ofSetupGraphicDefaults");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetupScreen,"_ofSetupScreen");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofCurveVertex,"_ofCurveVertex");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofBezierVertex,"_ofBezierVertex");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofSetPolyMode,"_ofSetPolyMode");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofBeginShape,"_ofBeginShape");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofVertex,"_ofVertex");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofEndShape,"_ofEndShape");
	HX_MARK_MEMBER_NAME(Graphics_obj::_ofNextContour,"_ofNextContour");
};

Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("of.graphics.Graphics"), hx::TCanCast< Graphics_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Graphics_obj::__boot()
{
	hx::Static(_ofBackground) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBackground"),3);
	hx::Static(_ofSetBackgroundAuto) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetBackgroundAuto"),1);
	hx::Static(_ofSetRectMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetRectMode"),1);
	hx::Static(_ofGetUsingArbTex) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetUsingArbTex"),0);
	hx::Static(_ofEnableArbTex) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofEnableArbTex"),0);
	hx::Static(_ofDisableArbTex) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDisableArbTex"),0);
	hx::Static(_ofbClearBg) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofbClearBg"),0);
	hx::Static(_ofGetRectMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetRectMode"),0);
	hx::Static(_ofSetCurveResolution) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetCurveResolution"),1);
	hx::Static(_ofTriangle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTriangle"),1);
	hx::Static(_ofCircle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofCircle"),3);
	hx::Static(_ofEllipse) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofEllipse"),4);
	hx::Static(_ofLine) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofLine"),4);
	hx::Static(_ofRect) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRect"),4);
	hx::Static(_ofSetCircleResolution) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetCircleResolution"),1);
	hx::Static(_ofCurve) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofCurve"),1);
	hx::Static(_ofBezier) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBezier"),1);
	hx::Static(_ofNoFill) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNoFill"),0);
	hx::Static(_ofFill) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofFill"),0);
	hx::Static(_ofSetLineWidth) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetLineWidth"),1);
	hx::Static(_ofSetColor3) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetColor3"),3);
	hx::Static(_ofSetColor4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetColor4"),4);
	hx::Static(_ofSetColor1) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetColor1"),1);
	hx::Static(_ofEnableAlphaBlending) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofEnableAlphaBlending"),0);
	hx::Static(_ofDisableAlphaBlending) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDisableAlphaBlending"),0);
	hx::Static(_ofEnableSmoothing) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofEnableSmoothing"),0);
	hx::Static(_ofDisableSmoothing) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDisableSmoothing"),0);
	hx::Static(_ofGetStyle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofGetStyle"),0);
	hx::Static(_ofSetStyle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetStyle"),1);
	hx::Static(_ofPushStyle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPushStyle"),0);
	hx::Static(_ofPopStyle) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPopStyle"),0);
	hx::Static(_ofPushMatrix) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPushMatrix"),0);
	hx::Static(_ofPopMatrix) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofPopMatrix"),0);
	hx::Static(_ofTranslate) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofTranslate"),3);
	hx::Static(_ofScale) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofScale"),3);
	hx::Static(_ofRotate4) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRotate4"),4);
	hx::Static(_ofRotate1) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRotate1"),1);
	hx::Static(_ofRotateX) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRotateX"),1);
	hx::Static(_ofRotateY) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRotateY"),1);
	hx::Static(_ofRotateZ) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofRotateZ"),1);
	hx::Static(_ofDrawBitmapString) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofDrawBitmapString"),3);
	hx::Static(_ofSetupGraphicDefaults) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetupGraphicDefaults"),0);
	hx::Static(_ofSetupScreen) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetupScreen"),0);
	hx::Static(_ofCurveVertex) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofCurveVertex"),2);
	hx::Static(_ofBezierVertex) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBezierVertex"),1);
	hx::Static(_ofSetPolyMode) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofSetPolyMode"),1);
	hx::Static(_ofBeginShape) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofBeginShape"),0);
	hx::Static(_ofVertex) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofVertex"),2);
	hx::Static(_ofEndShape) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofEndShape"),1);
	hx::Static(_ofNextContour) = ::cpp::Lib_obj::load(HX_CSTRING("hxOpenFrameworks"),HX_CSTRING("_ofNextContour"),1);
}

} // end namespace of
} // end namespace graphics
