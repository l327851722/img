/*
 * image data
 *
 * History:
 *    Author: Chen Yang <cyang@ambarella.com>
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

aeb_param_t jx_f32_aeb_param ={
	.aeb_version={
			20200420,0,AEB_VERSION,0,0,
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
			.cfg_ae_gain_tbl_size =257,
			.cfg_ae_gain_tbl ={//24db,step = 0.0.09375dB
				4096, 4140, 4185, 4231, 4277, 4323, 4370, 4417, 4465, 4514, 4563, 4612,
				4662, 4713, 4764, 4816, 4868, 4921, 4974, 5028, 5083, 5138, 5194, 5250,
				5307, 5365, 5423, 5482, 5541, 5601, 5662, 5724, 5786, 5849, 5912, 5976,
				6041, 6107, 6173, 6240, 6308, 6376, 6445, 6515, 6586, 6657, 6730, 6803,
				6876, 6951, 7026, 7103, 7180, 7258, 7336, 7416, 7497, 7578, 7660, 7743,
				7827, 7912, 7998, 8085, 8173, 8261, 8351, 8442, 8533, 8626, 8719, 8814,
				8910, 9006, 9104, 9203, 9303, 9404, 9506, 9609, 9713, 9819, 9925, 10033,
				10142, 10252, 10363, 10475, 10589, 10704, 10820, 10938, 11056, 11176, 11298,
				11420, 11544, 11669, 11796, 11924, 12053, 12184, 12316, 12450, 12585, 12722,
				12860, 12999, 13140, 13283, 13427, 13573, 13720, 13869, 14020, 14172, 14326,
				14481, 14638, 14797, 14958, 15120, 15284, 15450, 15617, 15787, 15958, 16131,
				16306, 16483, 16662, 16843, 17026, 17211, 17397, 17586, 17777, 17970, 18165,
				18362, 18561, 18763, 18966, 19172, 19380, 19591, 19803, 20018, 20235, 20455,
				20677, 20901, 21128, 21357, 21589, 21823, 22060, 22300, 22542, 22786, 23034,
				23283, 23536, 23792, 24050, 24311, 24575, 24841, 25111, 25383, 25659, 25937,
				26219, 26503, 26791, 27081, 27375, 27672, 27973, 28276, 28583, 28893, 29207,
				29524, 29844, 30168, 30495, 30826, 31161, 31499, 31841, 32186, 32536, 32889,
				33246, 33606, 33971, 34340, 34712, 35089, 35470, 35855, 36244, 36637, 37035,
				37437, 37843, 38254, 38669, 39088, 39513, 39941, 40375, 40813, 41256, 41703,
				42156, 42614, 43076, 43543, 44016, 44494, 44976, 45465, 45958, 46457, 46961,
				47470, 47985, 48506, 49033, 49565, 50103, 50646, 51196, 51751, 52313, 52881,
				53455, 54035, 54621, 55214, 55813, 56419, 57031, 57650, 58275, 58908, 59547,
				60193, 60846, 61507, 62174, 62849, 63531, 64220, 64917,
			},

	 .sensor_config ={
            24,//max_gain_db
            24, // max global gain db
            0, // max single frame gain db
            0,//shutter_delay
            1,//agc_delay
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
			{1463, 1024, 1689},	//AUTOMATIC
			{1037, 1024, 2434},	//INCANDESCENT
			{1115, 1024, 2206},	//D4000
			{1463, 1024, 1689},	//D5000
			{1661, 1024, 1572},	//SUNNY
			{1719, 1024, 1530},	//CLOUDY
			{1750, 1024, 1800},	//FLASH
			{1600, 1024, 2600},	//FLUORESCENT
			{1857, 1024, 1700},	//FLUORESCENT_H
			{1024, 1024, 1024},	//UNDER WATER
			{1024, 1024, 1024},	//CUSTOM
			{1750, 1024, 1800},	//AUTOMATIC OUTDOOR
		},
		{
			12,
			{{674,1438,2140,2786,-1241,3180,-929,3858,430,1562,879,2068,1},	// 0	INCANDESCENT
			 {931,1903,1778,2334,-1124,3001,-832,3695,350,1318,325,1977,2},	// 1    	office light,3800k
			 {1139,2216,1591,1973,-957,2788,-844,3651,296,1153,473,1329,4},	// 2	 D5000
			 {1348,2216,1355,1771,-881,2621,-662,3081,450,495,449,915,8},	// 3    SUNNY
			 {1549,2348,1230,1563,-518,2096,-1153,4171,568,146,415,850,4},	// 4    CLOUDY
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
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_1600,0}}},
			},
		},
 	},

	.cfg_ae_lines_for_expo_2x={
		.ae_line_info[0]={
			.line_num =3,
			.line_belt=3,
			.lines={
				{{{SHUTTER_1BY8000, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_100,0}}},
				{{{SHUTTER_1BY100, ISO_100, 0}}, {{SHUTTER_1BY100, ISO_300, 0}}},
				{{{SHUTTER_1BY40, ISO_100, 0}}, {{SHUTTER_1BY40, ISO_1600,0}}},
			},
		},
		.ae_line_info[1]={
			.line_num =1,
			.line_belt=1,
			.lines={
				{{{SHUTTER_1BY8000, ISO_100, 0}}, {{SHUTTER_1BY200, ISO_100,0}}},
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

	.cfg_ae_lines_for_others[1]={	//for p-iris
		.ae_line_info[0]={
			.line_num =8,
			.line_belt=8,
			.lines={
				{
				{{SHUTTER_1BY32000, ISO_100, APERTURE_F11}}, {{SHUTTER_1BY1024, ISO_100,APERTURE_F11}}
				},

				{
				{{SHUTTER_1BY1024, ISO_100, APERTURE_F11}}, {{SHUTTER_1BY1024, ISO_100, APERTURE_F5P6}}
				},

				{
				{{SHUTTER_1BY1024, ISO_100, APERTURE_F5P6}}, {{SHUTTER_1BY100, ISO_100, APERTURE_F5P6}}
				},

				{
				{{SHUTTER_1BY100, ISO_100, APERTURE_F5P6}}, {{SHUTTER_1BY100, ISO_100, APERTURE_F2P8}}
				},

				{
				{{SHUTTER_1BY100, ISO_100, APERTURE_F2P8}}, {{SHUTTER_1BY100, ISO_300, APERTURE_F2P8}}
				},

				{
				{{SHUTTER_1BY50, ISO_100, APERTURE_F2P8}}, {{SHUTTER_1BY50, ISO_100, APERTURE_F1P2}}
				},

				{
				{{SHUTTER_1BY50, ISO_100, APERTURE_F1P2}}, {{SHUTTER_1BY50, ISO_800,APERTURE_F1P2}}
				},

				{
				{{SHUTTER_1BY30, ISO_100, APERTURE_F1P2}}, {{SHUTTER_1BY30, ISO_12800,APERTURE_F1P2}}
				},
			},
		},
	},
};
