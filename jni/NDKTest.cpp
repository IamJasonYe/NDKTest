#include <jni.h>

#ifndef _Included_com_example_ndktest_MainActivity
#define _Included_com_example_ndktest_MainActivity
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_example_ndktest_MainActivity
 * Method:    adder
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_example_ndktest_MainActivity_adder
  (JNIEnv * env, jobject thiz, jint a, jint b) {
	return a + b + 1;
}

#ifdef __cplusplus
}
#endif
#endif
