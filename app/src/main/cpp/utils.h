#pragma once
#include <iostream>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "LearnOpenGLES", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "LearnOpenGLES", __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "LearnOpenGLES", __VA_ARGS__))

int checkGLError(const char* msg);