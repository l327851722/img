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

aeb_param_t ar0132_aeb_param ={
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
			.cfg_ae_gain_tbl_size =193,
			.cfg_ae_gain_tbl ={//36db,step =0.1875db
			4096,4185,4277,4370,4465,4563,4662,4764,
			4868,4974,5083,5194,5307,5423,5541,5662,
			5786,5912,6041,6173,6308,6445,6586,6730,
			6876,7026,7180,7336,7497,7660,7827,7998,
			8173,8351,8533,8719,8910,9104,9303,9506,
			9713,9925,10142,10363,10589,10820,11056,11298,
			11544,11796,12053,12316,12585,12860,13140,13427,
			13720,14020,14326,14638,14958,15284,15617,15958,
			16306,16662,17026,17397,17777,18165,18561,18966,
			19380,19803,20235,20677,21128,21589,22060,22542,
			23034,23536,24050,24575,25111,25659,26219,26791,
			27375,27973,28583,29207,29844,30495,31161,31841,
			32536,33246,33971,34712,35470,36244,37035,37843,
			38669,39513,40375,41256,42156,43076,44016,44976,
			45958,46961,47985,49033,50103,51196,52313,53455,
			54621,55813,57031,58275,59547,60846,62174,63531,
			64917,66334,67781,69260,70772,72316,73894,75507,
			77154,78838,80558,82316,84112,85948,87823,89740,
			91698,93699,95744,97833,99968,102149,104378,106656,
			108983,111361,113792,116275,118812,121405,124054,126761,
			129527,132353,135241,138193,141208,144290,147438,150655,
			153943,157302,160735,164242,167826,171488,175231,179054,
			182962,186954,191034,195202,199462,203814,208262,212807,
			217450,222195,227044,231998,237061,242234,247520,252921,
			258440,
        },

	 .sensor_config ={
		36,//max_gain_db
		36, // max global gain db
		0, // max single frame gain db
		0,//shutter_delay
		0,//agc_delay
		{	// hdr delay, useless for linear mode
			{{0, 1, 1}},	// shutter
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
		{1069, 1024, 1482},	//AUTOMATIC
		{746, 1024, 2421},	//INCANDESCENT
		{980, 1024, 2300},	//D4000
		{1069, 1024, 1482},	//D5000
		{1227, 1024, 1251},	//SUNNY
		{1287, 1024, 1207},	//CLOUDY
		{1750, 1024, 1400},	//FLASH
		{1250, 1024, 1825},	//FLUORESCENT
		{1750, 1024, 1400},	//FLUORESCENT_H
		{1024, 1024, 1024},	//UNDER WATER
		{1921, 1024, 1371},	//CUSTOM
		{1483, 1024, 1650},	//AUTOMATIC OUTDOOR
	},
        {
		12,
		{{355,1065,2115,3113,-1923,3305,-2023,4852,1630,973,936,2560,1}, // 0	INCANDESCENT
		 {650,1549,1685,2682,-3564,4337,-1250,4388,531,1056,1350,1262,2}, // 1	D4000
		 {763,1443,1307,1790,-2633,3655,-3855,6936,248,1067,228,1579,4}, // 2	D5000
		 {937,1450,1141,1511,-1024,2236,-1761,3812,810,141,556,801,8}, // 3	SUNNY
		 {1050,1654,975,1299,-779,1938,-704,2310,424,346,484,724,4}, // 4	CLOUDY
		 {1264,1945,2230,2640,-1784,4755,-193,2968,465,1658,403,2067,0},	// 5	Green
		 {   0,    0,    0,    0,     0,    0,     0,    0,    0,     0,    0,     0, 0 },	// 6	D10000
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
		0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
		16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
		32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
		64,68,72,76,80,84,88,92,96,100,104,108,112,116,120,124,
		128,136,144,152,160,168,176,184,192,200,208,216,224,232,240,248,
		256,272,288,304,320,336,352,368,384,400,416,432,448,464,480,496,
		512,544,576,608,640,672,704,736,768,800,832,864,896,928,960,992,
		1024,1088,1152,1216,1280,1344,1408,1472,1536,1600,1664,1728,1792,1856,1920,1984,
		2048,10236,18428,26620,34812,43004,51196,59388,98240,229312,360384,491456,622527,753599,884671,1015743,
		1048575,

	},
 	.compand_table={
		/* 45 entry */

	    /*****20bit entry---16bit****/
		0,4080,8176,12272,16368,20464,24560,28656,32752,32896,33024,33152,33280,33536,33792,34048,
		34304,34816,35328,35840,36352,37376,38400,39424,40448,42496,44544,46592,48640,48896,49152,49408,
		49664,50176,50688,51200,51712,52736,53760,54784,55808,57856,59904,61952,64000,

	},

 	.cfg_ae_lines_for_expo_1x={
		.ae_line_info[0]={
			.line_num =3,
			.line_belt=3,
			.lines={
				{{{SHUTTER_1BY320, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_800,0}}},
				{{{SHUTTER_1BY70, ISO_100, 0}}, {{SHUTTER_1BY70, ISO_6400,0}}},
			},
		},
 	},

	.cfg_ae_lines_for_others[0]={
		.ae_line_info[0]={
			.line_num =2,
			.line_belt=2,
			.lines={
				{{{SHUTTER_1BY4000, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_100,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_6400,0}}},
			},
		},
	},

	.cfg_ae_lines_for_expo_2x={
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
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
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
