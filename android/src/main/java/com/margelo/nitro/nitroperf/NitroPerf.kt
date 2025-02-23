package com.margelo.nitro.nitroperf
  
import com.facebook.proguard.annotations.DoNotStrip

@DoNotStrip
class NitroPerf : HybridNitroPerfSpec() {
  override fun multiply(a: Double, b: Double): Double {
    return a * b
  }
}
