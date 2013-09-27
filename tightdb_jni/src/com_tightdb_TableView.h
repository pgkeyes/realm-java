/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_TableView */

#ifndef _Included_com_tightdb_TableView
#define _Included_com_tightdb_TableView
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tightdb_TableView
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeClose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetColumnCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeGetColumnCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetColumnName
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableView_nativeGetColumnName
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetColumnType
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_TableView_nativeGetColumnType
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetLong
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeGetLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetBoolean
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_TableView_nativeGetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetFloat
 * Signature: (JJJ)F
 */
JNIEXPORT jfloat JNICALL Java_com_tightdb_TableView_nativeGetFloat
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetDouble
 * Signature: (JJJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeGetDouble
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetDateTimeValue
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeGetDateTimeValue
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetString
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableView_nativeGetString
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetBinary
 * Signature: (JJJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_TableView_nativeGetBinary
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetByteArray
 * Signature: (JJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_tightdb_TableView_nativeGetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetMixedType
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_TableView_nativeGetMixedType
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetMixed
 * Signature: (JJJ)Lcom/tightdb/Mixed;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_TableView_nativeGetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetSubTable
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeGetSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeGetSubTableSize
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeGetSubTableSize
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeClearSubTable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeClearSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetFloat
 * Signature: (JJJF)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jfloat);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetDouble
 * Signature: (JJJD)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jdouble);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetDateTimeValue
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetDateTimeValue
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetBinary
 * Signature: (JJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetBinary
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSetMixed
 * Signature: (JJJLcom/tightdb/Mixed;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeAddInt
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeAddInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeClear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeClear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeRemoveRow
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeRemoveRow
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindFirstInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindFirstInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindFirstBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindFirstBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindFirstFloat
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindFirstFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindFirstDouble
 * Signature: (JJD)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindFirstDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindFirstDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindFirstDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindFirstString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindFirstString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindAllInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindAllInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindAllBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindAllBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindAllFloat
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindAllFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindAllDouble
 * Signature: (JJD)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindAllDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindAllDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindAllDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeFindAllString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeFindAllString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSumInt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeSumInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeMaximumInt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeMaximumInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeMinimumInt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_nativeMinimumInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeAverageInt
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeAverageInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSumFloat
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeSumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeMaximumFloat
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_com_tightdb_TableView_nativeMaximumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeMinimumFloat
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_com_tightdb_TableView_nativeMinimumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeAverageFloat
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeAverageFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeSumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeMaximumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeMaximumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeMinimumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeMinimumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeAverageDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_TableView_nativeAverageDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeSort
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableView_nativeSort
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableView
 * Method:    createNativeTableView
 * Signature: (Lcom/tightdb/Table;J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableView_createNativeTableView
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeToJson
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableView_nativeToJson
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeToString
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableView_nativeToString
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableView
 * Method:    nativeRowToString
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableView_nativeRowToString
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
