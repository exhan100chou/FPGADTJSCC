#include "param.h"
#include "hls_stream.h"
#include <ap_axi_sdata.h>

void write_weights_to_ddr(volatile float* ddr_ptr) {
    #pragma HLS INTERFACE m_axi port=ddr_ptr depth=1024 offset=slave
    #pragma HLS INTERFACE s_axilite port=ddr_ptr bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control

	D32 encoder_1_bias[1024]={
		#include "encoder_1_bias.h"  // 引入权重数据数组
	};

    for (int i = 0; i < 1024; i++) {
    	ddr_ptr[i] = encoder_1_bias[i];
    	printf("DDR pointer address: %p\n", ddr_ptr[i]);
    }
}

void read_weights_from_ddr(volatile float* ddr_ptr, D32* buffer, int start_index, int length) {
    #pragma HLS INTERFACE m_axi port=ddr_ptr depth=1024 offset=slave
    #pragma HLS INTERFACE s_axilite port=ddr_ptr bundle=control
    #pragma HLS INTERFACE s_axilite port=buffer bundle=control
    #pragma HLS INTERFACE s_axilite port=start_index bundle=control
    #pragma HLS INTERFACE s_axilite port=length bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control

    for (int i = 0; i < length; i++) {
        buffer[i] = ddr_ptr[start_index + i];
    }
}
