/*
 * image data
 *
 * History:
 *    Author: Lu Wang <lwang@ambarella.com>
 *
 * Copyright (c) 2016 Ambarella International LP
 *
 * This file and its contents ("Software") are protected by intellectual
 * property rights including, without limitation, U.S. and/or foreign
 * copyrights. This Software is also the confidential and proprietary
 * information of Ambarella International LP and its licensors. You may not use, reproduce,
 * disclose, distribute, modify, or otherwise prepare derivative works of this
 * Software or any portion thereof except pursuant to a signed license agreement
 * or nondisclosure agreement with Ambarella International LP or its authorized affiliates.
 * In the absence of such an agreement, you agree to promptly notify and return
 * this Software to Ambarella International LP
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF NON-INFRINGEMENT,
 * MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL AMBARELLA INTERNATIONAL LP OR ITS AFFILIATES BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; COMPUTER FAILURE OR MALFUNCTION; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "img_struct_arch.h"
//init from imx274
aeb_param_t imx412_aeb_param ={
	.aeb_version={
			20181105,0,AEB_VERSION,0,0,
	},
	.tile_config ={
                32,
                32,
                0,
                0,
                128,
                128,
                128,
                128,
                0,
                0x3fff,

                12,
                8,
                0,
                0,
                340,
                512,
                0,
                16383,

                12,
                8,
                0,
                0,
                340,
                512,
                340,
                512,

				0,
        },
	.cfg_ae_ratio_to_gain_tbl_size =0,
			.cfg_ae_ratio_to_gain_tbl={0},
			.cfg_ae_sht_nl_tbl_size =32,
			.cfg_ae_sht_nl_tbl ={
				0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31
			},
			.cfg_ae_gain_tbl_size =145,
			.cfg_ae_gain_tbl ={//27db,step = 0.1875dB
			4096,4185,4277,4370,4465,4563,4662,4764,4868,4974,5083,5194,5307,5423,5541,
			5662,5786,5912,6041,6173,6308,6445,6586,6730,6876,7026,7180,7336,7497,7660,
			7827,7998,8173,8351,8533,8719,8910,9104,9303,9506,9713,9925,10142,10363,10589,
			10820,11056,11298,11544,11796,12053,12316,12585,12860,13140,13427,13720,14020,14326,14638,
			14958,15284,15617,15958,16306,16662,17026,17397,17777,18165,18561,18966,19380,19803,20235,
			20677,21128,21589,22060,22542,23034,23536,24050,24575,25111,25659,26219,26791,27375,27973,
			28583,29207,29844,30495,31161,31841,32536,33246,33971,34712,35470,36244,37035,37843,38669,
			39513,40375,41256,42156,43076,44016,44976,45958,46961,47985,49033,50103,51196,52313,53455,
			54621,55813,57031,58275,59547,60846,62174,63531,64917,66334,67781,69260,70772,72316,73894,
			75507,77154,78838,80558,82316,84112,85948,87823,89740,91698,
			},

	 .sensor_config ={
            27,//max_gain_db
            27, // max global gain db
            0, // max single frame gain db
            0,//shutter_delay
            1,//agc_delay
		{	// hdr delay, useless for linear mode
			{{0, 0, 0}},	// shutter
			{{1, 1, 1}},	// agc
			{{0, 0, 0}},	// dgain
			{{0, 0, 0}}, 	// sensor offset
		},
		{	// hdr raw offset coef, non negative value is valid
			-1,		// long padding
			-1,		// short padding
		},
			.shutter_limit_cfg={
				{//2XHDR,min,max rows
					{1,NO_EXTRA_LIMITATION},//expo_0
					{1,NO_EXTRA_LIMITATION},//expo_1
				},
			},
	 },
	.awb_param ={
		{
			{1598, 1024, 1875},	//AUTOMATIC
			{1260, 1024, 2850},	//INCANDESCENT
			{1460, 1024, 2350},	//D4000
			{1780, 1024, 1814},	//D5000
			{2080, 1024, 1670},	//SUNNY
			{2220, 1024, 1550},	//CLOUDY
			{1750, 1024, 1800},	//FLASH
			{1600, 1024, 2600},	//FLUORESCENT
			{1857, 1024, 1700},	//FLUORESCENT_H
			{1024, 1024, 1024},	//UNDER WATER
			{1024, 1024, 1024},	//CUSTOM
			{1750, 1024, 1800},	//AUTOMATIC OUTDOOR
		},
		{
			12,
			{{1000,1500,2550,3200,-1500,4250,-1500,5200,1000,1300,1250,1750,1 },	// 0	INCANDESCENT
			 {1150,1800,2060,2850,-1300,3850,-2300,6700,2000,-1200,1000,1450,2 },	// 1    	office light,3800k
			 {1400,2050,1650,2300,-1900,4620,-1500,5050,900,20,1000,700,4},	// 2	 D5000
			 {1700,2270,1400,1950,-1300,3800,-1500,5070,1300,-1150,1100,-200,8},	// 3    SUNNY
			 {1950,2450,1250,1750,-1600,4460,-1500,5200,800,-500,1000,-450,4 },	// 4    CLOUDY
			 {1600, 2000, 1900, 3000, -1500, 4500, -1500, 5800, 1000,100,  1300, 700, -1 },	// 5	GREEN REGION, not finished yet
			 {1400, 1800, 2100, 3000, -1500, 4300, -1500, 5400, 2000, -1000, 1500, 800, 0 },	// 6    cwf
			 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 7    FLASH
			 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 8	FLUORESCENT
			 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 9    FLUORESCENT_2
			 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 10	FLUORESCENT_3
			 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 }},
		},
		{
			{ 0 ,6},	//LUT num. AUTOMATIC  INDOOR
			{ 0, 1},	//LUT num. INCANDESCENT
			{ 1, 1},	//LUT num. D4000
			{ 2, 1},	//LUT num. D5000
			{ 2, 5},	//LUT num. SUNNY
			{ 4, 3},	//LUT num. CLOUDY
			{ 7, 1},	//LUT num. FLASH
			{ 8, 1},	//LUT num. FLUORESCENT
			{ 9, 1},	//LUT num. FLUORESCENT_H
			{11, 1},	//LUT num. UNDER WATER
			{11, 1},	//LUT num. CUSTOM
			{ 0, 7},	//LUT num. AUTOMATIC  OUTDOOR
		},
	},

 	.decompand_table={
		0,4,8,12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60,
		64, 68, 72, 76, 80, 84, 88, 92, 96,100,104,108,112,116,120,124,
		128,136,144,152,160,168,176,184,192,200,208,216,224,232,240,248,
		256,272,288,304,320,336,352,368,384,400,416,432,448,464,480,496,
		512,544,576,608,640,672,704,736,768,800,832,864,896,928,960,992,
		1024, 1088, 1152, 1216, 1280, 1344, 1408, 1472, 1536, 1600, 1664, 1728, 1792, 1856, 1920, 1984,
		2048, 2560, 3072, 3584, 4096, 4608, 5120, 5632, 6144, 6656, 7168, 7680, 8192, 8704, 9216, 9728,
		10240,11264,12288,13312,14336,15360,16384,20480,24576,28672,32768,36864,40960,45056,49152,53248,
		57344,65536,131072,196608,262144,327680,393216,458752,524288,589824,655360,720896,786432,851968,917504,983040 ,
		1048576,
 	},

 	.cfg_ae_lines_for_expo_1x={
		.ae_line_info[0]={
			.line_num =4,
			.line_belt=4,
			.lines={
				{{{SHUTTER_1BY32000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_300,0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_800,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_2400,0}}},
			},
		},
 	},

	.cfg_ae_lines_for_expo_2x={
		.ae_line_info[0]={
			.line_num =2,
			.line_belt=2,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_800,0}}},
			},
		},
		.ae_line_info[1]={
			.line_num =1,
			.line_belt=1,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
			},
		},
	},
	.cfg_ae_lines_for_expo_3x={
		.ae_line_info[0]={
			.line_num =3,
			.line_belt=3,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}},{{SHUTTER_1BY100, ISO_300, 0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_800,0}}},
			},
		},
		.ae_line_info[1]={
			.line_num =1,
			.line_belt=1,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY200, ISO_100,0}}},
			},
		},
		.ae_line_info[2]={
			.line_num =1,
			.line_belt=1,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY480, ISO_100,0}}},
			},
		},
	},
};
