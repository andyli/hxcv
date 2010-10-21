#include <hxcpp.h>

#include <Hash.h>
#include <of/utils/Math.h>
#include <of/sound/SoundPlayer.h>
#include <of/graphics/_Texture/TextureData.h>
#include <of/graphics/Texture.h>
#include <of/graphics/Image.h>
#include <hsl/haxe/Signal.h>
#include <of/video/VideoGrabber.h>
#include <haxe/io/BytesInput.h>
#include <of/app/AppGlutWindow.h>
#include <haxe/io/Eof.h>
#include <hxcv/ds/of/OFARGB2DImage.h>
#include <of/events/Events.h>
#include <Type.h>
#include <ValueType.h>
#include <of/utils/Utils.h>
#include <hxcv/ds/of/OFGray2DImage.h>
#include <hxcv/ds/of/OFRGB2DImage.h>
#include <List.h>
#include <Std.h>
#include <of/utils/Style.h>
#include <of/utils/Color.h>
#include <of/utils/Rectangle.h>
#include <of/utils/Point.h>
#include <of/video/VideoPlayer.h>
#include <hxcv/ds/of/OF2DImage.h>
#include <haxe/io/Error.h>
#include <of/app/AppRunner.h>
#include <IntIter.h>
#include <haxe/TypeTools.h>
#include <haxe/io/Bytes.h>
#include <hsl/haxe/_DirectSignaler/PropagationStatus.h>
#include <hsl/haxe/_DirectSignaler/AdvancedBond.h>
#include <hsl/haxe/_DirectSignaler/NiladicBond.h>
#include <hsl/haxe/_DirectSignaler/RegularBond.h>
#include <hsl/haxe/_DirectSignaler/SentinelBond.h>
#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
#include <hsl/haxe/DirectSignaler.h>
#include <StringBuf.h>
#include <of/Functions.h>
#include <OFExample.h>
#include <of/app/BaseApp.h>
#include <haxe/exception/ArgumentNullException.h>
#include <haxe/exception/Exception.h>
#include <haxe/Log.h>
#include <of/graphics/TrueTypeFont.h>
#include <Reflect.h>
#include <hsl/haxe/Bond.h>
#include <haxe/io/Input.h>
#include <haxe/io/BytesBuffer.h>
#include <of/utils/Constants.h>
#include <cpp/Sys.h>
#include <of/utils/LogLevel.h>
#include <haxe/Stack.h>
#include <haxe/StackItem.h>
#include <of/graphics/Graphics.h>
#include <of/sound/SoundStream.h>
#include <cpp/Lib.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::Hash_obj::__register();
::of::utils::Math_obj::__register();
::of::sound::SoundPlayer_obj::__register();
::of::graphics::_Texture::TextureData_obj::__register();
::of::graphics::Texture_obj::__register();
::of::graphics::Image_obj::__register();
::hsl::haxe::Signal_obj::__register();
::of::video::VideoGrabber_obj::__register();
::haxe::io::BytesInput_obj::__register();
::of::app::AppGlutWindow_obj::__register();
::haxe::io::Eof_obj::__register();
::hxcv::ds::of::OFARGB2DImage_obj::__register();
::of::events::Events_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::of::utils::Utils_obj::__register();
::hxcv::ds::of::OFGray2DImage_obj::__register();
::hxcv::ds::of::OFRGB2DImage_obj::__register();
::List_obj::__register();
::Std_obj::__register();
::of::utils::Style_obj::__register();
::of::utils::Color_obj::__register();
::of::utils::Rectangle_obj::__register();
::of::utils::Point_obj::__register();
::of::video::VideoPlayer_obj::__register();
::hxcv::ds::of::OF2DImage_obj::__register();
::haxe::io::Error_obj::__register();
::of::app::AppRunner_obj::__register();
::IntIter_obj::__register();
::haxe::TypeTools_obj::__register();
::haxe::io::Bytes_obj::__register();
::hsl::haxe::_DirectSignaler::PropagationStatus_obj::__register();
::hsl::haxe::_DirectSignaler::AdvancedBond_obj::__register();
::hsl::haxe::_DirectSignaler::NiladicBond_obj::__register();
::hsl::haxe::_DirectSignaler::RegularBond_obj::__register();
::hsl::haxe::_DirectSignaler::SentinelBond_obj::__register();
::hsl::haxe::_DirectSignaler::LinkedBond_obj::__register();
::hsl::haxe::DirectSignaler_obj::__register();
::StringBuf_obj::__register();
::of::Functions_obj::__register();
::OFExample_obj::__register();
::of::app::BaseApp_obj::__register();
::haxe::exception::ArgumentNullException_obj::__register();
::haxe::exception::Exception_obj::__register();
::haxe::Log_obj::__register();
::of::graphics::TrueTypeFont_obj::__register();
::Reflect_obj::__register();
::hsl::haxe::Bond_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::of::utils::Constants_obj::__register();
::cpp::Sys_obj::__register();
::of::utils::LogLevel_obj::__register();
::haxe::Stack_obj::__register();
::haxe::StackItem_obj::__register();
::of::graphics::Graphics_obj::__register();
::of::sound::SoundStream_obj::__register();
::cpp::Lib_obj::__register();
::cpp::Lib_obj::__boot();
::of::sound::SoundStream_obj::__boot();
::of::graphics::Graphics_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::Stack_obj::__boot();
::of::utils::LogLevel_obj::__boot();
::cpp::Sys_obj::__boot();
::of::utils::Constants_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Input_obj::__boot();
::hsl::haxe::Bond_obj::__boot();
::Reflect_obj::__boot();
::of::graphics::TrueTypeFont_obj::__boot();
::haxe::Log_obj::__boot();
::haxe::exception::Exception_obj::__boot();
::haxe::exception::ArgumentNullException_obj::__boot();
::of::app::BaseApp_obj::__boot();
::OFExample_obj::__boot();
::of::Functions_obj::__boot();
::StringBuf_obj::__boot();
::hsl::haxe::DirectSignaler_obj::__boot();
::hsl::haxe::_DirectSignaler::LinkedBond_obj::__boot();
::hsl::haxe::_DirectSignaler::SentinelBond_obj::__boot();
::hsl::haxe::_DirectSignaler::RegularBond_obj::__boot();
::hsl::haxe::_DirectSignaler::NiladicBond_obj::__boot();
::hsl::haxe::_DirectSignaler::AdvancedBond_obj::__boot();
::hsl::haxe::_DirectSignaler::PropagationStatus_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::TypeTools_obj::__boot();
::IntIter_obj::__boot();
::of::app::AppRunner_obj::__boot();
::haxe::io::Error_obj::__boot();
::hxcv::ds::of::OF2DImage_obj::__boot();
::of::video::VideoPlayer_obj::__boot();
::of::utils::Point_obj::__boot();
::of::utils::Rectangle_obj::__boot();
::of::utils::Color_obj::__boot();
::of::utils::Style_obj::__boot();
::Std_obj::__boot();
::List_obj::__boot();
::hxcv::ds::of::OFRGB2DImage_obj::__boot();
::hxcv::ds::of::OFGray2DImage_obj::__boot();
::of::utils::Utils_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::of::events::Events_obj::__boot();
::hxcv::ds::of::OFARGB2DImage_obj::__boot();
::haxe::io::Eof_obj::__boot();
::of::app::AppGlutWindow_obj::__boot();
::haxe::io::BytesInput_obj::__boot();
::of::video::VideoGrabber_obj::__boot();
::hsl::haxe::Signal_obj::__boot();
::of::graphics::Image_obj::__boot();
::of::graphics::Texture_obj::__boot();
::of::graphics::_Texture::TextureData_obj::__boot();
::of::sound::SoundPlayer_obj::__boot();
::of::utils::Math_obj::__boot();
::Hash_obj::__boot();
}

