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

aeb_param_t ov9732_aeb_param ={
	.aeb_version={
			20181109,0,AEB_VERSION,0,0,
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
			.cfg_ae_gain_tbl_size =382,
			.cfg_ae_gain_tbl ={//35.7db,step =0.09375db
			4096,4140,4185,4231,4277,4323,4370,4417,4465,4514,4563,4612,4662,4713,4764,4816,4868,
			4921,4974,5028,5083,5138,5194,5250,5307,5365,5423,5482,5541,5601,5662,5724,5786,5849,
			5912,5976,6041,6107,6173,6240,6308,6376,6445,6515,6586,6657,6730,6803,6876,6951,7026,
			7103,7180,7258,7336,7416,7497,7578,7660,7743,7827,7912,7998,8085,8173,8261,8351,8442,
			8533,8626,8719,8814,8910,9006,9104,9203,9303,9404,9506,9609,9713,9819,9925,10033,10142,
			10252,10363,10475,10589,10704,10820,10938,11056,11176,11298,11420,11544,11669,11796,11924,
			12053,12184,12316,12450,12585,12722,12860,12999,13140,13283,13427,13573,13720,13869,14020,
			14172,14326,14481,14638,14797,14958,15120,15284,15450,15617,15787,15958,16131,16306,16483,
			16662,16843,17026,17211,17397,17586,17777,17970,18165,18362,18561,18763,18966,19172,19380,
			19591,19803,20018,20235,20455,20677,20901,21128,21357,21589,21823,22060,22300,22542,22786,
			23034,23283,23536,23792,24050,24311,24575,24841,25111,25383,25659,25937,26219,26503,26791,
			27081,27375,27672,27973,28276,28583,28893,29207,29524,29844,30168,30495,30826,31161,31499,
			31841,32186,32536,32889,33246,33606,33971,34340,34712,35089,35470,35855,36244,36637,37035,
			37437,37843,38254,38669,39088,39513,39941,40375,40813,41256,41703,42156,42614,43076,43543,
			44016,44494,44976,45465,45958,46457,46961,47470,47985,48506,49033,49565,50103,50646,51196,
			51751,52313,52881,53455,54035,54621,55214,55813,56419,57031,57650,58275,58908,59547,60193,
			60846,61507,62174,62849,63531,64220,64917,65622,66334,67054,67781,68517,69260,70012,70772,
			71540,72316,73101,73894,74696,75507,76326,77154,77992,78838,79693,80558,81432,82316,83209,
			84112,85025,85948,86881,87823,88776,89740,90714,91698,92693,93699,94716,95744,96783,97833,
			98895,99968,101053,102149,103258,104378,105511,106656,107813,108983,110166,111361,112570,113792,
			115026,116275,117536,118812,120101,121405,122722,124054,125400,126761,128136,129527,130932,132353,
			133790,135241,136709,138193,139692,141208,142741,144290,145855,147438,149038,150655,152290,153943,
			155614,157302,159009,160735,162479,164242,166025,167826,169647,171488,173349,175231,177132,179054,
			180997,182962,184947,186954,188983,191034,193107,195202,197321,199462,201626,203814,206026,208262,
			210522,212807,215116,217450,219810,222195,224607,227044,229508,231998,234516,237061,239633,242234,
			244863,247520,250206,
        },

	 .sensor_config ={
		36,//max_gain_db
		36, // max global gain db
		0, // max single frame gain db
		0,//shutter_delay
		0,//agc_delay
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
		{1369, 1024, 1696},	//AUTOMATIC
		{992, 1024, 2323},	//INCANDESCENT
		{1064, 1024, 2131},	//D4000
		{1369, 1024, 1696},	//D5000
		{1558, 1024, 1562},	//SUNNY
		{1618, 1024, 1530},	//CLOUDY
		{1750, 1024, 1400},	//FLASH
		{1250, 1024, 1825},	//FLUORESCENT
		{1750, 1024, 1400},	//FLUORESCENT_H
		{1024, 1024, 1024},	//UNDER WATER
		{1921, 1024, 1371},	//CUSTOM
		{1483, 1024, 1650},	//AUTOMATIC OUTDOOR
	},
        {
		12,
		{{702,1292,2161,2897,-1385,3483,-1021,3845,776,1393,624,2212,1}, // 0	INCANDESCENT
		 {952,1591,1862,2411,-2095,4122,-1168,3979,496,1349,488,1799,2}, // 1	D4000
		 {1035,1820,1591,2161,-1433,3348,-1024,3793,838,408,382,1553,4}, // 2	D5000
		 {1306,1966,1452,1987,-805,2544,-851,3476,601,606,809,541,8}, // 3	SUNNY
		 {1410,2251,1334,1751,-501,2118,-984,3735,341,723,418,957,4}, // 4	CLOUDY
		 {   0,    0,    0,    0,     0,    0,     0,    0,    0,     0,    0,     0, 0 },	// 5	D10000
		 {2105,2890,1799,2695,-1418,5291,-1459,6359,552,387,533,1498,-1},	// 6	Green
		 {   0,    0,    0,    0,     0,    0,     0,    0,    0,     0,    0,     0, 0 },	// 7    FLASH
		 {   0,    0,    0,    0,     0,    0,     0,    0,    0,     0,    0,     0, 0 }, // 8    FLUORESCENT
		 {   0,    0,    0,    0,     0,    0,     0,    0,    0,     0,    0,     0, 0 }, // 9    FLUORESCENT_2
		 {   0,    0,    0,    0,     0,    0,     0,    0,    0,     0,    0,     0, 0 },	// 10  FLUORESCENT_3
		 {   0,    0,    0,    0,     0,    0,     0,    0,    0,     0,    0,     0, 0 }}, //11 CUSTOM
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

		/*****decompress******/
		0,32,64,96,128,160,192,224,256,288,320,352,384,416,448,480,512,544,576,608,640,
		672,704,736,768,800,832,864,896,928,960,992,1024,1088,1152,1216,1280,1344,1408,
		1472,1536,1600,1664,1728,1792,1856,1920,1984,2048,2176,2304,2432,2560,2688,2816,
		2944,3072,3200,3328,3456,3584,3712,3840,3968,4096,4352,4608,4864,5120,5376,5632,
		5888,6144,6400,6656,6912,7168,7424,7680,7936,8192,8704,9216,9728,10240,10752,11264,
		11776,12288,12800,13312,13824,14336,14848,15360,15872,16384,18432,20480,22528,24576,
		26624,28672,30720,32768,36864,40960,45056,49152,53248,57344,61440,65536,73728,81920,
		90112,98304,106496,114688,122880,131072,139264,147456,155648,163840,172032,180224,188416,
		196608,212992,229376,245760,262144,327680,393216,458752,524288,589824,655360,720896,786432,851968,917504,983040,1048576,

	},
 	.compand_table={
		/* 45 entry */

	    /*****20bit entry---16bit****/
		0,128,256,384,512,640,768,896,1024,1280,1536,1792,2048,2560,3072,3584,4096,
		5120,6144,7168,8192,9216,10240,11264,12288,13312,14336,15360,16384,18432,20480,
		22528,24576,28672,32768,36864,40960,43008,45056,47104,49152,53248,57344,61440,65535,

	},
 	.cfg_ae_lines_for_expo_1x={
		.ae_line_info[0]={
			.line_num =4,
			.line_belt=4,
			.lines={
				{{{SHUTTER_1BY32000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_800,0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_1200,0}}},
				{{{SHUTTER_1BY31, ISO_100, 0}}, {{SHUTTER_1BY31, ISO_4800,0}}},
			},
		},
 	},
	.cfg_ae_lines_for_others[0]={  //for buildin hdr
		.ae_line_info[0]={
			.line_num =4,
			.line_belt=4,
			.lines={
				{{{SHUTTER_1BY32000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_1600,0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_3200,0}}},
				{{{SHUTTER_1BY31, ISO_100, 0}}, {{SHUTTER_1BY31, ISO_4800,0}}},
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
				{{{SHUTTER_1BY50, ISO_1600, 0}}, {{SHUTTER_1BY50, ISO_4800,0}}},
				{{{SHUTTER_1BY31, ISO_100, 0}}, {{SHUTTER_1BY31, ISO_4800,0}}},
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
				{{{SHUTTER_1BY40, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_4800,0}}},
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
