#include <jni.h>
#include <string>

extern "C"
jstring
Java_pair_1o_1dimes_andrew_treehugger_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
