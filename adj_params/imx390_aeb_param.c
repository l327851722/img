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

aeb_param_t imx390_aeb_param ={
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
			.cfg_ae_gain_tbl_size =101,
			.cfg_ae_gain_tbl ={//30db, step =0.3db
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
		112813, 116778, 120882, 125130, 129527,
        },

	 .sensor_config ={
                30,//max_gain_db
                30, // max global gain db
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
        },
	.awb_param ={
	{
		{1810, 1024, 1930},	//AUTOMATIC 1877, 1024, 1855
		{1157, 1024, 3235},	//INCANDESCENT
		{1400, 1024, 2600},	//D4000 1500, 1024, 2563
		{1810, 1024, 1930},	//D5000 1877, 1024, 1855
		{2064, 1024, 1663},	//SUNNY
		{2171, 1024, 1577},//CLOUDY
		{1598, 1024, 1875},	//FLASH
		{1024, 1024, 1024},	//FLUORESCENT	
		{1024, 1024, 1024},	//FLUORESCENT_H
		{1024, 1024, 1024},	//UNDER WATER	
		{1024, 1024, 1024},	//CUSTOM	
		{1880, 1024, 1754},	//AUTOMATIC OUTDOOR new white patch new
	},
	{
		12,
		{

		 {729,1548,2777,3801,-1145,3963,-865,4824,668,1877,1134,2754,1},
		 {1037,2009,2112,2905,-624,3033,-749,4070,442,1400,436,2339,2},
		 {1510,2188,1728,2239,-1113,3725,-1067,4315,486,740,968,697,4},
		 {1843,2406,1433,1792,-950,3349,-1288,4646,357,686,331,1136,8},
		 {2137,2572,1203,1638,-955,3393,-768,3391,562,-64,656,139,4},
		 {717,1472,3302,4236,-1859,4926,-1395,6133,513,2750,760,3583,0},// 6	GREEN REGION new white patch
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

		/***imx390 decompand table ****/
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 		0, 0, 0, 0, 8, 16, 32, 48, 64, 80, 96, 112, 128,
 		144, 160, 176, 192, 208, 224, 240, 256, 272, 304,
 		336, 368, 400, 480, 560, 640, 720, 800, 880, 960,
 		1040, 1120, 1200, 1280, 1360, 1744, 2128, 2512, 2896,
 		3280, 3736, 4192, 4649, 5105, 5562, 6018, 6475, 6931,
 		7387, 7845, 8757, 10583, 12410, 16061, 19700, 52302,
 		84905, 117600, 182805, 248011, 313217, 378500, 512826,
 		647153, 781480, 915807, 1048575,
	 },
 	.compand_table={
		/* 45 entry */
		/****imx390 compand table****/
		3840,7937,10946,12594,14227,15859,16851,17524,18212,
		19572,20948,22181,23333,25621,27926,30230,32135,34423,
		36728,37944,39096,41017,41273,41529,41785,42297,42809,
		43321,43834,44874,45898,46922,47530,48555,49595,50619,
		51643,53708,55532,56524,57517,59517,61518,63518,65518,
	},


 	.cfg_ae_lines_for_expo_1x={
		.ae_line_info[0]={
			.line_num =1,
			.line_belt=1,
			.lines={
				{{{SHUTTER_1BY90, ISO_100, 0}}, {{SHUTTER_1BY90, ISO_1200,0}}},
			},
		},
 	},

   .cfg_ae_lines_for_others[0]={  //for buildin hdr
		.ae_line_info[0]={
			.line_num =2,
			.line_belt=2,
			.lines={
				{{{SHUTTER_1BY200, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_100,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_800,0}}},
			},
		},
	},
	.cfg_ae_lines_for_expo_2x={
		.ae_line_info[0]={
			.line_num =3,
			.line_belt=3,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_300, 0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_12800,0}}},
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
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_12800,0}}},
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
