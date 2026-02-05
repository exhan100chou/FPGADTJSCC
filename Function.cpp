#include "cstring"

#include <iostream>
#include <hls_math.h>

using namespace std;

//void Trans(F_32 in[3][28][28], D32 out[3][28][28]){
//	for (int i = 0; i < 1; i++) {
//		for (int j = 0; j < 28; j++) {
//			for (int k = 0; k < 28; k++){
//	               out[i][j][k] = in[i][j][k];
//			}
//		}
//	}
//}
//
//
//void Encoder_Flatten(D32 in[1][28][28], D32 out[784]){
//#pragma HLS ARRAY_PARTITION variable=in complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out complete dim=1
//	for (int i = 0; i < 28; i++) {
//	    for (int j = 0; j < 28; j++) {
//	        output[i * 28 + j] = input[0][i][j];
//	    }
//	}
//}
//
//
//void Encoder_Linear(D32 in[784], D32 wt[1024][784], D32 bs[1024], D32 out[1024]){
//#pragma HLS ARRAY_PARTITION variable=in complete dim=1
//#pragma HLS ARRAY_PARTITION variable=wt complete dim=1
//#pragma HLS ARRAY_PARTITION variable=bs complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out complete dim=1
//    // 初始化输出向量
//    for (int j = 0; j < 1024; j++) {
//        out[j] = 0;
//    }
//
//    // 矩阵乘法和偏置加法
//    for (int j = 0; j < 1024; j++) {
//        for (int i = 0; i < 784; i++) {
//            out[j] += in[i] * wt[j][i];  // 矩阵乘法
//        }
//        out[j] += bs[j];  // 加上偏置
//    }
//}
//
//
////void Sampler(D32 in[1024], D32 eb[16][64], D32 out[1024]){
////
////}
//
//
//void Decoder_Linear(D32 in[1024], D32 wt[1024][1024], D32 bs[1024], D32 out[1024]){
//#pragma HLS ARRAY_PARTITION variable=in complete dim=1
//#pragma HLS ARRAY_PARTITION variable=wt complete dim=1
//#pragma HLS ARRAY_PARTITION variable=bs complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out complete dim=1
//    // 初始化输出向量
//    for (int j = 0; j < 1024; j++) {
//        out[j] = 0;
//    }
//
//    // 矩阵乘法和偏置加法
//    for (int j = 0; j < 1024; j++) {
//        for (int i = 0; i < 1024; i++) {
//            out[j] += in[i] * wt[j][i];  // 矩阵乘法
//        }
//        out[j] += bs[j];  // 加上偏置
//    }
//}
//
//
//void Decoder_ReLu(D32 in[1024], D32 out[1024]){
//#pragma HLS ARRAY_PARTITION variable=in complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out complete dim=1
//	for (int i = 0; i < 1024; i++) {
//		out[i] = (in[i] > 0) ? in[i] : D32(0);
//	}
//}
//
//
//void Decoder_2_Linear(D32 in[1024], D32 wt[256][1024], D32 bs[256], D32 out[256]){
//#pragma HLS ARRAY_PARTITION variable=in complete dim=1
//#pragma HLS ARRAY_PARTITION variable=wt complete dim=1
//#pragma HLS ARRAY_PARTITION variable=bs complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out complete dim=1
//    // 初始化输出向量
//    for (int j = 0; j < 1024; j++) {
//        out[j] = 0;
//    }
//
//    // 矩阵乘法和偏置加法
//    for (int j = 0; j < 1024; j++) {
//        for (int i = 0; i < 784; i++) {
//            out[j] += in[i] * wt[j][i];  // 矩阵乘法
//        }
//        out[j] += bs[j];  // 加上偏置
//    }
//}
//
//
//void Decoder_2_ReLu(D32 in[256], D32 out[256]){
//#pragma HLS ARRAY_PARTITION variable=in complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out complete dim=1
//	for (int i = 0; i < 256; i++) {
//		out[i] = (in[i] > 0) ? in[i] : D32(0);
//	}
//}
//
//
//void Decoder_3_Linear(D32 in[256], D32 wt[10][256], D32 bs[10], D32 out[10]){
//#pragma HLS ARRAY_PARTITION variable=in complete dim=1
//#pragma HLS ARRAY_PARTITION variable=wt complete dim=1
//#pragma HLS ARRAY_PARTITION variable=bs complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out complete dim=1
//    // 初始化输出向量
//    for (int j = 0; j < 10; j++) {
//        out[j] = 0;
//    }
//
//    // 矩阵乘法和偏置加法
//    for (int j = 0; j < 10; j++) {
//        for (int i = 0; i < 256; i++) {
//            out[j] += in[i] * wt[j][i];  // 矩阵乘法
//        }
//        out[j] += bs[j];  // 加上偏置
//    }
//}
