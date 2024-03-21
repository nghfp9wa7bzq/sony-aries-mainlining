// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NOVATEK_SHARP_1080P_PANEL_H_
#define _PANEL_NOVATEK_SHARP_1080P_PANEL_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config novatek_sharp_1080p_panel_panel_data = {
	.panel_node_id = "somc,novatek_sharp_1080p_panel",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution novatek_sharp_1080p_panel_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 128,
	.hback_porch = 76,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 2,
	.vback_porch = 5,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info novatek_sharp_1080p_panel_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char novatek_sharp_1080p_panel_on_cmd_0[] = {
	0xff, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_1[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_2[] = {
	0x15, 0x14, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_3[] = {
	0x16, 0x12, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_4[] = {
	0x58, 0x82, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_5[] = {
	0x59, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_6[] = {
	0x5a, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_7[] = {
	0x5b, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_8[] = {
	0x5c, 0x82, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_9[] = {
	0x5d, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_10[] = {
	0x5e, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_11[] = {
	0x5f, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_12[] = {
	0x60, 0x0f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_13[] = {
	0x6d, 0x22, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_14[] = {
	0xff, 0x05, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_15[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_16[] = {
	0xa6, 0x04, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_17[] = {
	0xc4, 0x04, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_18[] = {
	0xff, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_19[] = {
	0xff, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_20[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_21[] = {
	0x75, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_22[] = {
	0x76, 0x21, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_23[] = {
	0x77, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_24[] = {
	0x78, 0x57, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_25[] = {
	0x79, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_26[] = {
	0x7a, 0x8a, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_27[] = {
	0x7b, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_28[] = {
	0x7c, 0xa9, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_29[] = {
	0x7d, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_30[] = {
	0x7e, 0xc1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_31[] = {
	0x7f, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_32[] = {
	0x80, 0xd6, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_33[] = {
	0x81, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_34[] = {
	0x82, 0xe4, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_35[] = {
	0x83, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_36[] = {
	0x84, 0xf6, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_37[] = {
	0x85, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_38[] = {
	0x86, 0x06, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_39[] = {
	0x87, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_40[] = {
	0x88, 0x33, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_41[] = {
	0x89, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_42[] = {
	0x8a, 0x59, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_43[] = {
	0x8b, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_44[] = {
	0x8c, 0x95, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_45[] = {
	0x8d, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_46[] = {
	0x8e, 0xc5, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_47[] = {
	0x8f, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_48[] = {
	0x90, 0x11, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_49[] = {
	0x91, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_50[] = {
	0x92, 0x4d, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_51[] = {
	0x93, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_52[] = {
	0x94, 0x4f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_53[] = {
	0x95, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_54[] = {
	0x96, 0x77, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_55[] = {
	0x97, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_56[] = {
	0x98, 0xa2, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_57[] = {
	0x99, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_58[] = {
	0x9a, 0xbe, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_59[] = {
	0x9b, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_60[] = {
	0x9c, 0xe5, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_61[] = {
	0x9d, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_62[] = {
	0x9e, 0x04, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_63[] = {
	0x9f, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_64[] = {
	0xa0, 0x2c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_65[] = {
	0xa2, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_66[] = {
	0xa3, 0x39, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_67[] = {
	0xa4, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_68[] = {
	0xa5, 0x46, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_69[] = {
	0xa6, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_70[] = {
	0xa7, 0x55, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_71[] = {
	0xa9, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_72[] = {
	0xaa, 0x66, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_73[] = {
	0xab, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_74[] = {
	0xac, 0x7b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_75[] = {
	0xad, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_76[] = {
	0xae, 0x95, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_77[] = {
	0xaf, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_78[] = {
	0xb0, 0xb4, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_79[] = {
	0xb1, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_80[] = {
	0xb2, 0xbb, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_81[] = {
	0xb3, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_82[] = {
	0xb4, 0x5b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_83[] = {
	0xb5, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_84[] = {
	0xb6, 0x94, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_85[] = {
	0xb7, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_86[] = {
	0xb8, 0xc2, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_87[] = {
	0xb9, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_88[] = {
	0xba, 0xde, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_89[] = {
	0xbb, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_90[] = {
	0xbc, 0xf5, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_91[] = {
	0xbd, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_92[] = {
	0xbe, 0x09, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_93[] = {
	0xbf, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_94[] = {
	0xc0, 0x15, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_95[] = {
	0xc1, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_96[] = {
	0xc2, 0x26, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_97[] = {
	0xc3, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_98[] = {
	0xc4, 0x34, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_99[] = {
	0xc5, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_100[] = {
	0xc6, 0x5c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_101[] = {
	0xc7, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_102[] = {
	0xc8, 0x7c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_103[] = {
	0xc9, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_104[] = {
	0xca, 0xac, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_105[] = {
	0xcb, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_106[] = {
	0xcc, 0xd2, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_107[] = {
	0xcd, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_108[] = {
	0xce, 0x0d, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_109[] = {
	0xcf, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_110[] = {
	0xd0, 0x3b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_111[] = {
	0xd1, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_112[] = {
	0xd2, 0x3d, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_113[] = {
	0xd3, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_114[] = {
	0xd4, 0x73, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_115[] = {
	0xd5, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_116[] = {
	0xd6, 0xad, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_117[] = {
	0xd7, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_118[] = {
	0xd8, 0xcf, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_119[] = {
	0xd9, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_120[] = {
	0xda, 0xfe, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_121[] = {
	0xdb, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_122[] = {
	0xdc, 0x1c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_123[] = {
	0xdd, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_124[] = {
	0xde, 0x44, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_125[] = {
	0xdf, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_126[] = {
	0xe0, 0x51, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_127[] = {
	0xe1, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_128[] = {
	0xe2, 0x5e, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_129[] = {
	0xe3, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_130[] = {
	0xe4, 0x6e, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_131[] = {
	0xe5, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_132[] = {
	0xe6, 0x7f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_133[] = {
	0xe7, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_134[] = {
	0xe8, 0x93, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_135[] = {
	0xe9, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_136[] = {
	0xea, 0xac, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_137[] = {
	0xeb, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_138[] = {
	0xec, 0xca, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_139[] = {
	0xed, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_140[] = {
	0xee, 0xd1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_141[] = {
	0xef, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_142[] = {
	0xf0, 0x14, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_143[] = {
	0xf1, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_144[] = {
	0xf2, 0x50, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_145[] = {
	0xf3, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_146[] = {
	0xf4, 0x84, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_147[] = {
	0xf5, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_148[] = {
	0xf6, 0xa4, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_149[] = {
	0xf7, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_150[] = {
	0xf8, 0xb9, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_151[] = {
	0xf9, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_152[] = {
	0xfa, 0xd2, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_153[] = {
	0xff, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_154[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_155[] = {
	0x00, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_156[] = {
	0x01, 0xe1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_157[] = {
	0x02, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_158[] = {
	0x03, 0xf1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_159[] = {
	0x04, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_160[] = {
	0x05, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_161[] = {
	0x06, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_162[] = {
	0x07, 0x31, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_163[] = {
	0x08, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_164[] = {
	0x09, 0x56, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_165[] = {
	0x0a, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_166[] = {
	0x0b, 0x93, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_167[] = {
	0x0c, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_168[] = {
	0x0d, 0xc4, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_169[] = {
	0x0e, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_170[] = {
	0x0f, 0x0f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_171[] = {
	0x10, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_172[] = {
	0x11, 0x4b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_173[] = {
	0x12, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_174[] = {
	0x13, 0x4c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_175[] = {
	0x14, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_176[] = {
	0x15, 0x75, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_177[] = {
	0x16, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_178[] = {
	0x17, 0xa0, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_179[] = {
	0x18, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_180[] = {
	0x19, 0xbb, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_181[] = {
	0x1a, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_182[] = {
	0x1b, 0xe0, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_183[] = {
	0x1c, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_184[] = {
	0x1d, 0xff, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_185[] = {
	0x1e, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_186[] = {
	0x1f, 0x27, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_187[] = {
	0x20, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_188[] = {
	0x21, 0x33, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_189[] = {
	0x22, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_190[] = {
	0x23, 0x41, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_191[] = {
	0x24, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_192[] = {
	0x25, 0x50, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_193[] = {
	0x26, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_194[] = {
	0x27, 0x61, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_195[] = {
	0x28, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_196[] = {
	0x29, 0x76, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_197[] = {
	0x2a, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_198[] = {
	0x2b, 0x91, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_199[] = {
	0x2d, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_200[] = {
	0x2f, 0xb3, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_201[] = {
	0x30, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_202[] = {
	0x31, 0xbb, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_203[] = {
	0x32, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_204[] = {
	0x33, 0x4e, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_205[] = {
	0x34, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_206[] = {
	0x35, 0x8f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_207[] = {
	0x36, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_208[] = {
	0x37, 0xbe, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_209[] = {
	0x38, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_210[] = {
	0x39, 0xdb, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_211[] = {
	0x3a, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_212[] = {
	0x3b, 0xef, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_213[] = {
	0x3d, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_214[] = {
	0x3f, 0x06, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_215[] = {
	0x40, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_216[] = {
	0x41, 0x13, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_217[] = {
	0x42, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_218[] = {
	0x43, 0x22, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_219[] = {
	0x44, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_220[] = {
	0x45, 0x31, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_221[] = {
	0x46, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_222[] = {
	0x47, 0x5b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_223[] = {
	0x48, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_224[] = {
	0x49, 0x7b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_225[] = {
	0x4a, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_226[] = {
	0x4b, 0xab, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_227[] = {
	0x4c, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_228[] = {
	0x4d, 0xd1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_229[] = {
	0x4e, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_230[] = {
	0x4f, 0x0b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_231[] = {
	0x50, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_232[] = {
	0x51, 0x39, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_233[] = {
	0x52, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_234[] = {
	0x53, 0x3a, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_235[] = {
	0x54, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_236[] = {
	0x55, 0x71, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_237[] = {
	0x56, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_238[] = {
	0x58, 0xaa, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_239[] = {
	0x59, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_240[] = {
	0x5a, 0xcc, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_241[] = {
	0x5b, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_242[] = {
	0x5c, 0xfa, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_243[] = {
	0x5d, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_244[] = {
	0x5e, 0x17, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_245[] = {
	0x5f, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_246[] = {
	0x60, 0x3f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_247[] = {
	0x61, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_248[] = {
	0x62, 0x4b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_249[] = {
	0x63, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_250[] = {
	0x64, 0x59, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_251[] = {
	0x65, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_252[] = {
	0x66, 0x68, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_253[] = {
	0x67, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_254[] = {
	0x68, 0x7a, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_255[] = {
	0x69, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_256[] = {
	0x6a, 0x8e, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_257[] = {
	0x6b, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_258[] = {
	0x6c, 0xa8, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_259[] = {
	0x6d, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_260[] = {
	0x6e, 0xc9, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_261[] = {
	0x6f, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_262[] = {
	0x70, 0xd1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_263[] = {
	0x71, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_264[] = {
	0x72, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_265[] = {
	0x73, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_266[] = {
	0x74, 0x38, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_267[] = {
	0x75, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_268[] = {
	0x76, 0x6c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_269[] = {
	0x77, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_270[] = {
	0x78, 0x8f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_271[] = {
	0x79, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_272[] = {
	0x7a, 0xaa, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_273[] = {
	0x7b, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_274[] = {
	0x7c, 0xbf, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_275[] = {
	0x7d, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_276[] = {
	0x7e, 0xd5, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_277[] = {
	0x7f, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_278[] = {
	0x80, 0xe2, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_279[] = {
	0x81, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_280[] = {
	0x82, 0xf3, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_281[] = {
	0x83, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_282[] = {
	0x84, 0x27, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_283[] = {
	0x85, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_284[] = {
	0x86, 0x4e, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_285[] = {
	0x87, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_286[] = {
	0x88, 0x8d, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_287[] = {
	0x89, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_288[] = {
	0x8a, 0xc0, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_289[] = {
	0x8b, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_290[] = {
	0x8c, 0x0d, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_291[] = {
	0x8d, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_292[] = {
	0x8e, 0x4b, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_293[] = {
	0x8f, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_294[] = {
	0x90, 0x4c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_295[] = {
	0x91, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_296[] = {
	0x92, 0x76, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_297[] = {
	0x93, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_298[] = {
	0x94, 0xa1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_299[] = {
	0x95, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_300[] = {
	0x96, 0xbd, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_301[] = {
	0x97, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_302[] = {
	0x98, 0xe4, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_303[] = {
	0x99, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_304[] = {
	0x9a, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_305[] = {
	0x9b, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_306[] = {
	0x9c, 0x2d, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_307[] = {
	0x9d, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_308[] = {
	0x9e, 0x39, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_309[] = {
	0x9f, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_310[] = {
	0xa0, 0x46, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_311[] = {
	0xa2, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_312[] = {
	0xa3, 0x56, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_313[] = {
	0xa4, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_314[] = {
	0xa5, 0x68, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_315[] = {
	0xa6, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_316[] = {
	0xa7, 0x7f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_317[] = {
	0xa9, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_318[] = {
	0xaa, 0x97, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_319[] = {
	0xab, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_320[] = {
	0xac, 0xb5, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_321[] = {
	0xad, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_322[] = {
	0xae, 0xbb, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_323[] = {
	0xaf, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_324[] = {
	0xb0, 0x39, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_325[] = {
	0xb1, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_326[] = {
	0xb2, 0x76, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_327[] = {
	0xb3, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_328[] = {
	0xb4, 0xa6, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_329[] = {
	0xb5, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_330[] = {
	0xb6, 0xc6, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_331[] = {
	0xb7, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_332[] = {
	0xb8, 0xdf, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_333[] = {
	0xb9, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_334[] = {
	0xba, 0xf2, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_335[] = {
	0xbb, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_336[] = {
	0xbc, 0x07, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_337[] = {
	0xbd, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_338[] = {
	0xbe, 0x13, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_339[] = {
	0xbf, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_340[] = {
	0xc0, 0x22, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_341[] = {
	0xc1, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_342[] = {
	0xc2, 0x50, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_343[] = {
	0xc3, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_344[] = {
	0xc4, 0x72, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_345[] = {
	0xc5, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_346[] = {
	0xc6, 0xa5, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_347[] = {
	0xc7, 0x01, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_348[] = {
	0xc8, 0xcd, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_349[] = {
	0xc9, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_350[] = {
	0xca, 0x09, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_351[] = {
	0xcb, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_352[] = {
	0xcc, 0x39, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_353[] = {
	0xcd, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_354[] = {
	0xce, 0x3a, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_355[] = {
	0xcf, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_356[] = {
	0xd0, 0x72, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_357[] = {
	0xd1, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_358[] = {
	0xd2, 0xac, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_359[] = {
	0xd3, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_360[] = {
	0xd4, 0xcf, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_361[] = {
	0xd5, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_362[] = {
	0xd6, 0xfe, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_363[] = {
	0xd7, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_364[] = {
	0xd8, 0x1c, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_365[] = {
	0xd9, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_366[] = {
	0xda, 0x45, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_367[] = {
	0xdb, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_368[] = {
	0xdc, 0x51, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_369[] = {
	0xdd, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_370[] = {
	0xde, 0x5f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_371[] = {
	0xdf, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_372[] = {
	0xe0, 0x6f, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_373[] = {
	0xe1, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_374[] = {
	0xe2, 0x81, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_375[] = {
	0xe3, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_376[] = {
	0xe4, 0x97, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_377[] = {
	0xe5, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_378[] = {
	0xe6, 0xae, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_379[] = {
	0xe7, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_380[] = {
	0xe8, 0xcb, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_381[] = {
	0xe9, 0x03, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_382[] = {
	0xea, 0xd1, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_383[] = {
	0xff, 0x00, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_384[] = {
	0x11, 0x00, 0x05, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_385[] = {
	0xd3, 0x07, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_386[] = {
	0xd4, 0x02, 0x15, 0x80
};
static char novatek_sharp_1080p_panel_on_cmd_387[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_sharp_1080p_panel_on_command[] = {
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_0), novatek_sharp_1080p_panel_on_cmd_0, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_1), novatek_sharp_1080p_panel_on_cmd_1, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_2), novatek_sharp_1080p_panel_on_cmd_2, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_3), novatek_sharp_1080p_panel_on_cmd_3, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_4), novatek_sharp_1080p_panel_on_cmd_4, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_5), novatek_sharp_1080p_panel_on_cmd_5, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_6), novatek_sharp_1080p_panel_on_cmd_6, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_7), novatek_sharp_1080p_panel_on_cmd_7, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_8), novatek_sharp_1080p_panel_on_cmd_8, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_9), novatek_sharp_1080p_panel_on_cmd_9, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_10), novatek_sharp_1080p_panel_on_cmd_10, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_11), novatek_sharp_1080p_panel_on_cmd_11, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_12), novatek_sharp_1080p_panel_on_cmd_12, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_13), novatek_sharp_1080p_panel_on_cmd_13, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_14), novatek_sharp_1080p_panel_on_cmd_14, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_15), novatek_sharp_1080p_panel_on_cmd_15, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_16), novatek_sharp_1080p_panel_on_cmd_16, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_17), novatek_sharp_1080p_panel_on_cmd_17, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_18), novatek_sharp_1080p_panel_on_cmd_18, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_19), novatek_sharp_1080p_panel_on_cmd_19, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_20), novatek_sharp_1080p_panel_on_cmd_20, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_21), novatek_sharp_1080p_panel_on_cmd_21, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_22), novatek_sharp_1080p_panel_on_cmd_22, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_23), novatek_sharp_1080p_panel_on_cmd_23, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_24), novatek_sharp_1080p_panel_on_cmd_24, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_25), novatek_sharp_1080p_panel_on_cmd_25, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_26), novatek_sharp_1080p_panel_on_cmd_26, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_27), novatek_sharp_1080p_panel_on_cmd_27, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_28), novatek_sharp_1080p_panel_on_cmd_28, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_29), novatek_sharp_1080p_panel_on_cmd_29, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_30), novatek_sharp_1080p_panel_on_cmd_30, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_31), novatek_sharp_1080p_panel_on_cmd_31, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_32), novatek_sharp_1080p_panel_on_cmd_32, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_33), novatek_sharp_1080p_panel_on_cmd_33, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_34), novatek_sharp_1080p_panel_on_cmd_34, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_35), novatek_sharp_1080p_panel_on_cmd_35, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_36), novatek_sharp_1080p_panel_on_cmd_36, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_37), novatek_sharp_1080p_panel_on_cmd_37, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_38), novatek_sharp_1080p_panel_on_cmd_38, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_39), novatek_sharp_1080p_panel_on_cmd_39, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_40), novatek_sharp_1080p_panel_on_cmd_40, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_41), novatek_sharp_1080p_panel_on_cmd_41, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_42), novatek_sharp_1080p_panel_on_cmd_42, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_43), novatek_sharp_1080p_panel_on_cmd_43, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_44), novatek_sharp_1080p_panel_on_cmd_44, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_45), novatek_sharp_1080p_panel_on_cmd_45, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_46), novatek_sharp_1080p_panel_on_cmd_46, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_47), novatek_sharp_1080p_panel_on_cmd_47, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_48), novatek_sharp_1080p_panel_on_cmd_48, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_49), novatek_sharp_1080p_panel_on_cmd_49, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_50), novatek_sharp_1080p_panel_on_cmd_50, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_51), novatek_sharp_1080p_panel_on_cmd_51, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_52), novatek_sharp_1080p_panel_on_cmd_52, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_53), novatek_sharp_1080p_panel_on_cmd_53, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_54), novatek_sharp_1080p_panel_on_cmd_54, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_55), novatek_sharp_1080p_panel_on_cmd_55, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_56), novatek_sharp_1080p_panel_on_cmd_56, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_57), novatek_sharp_1080p_panel_on_cmd_57, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_58), novatek_sharp_1080p_panel_on_cmd_58, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_59), novatek_sharp_1080p_panel_on_cmd_59, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_60), novatek_sharp_1080p_panel_on_cmd_60, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_61), novatek_sharp_1080p_panel_on_cmd_61, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_62), novatek_sharp_1080p_panel_on_cmd_62, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_63), novatek_sharp_1080p_panel_on_cmd_63, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_64), novatek_sharp_1080p_panel_on_cmd_64, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_65), novatek_sharp_1080p_panel_on_cmd_65, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_66), novatek_sharp_1080p_panel_on_cmd_66, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_67), novatek_sharp_1080p_panel_on_cmd_67, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_68), novatek_sharp_1080p_panel_on_cmd_68, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_69), novatek_sharp_1080p_panel_on_cmd_69, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_70), novatek_sharp_1080p_panel_on_cmd_70, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_71), novatek_sharp_1080p_panel_on_cmd_71, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_72), novatek_sharp_1080p_panel_on_cmd_72, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_73), novatek_sharp_1080p_panel_on_cmd_73, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_74), novatek_sharp_1080p_panel_on_cmd_74, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_75), novatek_sharp_1080p_panel_on_cmd_75, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_76), novatek_sharp_1080p_panel_on_cmd_76, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_77), novatek_sharp_1080p_panel_on_cmd_77, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_78), novatek_sharp_1080p_panel_on_cmd_78, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_79), novatek_sharp_1080p_panel_on_cmd_79, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_80), novatek_sharp_1080p_panel_on_cmd_80, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_81), novatek_sharp_1080p_panel_on_cmd_81, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_82), novatek_sharp_1080p_panel_on_cmd_82, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_83), novatek_sharp_1080p_panel_on_cmd_83, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_84), novatek_sharp_1080p_panel_on_cmd_84, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_85), novatek_sharp_1080p_panel_on_cmd_85, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_86), novatek_sharp_1080p_panel_on_cmd_86, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_87), novatek_sharp_1080p_panel_on_cmd_87, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_88), novatek_sharp_1080p_panel_on_cmd_88, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_89), novatek_sharp_1080p_panel_on_cmd_89, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_90), novatek_sharp_1080p_panel_on_cmd_90, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_91), novatek_sharp_1080p_panel_on_cmd_91, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_92), novatek_sharp_1080p_panel_on_cmd_92, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_93), novatek_sharp_1080p_panel_on_cmd_93, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_94), novatek_sharp_1080p_panel_on_cmd_94, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_95), novatek_sharp_1080p_panel_on_cmd_95, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_96), novatek_sharp_1080p_panel_on_cmd_96, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_97), novatek_sharp_1080p_panel_on_cmd_97, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_98), novatek_sharp_1080p_panel_on_cmd_98, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_99), novatek_sharp_1080p_panel_on_cmd_99, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_100), novatek_sharp_1080p_panel_on_cmd_100, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_101), novatek_sharp_1080p_panel_on_cmd_101, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_102), novatek_sharp_1080p_panel_on_cmd_102, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_103), novatek_sharp_1080p_panel_on_cmd_103, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_104), novatek_sharp_1080p_panel_on_cmd_104, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_105), novatek_sharp_1080p_panel_on_cmd_105, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_106), novatek_sharp_1080p_panel_on_cmd_106, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_107), novatek_sharp_1080p_panel_on_cmd_107, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_108), novatek_sharp_1080p_panel_on_cmd_108, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_109), novatek_sharp_1080p_panel_on_cmd_109, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_110), novatek_sharp_1080p_panel_on_cmd_110, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_111), novatek_sharp_1080p_panel_on_cmd_111, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_112), novatek_sharp_1080p_panel_on_cmd_112, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_113), novatek_sharp_1080p_panel_on_cmd_113, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_114), novatek_sharp_1080p_panel_on_cmd_114, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_115), novatek_sharp_1080p_panel_on_cmd_115, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_116), novatek_sharp_1080p_panel_on_cmd_116, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_117), novatek_sharp_1080p_panel_on_cmd_117, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_118), novatek_sharp_1080p_panel_on_cmd_118, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_119), novatek_sharp_1080p_panel_on_cmd_119, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_120), novatek_sharp_1080p_panel_on_cmd_120, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_121), novatek_sharp_1080p_panel_on_cmd_121, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_122), novatek_sharp_1080p_panel_on_cmd_122, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_123), novatek_sharp_1080p_panel_on_cmd_123, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_124), novatek_sharp_1080p_panel_on_cmd_124, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_125), novatek_sharp_1080p_panel_on_cmd_125, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_126), novatek_sharp_1080p_panel_on_cmd_126, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_127), novatek_sharp_1080p_panel_on_cmd_127, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_128), novatek_sharp_1080p_panel_on_cmd_128, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_129), novatek_sharp_1080p_panel_on_cmd_129, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_130), novatek_sharp_1080p_panel_on_cmd_130, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_131), novatek_sharp_1080p_panel_on_cmd_131, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_132), novatek_sharp_1080p_panel_on_cmd_132, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_133), novatek_sharp_1080p_panel_on_cmd_133, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_134), novatek_sharp_1080p_panel_on_cmd_134, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_135), novatek_sharp_1080p_panel_on_cmd_135, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_136), novatek_sharp_1080p_panel_on_cmd_136, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_137), novatek_sharp_1080p_panel_on_cmd_137, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_138), novatek_sharp_1080p_panel_on_cmd_138, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_139), novatek_sharp_1080p_panel_on_cmd_139, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_140), novatek_sharp_1080p_panel_on_cmd_140, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_141), novatek_sharp_1080p_panel_on_cmd_141, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_142), novatek_sharp_1080p_panel_on_cmd_142, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_143), novatek_sharp_1080p_panel_on_cmd_143, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_144), novatek_sharp_1080p_panel_on_cmd_144, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_145), novatek_sharp_1080p_panel_on_cmd_145, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_146), novatek_sharp_1080p_panel_on_cmd_146, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_147), novatek_sharp_1080p_panel_on_cmd_147, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_148), novatek_sharp_1080p_panel_on_cmd_148, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_149), novatek_sharp_1080p_panel_on_cmd_149, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_150), novatek_sharp_1080p_panel_on_cmd_150, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_151), novatek_sharp_1080p_panel_on_cmd_151, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_152), novatek_sharp_1080p_panel_on_cmd_152, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_153), novatek_sharp_1080p_panel_on_cmd_153, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_154), novatek_sharp_1080p_panel_on_cmd_154, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_155), novatek_sharp_1080p_panel_on_cmd_155, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_156), novatek_sharp_1080p_panel_on_cmd_156, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_157), novatek_sharp_1080p_panel_on_cmd_157, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_158), novatek_sharp_1080p_panel_on_cmd_158, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_159), novatek_sharp_1080p_panel_on_cmd_159, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_160), novatek_sharp_1080p_panel_on_cmd_160, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_161), novatek_sharp_1080p_panel_on_cmd_161, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_162), novatek_sharp_1080p_panel_on_cmd_162, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_163), novatek_sharp_1080p_panel_on_cmd_163, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_164), novatek_sharp_1080p_panel_on_cmd_164, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_165), novatek_sharp_1080p_panel_on_cmd_165, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_166), novatek_sharp_1080p_panel_on_cmd_166, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_167), novatek_sharp_1080p_panel_on_cmd_167, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_168), novatek_sharp_1080p_panel_on_cmd_168, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_169), novatek_sharp_1080p_panel_on_cmd_169, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_170), novatek_sharp_1080p_panel_on_cmd_170, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_171), novatek_sharp_1080p_panel_on_cmd_171, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_172), novatek_sharp_1080p_panel_on_cmd_172, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_173), novatek_sharp_1080p_panel_on_cmd_173, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_174), novatek_sharp_1080p_panel_on_cmd_174, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_175), novatek_sharp_1080p_panel_on_cmd_175, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_176), novatek_sharp_1080p_panel_on_cmd_176, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_177), novatek_sharp_1080p_panel_on_cmd_177, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_178), novatek_sharp_1080p_panel_on_cmd_178, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_179), novatek_sharp_1080p_panel_on_cmd_179, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_180), novatek_sharp_1080p_panel_on_cmd_180, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_181), novatek_sharp_1080p_panel_on_cmd_181, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_182), novatek_sharp_1080p_panel_on_cmd_182, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_183), novatek_sharp_1080p_panel_on_cmd_183, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_184), novatek_sharp_1080p_panel_on_cmd_184, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_185), novatek_sharp_1080p_panel_on_cmd_185, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_186), novatek_sharp_1080p_panel_on_cmd_186, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_187), novatek_sharp_1080p_panel_on_cmd_187, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_188), novatek_sharp_1080p_panel_on_cmd_188, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_189), novatek_sharp_1080p_panel_on_cmd_189, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_190), novatek_sharp_1080p_panel_on_cmd_190, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_191), novatek_sharp_1080p_panel_on_cmd_191, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_192), novatek_sharp_1080p_panel_on_cmd_192, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_193), novatek_sharp_1080p_panel_on_cmd_193, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_194), novatek_sharp_1080p_panel_on_cmd_194, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_195), novatek_sharp_1080p_panel_on_cmd_195, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_196), novatek_sharp_1080p_panel_on_cmd_196, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_197), novatek_sharp_1080p_panel_on_cmd_197, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_198), novatek_sharp_1080p_panel_on_cmd_198, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_199), novatek_sharp_1080p_panel_on_cmd_199, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_200), novatek_sharp_1080p_panel_on_cmd_200, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_201), novatek_sharp_1080p_panel_on_cmd_201, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_202), novatek_sharp_1080p_panel_on_cmd_202, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_203), novatek_sharp_1080p_panel_on_cmd_203, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_204), novatek_sharp_1080p_panel_on_cmd_204, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_205), novatek_sharp_1080p_panel_on_cmd_205, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_206), novatek_sharp_1080p_panel_on_cmd_206, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_207), novatek_sharp_1080p_panel_on_cmd_207, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_208), novatek_sharp_1080p_panel_on_cmd_208, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_209), novatek_sharp_1080p_panel_on_cmd_209, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_210), novatek_sharp_1080p_panel_on_cmd_210, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_211), novatek_sharp_1080p_panel_on_cmd_211, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_212), novatek_sharp_1080p_panel_on_cmd_212, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_213), novatek_sharp_1080p_panel_on_cmd_213, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_214), novatek_sharp_1080p_panel_on_cmd_214, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_215), novatek_sharp_1080p_panel_on_cmd_215, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_216), novatek_sharp_1080p_panel_on_cmd_216, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_217), novatek_sharp_1080p_panel_on_cmd_217, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_218), novatek_sharp_1080p_panel_on_cmd_218, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_219), novatek_sharp_1080p_panel_on_cmd_219, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_220), novatek_sharp_1080p_panel_on_cmd_220, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_221), novatek_sharp_1080p_panel_on_cmd_221, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_222), novatek_sharp_1080p_panel_on_cmd_222, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_223), novatek_sharp_1080p_panel_on_cmd_223, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_224), novatek_sharp_1080p_panel_on_cmd_224, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_225), novatek_sharp_1080p_panel_on_cmd_225, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_226), novatek_sharp_1080p_panel_on_cmd_226, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_227), novatek_sharp_1080p_panel_on_cmd_227, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_228), novatek_sharp_1080p_panel_on_cmd_228, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_229), novatek_sharp_1080p_panel_on_cmd_229, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_230), novatek_sharp_1080p_panel_on_cmd_230, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_231), novatek_sharp_1080p_panel_on_cmd_231, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_232), novatek_sharp_1080p_panel_on_cmd_232, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_233), novatek_sharp_1080p_panel_on_cmd_233, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_234), novatek_sharp_1080p_panel_on_cmd_234, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_235), novatek_sharp_1080p_panel_on_cmd_235, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_236), novatek_sharp_1080p_panel_on_cmd_236, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_237), novatek_sharp_1080p_panel_on_cmd_237, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_238), novatek_sharp_1080p_panel_on_cmd_238, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_239), novatek_sharp_1080p_panel_on_cmd_239, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_240), novatek_sharp_1080p_panel_on_cmd_240, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_241), novatek_sharp_1080p_panel_on_cmd_241, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_242), novatek_sharp_1080p_panel_on_cmd_242, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_243), novatek_sharp_1080p_panel_on_cmd_243, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_244), novatek_sharp_1080p_panel_on_cmd_244, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_245), novatek_sharp_1080p_panel_on_cmd_245, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_246), novatek_sharp_1080p_panel_on_cmd_246, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_247), novatek_sharp_1080p_panel_on_cmd_247, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_248), novatek_sharp_1080p_panel_on_cmd_248, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_249), novatek_sharp_1080p_panel_on_cmd_249, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_250), novatek_sharp_1080p_panel_on_cmd_250, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_251), novatek_sharp_1080p_panel_on_cmd_251, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_252), novatek_sharp_1080p_panel_on_cmd_252, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_253), novatek_sharp_1080p_panel_on_cmd_253, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_254), novatek_sharp_1080p_panel_on_cmd_254, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_255), novatek_sharp_1080p_panel_on_cmd_255, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_256), novatek_sharp_1080p_panel_on_cmd_256, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_257), novatek_sharp_1080p_panel_on_cmd_257, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_258), novatek_sharp_1080p_panel_on_cmd_258, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_259), novatek_sharp_1080p_panel_on_cmd_259, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_260), novatek_sharp_1080p_panel_on_cmd_260, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_261), novatek_sharp_1080p_panel_on_cmd_261, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_262), novatek_sharp_1080p_panel_on_cmd_262, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_263), novatek_sharp_1080p_panel_on_cmd_263, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_264), novatek_sharp_1080p_panel_on_cmd_264, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_265), novatek_sharp_1080p_panel_on_cmd_265, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_266), novatek_sharp_1080p_panel_on_cmd_266, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_267), novatek_sharp_1080p_panel_on_cmd_267, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_268), novatek_sharp_1080p_panel_on_cmd_268, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_269), novatek_sharp_1080p_panel_on_cmd_269, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_270), novatek_sharp_1080p_panel_on_cmd_270, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_271), novatek_sharp_1080p_panel_on_cmd_271, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_272), novatek_sharp_1080p_panel_on_cmd_272, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_273), novatek_sharp_1080p_panel_on_cmd_273, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_274), novatek_sharp_1080p_panel_on_cmd_274, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_275), novatek_sharp_1080p_panel_on_cmd_275, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_276), novatek_sharp_1080p_panel_on_cmd_276, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_277), novatek_sharp_1080p_panel_on_cmd_277, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_278), novatek_sharp_1080p_panel_on_cmd_278, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_279), novatek_sharp_1080p_panel_on_cmd_279, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_280), novatek_sharp_1080p_panel_on_cmd_280, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_281), novatek_sharp_1080p_panel_on_cmd_281, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_282), novatek_sharp_1080p_panel_on_cmd_282, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_283), novatek_sharp_1080p_panel_on_cmd_283, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_284), novatek_sharp_1080p_panel_on_cmd_284, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_285), novatek_sharp_1080p_panel_on_cmd_285, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_286), novatek_sharp_1080p_panel_on_cmd_286, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_287), novatek_sharp_1080p_panel_on_cmd_287, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_288), novatek_sharp_1080p_panel_on_cmd_288, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_289), novatek_sharp_1080p_panel_on_cmd_289, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_290), novatek_sharp_1080p_panel_on_cmd_290, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_291), novatek_sharp_1080p_panel_on_cmd_291, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_292), novatek_sharp_1080p_panel_on_cmd_292, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_293), novatek_sharp_1080p_panel_on_cmd_293, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_294), novatek_sharp_1080p_panel_on_cmd_294, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_295), novatek_sharp_1080p_panel_on_cmd_295, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_296), novatek_sharp_1080p_panel_on_cmd_296, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_297), novatek_sharp_1080p_panel_on_cmd_297, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_298), novatek_sharp_1080p_panel_on_cmd_298, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_299), novatek_sharp_1080p_panel_on_cmd_299, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_300), novatek_sharp_1080p_panel_on_cmd_300, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_301), novatek_sharp_1080p_panel_on_cmd_301, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_302), novatek_sharp_1080p_panel_on_cmd_302, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_303), novatek_sharp_1080p_panel_on_cmd_303, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_304), novatek_sharp_1080p_panel_on_cmd_304, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_305), novatek_sharp_1080p_panel_on_cmd_305, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_306), novatek_sharp_1080p_panel_on_cmd_306, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_307), novatek_sharp_1080p_panel_on_cmd_307, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_308), novatek_sharp_1080p_panel_on_cmd_308, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_309), novatek_sharp_1080p_panel_on_cmd_309, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_310), novatek_sharp_1080p_panel_on_cmd_310, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_311), novatek_sharp_1080p_panel_on_cmd_311, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_312), novatek_sharp_1080p_panel_on_cmd_312, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_313), novatek_sharp_1080p_panel_on_cmd_313, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_314), novatek_sharp_1080p_panel_on_cmd_314, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_315), novatek_sharp_1080p_panel_on_cmd_315, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_316), novatek_sharp_1080p_panel_on_cmd_316, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_317), novatek_sharp_1080p_panel_on_cmd_317, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_318), novatek_sharp_1080p_panel_on_cmd_318, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_319), novatek_sharp_1080p_panel_on_cmd_319, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_320), novatek_sharp_1080p_panel_on_cmd_320, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_321), novatek_sharp_1080p_panel_on_cmd_321, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_322), novatek_sharp_1080p_panel_on_cmd_322, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_323), novatek_sharp_1080p_panel_on_cmd_323, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_324), novatek_sharp_1080p_panel_on_cmd_324, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_325), novatek_sharp_1080p_panel_on_cmd_325, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_326), novatek_sharp_1080p_panel_on_cmd_326, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_327), novatek_sharp_1080p_panel_on_cmd_327, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_328), novatek_sharp_1080p_panel_on_cmd_328, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_329), novatek_sharp_1080p_panel_on_cmd_329, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_330), novatek_sharp_1080p_panel_on_cmd_330, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_331), novatek_sharp_1080p_panel_on_cmd_331, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_332), novatek_sharp_1080p_panel_on_cmd_332, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_333), novatek_sharp_1080p_panel_on_cmd_333, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_334), novatek_sharp_1080p_panel_on_cmd_334, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_335), novatek_sharp_1080p_panel_on_cmd_335, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_336), novatek_sharp_1080p_panel_on_cmd_336, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_337), novatek_sharp_1080p_panel_on_cmd_337, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_338), novatek_sharp_1080p_panel_on_cmd_338, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_339), novatek_sharp_1080p_panel_on_cmd_339, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_340), novatek_sharp_1080p_panel_on_cmd_340, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_341), novatek_sharp_1080p_panel_on_cmd_341, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_342), novatek_sharp_1080p_panel_on_cmd_342, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_343), novatek_sharp_1080p_panel_on_cmd_343, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_344), novatek_sharp_1080p_panel_on_cmd_344, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_345), novatek_sharp_1080p_panel_on_cmd_345, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_346), novatek_sharp_1080p_panel_on_cmd_346, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_347), novatek_sharp_1080p_panel_on_cmd_347, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_348), novatek_sharp_1080p_panel_on_cmd_348, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_349), novatek_sharp_1080p_panel_on_cmd_349, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_350), novatek_sharp_1080p_panel_on_cmd_350, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_351), novatek_sharp_1080p_panel_on_cmd_351, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_352), novatek_sharp_1080p_panel_on_cmd_352, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_353), novatek_sharp_1080p_panel_on_cmd_353, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_354), novatek_sharp_1080p_panel_on_cmd_354, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_355), novatek_sharp_1080p_panel_on_cmd_355, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_356), novatek_sharp_1080p_panel_on_cmd_356, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_357), novatek_sharp_1080p_panel_on_cmd_357, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_358), novatek_sharp_1080p_panel_on_cmd_358, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_359), novatek_sharp_1080p_panel_on_cmd_359, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_360), novatek_sharp_1080p_panel_on_cmd_360, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_361), novatek_sharp_1080p_panel_on_cmd_361, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_362), novatek_sharp_1080p_panel_on_cmd_362, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_363), novatek_sharp_1080p_panel_on_cmd_363, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_364), novatek_sharp_1080p_panel_on_cmd_364, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_365), novatek_sharp_1080p_panel_on_cmd_365, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_366), novatek_sharp_1080p_panel_on_cmd_366, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_367), novatek_sharp_1080p_panel_on_cmd_367, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_368), novatek_sharp_1080p_panel_on_cmd_368, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_369), novatek_sharp_1080p_panel_on_cmd_369, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_370), novatek_sharp_1080p_panel_on_cmd_370, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_371), novatek_sharp_1080p_panel_on_cmd_371, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_372), novatek_sharp_1080p_panel_on_cmd_372, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_373), novatek_sharp_1080p_panel_on_cmd_373, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_374), novatek_sharp_1080p_panel_on_cmd_374, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_375), novatek_sharp_1080p_panel_on_cmd_375, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_376), novatek_sharp_1080p_panel_on_cmd_376, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_377), novatek_sharp_1080p_panel_on_cmd_377, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_378), novatek_sharp_1080p_panel_on_cmd_378, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_379), novatek_sharp_1080p_panel_on_cmd_379, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_380), novatek_sharp_1080p_panel_on_cmd_380, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_381), novatek_sharp_1080p_panel_on_cmd_381, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_382), novatek_sharp_1080p_panel_on_cmd_382, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_383), novatek_sharp_1080p_panel_on_cmd_383, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_384), novatek_sharp_1080p_panel_on_cmd_384, 150 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_385), novatek_sharp_1080p_panel_on_cmd_385, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_386), novatek_sharp_1080p_panel_on_cmd_386, 0 },
	{ sizeof(novatek_sharp_1080p_panel_on_cmd_387), novatek_sharp_1080p_panel_on_cmd_387, 0 },
};

static char novatek_sharp_1080p_panel_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char novatek_sharp_1080p_panel_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_sharp_1080p_panel_off_command[] = {
	{ sizeof(novatek_sharp_1080p_panel_off_cmd_0), novatek_sharp_1080p_panel_off_cmd_0, 20 },
	{ sizeof(novatek_sharp_1080p_panel_off_cmd_1), novatek_sharp_1080p_panel_off_cmd_1, 100 },
};

static struct command_state novatek_sharp_1080p_panel_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info novatek_sharp_1080p_panel_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info novatek_sharp_1080p_panel_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 1,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration novatek_sharp_1080p_panel_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t novatek_sharp_1080p_panel_timings[] = {
	0xe6, 0x38, 0x26, 0x00, 0x68, 0x6c, 0x2a, 0x3a, 0x2c, 0x03, 0x04, 0x00
};

static struct panel_timing novatek_sharp_1080p_panel_timing_info = {
	.tclk_post = 0x02,
	.tclk_pre = 0x2b,
};

static struct backlight novatek_sharp_1080p_panel_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_novatek_sharp_1080p_panel_select(struct panel_struct *panel,
							  struct msm_panel_info *pinfo,
							  struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &novatek_sharp_1080p_panel_panel_data;
	panel->panelres = &novatek_sharp_1080p_panel_panel_res;
	panel->color = &novatek_sharp_1080p_panel_color;
	panel->videopanel = &novatek_sharp_1080p_panel_video_panel;
	panel->commandpanel = &novatek_sharp_1080p_panel_command_panel;
	panel->state = &novatek_sharp_1080p_panel_state;
	panel->laneconfig = &novatek_sharp_1080p_panel_lane_config;
	panel->paneltiminginfo = &novatek_sharp_1080p_panel_timing_info;
	panel->panelresetseq = NULL;
	panel->backlightinfo = &novatek_sharp_1080p_panel_backlight;
	pinfo->mipi.panel_cmds = novatek_sharp_1080p_panel_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(novatek_sharp_1080p_panel_on_command);
	memcpy(phy_db->timing, novatek_sharp_1080p_panel_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NOVATEK_SHARP_1080P_PANEL_H_ */
