#include "param.h"
#include <iostream>
#include <typeinfo>
//#include "encoder_1_weight.h"


int main() {

	cout<<fixed;
	cout<<setprecision(16);

//	float img_in[1][28][28] = {
//		#include"Test_image.h"
//	};  // 填充测试数据
//
//	cout << img_in[0][0][0] << endl;

//	cout << a[0][0] << endl;

//	F_32 mm[10];  // 输出结果数组

	// 调用 Top Function
//	DTJSCC(img_in, mm);

	// 打印输出结果\

//	volatile float ddr_ptr[1024];
//
//	write_weights_to_ddr(ddr_ptr);
//
//	D32 buffer[1024];
//
//	read_weights_from_ddr(ddr_ptr, buffer, 0, 1024);
//
//	for (int i=0; i < 1024; i++){
//		cout << buffer[i] << endl;
//	}

	D32 a[1024][784]={
		#include "encoder_1_weight.h"
	};

//	for (int i = 0; i < 1024; i++) {
//		for (int j = 0; j < 784; j++){
//			cout << "a[" << i << "][" << j << "] = " << a[i][j] << endl;
//		}
//	}
    return 0;
}
