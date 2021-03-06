/*
 * image data
 *
 * History:
 *    Author: Seven Jia <tqjia@ambarella.com>
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

aeb_param_t imx265_aeb_param ={
	.aeb_version={
			20200518,1720,AEB_VERSION,0,0,//based on cus
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
			.cfg_ae_gain_tbl ={//48db,step = 0.1dB
				4096, 4144, 4192, 4240, 4290, 4340, 4390, 4441,	4493, 4545, 4598, 4651, 4705, 4760, 4815, 4871,
				4928, 4985, 5043, 5101, 5161, 5221, 5281, 5343,	5405, 5468, 5531, 5595, 5660, 5726, 5793, 5860,
				5928, 5997, 6067, 6137, 6208, 6281, 6353, 6427,	6502, 6578, 6654, 6731, 6810, 6889, 6969, 7050,	
				7132, 7214, 7298, 7383, 7469, 7556, 7643, 7732,	7822, 7913, 8005, 8098, 8192, 8287, 8383, 8481,
				8579, 8679, 8780, 8882, 8985, 9090, 9195, 9302,	9410, 9519, 9630, 9742, 9855, 9970, 10086, 10203,
				10321, 10441, 10563, 10685, 10809, 10935, 11062, 11191,	11321, 11452, 11585, 11720, 11856, 11994, 12133, 12274,
				12417, 12561, 12707, 12855, 13004, 13155, 13308, 13463,	13619, 13777, 13937, 14099, 14263, 14429, 14596, 14766,
				14938, 15111, 15287, 15464, 15644, 15826, 16010, 16196,	16384, 16574, 16767, 16962, 17159, 17358, 17560, 17764,
				17970, 18179, 18390, 18604, 18820, 19039, 19260, 19484,	19710, 19939, 20171, 20405, 20643, 20882, 21125, 21371,
				21619, 21870, 22124, 22381, 22641, 22904, 23170, 23440,	23712, 23988, 24266, 24548, 24834, 25122, 25414, 25709,
				26008, 26310, 26616, 26925, 27238, 27554, 27875, 28199,	28526, 28858, 29193, 29532, 29875, 30222, 30574, 30929,
				31288, 31652, 32020, 32392, 32768, 33149, 33534, 33924,	34318, 34716, 35120, 35528, 35941, 36358, 36781, 37208,
				37641, 38078, 38520, 38968, 39421, 39879, 40342, 40811,	41285, 41765, 42250, 42741, 43238, 43740, 44248, 44762,
				45283, 45809, 46341, 46879, 47424, 47975, 48533, 49097,	49667, 50244, 50828, 51419, 52016, 52620, 53232, 53850,
				54476, 55109, 55749, 56397, 57052, 57715, 58386, 59064,	59751, 60445, 61147, 61858, 62576, 63304, 64039, 64783,
				65536, 66297, 67068, 67847, 68635, 69433, 70240, 71056,	71882, 72717, 73562, 74416, 75281, 76156, 77041, 77936,
				78841, 79758, 80684, 81622, 82570, 83530, 84500, 85482,	86475, 87480, 88497, 89525, 90565, 91617, 92682, 93759,
				94848, 95950, 97065, 98193, 99334, 100488, 101656, 102837,	104032, 105241, 106464, 107701, 108952, 110218, 111499, 112794,
				114105, 115431, 116772, 118129, 119501, 120890, 122295, 123715,	125153, 126607, 128078, 129567, 131072, 132595, 134136, 135694,
				137271, 138866, 140479, 142112, 143763, 145433, 147123, 148833,	150562, 152312, 154081, 155872, 157683, 159515, 161369, 163244,
				165140, 167059, 169000, 170964, 172951, 174960, 176993, 179050,	181130, 183235, 185364, 187518, 189696, 191901, 194130, 196386,
				198668, 200976, 203312, 205674, 208064, 210481, 212927, 215401,	217904, 220436, 222997, 225588, 228210, 230861, 233544, 236257,
				239003, 241780, 244589, 247431, 250306, 253214, 256157, 259133,	262144, 265190, 268271, 271388, 274542, 277732, 280959, 284224,
				287526, 290867, 294247, 297666, 301124, 304623, 308163, 311744,	315366, 319030, 322737, 326487, 330281, 334118, 338001, 341928,
				345901, 349920, 353986, 358099, 362260, 366469, 370728, 375035,	379393, 383801, 388261, 392772, 397336, 401953, 406623, 411348,
				416128, 420963, 425854, 430802, 435808, 440872, 445995, 451177,	456419, 461723, 467088, 472515, 478005, 483559, 489178, 494862,
				500612, 506429, 512313, 518266, 524288, 530380, 536543, 542777,	549084, 555464, 561918, 568447, 575052, 581734, 588493, 595331,
				602249, 609247, 616326, 623487, 630732, 638060, 645474, 652974,	660561, 668237, 676001, 683856, 691802, 699841, 707972, 716199,
				724520, 732939, 741455, 750070, 758786, 767603, 776522, 785544,	794672, 803906, 813247, 822696, 832255, 841926, 851708, 861605,
				871616, 881744, 891989, 902354, 912838, 923445, 934175, 945030,	956010, 967119, 978356, 989724, 1001224, 1012858, 1024626, 1036532, 1048576,
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
			{1838, 1024, 2095},	//AUTOMATIC=5000K
			{1226, 1024, 3837},	//INCANDESCENT
			{1295, 1024, 2980},	//D4000
			{1838, 1024, 2095},	//D5000
			{2115, 1024, 1873},	//SUNNY
			{2210, 1024, 1813},	//CLOUDY
			{1750, 1024, 1800},	//FLASH
			{1600, 1024, 2600},	//FLUORESCENT
			{1857, 1024, 1700},	//FLUORESCENT_H
			{1024, 1024, 1024},	//UNDER WATER
			{1024, 1024, 1024},	//CUSTOM
			{1750, 1024, 1800},	//AUTOMATIC OUTDOOR
		},
		{
			12,
			{{819,1689,3391,4274,-1739,4971,-1538,6447,659,2491,870,3409,1},	// 0	INCANDESCENT
			 {882,1897,2424,3612,-2012,4794,-3131,8777,694,1571,445,3088,2},	// 1    	office light,3800k
			 {1181,2209,1820,2890,-1721,4467,-1527,5650,824,371,668,1841,4},	// 2	 D5000
			 {1591,2515,1591,2167,-1247,3753,-1026,4353,612,210,458,1212,8},	// 3    SUNNY
			 {1806,2702,1306,1952,-953,3284,-646,3421,601,37,707,437,4},	// 4    CLOUDY
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
			.line_num =2,
			.line_belt=2,
			.lines={
				{{{SHUTTER_1BY32000, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_100,0}}},
				{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_25600,0}}},
				//{{{SHUTTER_1BY50, ISO_100, 0}}, {{SHUTTER_1BY50, ISO_800,0}}},
				//{{{SHUTTER_1BY30, ISO_100, 0}}, {{SHUTTER_1BY30, ISO_25600,0}}},
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
