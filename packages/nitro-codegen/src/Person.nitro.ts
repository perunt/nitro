import type { HybridObject } from 'react-native-nitro-modules'

interface Item {
  price: number
}

interface Car extends Item {
  make: string
  model: string
}

export interface Person extends HybridObject<{ ios: 'c++' }> {
  readonly name: string
  readonly age: number
  isHappy: boolean
  sayHi(name: string): void

  car?: Car
}
