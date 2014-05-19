/* structure declaration*/

#include<stdio.h>
#include <android/log.h>
#define  LOG_TAG    "your-log-tag"

#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
	char arr[]="girmiti";
//Set the structure value
char* returnArray()
{
	
	return arr;
}
