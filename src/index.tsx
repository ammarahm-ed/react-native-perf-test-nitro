import { NitroModules } from 'react-native-nitro-modules'
import type { NitroPerf } from './NitroPerf.nitro'

const NitroPerfHybridObject =
  NitroModules.createHybridObject<NitroPerf>('NitroPerf')

export function multiply(a: number, b: number): number {
  return NitroPerfHybridObject.multiply(a, b)
}
