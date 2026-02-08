############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
## Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
############################################################
open_project MINIST_DTJSCC
set_top DTJSCC
add_files DDR_write.cpp
add_files DTJSCC.cpp
add_files Function.cpp
add_files Test_image.h
add_files decoder_0_bias.h
add_files decoder_0_weight.h
add_files decoder_2_bias.h
add_files decoder_2_weight.h
add_files decoder_4_bias.h
add_files decoder_4_weight.h
add_files encoder_1_bias.h
add_files encoder_1_weight.h
add_files param.h
add_files sampler_embedding.h
add_files -tb TestBench.cpp -cflags "-Wno-unknown-pragmas"
add_files -tb a.h -cflags "-Wno-unknown-pragmas"
open_solution "solution1" -flow_target vivado
set_part {xcvp1802-lsvc4072-1LHP-i-L}
create_clock -period 10 -name default
source "./MINIST_DTJSCC/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
