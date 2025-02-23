#include <jni.h>
#include "nitroperfOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::nitroperf::initialize(vm);
}
