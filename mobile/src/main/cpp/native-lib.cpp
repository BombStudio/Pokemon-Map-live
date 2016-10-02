#include <jni.h>
#include <string>

extern "C"
jstring
Java_bomb_studio_chakritrakhuang_livego_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
