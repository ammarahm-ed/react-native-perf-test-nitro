///
/// nitroperfOnLoad.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.nitroperf

import android.util.Log

internal class nitroperfOnLoad {
  companion object {
    private const val TAG = "nitroperfOnLoad"
    private var didLoad = false
    /**
     * Initializes the native part of "nitroperf".
     * This method is idempotent and can be called more than once.
     */
    @JvmStatic
    fun initializeNative() {
      if (didLoad) return
      try {
        Log.i(TAG, "Loading nitroperf C++ library...")
        System.loadLibrary("nitroperf")
        Log.i(TAG, "Successfully loaded nitroperf C++ library!")
        didLoad = true
      } catch (e: Error) {
        Log.e(TAG, "Failed to load nitroperf C++ library! Is it properly installed and linked? " +
                    "Is the name correct? (see `CMakeLists.txt`, at `add_library(...)`)", e)
        throw e
      }
    }
  }
}
