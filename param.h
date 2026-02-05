#ifndef _PARAM_H
#define _PARAM_H

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <ap_fixed.h>
#include <ap_int.h>
#include <hls_math.h>
#include <iomanip>


typedef ap_fixed<64, 32, AP_RND, AP_SAT> D32; // data type
typedef ap_fixed<16, 8, AP_RND, AP_SAT> D16; // data type
typedef ap_fixed<8, 4, AP_RND, AP_SAT> D8; // data type
typedef ap_fixed<4, 2, AP_RND, AP_SAT> D4; // data type
typedef ap_fixed<2, 1, AP_RND, AP_SAT> D2; // data type
typedef half F_16;
using namespace std;

void write_weights_to_ddr(volatile float* ddr_ptr);

void read_weights_from_ddr(volatile float* ddr_ptr, D32* buffer, int start_index, int length);


//void Trans(F_32 in[3][28][28], D32 out[3][28][28]);
//
//void Encoder_Flatten(D32 in[1][28][28], D32 out[784]);
//void Encoder_Linear(D32 in[784], D32 wt[1024][784], D32 bs[1024], D32 out[1024]);
//
////void Sampler(D32 in[1024], D32 eb[16][64], D32 out[1024]);
//
//void Decoder_Linear(D32 in[1024], D32 wt[1024][1024], D32 bs[1024], D32 out[1024]);
//void Decoder_ReLu(D32 in[1024], D32 out[1024]);
//
//void Decoder_2_Linear(D32 in[1024], D32 wt[256][1024], D32 bs[256], D32 out[256]);
//void Decoder_2_ReLu(D32 in[256], D32 out[256]);
//
//void Decoder_3_Linear(D32 in[256], D32 wt[10][256], D32 bs[10], D32 out[10]);
//
//void DTJSCC(F_32 img_in[1][28][28], F_32 mm[10]);

#endif
