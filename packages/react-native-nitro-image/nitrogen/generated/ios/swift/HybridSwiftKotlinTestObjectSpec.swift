///
/// HybridSwiftKotlinTestObjectSpec.swift
/// Sun Aug 11 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the SwiftKotlinTestObject HybridObject.
 * Implement this protocol to create Swift-based instances of SwiftKotlinTestObject.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridSwiftKotlinTestObject : HybridSwiftKotlinTestObjectSpec {
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
public protocol HybridSwiftKotlinTestObjectSpec: HybridObjectSpec {
  // Properties
  

  // Methods
  func hallo(value: Double?) throws -> Void
}

public extension HybridSwiftKotlinTestObjectSpec {
  /**
   * Create a new instance of HybridSwiftKotlinTestObjectSpecCxx for the given HybridSwiftKotlinTestObjectSpec.
   *
   * Instances of HybridSwiftKotlinTestObjectSpecCxx can be accessed from C++, and contain
   * additional required bridging code for C++ <> Swift interop.
   */
  func createCxxBridge() -> HybridSwiftKotlinTestObjectSpecCxx {
    return HybridSwiftKotlinTestObjectSpecCxx(self)
  }
}