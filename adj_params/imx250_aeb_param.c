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

aeb_param_t imx250_aeb_param ={
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
			.cfg_ae_gain_tbl_size =481,
			.cfg_ae_gain_tbl ={//48db, step =0.1db
				4096,        4143,    4191,    4240,    4289,    4339,    4389,    4440,    4491,    4543,    4596,    4649,
				4703,        4757,    4812,    4868,    4924,    4981,    5039,    5098,    5157,    5216,    5277,    5338,
				5400,        5462,    5525,    5589,    5654,    5720,    5786,    5853,    5921,    5989,    6058,    6129,
				6200,        6271,    6344,    6417,    6492,    6567,    6643,    6720,    6798,    6876,    6956,    7037,
				7118,        7200,    7284,    7368,    7453,    7540,    7627,    7715,    7805,    7895,    7987,    8079,
				8173,        8267,    8363,    8460,    8558,    8657,    8757,    8858,    8961,    9065,    9170,    9276,
				9383,        9492,    9602,    9713,    9826,    9939,   10054,   10171,   10289,   10408,   10528,   10650,
				10774,      10898,   11025,   11152,   11281,   11412,   11544,   11678,   11813,   11950,   12088,   12228,
				12370,      12513,   12658,   12804,   12953,   13103,   13254,   13408,   13563,   13720,   13879,   14040,
				14202,      14367,   14533,   14701,   14872,   15044,   15218,   15394,   15573,   15753,   15935,   16120,
				16306,      16495,   16686,   16880,   17075,   17273,   17473,   17675,   17880,   18087,   18296,   18508,
				18722,      18939,   19158,   19380,   19605,   19832,   20061,   20294,   20529,   20766,   21007,   21250,
				21496,      21745,   21997,   22252,   22509,   22770,   23034,   23300,   23570,   23843,   24119,   24398,
				24681,      24967,   25256,   25548,   25844,   26143,   26446,   26752,   27062,   27375,   27692,   28013,
				28337,      28666,   28997,   29333,   29673,   30016,   30364,   30716,   31071,   31431,   31795,   32163,
				32536,      32912,   33294,   33679,   34069,   34464,   34863,   35266,   35675,   36088,   36506,   36928,
				37356,      37789,   38226,   38669,   39116,   39569,   40028,   40491,   40960,   41434,   41914,   42399,
				42890,      43387,   43889,   44398,   44912,   45432,   45958,   46490,   47028,   47573,   48124,   48681,
				49245,      49815,   50392,   50975,   51566,   52163,   52767,   53378,   53996,   54621,   55254,   55893,
				56541,      57195,   57858,   58527,   59205,   59891,   60584,   61286,   61995,   62713,   63440,   64174,
				64917,      65669,   66429,   67199,   67977,   68764,   69560,   70366,   71180,   72005,   72838,   73682,
				74535,      75398,   76271,   77154,   78048,   78951,   79866,   80790,   81726,   82672,   83630,   84598,
				85578,      86569,   87571,   88585,   89611,   90648,   91698,   92760,   93834,   94920,   96020,   97131,
				98256,      99394,  100545,  101709,  102887,  104078,  105283,  106503,  107736,  108983,  110245,  111522,
				112813,    114120,  115441,  116778,  118130,  119498,  120882,  122281,  123697,  125130,  126579,  128044,
				129527,    131027,  132544,  134079,  135631,  137202,  138791,  140398,  142023,  143668,  145332,  147014,
				148717,    150439,  152181,  153943,  155726,  157529,  159353,  161198,  163065,  164953,  166863,  168795,
				170750,    172727,  174727,  176750,  178797,  180867,  182962,  185080,  187223,  189391,  191584,  193803,
				196047,    198317,  200613,  202936,  205286,  207663,  210068,  212500,  214961,  217450,  219968,  222515,
				225092,    227698,  230335,  233002,  235700,  238429,  241190,  243983,  246808,  249666,  252557,  255482,
				258440,    261433,  264460,  267522,  270620,  273754,  276924,  280130,  283374,  286655,  289975,  293332,
				296729,    300165,  303641,  307157,  310713,  314311,  317951,  321633,  325357,  329124,  332935,  336791,
				340690,    344635,  348626,  352663,  356747,  360878,  365056,  369284,  373560,  377885,  382261,  386687,
				391165,    395694,  400276,  404911,  409600,  414343,  419141,  423994,  428904,  433870,  438894,  443976,
				449117,    454318,  459579,  464900,  470284,  475729,  481238,  486811,  492448,  498150,  503918,  509753,
				515656,    521627,  527667,  533777,  539958,  546210,  552535,  558933,  565405,  571952,  578575,  585275,
				592052,    598908,  605843,  612858,  619955,  627133,  634395,  641741,  649172,  656689,  664293,  671986,
				679767,    687638,  695601,  703655,  711803,  720046,  728383,  736818,  745349,  753980,  762711,  771543,
				780477,    789514,  798656,  807904,  817259,  826723,  836296,  845980,  855776,  865685,  875709,  885850,
				896107,    906484,  916980,  927598,  938339,  949205,  960196,  971315,  982562,  993939, 1005449, 1017091,
				1028869,
        },

	 .sensor_config ={
                48,//max_gain_db
                48, // max global gain db
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
		{1024, 1024, 1024},	//AUTOMATIC
		{1024, 1024, 1024},	//INCANDESCENT
		{1024, 1024, 1024},	//D4000
		{1024, 1024, 1024},	//D5000
		{1024, 1024, 1024},	//SUNNY
		{1024, 1024, 1024},	//CLOUDY
		{1024, 1024, 1024},	//FLASH
		{1024, 1024, 1024},	//FLUORESCENT
		{1024, 1024, 1024},	//FLUORESCENT_H
		{1024, 1024, 1024},	//UNDER WATER
		{1024, 1024, 1024},	//CUSTOM
		{1024, 1024, 1024},	//AUTOMATIC OUTDOOR

	},
	{
		12,
		{{806,1497,2865,3892,-2627,5397,-1929,6246,854,1994,1101,2847,1},	// 0	INCANDESCENT
		 {1002,2009,2256,3316,-2309,5014,-1932,6607,721,1157,770,2195,2},	// 1    D4000
		 {1261,2222,1585,2707,-1661,4188,-1110,4517,1338,-707,478,1664,4},	// 2	 D5000
		 {1635,2486,1263,2245,-1245,3587,-1284,4913,1092,-581,1144,-89,8},	// 3    SUNNY
		 {1894,2676,1218,1912,-681,2601,-693,3563,1276,-1709,1307,-843,4},	// 4    CLOUDY
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
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_25600,0}}},
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
