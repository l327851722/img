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

aeb_param_t ar0323_aeb_param ={
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
			.cfg_ae_gain_tbl_size =113,
			.cfg_ae_gain_tbl ={//42db,step =0.375db
			4096,4277,4465,4662,4868,5083,5307,5541,5786,6041,6308,6586,6876,7180,7497,7827,8173,8533,8910,9303,9713,10142,
			10589,11056,11544,12053,12585,13140,13720,14326,14958,15617,16306,17026,17777,18561,19380,20235,21128,22060,23034,
			24050,25111,26219,27375,28583,29844,31161,32536,33971,35470,37035,38669,40375,42156,44016,45958,47985,50103,52313,
			54621,57031,59547,62174,64917,67781,70772,73894,77154,80558,84112,87823,91698,95744,99968,104378,108983,113792,118812,
			124054,129527,135241,141208,147438,153943,160735,167826,175231,182962,191034,199462,208262,217450,227044,237061,247520,
			258440,269842,281747,294178,307157,320708,334857,349631,365056,381162,397979,415537,433870,453012,472999,493867,515656,
        },

	 .sensor_config ={
		42,//max_gain_db
		42, // max global gain db
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
		{2092, 1024, 3111},  //AUTOMATIC
		{1504, 1024, 4854},  //INCANDESCENT 2800k
		{1613, 1024, 4290},  //D4000
		{2092, 1024, 3111},  //D5000
		{2358, 1024, 2793}, //SUNNY 6500k
		{2462, 1024, 2726}, //CLOUDY 7500k
		{1750, 1024, 1400}, //FLASH
		{1250, 1024, 1825}, //FLUORESCENT
		{1750, 1024, 1400}, //FLUORESCENT_H
		{1024, 1024, 1024}, //UNDER WATER
		{1921, 1024, 1371}, //CUSTOM
		{1483, 1024, 1650}, //AUTOMATIC OUTDOOR
	},
        {
		12,
		{
		{909,2403,4494,5442,-1654,6253,-868,7040,379,3744,566,4700,1}, //INCANDESCENT 2800k
		{1117,2519,3610,4649,-2077,6587,-1088,7140,293,3070,242,4245,2},//D4000
		{1442,2675,2805,3870,-1451,5475,-847,5958,342,2138,365,3149,4}, //D5000
		{1870,2831,2558,3052,-1583,5695,-1063,5811,252,2026,330,2217,8},//SUNNY 6500k
		{2091,3091,2312,2831,-948,4476,-635,4589,456,1124,466,1756,4},	//CLOUDY 7500k
		{1264,1945,2230,2640,-1784,4755,-193,2968,465,1658,403,2067,0},// 5    Green
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
		0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,36,
		38,40,42,44,46,48,50,52,54,56,58,60,62,64,68,72,76,80,84,88,92,96,100,104,108,112,116,120,124,128,
		136,144,152,160,168,176,184,192,200,208,216,224,232,240,248,256,272,288,304,320,336,352,368,384,400,
		416,432,448,464,480,496,512,562,613,663,714,764,815,865,916,967,1017,1109,1209,1310,1411,1512,1613,1814,
		2016,2388,2791,3194,3597,4001,4713,5519,6326,7132,7939,9300,10913,12526,14139,18349,24800,31252,42646,55554,
		68459,97195,123006,166562,218184,277469,380714,483959,650117,856607,1048575,
	},
 	.compand_table={
		/* 45 entry */
		0,4096,8192,10792,13392,14692,15992,17292,18592,19891,21191,22502,23791,25092,26392,27692,28992,30292,
		31592,32892,34192,35491,36791,38091,39391,40691,41991,43291,44591,45891,47191,48491,49791,51092,52392,
		53692,54992,56292,57592,58892,60192,61492,62792,64092,65392,

	},

 	.cfg_ae_lines_for_expo_1x={
		.ae_line_info[0]={
			.line_num =3,
			.line_belt=3,
			.lines={
				{{{SHUTTER_1BY16000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_300,0}}},
				{{{SHUTTER_1BY33, ISO_100, 0}}, {{SHUTTER_1BY33, ISO_800,0}}},
			},
		},
 	},
	.cfg_ae_lines_for_others[0]={
		.ae_line_info[0]={
			.line_num =2,
			.line_belt=2,
			.lines={
				/*{{{SHUTTER_1BY480, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_100,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_12800,0}}},*/
				{{{SHUTTER_1BY480, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_100,0}}},
				{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_1600,0}}}, //SHUTTER_1BY45
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
