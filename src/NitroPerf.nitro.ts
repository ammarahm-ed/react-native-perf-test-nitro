import type { HybridObject } from 'react-native-nitro-modules'

export interface NitroPerf
  extends HybridObject<{ ios: 'swift'; android: 'kotlin' }> {
  multiply(a: number, b: number): number
}
