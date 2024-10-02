///
/// HybridTestObjectSwiftKotlinSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the TestObjectSwiftKotlin HybridObject.
 * Implement this protocol to create Swift-based instances of TestObjectSwiftKotlin.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridTestObjectSwiftKotlin : HybridTestObjectSwiftKotlinSpec {
 *   // Initialize HybridContext
 *   var hybridContext = margelo.nitro.HybridContext()
 *
 *   // Return size of the instance to inform JS GC about memory pressure
 *   var memorySize: Int {
 *     return getSizeOf(self)
 *   }
 *
 *   // ...
 * }
 * ```
 */
public protocol HybridTestObjectSwiftKotlinSpec: HybridObjectSpec {
  // Properties
  var numberValue: Double { get set }
  var boolValue: Bool { get set }
  var stringValue: String { get set }
  var bigintValue: Int64 { get set }
  var stringOrUndefined: String? { get set }
  var stringOrNull: String? { get set }
  var optionalString: String? { get set }
  var someVariantFirst: Variant_String_Double { get set }
  var thisObject: HybridTestObjectSwiftKotlinSpec { get }

  // Methods
  func simpleFunc() throws -> Void
  func addNumbers(a: Double, b: Double) throws -> Double
  func addStrings(a: String, b: String) throws -> String
  func multipleArguments(num: Double, str: String, boo: Bool) throws -> Void
  func createMap() throws -> AnyMapHolder
  func mapRoundtrip(map: AnyMapHolder) throws -> AnyMapHolder
  func funcThatThrows() throws -> Double
  func tryOptionalParams(num: Double, boo: Bool, str: String?) throws -> String
  func tryMiddleParam(num: Double, boo: Bool?, str: String) throws -> String
  func tryOptionalEnum(value: Powertrain?) throws -> Powertrain?
  func passVariant(either: Variant_String_Double_Bool__Double___String_) throws -> Variant_String_Double
  func calculateFibonacciSync(value: Double) throws -> Int64
  func calculateFibonacciAsync(value: Double) throws -> Promise<Int64>
  func wait(seconds: Double) throws -> Promise<Void>
  func callCallback(callback: @escaping (() -> Void)) throws -> Void
  func callAll(first: @escaping (() -> Void), second: @escaping (() -> Void), third: @escaping (() -> Void)) throws -> Void
  func callWithOptional(value: Double?, callback: @escaping ((_ maybe: Double?) -> Void)) throws -> Void
  func getCar() throws -> Car
  func isCarElectric(car: Car) throws -> Bool
  func getDriver(car: Car) throws -> Person?
  func createArrayBuffer() throws -> ArrayBufferHolder
  func getBufferLastItem(buffer: ArrayBufferHolder) throws -> Double
  func setAllValuesTo(buffer: ArrayBufferHolder, value: Double) throws -> Void
  func newTestObject() throws -> HybridTestObjectSwiftKotlinSpec
}

public extension HybridTestObjectSwiftKotlinSpec {
  /**
   * Create a new instance of HybridTestObjectSwiftKotlinSpecCxx for the given HybridTestObjectSwiftKotlinSpec.
   *
   * Instances of HybridTestObjectSwiftKotlinSpecCxx can be accessed from C++, and contain
   * additional required bridging code for C++ <> Swift interop.
   */
  func createCxxBridge() -> HybridTestObjectSwiftKotlinSpecCxx {
    return HybridTestObjectSwiftKotlinSpecCxx(self)
  }
}
