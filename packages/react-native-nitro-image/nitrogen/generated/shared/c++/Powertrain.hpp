///
/// Powertrain.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroHash.hpp>)
#include <NitroModules/NitroHash.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

namespace margelo::nitro::image {

  /**
   * An enum which can be represented as a JavaScript union (Powertrain).
   */
  enum class Powertrain {
    ELECTRIC      SWIFT_NAME(electric) = 0,
    GAS      SWIFT_NAME(gas) = 1,
    HYBRID      SWIFT_NAME(hybrid) = 2,
  } CLOSED_ENUM;

} // namespace margelo::nitro::image

namespace margelo::nitro {

  using namespace margelo::nitro::image;

  // C++ Powertrain <> JS Powertrain (union)
  template <>
  struct JSIConverter<Powertrain> {
    static inline Powertrain fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("electric"): return Powertrain::ELECTRIC;
        case hashString("gas"): return Powertrain::GAS;
        case hashString("hybrid"): return Powertrain::HYBRID;
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert \"" + unionValue + "\" to enum Powertrain - invalid value!");
      }
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, Powertrain arg) {
      switch (arg) {
        case Powertrain::ELECTRIC: return JSIConverter<std::string>::toJSI(runtime, "electric");
        case Powertrain::GAS: return JSIConverter<std::string>::toJSI(runtime, "gas");
        case Powertrain::HYBRID: return JSIConverter<std::string>::toJSI(runtime, "hybrid");
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert Powertrain to JS - invalid value: "
                                    + std::to_string(static_cast<int>(arg)) + "!");
      }
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isString()) {
        return false;
      }
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, value);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("electric"):
        case hashString("gas"):
        case hashString("hybrid"):
          return true;
        default:
          return false;
      }
    }
  };

} // namespace margelo::nitro
