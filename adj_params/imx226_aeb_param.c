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

aeb_param_t imx226_aeb_param ={
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
			.cfg_ae_gain_tbl_size =428,
			.cfg_ae_gain_tbl ={//45db,step =  0.10538dB
		4096,4146,4197,4248,4300,4352,4405,4459,4513,4569,
		4624,4681,4738,4796,4854,4914,4974,5034,5096,5158,
		5221,5285,5349,5414,5480,5547,5615,5684,5753,5823,
		5894,5966,6039,6113,6187,6263,6339,6417,6495,6574,
		6655,6736,6818,6901,6985,7071,7157,7244,7333,7422,
		7513,7605,7697,7791,7887,7983,8080,8179,8279,8380,
		8482,8586,8690,8796,8904,9012,9123,9234,9347,9461,
		9576,9693,9811,9931,10052,10175,10299,10425,10552,10681,
		10811,10943,11077,11212,11349,11487,11628,11770,11913,12059,
		12206,12355,12506,12658,12813,12969,13128,13288,13450,13614,
		13780,13949,14119,14291,14466,14642,14821,15002,15185,15370,
		15558,15748,15940,16135,16331,16531,16733,16937,17144,17353,
		17565,17779,17996,18216,18438,18663,18891,19122,19355,19591,
		19830,20072,20317,20565,20816,21071,21328,21588,21852,22118,
		22388,22662,22938,23218,23502,23788,24079,24373,24670,24971,
		25276,25585,25897,26213,26533,26857,27185,27516,27852,28192,
		28536,28885,29237,29594,29955,30321,30691,31066,31445,31829,
		32217,32611,33009,33412,33819,34232,34650,35073,35501,35934,
		36373,36817,37266,37721,38182,38648,39120,39597,40080,40570,
		41065,41566,42073,42587,43107,43633,44166,44705,45250,45803,
		46362,46928,47500,48080,48667,49261,49862,50471,51087,51711,
		52342,52981,53628,54282,54945,55615,56294,56981,57677,58381,
		59094,59815,60545,61284,62032,62789,63556,64331,65117,65911,
		66716,67530,68355,69189,70034,70888,71754,72629,73516,74413,
		75322,76241,77172,78114,79067,80032,81009,81998,82999,84012,
		85037,86075,87126,88190,89266,90356,91458,92575,93705,94849,
		96006,97178,98364,99565,100780,102011,103256,104516,105792,107083,
		108390,109713,111052,112408,113780,115169,116575,117998,119438,120896,
		122371,123865,125377,126907,128456,130024,131612,133218,134844,136490,
		138156,139842,141549,143277,145026,146796,148588,150402,152238,154096,
		155977,157881,159808,161758,163733,165731,167754,169802,171875,173973,
		176096,178246,180421,182624,184853,187109,189393,191705,194045,196413,
		198811,201238,203694,206180,208697,211244,213823,216433,219075,221749,
		224455,227195,229968,232775,235617,238493,241404,244350,247333,250352,
		253408,256501,259632,262801,266009,269256,272542,275869,279236,282645,
		286095,289587,293122,296700,300321,303987,307697,311453,315255,319103,
		322998,326941,330931,334971,339060,343198,347387,351628,355920,360264,
		364662,369113,373618,378179,382795,387467,392197,396984,401830,406734,
		411699,416724,421811,426960,432171,437447,442786,448191,453662,459199,
		464804,470478,476220,482033,487917,493873,499901,506003,512179,518431,
		524759,531164,537648,544211,550853,557577,564383,571272,578245,585303,
		592448,599679,606999,614408,621908,629499,637183,644960,652833,660801,
		668867,677032,685296,693660,702127,710698,719373,728154,
			},

	 .sensor_config ={
            45,//max_gain_db
            45, // max global gain db
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
			{1598, 1024, 1875},	//AUTOMATIC
			{1260, 1024, 2850},	//INCANDESCENT
			{1460, 1024, 2350},	//D4000
			{1780, 1024, 1814},	//D5000
			{2080, 1024, 1670},	//SUNNY
			{2220, 1024, 1550},	//CLOUDY
			{1750, 1024, 1800},	//FLASH
			{1600, 1024, 2600},	//FLUORESCENT
			{1857, 1024, 1700},	//FLUORESCENT_H
			{1024, 1024, 1024},	//UNDER WATER
			{1024, 1024, 1024},	//CUSTOM
			{1750, 1024, 1800},	//AUTOMATIC OUTDOOR
		},
		{
			12,
			{{1000,1500,2550,3200,-1500,4250,-1500,5200,1000,1300,1250,1750,1 },	// 0	INCANDESCENT
			 {1150,1800,2060,2850,-1300,3850,-2300,6700,2000,-1200,1000,1450,2 },	// 1    	office light,3800k
			 {1400,2050,1650,2300,-1900,4620,-1500,5050,900,20,1000,700,4},	// 2	 D5000
			 {1700,2270,1400,1950,-1300,3800,-1500,5070,1300,-1150,1100,-200,8},	// 3    SUNNY
			 {1950,2450,1250,1750,-1600,4460,-1500,5200,800,-500,1000,-450,4 },	// 4    CLOUDY
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
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_12800,0}}},
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
