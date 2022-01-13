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

aeb_param_t imx490_aeb_param ={
	.aeb_version={
			20190618,0,AEB_VERSION,0,0,
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
		{1799, 1024, 1846},	//AUTOMATIC
		{1169, 1024, 3537},	//INCANDESCENT
		{1580, 1024, 3100},	//D4000
		{1799, 1024, 1846},	//D5000
		{2117, 1024, 1652},	//SUNNY
		{2221, 1024, 1604},//CLOUDY
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
		{545,1662,3026,4117,-1874,4464,-842,5215,609,2343,669,3579,1},//INCANDESCENT
		{740,2039,2260,3286,-1499,3971,-796,4619,817,889,504,2681,2},//D4000
		{1260,2377,1584,2545,-1342,3851,-1281,5089,443,835,511,1637,4},//D5000
		{1740,2494,1377,1961,-570,2577,-634,3380,719,-416,614,579,8},	//SUNNY
		{2078,2948,1065,1740,-684,2743,-977,4220,368,188,512,532,4},//CLOUDY
		 {   0,    0,    0,    0,     0,    0,     0,    0,   0,   0,    0,    0, 0 },					// 5    ...
		 {717,1472,3302,4236,-1859,4926,-1395,6133,513,2750,760,3583,0},// 6	GREEN REGION
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
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,
		3,3,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,
		15,16,19,22,25,28,31,34,37,40,43,46,49,52,55,58,61,64,81,99,117,135,153,171,189,207,225,
		243,292,341,390,438,487,576,753,930,1107,1285,1462,1861,2261,2660,3060,3459,3859,4258,4658,
		5057,5457,6063,7276,8488,9701,10914,14552,18190,21828,34276,71388,108499,217000,325500,566525,807551,1048575,1048575,
	},
 	.compand_table={
		/* 45 entry */
		0,13440,16013,17492,18971,20449,21692,22348,23004,24317,25629,26952,28254,30879,32903,34633,
		36362,39821,41733,42887,44040,46347,47556,48229,48903,49520,49972,50424,50877,51781,52685,53364,
		53674,54292,54911,55529,56148,57362,57919,58476,59033,60146,61260,62374,63488,
	},


 	.cfg_ae_lines_for_expo_1x={
		.ae_line_info[0]={
			.line_num =2,
			.line_belt=2,
			.lines={
				{{{SHUTTER_1BY90, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_100,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_1200,0}}},
			},
		},
 	},

   .cfg_ae_lines_for_others[0]={  //for buildin hdr
		.ae_line_info[0]={
			.line_num =2,
			.line_belt=2,
			.lines={
				/*{{{SHUTTER_1BY90, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_100,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_400,0}}},*/
				{{{SHUTTER_1BY200, ISO_100, 0}}, {{SHUTTER_1BY90, ISO_100,0}}},
				{{{SHUTTER_1BY90, ISO_100, 0}}, {{SHUTTER_1BY90, ISO_400,0}}},
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
