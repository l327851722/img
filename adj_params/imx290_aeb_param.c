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

aeb_param_t imx290_aeb_param ={
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
			.cfg_ae_gain_tbl_size =241,
			.cfg_ae_gain_tbl ={//72db, step =0.3db
		4096,	4240,	4389,	4543,	4703,	4868,	5039,	5216,
		5400,	5589,	5786,	5989,	6200,	6417,	6643,	6876,
		7118,	7368,	7627,	7895,	8173,	8460,	8757,	9065,
		9383,	9713,	10054,	10408,	10774,	11152,	11544,	11950,
		12370,	12804,	13254,	13720,	14202,	14701,	15218,	15753,
		16306,	16880,	17473,	18087,	18722,	19380,	20061,	20766,
		21496,	22252,	23034,	23843,	24681,	25548,	26446,	27375,
		28337,	29333,	30364,	31431,	32536,	33679,	34863,	36088,
		37356,	38669,	40028,	41434,	42890,	44398,	45958,	47573,
		49245,	50975,	52767,	54621,	56541,	58527,	60584,	62713,
		64917,	67199,	69560,	72005,	74535,	77154,	79866,	82672,
		85578,	88585,	91698,	94920,	98256,	101709, 105283, 108983,
		112813, 116778, 120882, 125130, 129527, 134079, 138791, 143668,
		148717, 153943, 159353, 164953, 170750, 176750, 182962, 189391,
		196047, 202936, 210068, 217450, 225092, 233002, 241190, 249666,
		258440, 267522, 276924, 286655, 296729, 307157, 317951, 329124,
		340690, 352663, 365056, 377885, 391165, 404911, 419141, 433870,
		449117, 464900, 481238, 498150, 515656, 533777, 552535, 571952,
		592052, 612858, 634395, 656689, 679767, 703655, 728383, 753980,
		780477, 807904, 836296, 865685, 896107, 927598, 960196, 993939,
		1028869,	1065025,	1102453,	1141195,	1181299,	1222813,	1265785,	1310267,
		1356313,	1403977,	1453316,	1504388,	1557256,	1611981,	1668630,	1727269,
		1787969,	1850802,	1915843,	1983170,	2052863,	2125005,	2199682,	2276984,
		2357002,	2439832,	2525573,	2614327,	2706200,	2801302,	2899746,	3001649,
		3107134,	3216325,	3329354,	3446355,	3567467,	3692835,	3822610,	3956944,
		4096000,	4239942,	4388943,	4543180,	4702837,	4868105,	5039181,	5216269,
		5399580,	5589333,	5785754,	5989078,	6199547,	6417412,	6642934,	6876381,
		7118032,	7368175,	7627109,	7895142,	8172594,	8459797,	8757093,	9064836,
		9383394,	9713147,	10054488,	10407824,	10773578,	11152185,	11544096,	11949781,
		12369722,	12804421,	13254396,	13720184,	14202341,	14701442,	15218083,	15752879,	16306470,
        },

	 .sensor_config ={
                72,//max_gain_db
                72, // max global gain db
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
				{//3XHDR,min,max rows
					{256,NO_EXTRA_LIMITATION},//expo_0
					{16,NO_EXTRA_LIMITATION},//expo_1
					{1,NO_EXTRA_LIMITATION},//expo_2
				},
			},
     },
	.awb_param ={
	{
		{1666, 1024, 2112},	//AUTOMATIC
		{1118, 1024, 3335},	//INCANDESCENT
		{1341, 1024, 2759},	//D4000
		{1666, 1024, 2112},	//D5000
		{1880, 1024, 1754},	//SUNNY
		{2152, 1024, 1619},	//CLOUDY
		{1598, 1024, 1875},	//FLASH
		{1024, 1024, 1024},	//FLUORESCENT
		{1024, 1024, 1024},	//FLUORESCENT_H
		{1024, 1024, 1024},	//UNDER WATER
		{1024, 1024, 1024},	//CUSTOM
		{1880, 1024, 1754},	//AUTOMATIC OUTDOOR
	},
	{
		12,
		{{778,1507,3161,3765,-1852,4776,-1506,5727,353,2778,971,2811,1},	// 0	INCANDESCENT
		 {910,1737,2411,3279,-2722,5439,-1579,5635,721,1157,554,2722,2},	// 1    D4000
		 {1139,2035,1813,2508,-2029,4593,-1398,4919,386,1163,764,1578,4},	// 2	 D5000
		 {1382,2230,1494,1924,-874,2991,-1162,4234,451,702,344,1367,8},	// 3    SUNNY
		 {1778,2418,1313,1709,-566,2458,-1236,4428,734,-293,589,493,4},	// 4    CLOUDY
		 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },					// 5    ...
		 {1424,1876,2522,3140,-1303,4533,-1810,6143,1328,307,1595,765,0},		// 6	GREEN REGION
		 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 7    FLASH
		 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 8	FLUORESCENT
		 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 9    FLUORESCENT_2
		 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },	// 10	FLUORESCENT_3
		 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 }},
	},
		{{ 0 ,6},	//LUT num. AUTOMATIC  INDOOR
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
		}
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
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_409600,0}}},
			},
		},
 	},

	.cfg_ae_lines_for_expo_2x={
		.ae_line_info[0]={
			.line_num =2,
			.line_belt=2,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY33, ISO_100,0}}},
				{{{SHUTTER_1BY33, ISO_100, 0}}, {{SHUTTER_1BY33, ISO_12800,0}}},
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
			.line_num =2,
			.line_belt=2,
			.lines={
				{{{SHUTTER_1BY480, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_100,0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}},{{SHUTTER_1BY50, ISO_12800, 0}}},
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
