#include "ScriptingEnvironment.h"
// #include <JavaScriptCore/JavaScriptCore.h>

// ===========================================================
// org.andengine.extension.scripting.ScriptingEnvironment
// ===========================================================

JNIEnv* mJNIEnv;
C_Engine* mEngine;

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* pJavaVM, void* pReserved) {
	return JNI_VERSION_1_4;
}

JNIEXPORT jobject JNICALL Java_org_andengine_extension_scripting_ScriptingEnvironment_init(JNIEnv* pJNIEnv, jclass pJClass, jstring pAPKPath, jobject pEngine) {
	mJNIEnv = pJNIEnv;

	setAPKPath(pJNIEnv, pJClass, pAPKPath);

	mEngine = new C_Engine(pEngine);
}

JNIEnv* JNI_ENV() {
	return mJNIEnv;
}

C_Engine* getEngine() {
	return mEngine;
}

void setAPKPath(JNIEnv* pJNIEnv, jclass pJClass, jstring pAPKPath) {
//	const char* str;
//	jboolean isCopy;
//	str = env->GetStringUTFChars(pAPKPath, &isCopy);
//	if (isCopy) {
//		setResourcePath(str);
//		env->ReleaseStringUTFChars(pAPKPath, str);
//	}
}