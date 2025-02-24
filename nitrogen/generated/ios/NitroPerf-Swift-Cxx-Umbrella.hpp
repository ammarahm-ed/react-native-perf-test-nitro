///
/// NitroPerf-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `HybridNitroPerfSpec` to properly resolve imports.
namespace margelo::nitro::nitroperf { class HybridNitroPerfSpec; }

// Include C++ defined types
#include "HybridNitroPerfSpec.hpp"
#include <NitroModules/Result.hpp>
#include <exception>
#include <memory>

// C++ helpers for Swift
#include "NitroPerf-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/RuntimeError.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridNitroPerfSpec_cxx` to properly resolve imports.
namespace NitroPerf { class HybridNitroPerfSpec_cxx; }

// Include Swift defined types
#if __has_include("NitroPerf-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "NitroPerf".
#include "NitroPerf-Swift.h"
// Same as above, but used when building with frameworks (`use_frameworks`)
#elif __has_include(<NitroPerf/NitroPerf-Swift.h>)
#include <NitroPerf/NitroPerf-Swift.h>
#else
#error NitroPerf's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "NitroPerf", and try building the app first.
#endif
