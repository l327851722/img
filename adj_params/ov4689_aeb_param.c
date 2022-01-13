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

aeb_param_t ov4689_aeb_param ={
	.aeb_version={
			20191209,0,AEB_VERSION,0,0,
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
			.cfg_ae_gain_tbl_size =385,
			.cfg_ae_gain_tbl ={//44.625db,step =0.09375db
				4096,4140,4185,4231,4277,4323,4370,4417,4465,4514,
                4563,4612,4662,4713,4764,4816,4868,4921,4974,5028,
                5083,5138,5194,5250,5307,5365,5423,5482,5541,5601,
                5662,5724,5786,5849,5912,5976,6041,6107,6173,6240,
                6308,6376,6445,6515,6586,6657,6730,6803,6876,6951,
                7026,7103,7180,7258,7336,7416,7497,7578,7660,7743,
                7827,7912,7998,8085,8173,8261,8351,8442,8533,8626,
                8719,8814,8910,9006,9104,9203,9303,9404,9506,9609,
                9713,9819,9925,10033,10142,10252,10363,10475,10589,10704,
                10820,10938,11056,11176,11298,11420,11544,11669,11796,11924,
                12053,12184,12316,12450,12585,12722,12860,12999,13140,13283,
                13427,13573,13720,13869,14020,14172,14326,14481,14638,14797,
                14958,15120,15284,15450,15617,15787,15958,16131,16306,16483,
                16662,16843,17026,17211,17397,17586,17777,17970,18165,18362,
                18561,18763,18966,19172,19380,19591,19803,20018,20235,20455,
                20677,20901,21128,21357,21589,21823,22060,22300,22542,22786,
                23034,23283,23536,23792,24050,24311,24575,24841,25111,25383,
                25659,25937,26219,26503,26791,27081,27375,27672,27973,28276,
                28583,28893,29207,29524,29844,30168,30495,30826,31161,31499,
                31841,32186,32536,32889,33246,33606,33971,34340,34712,35089,
                35470,35855,36244,36637,37035,37437,37843,38254,38669,39088,
                39513,39941,40375,40813,41256,41703,42156,42614,43076,43543,
                44016,44494,44976,45465,45958,46457,46961,47470,47985,48506,
                49033,49565,50103,50646,51196,51751,52313,52881,53455,54035,
                54621,55214,55813,56419,57031,57650,58275,58908,59547,60193,
                60846,61507,62174,62849,63531,64220,64917,65622,66334,67054,
                67781,68517,69260,70012,70772,71540,72316,73101,73894,74696,
                75507,76326,77154,77992,78838,79693,80558,81432,82316,83209,
                84112,85025,85948,86881,87823,88776,89740,90714,91698,92693,
                93699,94716,95744,96783,97833,98895,99968,101053,102149,103258,
                104378,105511,106656,107813,108983,110166,111361,112570,113792,115026,
                116275,117536,118812,120101,121405,122722,124054,125400,126761,128136,
                129527,130932,132353,133790,135241,136709,138193,139692,141208,142741,
                144290,145855,147438,149038,150655,152290,153943,155614,157302,159009,
                160735,162479,164242,166025,167826,169647,171488,173349,175231,177132,
                179054,180997,182962,184947,186954,188983,191034,193107,195202,197321,
                199462,201626,203814,206026,208262,210522,212807,215116,217450,219810,
                222195,224607,227044,229508,231998,234516,237061,239633,242234,244863,
                247520,250206,252921,255666,258440,
        },

	 .sensor_config ={
		36,//max_gain_db
		24, // max global gain db
		12, // max single frame gain db
		2,//shutter_delay
		2,//agc_delay
		{	// hdr delay, useless for linear mode
			{{0, 0, 0}},	// shutter
			{{0, 0, 0}},	// agc
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
		{2216, 1024, 1944}, //AUTOMATIC
		{1421, 1024, 3358}, //INCANDESCENT
		{2034, 1024, 2792}, //D4000
		{2216, 1024, 1944}, //D5000
		{2584, 1024, 1760}, //SUNNY
		{2978, 1024, 1618}, //CLOUDY
		{1750, 1024, 1400}, //FLASH
		{1150, 1024, 1900}, //FLUORESCENT
		{1575, 1024, 1350}, //FLUORESCENT_H
		{1600, 1024, 1380}, //UNDER WATER
		{1375, 1024, 1600}, //CUSTOM
		{2584, 1024, 1760}, //AUTOMATIC OUTDOOR

	},
        {
		12,
		{
		{1014,1848,2744,3821,-1699,4696,-1469,6171,1100,1225,866,2745,1},	// 0	INCANDESCENT
		{1216,2348,2084,3244,-1543,4484,-1268,5839,579,1121,955,1611,2},	// 1	D4000
		{1639,2543,1514,2397,-1085,3790,-1231,5172,999,-656,768,914,4}, // 2	D5000
		{2230,2994,1341,2119,-315,2189,-420,3165,1064,-1407,1187,-806,8},	// 3	SUNNY
		{2682,3362,1327,1917,-274,2083,-236,2654,1338,-2779,1137,-1275,4},	// 4	CLOUDY
		{2300, 2850, 1750, 2250, -1000, 4050, -1000, 4900,1000, -1000, 1000,  -80, 0 }, // 5	PROJECTOR
		{1700,2200,2200,2800,-1600,5100,-1900,6900,2000,-1800,1400,260, 0}, // 6	GREEN REGION
		{	0,	  0,	0,	  0,	 0,    0,	  0,	0,	 0,   0,	0,	  0, 0 },	// 7	FLASH
		{	0,	  0,	0,	  0,	 0,    0,	  0,	0,	 0,   0,	0,	  0, 0 },	// 8	FLUORESCENT
		{	0,	  0,	0,	  0,	 0,    0,	  0,	0,	 0,   0,	0,	  0, 0 },	// 9	FLUORESCENT_2
		{	0,	  0,	0,	  0,	 0,    0,	  0,	0,	 0,   0,	0,	  0, 0 },	// 10 FLUORESCENT_3
		{	0,	  0,	0,	  0,	 0,    0,	  0,	0,	 0,   0,	0,	  0, 0 }	// 11 CUSTOM

		}, 
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
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_1600,0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_3200,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_6400,0}}},
			},
		},
 	},
	.cfg_ae_lines_for_expo_2x={
		.ae_line_info[0]={
			.line_num =4,
			.line_belt=4,
			.lines={
				{{{SHUTTER_1BY4000, ISO_1600, 0}}, {{SHUTTER_1BY100, ISO_1600,0}}},
				{{{SHUTTER_1BY100, ISO_1600, 0}}, {{SHUTTER_1BY100, ISO_3200, 0}}},
				{{{SHUTTER_1BY50, ISO_1600, 0}}, {{SHUTTER_1BY50, ISO_6400,0}}},
				{{{SHUTTER_1BY31, ISO_100, 0}}, {{SHUTTER_1BY31, ISO_19200,0}}},
			},
		},
		.ae_line_info[1]={
			.line_num =1,
			.line_belt=1,
			.lines={
				{{{SHUTTER_INVALID, ISO_100, 0}}, {{SHUTTER_INVALID, ISO_800,0}}},
			},
		},
	},
	.cfg_ae_lines_for_expo_3x={
		.ae_line_info[0]={
			.line_num =4,
			.line_belt=4,
			.lines={
				{{{SHUTTER_1BY4000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_300, 0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_800,0}}},
				{{{SHUTTER_1BY40, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_25600,0}}},
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
