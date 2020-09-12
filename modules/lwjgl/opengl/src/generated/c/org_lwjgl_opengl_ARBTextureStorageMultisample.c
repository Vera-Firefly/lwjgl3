#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureStorageMultisample_glTextureStorage2DMultisampleEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint samples, jint internalformat, jint width, jint height, jboolean fixedsamplelocations) {
    UNUSED_PARAM(clazz)
    glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureStorageMultisample_glTextureStorage3DMultisampleEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint samples, jint internalformat, jint width, jint height, jint depth, jboolean fixedsamplelocations) {
    UNUSED_PARAM(clazz)
    glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

EXTERN_C_EXIT
