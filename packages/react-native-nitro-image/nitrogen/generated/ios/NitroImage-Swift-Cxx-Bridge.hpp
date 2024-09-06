///
/// NitroImage-Swift-Cxx-Bridge.hpp
/// Fri Sep 06 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `HybridTestObjectSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectSpec; }
// Forward declaration of `OldEnum` to properly resolve imports.
namespace margelo::nitro::image { enum class OldEnum; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }

// Include C++ defined types
#include "Car.hpp"
#include "HybridTestObjectSpec.hpp"
#include "OldEnum.hpp"
#include "Person.hpp"
#include "Powertrain.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/PromiseHolder.hpp>
#include <functional>
#include <future>
#include <memory>
#include <optional>
#include <string>
#include <tuple>
#include <unordered_map>
#include <variant>
#include <vector>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::image::bridge::swift {

  /**
   * Specialized version of `std::function<void(const std::string&)>`.
   */
  using Func_void_std__string = std::function<void(const std::string& /* path */)>;
  /**
   * Wrapper class for a `std::function<void(const std::string& / * path * /)>`, this can be used from Swift.
   */
  class Func_void_std__string_Wrapper {
  public:
    explicit Func_void_std__string_Wrapper(const std::function<void(const std::string& /* path */)>& func): function(func) {}
    explicit Func_void_std__string_Wrapper(std::function<void(const std::string& /* path */)>&& func): function(std::move(func)) {}
  
    void call(std::string path) const {
      function(path);
    }
  
    std::function<void(const std::string& /* path */)> function;
  };
  inline Func_void_std__string create_Func_void_std__string(void* closureHolder, void(*call)(void* /* closureHolder */, std::string), void(*destroy)(void*)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__string([sharedClosureHolder, call](const std::string& path) -> void {
      call(sharedClosureHolder.get(), path);
    });
  }
  inline std::shared_ptr<Func_void_std__string_Wrapper> share_Func_void_std__string(const Func_void_std__string& value) {
    return std::make_shared<Func_void_std__string_Wrapper>(value);
  }
  
  /**
   * Specialized version of `std::optional<std::string>`.
   */
  using std__optional_std__string_ = std::optional<std::string>;
  inline std::optional<std::string> create_std__optional_std__string_(const std::string& value) {
    return std::optional<std::string>(value);
  }
  
  /**
   * Specialized version of `std::variant<std::string, double>`.
   */
  using std__variant_std__string__double_ = std::variant<std::string, double>;
  inline std::variant<std::string, double> create_std__variant_std__string__double_(const std::string& value) {
    return value;
  }
  inline std::variant<std::string, double> create_std__variant_std__string__double_(double value) {
    return value;
  }
  inline std::string get_std__variant_std__string__double__0(const std::variant<std::string, double>& variant) {
    return std::get<0>(variant);
  }
  inline double get_std__variant_std__string__double__1(const std::variant<std::string, double>& variant) {
    return std::get<1>(variant);
  }
  
  /**
   * Specialized version of `std::tuple<double, std::string>`.
   */
  using std__tuple_double__std__string_ = std::tuple<double, std::string>;
  inline std::tuple<double, std::string> create_std__tuple_double__std__string_(double arg0, const std::string& arg1) {
    return std::tuple<double, std::string> { arg0, arg1 };
  }
  
  /**
   * Specialized version of `std::optional<bool>`.
   */
  using std__optional_bool_ = std::optional<bool>;
  inline std::optional<bool> create_std__optional_bool_(const bool& value) {
    return std::optional<bool>(value);
  }
  
  /**
   * Specialized version of `std::vector<double>`.
   */
  using std__vector_double_ = std::vector<double>;
  inline std::vector<double> create_std__vector_double_(size_t size) {
    std::vector<double> vector;
    vector.reserve(size);
    return vector;
  }
  
  /**
   * Specialized version of `std::vector<std::string>`.
   */
  using std__vector_std__string_ = std::vector<std::string>;
  inline std::vector<std::string> create_std__vector_std__string_(size_t size) {
    std::vector<std::string> vector;
    vector.reserve(size);
    return vector;
  }
  
  /**
   * Specialized version of `std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>`.
   */
  using std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__ = std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>;
  inline std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>> create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(const std::string& value) {
    return value;
  }
  inline std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>> create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(double value) {
    return value;
  }
  inline std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>> create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(bool value) {
    return value;
  }
  inline std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>> create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(const std::vector<double>& value) {
    return value;
  }
  inline std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>> create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(const std::vector<std::string>& value) {
    return value;
  }
  inline std::string get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___0(const std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>& variant) {
    return std::get<0>(variant);
  }
  inline double get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___1(const std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>& variant) {
    return std::get<1>(variant);
  }
  inline bool get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___2(const std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>& variant) {
    return std::get<2>(variant);
  }
  inline std::vector<double> get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___3(const std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>& variant) {
    return std::get<3>(variant);
  }
  inline std::vector<std::string> get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___4(const std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>& variant) {
    return std::get<4>(variant);
  }
  
  /**
   * Specialized version of `std::variant<bool, OldEnum>`.
   */
  using std__variant_bool__OldEnum_ = std::variant<bool, OldEnum>;
  inline std::variant<bool, OldEnum> create_std__variant_bool__OldEnum_(bool value) {
    return value;
  }
  inline std::variant<bool, OldEnum> create_std__variant_bool__OldEnum_(OldEnum value) {
    return value;
  }
  inline bool get_std__variant_bool__OldEnum__0(const std::variant<bool, OldEnum>& variant) {
    return std::get<0>(variant);
  }
  inline OldEnum get_std__variant_bool__OldEnum__1(const std::variant<bool, OldEnum>& variant) {
    return std::get<1>(variant);
  }
  
  /**
   * Specialized version of `std::optional<Person>`.
   */
  using std__optional_Person_ = std::optional<Person>;
  inline std::optional<Person> create_std__optional_Person_(const Person& value) {
    return std::optional<Person>(value);
  }
  
  /**
   * Specialized version of `std::variant<Person, Car>`.
   */
  using std__variant_Person__Car_ = std::variant<Person, Car>;
  inline std::variant<Person, Car> create_std__variant_Person__Car_(const Person& value) {
    return value;
  }
  inline std::variant<Person, Car> create_std__variant_Person__Car_(const Car& value) {
    return value;
  }
  inline Person get_std__variant_Person__Car__0(const std::variant<Person, Car>& variant) {
    return std::get<0>(variant);
  }
  inline Car get_std__variant_Person__Car__1(const std::variant<Person, Car>& variant) {
    return std::get<1>(variant);
  }
  
  /**
   * Specialized version of `std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person>`.
   */
  using std__variant_std__shared_ptr_margelo__nitro__image__HybridTestObjectSpec___Person_ = std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person>;
  inline std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person> create_std__variant_std__shared_ptr_margelo__nitro__image__HybridTestObjectSpec___Person_(const std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>& value) {
    return value;
  }
  inline std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person> create_std__variant_std__shared_ptr_margelo__nitro__image__HybridTestObjectSpec___Person_(const Person& value) {
    return value;
  }
  inline std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec> get_std__variant_std__shared_ptr_margelo__nitro__image__HybridTestObjectSpec___Person__0(const std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person>& variant) {
    return std::get<0>(variant);
  }
  inline Person get_std__variant_std__shared_ptr_margelo__nitro__image__HybridTestObjectSpec___Person__1(const std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person>& variant) {
    return std::get<1>(variant);
  }
  
  /**
   * Specialized version of `std::tuple<double, double>`.
   */
  using std__tuple_double__double_ = std::tuple<double, double>;
  inline std::tuple<double, double> create_std__tuple_double__double_(double arg0, double arg1) {
    return std::tuple<double, double> { arg0, arg1 };
  }
  
  /**
   * Specialized version of `std::tuple<double, double, double>`.
   */
  using std__tuple_double__double__double_ = std::tuple<double, double, double>;
  inline std::tuple<double, double, double> create_std__tuple_double__double__double_(double arg0, double arg1, double arg2) {
    return std::tuple<double, double, double> { arg0, arg1, arg2 };
  }
  
  /**
   * Specialized version of `std::variant<std::tuple<double, double>, std::tuple<double, double, double>>`.
   */
  using std__variant_std__tuple_double__double___std__tuple_double__double__double__ = std::variant<std::tuple<double, double>, std::tuple<double, double, double>>;
  inline std::variant<std::tuple<double, double>, std::tuple<double, double, double>> create_std__variant_std__tuple_double__double___std__tuple_double__double__double__(const std::tuple<double, double>& value) {
    return value;
  }
  inline std::variant<std::tuple<double, double>, std::tuple<double, double, double>> create_std__variant_std__tuple_double__double___std__tuple_double__double__double__(const std::tuple<double, double, double>& value) {
    return value;
  }
  inline std::tuple<double, double> get_std__variant_std__tuple_double__double___std__tuple_double__double__double___0(const std::variant<std::tuple<double, double>, std::tuple<double, double, double>>& variant) {
    return std::get<0>(variant);
  }
  inline std::tuple<double, double, double> get_std__variant_std__tuple_double__double___std__tuple_double__double__double___1(const std::variant<std::tuple<double, double>, std::tuple<double, double, double>>& variant) {
    return std::get<1>(variant);
  }
  
  /**
   * Specialized version of `std::tuple<double, std::string, bool>`.
   */
  using std__tuple_double__std__string__bool_ = std::tuple<double, std::string, bool>;
  inline std::tuple<double, std::string, bool> create_std__tuple_double__std__string__bool_(double arg0, const std::string& arg1, bool arg2) {
    return std::tuple<double, std::string, bool> { arg0, arg1, arg2 };
  }
  
  /**
   * Specialized version of `PromiseHolder<int64_t>`.
   */
  using PromiseHolder_int64_t_ = PromiseHolder<int64_t>;
  inline PromiseHolder<int64_t> create_PromiseHolder_int64_t_() {
    return PromiseHolder<int64_t>();
  }
  
  /**
   * Specialized version of `PromiseHolder<void>`.
   */
  using PromiseHolder_void_ = PromiseHolder<void>;
  inline PromiseHolder<void> create_PromiseHolder_void_() {
    return PromiseHolder<void>();
  }
  
  /**
   * Specialized version of `std::function<void()>`.
   */
  using Func_void = std::function<void()>;
  /**
   * Wrapper class for a `std::function<void()>`, this can be used from Swift.
   */
  class Func_void_Wrapper {
  public:
    explicit Func_void_Wrapper(const std::function<void()>& func): function(func) {}
    explicit Func_void_Wrapper(std::function<void()>&& func): function(std::move(func)) {}
  
    void call() const {
      function();
    }
  
    std::function<void()> function;
  };
  inline Func_void create_Func_void(void* closureHolder, void(*call)(void* /* closureHolder */), void(*destroy)(void*)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void([sharedClosureHolder, call]() -> void {
      call(sharedClosureHolder.get());
    });
  }
  inline std::shared_ptr<Func_void_Wrapper> share_Func_void(const Func_void& value) {
    return std::make_shared<Func_void_Wrapper>(value);
  }
  
  /**
   * Specialized version of `std::function<std::future<double>()>`.
   */
  using Func_std__future_double_ = std::function<std::future<double>()>;
  /**
   * Wrapper class for a `std::function<std::future<double>()>`, this can be used from Swift.
   */
  class Func_std__future_double__Wrapper {
  public:
    explicit Func_std__future_double__Wrapper(const std::function<std::future<double>()>& func): function(func) {}
    explicit Func_std__future_double__Wrapper(std::function<std::future<double>()>&& func): function(std::move(func)) {}
  
    PromiseHolder<double> call() const {
      auto result = function();
      return []() -> PromiseHolder<double> { throw std::runtime_error("Promise<..> cannot be converted to Swift yet!"); }();
    }
  
    std::function<std::future<double>()> function;
  };
  inline Func_std__future_double_ create_Func_std__future_double_(void* closureHolder, PromiseHolder<double>(*call)(void* /* closureHolder */), void(*destroy)(void*)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_std__future_double_([sharedClosureHolder, call]() -> std::future<double> {
      auto result = call(sharedClosureHolder.get());
      return result.getFuture();
    });
  }
  inline std::shared_ptr<Func_std__future_double__Wrapper> share_Func_std__future_double_(const Func_std__future_double_& value) {
    return std::make_shared<Func_std__future_double__Wrapper>(value);
  }
  
  /**
   * Specialized version of `PromiseHolder<double>`.
   */
  using PromiseHolder_double_ = PromiseHolder<double>;
  inline PromiseHolder<double> create_PromiseHolder_double_() {
    return PromiseHolder<double>();
  }
  
  /**
   * Specialized version of `std::function<std::future<std::string>()>`.
   */
  using Func_std__future_std__string_ = std::function<std::future<std::string>()>;
  /**
   * Wrapper class for a `std::function<std::future<std::string>()>`, this can be used from Swift.
   */
  class Func_std__future_std__string__Wrapper {
  public:
    explicit Func_std__future_std__string__Wrapper(const std::function<std::future<std::string>()>& func): function(func) {}
    explicit Func_std__future_std__string__Wrapper(std::function<std::future<std::string>()>&& func): function(std::move(func)) {}
  
    PromiseHolder<std::string> call() const {
      auto result = function();
      return []() -> PromiseHolder<std::string> { throw std::runtime_error("Promise<..> cannot be converted to Swift yet!"); }();
    }
  
    std::function<std::future<std::string>()> function;
  };
  inline Func_std__future_std__string_ create_Func_std__future_std__string_(void* closureHolder, PromiseHolder<std::string>(*call)(void* /* closureHolder */), void(*destroy)(void*)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_std__future_std__string_([sharedClosureHolder, call]() -> std::future<std::string> {
      auto result = call(sharedClosureHolder.get());
      return result.getFuture();
    });
  }
  inline std::shared_ptr<Func_std__future_std__string__Wrapper> share_Func_std__future_std__string_(const Func_std__future_std__string_& value) {
    return std::make_shared<Func_std__future_std__string__Wrapper>(value);
  }
  
  /**
   * Specialized version of `PromiseHolder<std::string>`.
   */
  using PromiseHolder_std__string_ = PromiseHolder<std::string>;
  inline PromiseHolder<std::string> create_PromiseHolder_std__string_() {
    return PromiseHolder<std::string>();
  }
  
  /**
   * Specialized version of `std::unordered_map<std::string, double>`.
   */
  using std__unordered_map_std__string__double_ = std::unordered_map<std::string, double>;
  inline std::unordered_map<std::string, double> create_std__unordered_map_std__string__double_(size_t size) {
    std::unordered_map<std::string, double> map;
    map.reserve(size);
    return map;
  }
  inline std::vector<std::string> get_std__unordered_map_std__string__double__keys(const std__unordered_map_std__string__double_& map) {
    std::vector<std::string> keys;
    keys.reserve(map.size());
    for (const auto& entry : map) {
      keys.push_back(entry.first);
    }
    return keys;
  }
  
  /**
   * Specialized version of `std::optional<Car>`.
   */
  using std__optional_Car_ = std::optional<Car>;
  inline std::optional<Car> create_std__optional_Car_(const Car& value) {
    return std::optional<Car>(value);
  }
  
  /**
   * Specialized version of `PromiseHolder<Car>`.
   */
  using PromiseHolder_Car_ = PromiseHolder<Car>;
  inline PromiseHolder<Car> create_PromiseHolder_Car_() {
    return PromiseHolder<Car>();
  }
  
  /**
   * Specialized version of `std::function<void(Powertrain, const std::string&, const std::shared_ptr<ArrayBuffer>&)>`.
   */
  using Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_ = std::function<void(Powertrain /* value */, const std::string& /* str */, const std::shared_ptr<ArrayBuffer>& /* buf */)>;
  /**
   * Wrapper class for a `std::function<void(Powertrain / * value * /, const std::string& / * str * /, const std::shared_ptr<ArrayBuffer>& / * buf * /)>`, this can be used from Swift.
   */
  class Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer__Wrapper {
  public:
    explicit Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer__Wrapper(const std::function<void(Powertrain /* value */, const std::string& /* str */, const std::shared_ptr<ArrayBuffer>& /* buf */)>& func): function(func) {}
    explicit Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer__Wrapper(std::function<void(Powertrain /* value */, const std::string& /* str */, const std::shared_ptr<ArrayBuffer>& /* buf */)>&& func): function(std::move(func)) {}
  
    void call(int value, std::string str, std::shared_ptr<ArrayBuffer> buf) const {
      function(static_cast<Powertrain>(value), str, buf);
    }
  
    std::function<void(Powertrain /* value */, const std::string& /* str */, const std::shared_ptr<ArrayBuffer>& /* buf */)> function;
  };
  inline Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_ create_Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_(void* closureHolder, void(*call)(void* /* closureHolder */, int, std::string, std::shared_ptr<ArrayBuffer>), void(*destroy)(void*)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_([sharedClosureHolder, call](Powertrain value, const std::string& str, const std::shared_ptr<ArrayBuffer>& buf) -> void {
      call(sharedClosureHolder.get(), static_cast<int>(value), str, buf);
    });
  }
  inline std::shared_ptr<Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer__Wrapper> share_Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_(const Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_& value) {
    return std::make_shared<Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer__Wrapper>(value);
  }
  
  /**
   * Specialized version of `std::optional<double>`.
   */
  using std__optional_double_ = std::optional<double>;
  inline std::optional<double> create_std__optional_double_(const double& value) {
    return std::optional<double>(value);
  }
  
  /**
   * Specialized version of `std::vector<Car>`.
   */
  using std__vector_Car_ = std::vector<Car>;
  inline std::vector<Car> create_std__vector_Car_(size_t size) {
    std::vector<Car> vector;
    vector.reserve(size);
    return vector;
  }
  
  /**
   * Specialized version of `std::unordered_map<std::string, std::string>`.
   */
  using std__unordered_map_std__string__std__string_ = std::unordered_map<std::string, std::string>;
  inline std::unordered_map<std::string, std::string> create_std__unordered_map_std__string__std__string_(size_t size) {
    std::unordered_map<std::string, std::string> map;
    map.reserve(size);
    return map;
  }
  inline std::vector<std::string> get_std__unordered_map_std__string__std__string__keys(const std__unordered_map_std__string__std__string_& map) {
    std::vector<std::string> keys;
    keys.reserve(map.size());
    for (const auto& entry : map) {
      keys.push_back(entry.first);
    }
    return keys;
  }
  
  /**
   * Specialized version of `std::function<void(const Person&)>`.
   */
  using Func_void_Person = std::function<void(const Person& /* p */)>;
  /**
   * Wrapper class for a `std::function<void(const Person& / * p * /)>`, this can be used from Swift.
   */
  class Func_void_Person_Wrapper {
  public:
    explicit Func_void_Person_Wrapper(const std::function<void(const Person& /* p */)>& func): function(func) {}
    explicit Func_void_Person_Wrapper(std::function<void(const Person& /* p */)>&& func): function(std::move(func)) {}
  
    void call(Person p) const {
      function(p);
    }
  
    std::function<void(const Person& /* p */)> function;
  };
  inline Func_void_Person create_Func_void_Person(void* closureHolder, void(*call)(void* /* closureHolder */, Person), void(*destroy)(void*)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_Person([sharedClosureHolder, call](const Person& p) -> void {
      call(sharedClosureHolder.get(), p);
    });
  }
  inline std::shared_ptr<Func_void_Person_Wrapper> share_Func_void_Person(const Func_void_Person& value) {
    return std::make_shared<Func_void_Person_Wrapper>(value);
  }

} // namespace margelo::nitro::image::bridge::swift
