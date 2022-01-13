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

aeb_param_t ar0431_aeb_param ={
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
			.cfg_ae_gain_tbl_size =105,
			.cfg_ae_gain_tbl ={//39db,step =0.3750db
			4096,4277,4465,4662,4868,5083,5307,5541,5786,6041,6308,6586,6876,7180,7497,7827,8173,8533,8910,9303,
			9713,10142,10589,11056,11544,12053,12585,13140,13720,14326,14958,15617,16306,17026,17777,18561,19380,20235,21128,22060,
			23034,24050,25111,26219,27375,28583,29844,31161,32536,33971,35470,37035,38669,40375,42156,44016,45958,47985,50103,52313,
			54621,57031,59547,62174,64917,67781,70772,73894,77154,80558,84112,87823,91698,95744,99968,104378,108983,113792,118812,124054,
			129527,135241,141208,147438,153943,160735,167826,175231,182962,191034,199462,208262,217450,227044,237061,247520,258440,269842,281747,294178,
			307157,320708,334857,349631,365056,

    },

	 .sensor_config ={
			39,//max_gain_db
			39, //max global gain db
			0, //max single gain db
			0,//shutter_delay
			1,//agc_delay
			{	// hdr delay, useless for linear mode
				{{0, 0, 0,}},	// shutter
				{{0, 0, 0,}},	// agc
				{{0, 0, 0,}},	// dgain
				{{0, 0, 0,}},	// sensor offset
			},
			{	// hdr raw offset coef, non negative value is valid
				0,		// long padding
				2,		// short padding
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
		{1293, 1024, 1821},	//AUTOMATIC
		{1016, 1024, 2140},	//INCANDESCENT
		{1230, 1024, 1900},	//D4000
		{1431, 1024, 1546},	//D5000
		{1637, 1024, 1352},	//SUNNY
		{1693, 1024, 1307},	//CLOUDY
		{1750, 1024, 1400},	//FLASH
		{1250, 1024, 1825},	//FLUORESCENT
		{1750, 1024, 1400},	//FLUORESCENT_H
		{1024, 1024, 1024},	//UNDER WATER
		{1921, 1024, 1371},	//CUSTOM
		{1483, 1024, 1650},	//AUTOMATIC OUTDOOR
	},
        {
		12,
		{
		{813,1285,1827,2459,-1312,3154,-1907,4690,1136,590,932,1548,1},// 0	INCANDESCENT
		{1000,1626,1688,2265,-5281,7174,-924,3634,324,1260,1179,802,2},// 1	D4000
		{1091,1716,1376,1792,-1525,3289,-1749,4540,531,627,301,1423,4}, // 2	D5000
		{1278,1848,1237,1514,-1285,2989,-1088,3362,766,25,378,912,8}, // 3	SUNNY
		{1362,2015,1084,1417,-670,2151,-1235,3780,494,145,725,303,4},// 4	CLOUDY
		{1264,1945,2230,2640,-1784,4755,-193,2968,465,1658,403,2067,-1},	// 5	Green
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
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_9600,0}}},
			},
		},
 	},

	.cfg_ae_lines_for_expo_2x={
		.ae_line_info[0]={
			.line_num =3,
			.line_belt=3,
			.lines={
				{{{SHUTTER_1BY1024, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_300, 0}}},
				{{{SHUTTER_1BY33, ISO_100, 0}}, {{SHUTTER_1BY33, ISO_6400,0}}},
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
};
