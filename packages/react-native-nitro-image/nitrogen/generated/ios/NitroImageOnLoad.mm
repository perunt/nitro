///
/// NitroImageOnLoad.mm
/// Thu Sep 12 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#import <Foundation/Foundation.h>
#import <NitroModules/HybridObjectRegistry.hpp>
#import "NitroImage-Swift-Cxx-Umbrella.hpp"
#import <type_traits>

#import "HybridImageFactorySpecSwift.hpp"
#import "HybridTestObject.hpp"
#import "HybridSwiftKotlinTestObjectSpecSwift.hpp"

@interface NitroImageOnLoad : NSObject
@end

@implementation NitroImageOnLoad

+ (void) load {
  using namespace margelo::nitro;
  using namespace margelo::nitro::image;

  HybridObjectRegistry::registerHybridObjectConstructor(
    "ImageFactory",
    []() -> std::shared_ptr<HybridObject> {
      // 1. Create an instance of a Swift class that implements the `HybridImageFactorySpec` protocol
      auto swiftPart = NitroImage::NitroImageOnLoad::createImageFactory();
      // 2. Wrap that in the generated C++ class that bridges everything over to Swift
      return std::make_shared<HybridImageFactorySpecSwift>(swiftPart);
    }
  );
  HybridObjectRegistry::registerHybridObjectConstructor(
    "TestObject",
    []() -> std::shared_ptr<HybridObject> {
      static_assert(std::is_default_constructible_v<HybridTestObject>, "The HybridObject \"HybridTestObject\" is not default-constructible! Create a public constructor that takes zero arguments to be able to autolink this HybridObject.");
      return std::make_shared<HybridTestObject>();
    }
  );
  HybridObjectRegistry::registerHybridObjectConstructor(
    "SwiftKotlinTestObject",
    []() -> std::shared_ptr<HybridObject> {
      auto swiftPart = NitroImage::NitroImageOnLoad::createSwiftKotlinTestObject();
      return std::make_shared<HybridSwiftKotlinTestObjectSpecSwift>(swiftPart);
    }
  );
}

@end
