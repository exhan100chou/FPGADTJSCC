#include "param.h"
#include <iostream>
#include <typeinfo>



using namespace std;

void DTJSCC(float img_in[1][28][28], float mm[10]){

//	#pragma HLS INTERFACE s_axilite port=return
//	#pragma HLS INTERFACE m_axi depth=784 port=img_in offset=slave bundle=IMG
//	#pragma HLS INTERFACE m_axi depth=10 port=mm offset=slave bundle=OUT

//	D32 ef_in[1][28][28];
//	D32 ef_out[784];
//	D32 el_out[1024];
////	D32 s_out[1024];
//	D32 dl_out[1024];
//	D32 dr_out[1024];
//	D32 dl_2_out[256];
//	D32 dr_2_out[256];
////	D32 dl_3_out[10];
//
//	D32 encoder_1_weight[1024][784]={
//		#include "encoder_1_weight.h"
//	};
//
//	D32 encoder_1_bias[1024]={
//		#include "encoder_1_bias.h"
//	};
//
////	D32 sampler_embedding[16][64]={
////		#include "sampler_embedding.h"
////	};
//
//
//	D32 decoder_0_weight[1024][1024]={
//		#include "decoder_0_weight.h"
//	};
//
//
//	D32 decoder_0_bias[1024]={
//		#include "decoder_0_bias.h"
//	};
//
//	D32 decoder_2_weight[256][1024]={
//		#include "decoder_2_weight.h"
//	};
//
//	D32 decoder_2_bias[256]={
//		#include "decoder_2_bias.h"
//	};
//
//	D32 decoder_4_weight[10][256]={
//		#include "decoder_4_weight.h"
//	};
//
//	D32 decoder_4_bias[10]={
//		#include "decoder_4_bias.h"
//	};
//
//
//
//	void Trans(F_32 img_in, D32 ef_in);
//
//	void Encoder_Flatten(D32 ef_in, D32 ef_out);
//	void Encoder_Linear(D32 ef_out, D32 encoder_1_weight, D32 encoder_1_bias, D32 el_out);
//
////	void Sampler(D32 el_out, D32 sampler_embedding, D32 s_out);
//
//	void Decoder_Linear(D32 el_out, D32 decoder_0_weight, D32 decoder_0_bias, D32 dl_out);
//	void Decoder_ReLu(D32 dl_out, D32 dr_out);
//
//	void Decoder_2_Linear(D32 dr_out, D32 decoder_2_weight, D32 decoder_2_bias, D32 dl_2_out);
//	void Decoder_2_ReLu(D32 dl_2_out, D32 dr_2_out);
//
//	void Decoder_3_Linear(D32 dr_2_out, D32 decoder_4_weight, D32 decoder_4_bias, D32 mm);

}
