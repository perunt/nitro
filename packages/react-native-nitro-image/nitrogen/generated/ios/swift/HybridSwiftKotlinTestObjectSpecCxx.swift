///
/// HybridSwiftKotlinTestObjectSpecCxx.swift
/// Fri Sep 06 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridSwiftKotlinTestObjectSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public final class HybridSwiftKotlinTestObjectSpecCxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::image::bridge::swift`)
   * from `NitroImage-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Holds an instance of the `HybridSwiftKotlinTestObjectSpec` Swift protocol.
   */
  private(set) var implementation: HybridSwiftKotlinTestObjectSpec

  /**
   * Create a new `HybridSwiftKotlinTestObjectSpecCxx` that wraps the given `HybridSwiftKotlinTestObjectSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: HybridSwiftKotlinTestObjectSpec) {
    self.implementation = implementation
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public var hybridContext: margelo.nitro.HybridContext {
    get {
      return self.implementation.hybridContext
    }
    set {
      self.implementation.hybridContext = newValue
    }
  }

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  public var memorySize: Int {
    return self.implementation.memorySize
  }

  // Properties
  public var numberValue: Double {
    @inline(__always)
    get {
      return self.implementation.numberValue
    }
    @inline(__always)
    set {
      self.implementation.numberValue = newValue
    }
  }
  
  public var boolValue: Bool {
    @inline(__always)
    get {
      return self.implementation.boolValue
    }
    @inline(__always)
    set {
      self.implementation.boolValue = newValue
    }
  }
  
  public var stringValue: std.string {
    @inline(__always)
    get {
      return std.string(self.implementation.stringValue)
    }
    @inline(__always)
    set {
      self.implementation.stringValue = String(newValue)
    }
  }
  
  public var bigintValue: Int64 {
    @inline(__always)
    get {
      return self.implementation.bigintValue
    }
    @inline(__always)
    set {
      self.implementation.bigintValue = newValue
    }
  }
  
  public var stringOrUndefined: bridge.std__optional_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__string_ in
        if let actualValue = self.implementation.stringOrUndefined {
          return bridge.create_std__optional_std__string_(std.string(actualValue))
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.stringOrUndefined = { () -> String? in
        if let actualValue = newValue.value {
          return String(actualValue)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var stringOrNull: bridge.std__optional_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__string_ in
        if let actualValue = self.implementation.stringOrNull {
          return bridge.create_std__optional_std__string_(std.string(actualValue))
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.stringOrNull = { () -> String? in
        if let actualValue = newValue.value {
          return String(actualValue)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var optionalString: bridge.std__optional_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__string_ in
        if let actualValue = self.implementation.optionalString {
          return bridge.create_std__optional_std__string_(std.string(actualValue))
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.optionalString = { () -> String? in
        if let actualValue = newValue.value {
          return String(actualValue)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var someRecord: bridge.std__unordered_map_std__string__double_ {
    @inline(__always)
    get {
      return { () -> bridge.std__unordered_map_std__string__double_ in
        var map = bridge.create_std__unordered_map_std__string__double_(self.implementation.someRecord.count)
        for (k, v) in self.implementation.someRecord {
          map[std.string(k)] = v
        }
        return map
      }()
    }
    @inline(__always)
    set {
      self.implementation.someRecord = { () -> Dictionary<String, Double> in
        var dictionary = Dictionary<String, Double>(minimumCapacity: newValue.size())
        let keys = bridge.get_std__unordered_map_std__string__double__keys(newValue)
        for key in keys {
          let value = newValue[key]!
          dictionary[String(key)] = value
        }
        return dictionary
      }()
    }
  }
  
  public var someArray: bridge.std__vector_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__vector_std__string_ in
        var vector = bridge.create_std__vector_std__string_(self.implementation.someArray.count)
        for item in self.implementation.someArray {
          vector.push_back(std.string(item))
        }
        return vector
      }()
    }
    @inline(__always)
    set {
      self.implementation.someArray = newValue.map({ val in String(val) })
    }
  }
  
  public var someOptional: bridge.std__optional_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__string_ in
        if let actualValue = self.implementation.someOptional {
          return bridge.create_std__optional_std__string_(std.string(actualValue))
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.someOptional = { () -> String? in
        if let actualValue = newValue.value {
          return String(actualValue)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var someMap: margelo.nitro.TSharedMap {
    @inline(__always)
    get {
      return self.implementation.someMap.cppPart
    }
    @inline(__always)
    set {
      self.implementation.someMap = AnyMapHolder(withCppPart: newValue)
    }
  }
  
  public var car: bridge.std__optional_Car_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_Car_ in
        if let actualValue = self.implementation.car {
          return bridge.create_std__optional_Car_(actualValue)
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.car = { () -> Car? in
        if let actualValue = newValue.value {
          return actualValue
        } else {
          return nil
        }
      }()
    }
  }
  
  public var powertrain: Int32 {
    @inline(__always)
    get {
      return self.implementation.powertrain.rawValue
    }
    @inline(__always)
    set {
      self.implementation.powertrain = margelo.nitro.image.Powertrain(rawValue: newValue)!
    }
  }
  
  public var oldEnum: Int32 {
    @inline(__always)
    get {
      return self.implementation.oldEnum.rawValue
    }
    @inline(__always)
    set {
      self.implementation.oldEnum = margelo.nitro.image.OldEnum(rawValue: newValue)!
    }
  }
  
  public var buffer: ArrayBufferHolder {
    @inline(__always)
    get {
      return self.implementation.buffer
    }
    @inline(__always)
    set {
      self.implementation.buffer = newValue
    }
  }

  // Methods
  @inline(__always)
  public func simpleFunc() -> Void {
    do {
      try self.implementation.simpleFunc()
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func addNumbers(a: Double, b: Double) -> Double {
    do {
      let result = try self.implementation.addNumbers(a: a, b: b)
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func addStrings(a: std.string, b: std.string) -> std.string {
    do {
      let result = try self.implementation.addStrings(a: String(a), b: String(b))
      return std.string(result)
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func multipleArguments(num: Double, str: std.string, boo: Bool) -> Void {
    do {
      try self.implementation.multipleArguments(num: num, str: String(str), boo: boo)
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getNumbers() -> bridge.std__vector_double_ {
    do {
      let result = try self.implementation.getNumbers()
      return { () -> bridge.std__vector_double_ in
        var vector = bridge.create_std__vector_double_(result.count)
        for item in result {
          vector.push_back(item)
        }
        return vector
      }()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getStrings() -> bridge.std__vector_std__string_ {
    do {
      let result = try self.implementation.getStrings()
      return { () -> bridge.std__vector_std__string_ in
        var vector = bridge.create_std__vector_std__string_(result.count)
        for item in result {
          vector.push_back(std.string(item))
        }
        return vector
      }()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func callCallback(callback: bridge.Func_void) -> Void {
    do {
      try self.implementation.callCallback(callback: { () -> (() -> Void) in
        let shared = bridge.share_Func_void(callback)
        return { () -> Void in
          shared.pointee.call()
        }
      }())
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createNewBuffer(size: Double) -> ArrayBufferHolder {
    do {
      let result = try self.implementation.createNewBuffer(size: size)
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func newTestObject() -> HybridSwiftKotlinTestObjectSpecCxx {
    do {
      let result = try self.implementation.newTestObject()
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func bounceBack(obj: HybridSwiftKotlinTestObjectSpecCxx) -> HybridSwiftKotlinTestObjectSpecCxx {
    do {
      let result = try self.implementation.bounceBack(obj: obj.implementation)
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func call(args: CallbackHolder) -> Void {
    do {
      try self.implementation.call(args: args)
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getNumberAsync() -> bridge.PromiseHolder_double_ {
    do {
      let result = try self.implementation.getNumberAsync()
      return { () -> bridge.PromiseHolder_double_ in
        let promiseHolder = bridge.create_PromiseHolder_double_()
        result
          .then({ __result in promiseHolder.resolve(__result) })
          .catch({ __error in promiseHolder.reject(std.string(String(describing: __error))) })
        return promiseHolder
      }()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getStringAsync() -> bridge.PromiseHolder_std__string_ {
    do {
      let result = try self.implementation.getStringAsync()
      return { () -> bridge.PromiseHolder_std__string_ in
        let promiseHolder = bridge.create_PromiseHolder_std__string_()
        result
          .then({ __result in promiseHolder.resolve(std.string(__result)) })
          .catch({ __error in promiseHolder.reject(std.string(String(describing: __error))) })
        return promiseHolder
      }()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getCarAsync() -> bridge.PromiseHolder_Car_ {
    do {
      let result = try self.implementation.getCarAsync()
      return { () -> bridge.PromiseHolder_Car_ in
        let promiseHolder = bridge.create_PromiseHolder_Car_()
        result
          .then({ __result in promiseHolder.resolve(__result) })
          .catch({ __error in promiseHolder.reject(std.string(String(describing: __error))) })
        return promiseHolder
      }()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func doSomeStuff(withEnum: bridge.Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_) -> Void {
    do {
      try self.implementation.doSomeStuff(withEnum: { () -> ((Powertrain, String, ArrayBufferHolder) -> Void) in
        let shared = bridge.share_Func_void_Powertrain_std__string_std__shared_ptr_ArrayBuffer_(withEnum)
        return { (value: Powertrain, str: String, buf: ArrayBufferHolder) -> Void in
          shared.pointee.call(value.rawValue, std.string(str), buf.getArrayBuffer())
        }
      }())
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
}
