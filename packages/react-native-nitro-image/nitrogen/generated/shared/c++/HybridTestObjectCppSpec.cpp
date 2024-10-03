///
/// HybridTestObjectCppSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridTestObjectCppSpec.hpp"

namespace margelo::nitro::image {

  void HybridTestObjectCppSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridGetter("someTuple", &HybridTestObjectCppSpec::getSomeTuple);
      prototype.registerHybridSetter("someTuple", &HybridTestObjectCppSpec::setSomeTuple);
      prototype.registerHybridGetter("thisObject", &HybridTestObjectCppSpec::getThisObject);
      prototype.registerHybridGetter("numberValue", &HybridTestObjectCppSpec::getNumberValue);
      prototype.registerHybridSetter("numberValue", &HybridTestObjectCppSpec::setNumberValue);
      prototype.registerHybridGetter("boolValue", &HybridTestObjectCppSpec::getBoolValue);
      prototype.registerHybridSetter("boolValue", &HybridTestObjectCppSpec::setBoolValue);
      prototype.registerHybridGetter("stringValue", &HybridTestObjectCppSpec::getStringValue);
      prototype.registerHybridSetter("stringValue", &HybridTestObjectCppSpec::setStringValue);
      prototype.registerHybridGetter("bigintValue", &HybridTestObjectCppSpec::getBigintValue);
      prototype.registerHybridSetter("bigintValue", &HybridTestObjectCppSpec::setBigintValue);
      prototype.registerHybridGetter("stringOrUndefined", &HybridTestObjectCppSpec::getStringOrUndefined);
      prototype.registerHybridSetter("stringOrUndefined", &HybridTestObjectCppSpec::setStringOrUndefined);
      prototype.registerHybridGetter("stringOrNull", &HybridTestObjectCppSpec::getStringOrNull);
      prototype.registerHybridSetter("stringOrNull", &HybridTestObjectCppSpec::setStringOrNull);
      prototype.registerHybridGetter("optionalString", &HybridTestObjectCppSpec::getOptionalString);
      prototype.registerHybridSetter("optionalString", &HybridTestObjectCppSpec::setOptionalString);
      prototype.registerHybridGetter("someVariant", &HybridTestObjectCppSpec::getSomeVariant);
      prototype.registerHybridSetter("someVariant", &HybridTestObjectCppSpec::setSomeVariant);
      prototype.registerHybridGetter("base", &HybridTestObjectCppSpec::getBase);
      prototype.registerHybridSetter("base", &HybridTestObjectCppSpec::setBase);
      prototype.registerHybridMethod("passVariant", &HybridTestObjectCppSpec::passVariant);
      prototype.registerHybridMethod("getVariantEnum", &HybridTestObjectCppSpec::getVariantEnum);
      prototype.registerHybridMethod("getVariantObjects", &HybridTestObjectCppSpec::getVariantObjects);
      prototype.registerHybridMethod("getVariantHybrid", &HybridTestObjectCppSpec::getVariantHybrid);
      prototype.registerHybridMethod("getVariantTuple", &HybridTestObjectCppSpec::getVariantTuple);
      prototype.registerHybridMethod("flip", &HybridTestObjectCppSpec::flip);
      prototype.registerHybridMethod("passTuple", &HybridTestObjectCppSpec::passTuple);
      prototype.registerHybridMethod("getValueFromJSCallbackAndWait", &HybridTestObjectCppSpec::getValueFromJSCallbackAndWait);
      prototype.registerHybridMethod("getValueFromJsCallback", &HybridTestObjectCppSpec::getValueFromJsCallback);
      prototype.registerHybridMethod("newTestObject", &HybridTestObjectCppSpec::newTestObject);
      prototype.registerHybridMethod("simpleFunc", &HybridTestObjectCppSpec::simpleFunc);
      prototype.registerHybridMethod("addNumbers", &HybridTestObjectCppSpec::addNumbers);
      prototype.registerHybridMethod("addStrings", &HybridTestObjectCppSpec::addStrings);
      prototype.registerHybridMethod("multipleArguments", &HybridTestObjectCppSpec::multipleArguments);
      prototype.registerHybridMethod("createMap", &HybridTestObjectCppSpec::createMap);
      prototype.registerHybridMethod("mapRoundtrip", &HybridTestObjectCppSpec::mapRoundtrip);
      prototype.registerHybridMethod("funcThatThrows", &HybridTestObjectCppSpec::funcThatThrows);
      prototype.registerHybridMethod("tryOptionalParams", &HybridTestObjectCppSpec::tryOptionalParams);
      prototype.registerHybridMethod("tryMiddleParam", &HybridTestObjectCppSpec::tryMiddleParam);
      prototype.registerHybridMethod("tryOptionalEnum", &HybridTestObjectCppSpec::tryOptionalEnum);
      prototype.registerHybridMethod("calculateFibonacciSync", &HybridTestObjectCppSpec::calculateFibonacciSync);
      prototype.registerHybridMethod("calculateFibonacciAsync", &HybridTestObjectCppSpec::calculateFibonacciAsync);
      prototype.registerHybridMethod("wait", &HybridTestObjectCppSpec::wait);
      prototype.registerHybridMethod("callCallback", &HybridTestObjectCppSpec::callCallback);
      prototype.registerHybridMethod("callAll", &HybridTestObjectCppSpec::callAll);
      prototype.registerHybridMethod("callWithOptional", &HybridTestObjectCppSpec::callWithOptional);
      prototype.registerHybridMethod("getCar", &HybridTestObjectCppSpec::getCar);
      prototype.registerHybridMethod("isCarElectric", &HybridTestObjectCppSpec::isCarElectric);
      prototype.registerHybridMethod("getDriver", &HybridTestObjectCppSpec::getDriver);
      prototype.registerHybridMethod("createArrayBuffer", &HybridTestObjectCppSpec::createArrayBuffer);
      prototype.registerHybridMethod("getBufferLastItem", &HybridTestObjectCppSpec::getBufferLastItem);
      prototype.registerHybridMethod("setAllValuesTo", &HybridTestObjectCppSpec::setAllValuesTo);
      prototype.registerHybridMethod("createChild", &HybridTestObjectCppSpec::createChild);
      prototype.registerHybridMethod("createBase", &HybridTestObjectCppSpec::createBase);
      prototype.registerHybridMethod("createBaseActualChild", &HybridTestObjectCppSpec::createBaseActualChild);
      prototype.registerHybridMethod("bounceChild", &HybridTestObjectCppSpec::bounceChild);
      prototype.registerHybridMethod("bounceBase", &HybridTestObjectCppSpec::bounceBase);
      prototype.registerHybridMethod("bounceChildBase", &HybridTestObjectCppSpec::bounceChildBase);
      prototype.registerHybridMethod("castBase", &HybridTestObjectCppSpec::castBase);
    });
  }

} // namespace margelo::nitro::image
