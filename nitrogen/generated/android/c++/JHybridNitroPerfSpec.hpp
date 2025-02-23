///
/// HybridNitroPerfSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridNitroPerfSpec.hpp"




namespace margelo::nitro::nitroperf {

  using namespace facebook;

  class JHybridNitroPerfSpec: public jni::HybridClass<JHybridNitroPerfSpec, JHybridObject>,
                              public virtual HybridNitroPerfSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/nitroperf/HybridNitroPerfSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridNitroPerfSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridNitroPerfSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    ~JHybridNitroPerfSpec() override {
      // Hermes GC can destroy JS objects on a non-JNI Thread.
      jni::ThreadScope::WithClassLoader([&] { _javaPart.reset(); });
    }

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridNitroPerfSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    double multiply(double a, double b) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridNitroPerfSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::nitroperf
