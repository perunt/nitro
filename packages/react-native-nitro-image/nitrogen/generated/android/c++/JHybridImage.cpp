///
/// JHybridImage.cpp
/// Wed Jul 31 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridImage.hpp"

#include "JFunc_void_std__string.hpp"
#include "JImageFormat.hpp"
#include "JImageSize.hpp"
#include "JPixelFormat.hpp"

namespace margelo::nitro::image {

jni::local_ref<JHybridImage::jhybriddata> JHybridImage::initHybrid(jni::alias_ref<jhybridobject> jThis) {
  return makeCxxInstance(jThis);
}

void JHybridImage::registerNatives() {
  registerHybrid({
      makeNativeMethod("initHybrid", JHybridImage::initHybrid),
  });
}

size_t JHybridImage::getExternalMemorySize() noexcept {
  static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
  return method(_javaPart.get());
}

// Properties
ImageSize JHybridImage::getSize() {
  static const auto method = _javaPart->getClass()->getMethod<JImageSize()>("getSize");
  throw std::runtime_error("getSize(...) is not yet implemented!");
}
PixelFormat JHybridImage::getPixelFormat() {
  static const auto method = _javaPart->getClass()->getMethod<JPixelFormat()>("getPixelFormat");
  throw std::runtime_error("getPixelFormat(...) is not yet implemented!");
}
double JHybridImage::getSomeSettableProp() {
  static const auto method = _javaPart->getClass()->getMethod<double()>("getSomeSettableProp");
  throw std::runtime_error("getSomeSettableProp(...) is not yet implemented!");
}
void JHybridImage::setSomeSettableProp(double someSettableProp) {
  static const auto method = _javaPart->getClass()->getMethod<void(double)>("setSomeSettableProp");
  throw std::runtime_error("setSomeSettableProp(...) is not yet implemented!");
}

// Methods
double JHybridImage::toArrayBuffer(ImageFormat format) {
  static const auto method = _javaPart->getClass()->getMethod<double(JImageFormat)>("toArrayBuffer");
  throw std::runtime_error("toArrayBuffer(...) is not yet implemented!");
}
void JHybridImage::saveToFile(const std::string& path, const Func_void_std__string& onFinished) {
  static const auto method =
      _javaPart->getClass()->getMethod<void(std::string, jni::alias_ref<JFunc_void_std__string::javaobject>)>("saveToFile");
  throw std::runtime_error("saveToFile(...) is not yet implemented!");
}

} // namespace margelo::nitro::image