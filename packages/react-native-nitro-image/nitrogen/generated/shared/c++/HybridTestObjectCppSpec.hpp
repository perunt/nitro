///
/// HybridTestObjectCppSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `HybridTestObjectCppSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectCppSpec; }
// Forward declaration of `HybridBaseSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridBaseSpec; }
// Forward declaration of `OldEnum` to properly resolve imports.
namespace margelo::nitro::image { enum class OldEnum; }
// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `HybridChildSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridChildSpec; }

#include <tuple>
#include <string>
#include <memory>
#include "HybridTestObjectCppSpec.hpp"
#include <optional>
#include <variant>
#include "HybridBaseSpec.hpp"
#include <vector>
#include "OldEnum.hpp"
#include "Car.hpp"
#include "Person.hpp"
#include <future>
#include <functional>
#include <NitroModules/AnyMap.hpp>
#include "Powertrain.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include "HybridChildSpec.hpp"

namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `TestObjectCpp`
   * Inherit this class to create instances of `HybridTestObjectCppSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridTestObjectCpp: public HybridTestObjectCppSpec {
   * public:
   *   HybridTestObjectCpp(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridTestObjectCppSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridTestObjectCppSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridTestObjectCppSpec() { }

    public:
      // Properties
      virtual std::tuple<double, std::string> getSomeTuple() = 0;
      virtual void setSomeTuple(const std::tuple<double, std::string>& someTuple) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec> getThisObject() = 0;
      virtual double getNumberValue() = 0;
      virtual void setNumberValue(double numberValue) = 0;
      virtual bool getBoolValue() = 0;
      virtual void setBoolValue(bool boolValue) = 0;
      virtual std::string getStringValue() = 0;
      virtual void setStringValue(const std::string& stringValue) = 0;
      virtual int64_t getBigintValue() = 0;
      virtual void setBigintValue(int64_t bigintValue) = 0;
      virtual std::optional<std::string> getStringOrUndefined() = 0;
      virtual void setStringOrUndefined(const std::optional<std::string>& stringOrUndefined) = 0;
      virtual std::optional<std::string> getStringOrNull() = 0;
      virtual void setStringOrNull(const std::optional<std::string>& stringOrNull) = 0;
      virtual std::optional<std::string> getOptionalString() = 0;
      virtual void setOptionalString(const std::optional<std::string>& optionalString) = 0;
      virtual std::variant<std::string, double> getSomeVariant() = 0;
      virtual void setSomeVariant(const std::variant<std::string, double>& someVariant) = 0;
      virtual std::optional<std::shared_ptr<margelo::nitro::image::HybridBaseSpec>> getBase() = 0;
      virtual void setBase(const std::optional<std::shared_ptr<margelo::nitro::image::HybridBaseSpec>>& base) = 0;

    public:
      // Methods
      virtual std::variant<std::string, double> passVariant(const std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>& either) = 0;
      virtual std::variant<bool, OldEnum> getVariantEnum(const std::variant<bool, OldEnum>& variant) = 0;
      virtual std::variant<Car, Person> getVariantObjects(const std::variant<Car, Person>& variant) = 0;
      virtual std::variant<Person, std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec>> getVariantHybrid(const std::variant<Person, std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec>>& variant) = 0;
      virtual std::variant<std::tuple<double, double>, std::tuple<double, double, double>> getVariantTuple(const std::variant<std::tuple<double, double>, std::tuple<double, double, double>>& variant) = 0;
      virtual std::tuple<double, double, double> flip(const std::tuple<double, double, double>& tuple) = 0;
      virtual std::tuple<double, std::string, bool> passTuple(const std::tuple<double, std::string, bool>& tuple) = 0;
      virtual std::future<double> getValueFromJSCallbackAndWait(const std::function<std::future<double>()>& getValue) = 0;
      virtual std::future<void> getValueFromJsCallback(const std::function<std::future<std::string>()>& callback, const std::function<void(const std::string& /* valueFromJs */)>& andThenCall) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec> newTestObject() = 0;
      virtual void simpleFunc() = 0;
      virtual double addNumbers(double a, double b) = 0;
      virtual std::string addStrings(const std::string& a, const std::string& b) = 0;
      virtual void multipleArguments(double num, const std::string& str, bool boo) = 0;
      virtual std::shared_ptr<AnyMap> createMap() = 0;
      virtual std::shared_ptr<AnyMap> mapRoundtrip(const std::shared_ptr<AnyMap>& map) = 0;
      virtual double funcThatThrows() = 0;
      virtual std::string tryOptionalParams(double num, bool boo, const std::optional<std::string>& str) = 0;
      virtual std::string tryMiddleParam(double num, std::optional<bool> boo, const std::string& str) = 0;
      virtual std::optional<Powertrain> tryOptionalEnum(std::optional<Powertrain> value) = 0;
      virtual int64_t calculateFibonacciSync(double value) = 0;
      virtual std::future<int64_t> calculateFibonacciAsync(double value) = 0;
      virtual std::future<void> wait(double seconds) = 0;
      virtual void callCallback(const std::function<void()>& callback) = 0;
      virtual void callAll(const std::function<void()>& first, const std::function<void()>& second, const std::function<void()>& third) = 0;
      virtual void callWithOptional(std::optional<double> value, const std::function<void(std::optional<double> /* maybe */)>& callback) = 0;
      virtual Car getCar() = 0;
      virtual bool isCarElectric(const Car& car) = 0;
      virtual std::optional<Person> getDriver(const Car& car) = 0;
      virtual std::shared_ptr<ArrayBuffer> createArrayBuffer() = 0;
      virtual double getBufferLastItem(const std::shared_ptr<ArrayBuffer>& buffer) = 0;
      virtual void setAllValuesTo(const std::shared_ptr<ArrayBuffer>& buffer, double value) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridChildSpec> createChild() = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridBaseSpec> createBase() = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridBaseSpec> createBaseActualChild() = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridChildSpec> bounceChild(const std::shared_ptr<margelo::nitro::image::HybridChildSpec>& child) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridBaseSpec> bounceBase(const std::shared_ptr<margelo::nitro::image::HybridBaseSpec>& base) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridBaseSpec> bounceChildBase(const std::shared_ptr<margelo::nitro::image::HybridChildSpec>& child) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridChildSpec> castBase(const std::shared_ptr<margelo::nitro::image::HybridBaseSpec>& base) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "TestObjectCpp";
  };

} // namespace margelo::nitro::image
