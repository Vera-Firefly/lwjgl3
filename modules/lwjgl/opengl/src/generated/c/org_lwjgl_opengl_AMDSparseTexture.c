#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDSparseTexture_glTexStorageSparseAMD(JNIEnv *__env, jclass clazz, jint target, jint internalFormat, jint width, jint height, jint depth, jint layers, jint flags) {
    UNUSED_PARAM(clazz)
    glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDSparseTexture_glTextureStorageSparseAMD(JNIEnv *__env, jclass clazz, jint texture, jint target, jint internalFormat, jint width, jint height, jint depth, jint layers, jint flags) {
    UNUSED_PARAM(clazz)
    glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

EXTERN_C_EXIT
