LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := NDKTest
LOCAL_SRC_FILES := NDKTest.cpp 

include $(BUILD_SHARED_LIBRARY)
