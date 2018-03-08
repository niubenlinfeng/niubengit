 #include <iostream>
   #include <sstream>
   #include "hwj_opencvjni_OpenCVHelper.h"
   JNIEXPORT jstring JNICALL
   Java_hwj_opencvjni_OpenCVHelper_getStringTmp(JNIEnv *env, jclass instance){
       std::stringstream ss;
       ss << "Hello from c++ " << std::endl;
       return env->NewStringUTF(ss.str().c_str());
   }