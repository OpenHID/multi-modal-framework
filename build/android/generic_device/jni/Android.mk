LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := generic_device
LOCAL_SRC_FILES := generic_device.cpp
LOCAL_C_INCLUDES += /home/jason/Documents/tamgef/OpenHID/include/

include $(BUILD_SHARED_LIBRARY)
