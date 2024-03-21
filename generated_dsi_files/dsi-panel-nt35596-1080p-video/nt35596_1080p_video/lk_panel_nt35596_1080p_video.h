// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NT35596_1080P_VIDEO_H_
#define _PANEL_NT35596_1080P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config nt35596_1080p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_nt35596_1080p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution nt35596_1080p_video_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 32,
	.hback_porch = 32,
	.hpulse_width = 8,
	.hsync_skew = 0,
	.vfront_porch = 2,
	.vback_porch = 18,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info nt35596_1080p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char nt35596_1080p_video_on_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0xee, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_1[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1f, 0x45, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_3[] = {
	0x02, 0x00, 0x29, 0xc0, 0x24, 0x4f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x38, 0xc8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_5[] = {
	0x02, 0x00, 0x29, 0xc0, 0x39, 0x2c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1e, 0xbb, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_7[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1d, 0x0f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_8[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7e, 0xb1, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_9[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_10[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_11[] = {
	0x02, 0x00, 0x29, 0xc0, 0x35, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_12[] = {
	0x02, 0x00, 0x29, 0xc0, 0xba, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_13[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_14[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_15[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_16[] = {
	0x02, 0x00, 0x29, 0xc0, 0x01, 0x55, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_17[] = {
	0x02, 0x00, 0x29, 0xc0, 0x02, 0x40, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_18[] = {
	0x02, 0x00, 0x29, 0xc0, 0x05, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_19[] = {
	0x02, 0x00, 0x29, 0xc0, 0x06, 0x1b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_20[] = {
	0x02, 0x00, 0x29, 0xc0, 0x07, 0x24, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_21[] = {
	0x02, 0x00, 0x29, 0xc0, 0x08, 0x0c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_22[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0b, 0x87, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_23[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0c, 0x87, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_24[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0e, 0xb0, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_25[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0f, 0xb3, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_26[] = {
	0x02, 0x00, 0x29, 0xc0, 0x11, 0x10, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_27[] = {
	0x02, 0x00, 0x29, 0xc0, 0x12, 0x10, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_28[] = {
	0x02, 0x00, 0x29, 0xc0, 0x13, 0x05, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_29[] = {
	0x02, 0x00, 0x29, 0xc0, 0x14, 0x4a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_30[] = {
	0x02, 0x00, 0x29, 0xc0, 0x15, 0x18, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_31[] = {
	0x02, 0x00, 0x29, 0xc0, 0x16, 0x18, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_32[] = {
	0x02, 0x00, 0x29, 0xc0, 0x18, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_33[] = {
	0x02, 0x00, 0x29, 0xc0, 0x19, 0x77, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_34[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1a, 0x55, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_35[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1b, 0x13, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_36[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1c, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_37[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1d, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_38[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1e, 0x13, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_39[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1f, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_40[] = {
	0x02, 0x00, 0x29, 0xc0, 0x23, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_41[] = {
	0x02, 0x00, 0x29, 0xc0, 0x24, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_42[] = {
	0x02, 0x00, 0x29, 0xc0, 0x25, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_43[] = {
	0x02, 0x00, 0x29, 0xc0, 0x26, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_44[] = {
	0x02, 0x00, 0x29, 0xc0, 0x27, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_45[] = {
	0x02, 0x00, 0x29, 0xc0, 0x28, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_46[] = {
	0x02, 0x00, 0x29, 0xc0, 0x35, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_47[] = {
	0x02, 0x00, 0x29, 0xc0, 0x66, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_48[] = {
	0x02, 0x00, 0x29, 0xc0, 0x58, 0x82, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_49[] = {
	0x02, 0x00, 0x29, 0xc0, 0x59, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_50[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5a, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_51[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5b, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_52[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5c, 0x82, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_53[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5d, 0x82, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_54[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5e, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_55[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5f, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_56[] = {
	0x02, 0x00, 0x29, 0xc0, 0x72, 0x31, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_57[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x05, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_58[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_59[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_60[] = {
	0x02, 0x00, 0x29, 0xc0, 0x01, 0x0b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_61[] = {
	0x02, 0x00, 0x29, 0xc0, 0x02, 0x0c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_62[] = {
	0x02, 0x00, 0x29, 0xc0, 0x03, 0x09, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_63[] = {
	0x02, 0x00, 0x29, 0xc0, 0x04, 0x0a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_64[] = {
	0x02, 0x00, 0x29, 0xc0, 0x05, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_65[] = {
	0x02, 0x00, 0x29, 0xc0, 0x06, 0x0f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_66[] = {
	0x02, 0x00, 0x29, 0xc0, 0x07, 0x10, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_67[] = {
	0x02, 0x00, 0x29, 0xc0, 0x08, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_68[] = {
	0x02, 0x00, 0x29, 0xc0, 0x09, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_69[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0a, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_70[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0b, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_71[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0c, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_72[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0d, 0x13, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_73[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0e, 0x15, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_74[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0f, 0x17, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_75[] = {
	0x02, 0x00, 0x29, 0xc0, 0x10, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_76[] = {
	0x02, 0x00, 0x29, 0xc0, 0x11, 0x0b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_77[] = {
	0x02, 0x00, 0x29, 0xc0, 0x12, 0x0c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_78[] = {
	0x02, 0x00, 0x29, 0xc0, 0x13, 0x09, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_79[] = {
	0x02, 0x00, 0x29, 0xc0, 0x14, 0x0a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_80[] = {
	0x02, 0x00, 0x29, 0xc0, 0x15, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_81[] = {
	0x02, 0x00, 0x29, 0xc0, 0x16, 0x0f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_82[] = {
	0x02, 0x00, 0x29, 0xc0, 0x17, 0x10, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_83[] = {
	0x02, 0x00, 0x29, 0xc0, 0x18, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_84[] = {
	0x02, 0x00, 0x29, 0xc0, 0x19, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_85[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1a, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_86[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1b, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_87[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1c, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_88[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1d, 0x13, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_89[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1e, 0x15, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_90[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1f, 0x17, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_91[] = {
	0x02, 0x00, 0x29, 0xc0, 0x20, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_92[] = {
	0x02, 0x00, 0x29, 0xc0, 0x21, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_93[] = {
	0x02, 0x00, 0x29, 0xc0, 0x22, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_94[] = {
	0x02, 0x00, 0x29, 0xc0, 0x23, 0x40, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_95[] = {
	0x02, 0x00, 0x29, 0xc0, 0x24, 0x40, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_96[] = {
	0x02, 0x00, 0x29, 0xc0, 0x25, 0xed, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_97[] = {
	0x02, 0x00, 0x29, 0xc0, 0x29, 0x58, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_98[] = {
	0x02, 0x00, 0x29, 0xc0, 0x2a, 0x12, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_99[] = {
	0x02, 0x00, 0x29, 0xc0, 0x2b, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_100[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4b, 0x06, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_101[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4c, 0x11, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_102[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4d, 0x20, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_103[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4e, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_104[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4f, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_105[] = {
	0x02, 0x00, 0x29, 0xc0, 0x50, 0x20, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_106[] = {
	0x02, 0x00, 0x29, 0xc0, 0x51, 0x61, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_107[] = {
	0x02, 0x00, 0x29, 0xc0, 0x52, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_108[] = {
	0x02, 0x00, 0x29, 0xc0, 0x53, 0x63, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_109[] = {
	0x02, 0x00, 0x29, 0xc0, 0x54, 0x77, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_110[] = {
	0x02, 0x00, 0x29, 0xc0, 0x55, 0xed, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_111[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5b, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_112[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5c, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_113[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5d, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_114[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5e, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_115[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5f, 0x15, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_116[] = {
	0x02, 0x00, 0x29, 0xc0, 0x60, 0x75, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_117[] = {
	0x02, 0x00, 0x29, 0xc0, 0x61, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_118[] = {
	0x02, 0x00, 0x29, 0xc0, 0x62, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_119[] = {
	0x02, 0x00, 0x29, 0xc0, 0x63, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_120[] = {
	0x02, 0x00, 0x29, 0xc0, 0x64, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_121[] = {
	0x02, 0x00, 0x29, 0xc0, 0x65, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_122[] = {
	0x02, 0x00, 0x29, 0xc0, 0x66, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_123[] = {
	0x02, 0x00, 0x29, 0xc0, 0x67, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_124[] = {
	0x02, 0x00, 0x29, 0xc0, 0x68, 0x04, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_125[] = {
	0x02, 0x00, 0x29, 0xc0, 0x69, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_126[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6a, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_127[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6c, 0x40, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_128[] = {
	0x02, 0x00, 0x29, 0xc0, 0x75, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_129[] = {
	0x02, 0x00, 0x29, 0xc0, 0x76, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_130[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7a, 0x80, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_131[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7b, 0xc5, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_132[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7c, 0xd8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_133[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7d, 0x60, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_134[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7f, 0x10, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_135[] = {
	0x02, 0x00, 0x29, 0xc0, 0x80, 0x81, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_136[] = {
	0x02, 0x00, 0x29, 0xc0, 0x83, 0x05, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_137[] = {
	0x02, 0x00, 0x29, 0xc0, 0x93, 0x08, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_138[] = {
	0x02, 0x00, 0x29, 0xc0, 0x94, 0x10, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_139[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8a, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_140[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9b, 0x0f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_141[] = {
	0x02, 0x00, 0x29, 0xc0, 0xea, 0xff, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_142[] = {
	0x02, 0x00, 0x29, 0xc0, 0xec, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_143[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_144[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_145[] = {
	0x02, 0x00, 0x29, 0xc0, 0x75, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_146[] = {
	0x02, 0x00, 0x29, 0xc0, 0x76, 0x8e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_147[] = {
	0x02, 0x00, 0x29, 0xc0, 0x77, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_148[] = {
	0x02, 0x00, 0x29, 0xc0, 0x78, 0x90, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_149[] = {
	0x02, 0x00, 0x29, 0xc0, 0x79, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_150[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7a, 0xb2, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_151[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7b, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_152[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7c, 0xc7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_153[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7d, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_154[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7e, 0xd7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_155[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7f, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_156[] = {
	0x02, 0x00, 0x29, 0xc0, 0x80, 0xe9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_157[] = {
	0x02, 0x00, 0x29, 0xc0, 0x81, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_158[] = {
	0x02, 0x00, 0x29, 0xc0, 0x82, 0xf9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_159[] = {
	0x02, 0x00, 0x29, 0xc0, 0x83, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_160[] = {
	0x02, 0x00, 0x29, 0xc0, 0x84, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_161[] = {
	0x02, 0x00, 0x29, 0xc0, 0x85, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_162[] = {
	0x02, 0x00, 0x29, 0xc0, 0x86, 0x0b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_163[] = {
	0x02, 0x00, 0x29, 0xc0, 0x87, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_164[] = {
	0x02, 0x00, 0x29, 0xc0, 0x88, 0x3a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_165[] = {
	0x02, 0x00, 0x29, 0xc0, 0x89, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_166[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8a, 0x5d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_167[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8b, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_168[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8c, 0x94, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_169[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8d, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_170[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8e, 0xbc, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_171[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8f, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_172[] = {
	0x02, 0x00, 0x29, 0xc0, 0x90, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_173[] = {
	0x02, 0x00, 0x29, 0xc0, 0x91, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_174[] = {
	0x02, 0x00, 0x29, 0xc0, 0x92, 0x39, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_175[] = {
	0x02, 0x00, 0x29, 0xc0, 0x93, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_176[] = {
	0x02, 0x00, 0x29, 0xc0, 0x94, 0x3a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_177[] = {
	0x02, 0x00, 0x29, 0xc0, 0x95, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_178[] = {
	0x02, 0x00, 0x29, 0xc0, 0x96, 0x6b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_179[] = {
	0x02, 0x00, 0x29, 0xc0, 0x97, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_180[] = {
	0x02, 0x00, 0x29, 0xc0, 0x98, 0xa2, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_181[] = {
	0x02, 0x00, 0x29, 0xc0, 0x99, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_182[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9a, 0xc7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_183[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9b, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_184[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9c, 0xfb, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_185[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9d, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_186[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9e, 0x20, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_187[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9f, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_188[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa0, 0x54, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_189[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa2, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_190[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa3, 0x6d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_191[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa4, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_192[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa5, 0x80, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_193[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa6, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_194[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa7, 0x81, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_195[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa9, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_196[] = {
	0x02, 0x00, 0x29, 0xc0, 0xaa, 0xc7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_197[] = {
	0x02, 0x00, 0x29, 0xc0, 0xab, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_198[] = {
	0x02, 0x00, 0x29, 0xc0, 0xac, 0xf0, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_199[] = {
	0x02, 0x00, 0x29, 0xc0, 0xad, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_200[] = {
	0x02, 0x00, 0x29, 0xc0, 0xae, 0xf8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_201[] = {
	0x02, 0x00, 0x29, 0xc0, 0xaf, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_202[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb0, 0xfd, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_203[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb1, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_204[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb2, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_205[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb3, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_206[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb4, 0x8e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_207[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb5, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_208[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb6, 0x90, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_209[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb7, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_210[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb8, 0xb2, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_211[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb9, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_212[] = {
	0x02, 0x00, 0x29, 0xc0, 0xba, 0xc7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_213[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbb, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_214[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbc, 0xd7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_215[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbd, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_216[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbe, 0xe9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_217[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbf, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_218[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0xf9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_219[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_220[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc2, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_221[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc3, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_222[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x0b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_223[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_224[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc6, 0x3a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_225[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc7, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_226[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc8, 0x5d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_227[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc9, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_228[] = {
	0x02, 0x00, 0x29, 0xc0, 0xca, 0x94, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_229[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_230[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcc, 0xbc, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_231[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcd, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_232[] = {
	0x02, 0x00, 0x29, 0xc0, 0xce, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_233[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcf, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_234[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd0, 0x39, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_235[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd1, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_236[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd2, 0x3a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_237[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd3, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_238[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd4, 0x6b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_239[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd5, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_240[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd6, 0xa2, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_241[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd7, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_242[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd8, 0xc7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_243[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd9, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_244[] = {
	0x02, 0x00, 0x29, 0xc0, 0xda, 0xfb, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_245[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdb, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_246[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdc, 0x20, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_247[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdd, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_248[] = {
	0x02, 0x00, 0x29, 0xc0, 0xde, 0x54, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_249[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdf, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_250[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe0, 0x6d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_251[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe1, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_252[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe2, 0x80, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_253[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe3, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_254[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe4, 0x81, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_255[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe5, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_256[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe6, 0xc7, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_257[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe7, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_258[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe8, 0xf0, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_259[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe9, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_260[] = {
	0x02, 0x00, 0x29, 0xc0, 0xea, 0xf8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_261[] = {
	0x02, 0x00, 0x29, 0xc0, 0xeb, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_262[] = {
	0x02, 0x00, 0x29, 0xc0, 0xec, 0xfd, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_263[] = {
	0x02, 0x00, 0x29, 0xc0, 0xed, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_264[] = {
	0x02, 0x00, 0x29, 0xc0, 0xee, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_265[] = {
	0x02, 0x00, 0x29, 0xc0, 0xef, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_266[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf0, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_267[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf1, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_268[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf2, 0x0b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_269[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf3, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_270[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf4, 0x0d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_271[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf5, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_272[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf6, 0x4a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_273[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf7, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_274[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf8, 0x71, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_275[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf9, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_276[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfa, 0x8c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_277[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_278[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_279[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_280[] = {
	0x02, 0x00, 0x29, 0xc0, 0x01, 0xa1, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_281[] = {
	0x02, 0x00, 0x29, 0xc0, 0x02, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_282[] = {
	0x02, 0x00, 0x29, 0xc0, 0x03, 0xb6, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_283[] = {
	0x02, 0x00, 0x29, 0xc0, 0x04, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_284[] = {
	0x02, 0x00, 0x29, 0xc0, 0x05, 0xc9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_285[] = {
	0x02, 0x00, 0x29, 0xc0, 0x06, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_286[] = {
	0x02, 0x00, 0x29, 0xc0, 0x07, 0xfd, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_287[] = {
	0x02, 0x00, 0x29, 0xc0, 0x08, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_288[] = {
	0x02, 0x00, 0x29, 0xc0, 0x09, 0x29, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_289[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0a, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_290[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0b, 0x6b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_291[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0c, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_292[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0d, 0x9e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_293[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0e, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_294[] = {
	0x02, 0x00, 0x29, 0xc0, 0x0f, 0xeb, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_295[] = {
	0x02, 0x00, 0x29, 0xc0, 0x10, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_296[] = {
	0x02, 0x00, 0x29, 0xc0, 0x11, 0x25, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_297[] = {
	0x02, 0x00, 0x29, 0xc0, 0x12, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_298[] = {
	0x02, 0x00, 0x29, 0xc0, 0x13, 0x27, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_299[] = {
	0x02, 0x00, 0x29, 0xc0, 0x14, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_300[] = {
	0x02, 0x00, 0x29, 0xc0, 0x15, 0x5c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_301[] = {
	0x02, 0x00, 0x29, 0xc0, 0x16, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_302[] = {
	0x02, 0x00, 0x29, 0xc0, 0x17, 0x95, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_303[] = {
	0x02, 0x00, 0x29, 0xc0, 0x18, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_304[] = {
	0x02, 0x00, 0x29, 0xc0, 0x19, 0xba, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_305[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1a, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_306[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1b, 0xec, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_307[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1c, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_308[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1d, 0x0c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_309[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1e, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_310[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1f, 0x34, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_311[] = {
	0x02, 0x00, 0x29, 0xc0, 0x20, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_312[] = {
	0x02, 0x00, 0x29, 0xc0, 0x21, 0x3f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_313[] = {
	0x02, 0x00, 0x29, 0xc0, 0x22, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_314[] = {
	0x02, 0x00, 0x29, 0xc0, 0x23, 0x48, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_315[] = {
	0x02, 0x00, 0x29, 0xc0, 0x24, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_316[] = {
	0x02, 0x00, 0x29, 0xc0, 0x25, 0x49, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_317[] = {
	0x02, 0x00, 0x29, 0xc0, 0x26, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_318[] = {
	0x02, 0x00, 0x29, 0xc0, 0x27, 0x6b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_319[] = {
	0x02, 0x00, 0x29, 0xc0, 0x28, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_320[] = {
	0x02, 0x00, 0x29, 0xc0, 0x29, 0x7e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_321[] = {
	0x02, 0x00, 0x29, 0xc0, 0x2a, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_322[] = {
	0x02, 0x00, 0x29, 0xc0, 0x2b, 0x8f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_323[] = {
	0x02, 0x00, 0x29, 0xc0, 0x2d, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_324[] = {
	0x02, 0x00, 0x29, 0xc0, 0x2f, 0x9e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_325[] = {
	0x02, 0x00, 0x29, 0xc0, 0x30, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_326[] = {
	0x02, 0x00, 0x29, 0xc0, 0x31, 0xa0, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_327[] = {
	0x02, 0x00, 0x29, 0xc0, 0x32, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_328[] = {
	0x02, 0x00, 0x29, 0xc0, 0x33, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_329[] = {
	0x02, 0x00, 0x29, 0xc0, 0x34, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_330[] = {
	0x02, 0x00, 0x29, 0xc0, 0x35, 0x0b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_331[] = {
	0x02, 0x00, 0x29, 0xc0, 0x36, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_332[] = {
	0x02, 0x00, 0x29, 0xc0, 0x37, 0x0d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_333[] = {
	0x02, 0x00, 0x29, 0xc0, 0x38, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_334[] = {
	0x02, 0x00, 0x29, 0xc0, 0x39, 0x4a, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_335[] = {
	0x02, 0x00, 0x29, 0xc0, 0x3a, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_336[] = {
	0x02, 0x00, 0x29, 0xc0, 0x3b, 0x71, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_337[] = {
	0x02, 0x00, 0x29, 0xc0, 0x3d, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_338[] = {
	0x02, 0x00, 0x29, 0xc0, 0x3f, 0x8c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_339[] = {
	0x02, 0x00, 0x29, 0xc0, 0x40, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_340[] = {
	0x02, 0x00, 0x29, 0xc0, 0x41, 0xa1, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_341[] = {
	0x02, 0x00, 0x29, 0xc0, 0x42, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_342[] = {
	0x02, 0x00, 0x29, 0xc0, 0x43, 0xb6, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_343[] = {
	0x02, 0x00, 0x29, 0xc0, 0x44, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_344[] = {
	0x02, 0x00, 0x29, 0xc0, 0x45, 0xc9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_345[] = {
	0x02, 0x00, 0x29, 0xc0, 0x46, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_346[] = {
	0x02, 0x00, 0x29, 0xc0, 0x47, 0xfd, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_347[] = {
	0x02, 0x00, 0x29, 0xc0, 0x48, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_348[] = {
	0x02, 0x00, 0x29, 0xc0, 0x49, 0x29, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_349[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4a, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_350[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4b, 0x6b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_351[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4c, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_352[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4d, 0x9e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_353[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4e, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_354[] = {
	0x02, 0x00, 0x29, 0xc0, 0x4f, 0xeb, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_355[] = {
	0x02, 0x00, 0x29, 0xc0, 0x50, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_356[] = {
	0x02, 0x00, 0x29, 0xc0, 0x51, 0x25, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_357[] = {
	0x02, 0x00, 0x29, 0xc0, 0x52, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_358[] = {
	0x02, 0x00, 0x29, 0xc0, 0x53, 0x27, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_359[] = {
	0x02, 0x00, 0x29, 0xc0, 0x54, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_360[] = {
	0x02, 0x00, 0x29, 0xc0, 0x55, 0x5c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_361[] = {
	0x02, 0x00, 0x29, 0xc0, 0x56, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_362[] = {
	0x02, 0x00, 0x29, 0xc0, 0x58, 0x95, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_363[] = {
	0x02, 0x00, 0x29, 0xc0, 0x59, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_364[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5a, 0xba, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_365[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5b, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_366[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5c, 0xec, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_367[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5d, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_368[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5e, 0x0c, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_369[] = {
	0x02, 0x00, 0x29, 0xc0, 0x5f, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_370[] = {
	0x02, 0x00, 0x29, 0xc0, 0x60, 0x34, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_371[] = {
	0x02, 0x00, 0x29, 0xc0, 0x61, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_372[] = {
	0x02, 0x00, 0x29, 0xc0, 0x62, 0x3f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_373[] = {
	0x02, 0x00, 0x29, 0xc0, 0x63, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_374[] = {
	0x02, 0x00, 0x29, 0xc0, 0x64, 0x48, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_375[] = {
	0x02, 0x00, 0x29, 0xc0, 0x65, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_376[] = {
	0x02, 0x00, 0x29, 0xc0, 0x66, 0x49, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_377[] = {
	0x02, 0x00, 0x29, 0xc0, 0x67, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_378[] = {
	0x02, 0x00, 0x29, 0xc0, 0x68, 0x6b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_379[] = {
	0x02, 0x00, 0x29, 0xc0, 0x69, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_380[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6a, 0x7e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_381[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6b, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_382[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6c, 0x8f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_383[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6d, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_384[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6e, 0x9e, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_385[] = {
	0x02, 0x00, 0x29, 0xc0, 0x6f, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_386[] = {
	0x02, 0x00, 0x29, 0xc0, 0x70, 0xa0, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_387[] = {
	0x02, 0x00, 0x29, 0xc0, 0x71, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_388[] = {
	0x02, 0x00, 0x29, 0xc0, 0x72, 0xfb, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_389[] = {
	0x02, 0x00, 0x29, 0xc0, 0x73, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_390[] = {
	0x02, 0x00, 0x29, 0xc0, 0x74, 0xfd, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_391[] = {
	0x02, 0x00, 0x29, 0xc0, 0x75, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_392[] = {
	0x02, 0x00, 0x29, 0xc0, 0x76, 0x05, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_393[] = {
	0x02, 0x00, 0x29, 0xc0, 0x77, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_394[] = {
	0x02, 0x00, 0x29, 0xc0, 0x78, 0x0d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_395[] = {
	0x02, 0x00, 0x29, 0xc0, 0x79, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_396[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7a, 0x17, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_397[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7b, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_398[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7c, 0x1f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_399[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7d, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_400[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7e, 0x28, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_401[] = {
	0x02, 0x00, 0x29, 0xc0, 0x7f, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_402[] = {
	0x02, 0x00, 0x29, 0xc0, 0x80, 0x32, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_403[] = {
	0x02, 0x00, 0x29, 0xc0, 0x81, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_404[] = {
	0x02, 0x00, 0x29, 0xc0, 0x82, 0x38, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_405[] = {
	0x02, 0x00, 0x29, 0xc0, 0x83, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_406[] = {
	0x02, 0x00, 0x29, 0xc0, 0x84, 0x53, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_407[] = {
	0x02, 0x00, 0x29, 0xc0, 0x85, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_408[] = {
	0x02, 0x00, 0x29, 0xc0, 0x86, 0x72, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_409[] = {
	0x02, 0x00, 0x29, 0xc0, 0x87, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_410[] = {
	0x02, 0x00, 0x29, 0xc0, 0x88, 0x9b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_411[] = {
	0x02, 0x00, 0x29, 0xc0, 0x89, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_412[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8a, 0xc3, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_413[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8b, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_414[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8c, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_415[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8d, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_416[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8e, 0x36, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_417[] = {
	0x02, 0x00, 0x29, 0xc0, 0x8f, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_418[] = {
	0x02, 0x00, 0x29, 0xc0, 0x90, 0x37, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_419[] = {
	0x02, 0x00, 0x29, 0xc0, 0x91, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_420[] = {
	0x02, 0x00, 0x29, 0xc0, 0x92, 0x69, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_421[] = {
	0x02, 0x00, 0x29, 0xc0, 0x93, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_422[] = {
	0x02, 0x00, 0x29, 0xc0, 0x94, 0xa1, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_423[] = {
	0x02, 0x00, 0x29, 0xc0, 0x95, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_424[] = {
	0x02, 0x00, 0x29, 0xc0, 0x96, 0xc8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_425[] = {
	0x02, 0x00, 0x29, 0xc0, 0x97, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_426[] = {
	0x02, 0x00, 0x29, 0xc0, 0x98, 0xff, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_427[] = {
	0x02, 0x00, 0x29, 0xc0, 0x99, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_428[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9a, 0x26, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_429[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9b, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_430[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9c, 0x69, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_431[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9d, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_432[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9e, 0x88, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_433[] = {
	0x02, 0x00, 0x29, 0xc0, 0x9f, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_434[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa0, 0xf8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_435[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa2, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_436[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa3, 0xf9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_437[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa4, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_438[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa5, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_439[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa6, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_440[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa7, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_441[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa9, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_442[] = {
	0x02, 0x00, 0x29, 0xc0, 0xaa, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_443[] = {
	0x02, 0x00, 0x29, 0xc0, 0xab, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_444[] = {
	0x02, 0x00, 0x29, 0xc0, 0xac, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_445[] = {
	0x02, 0x00, 0x29, 0xc0, 0xad, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_446[] = {
	0x02, 0x00, 0x29, 0xc0, 0xae, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_447[] = {
	0x02, 0x00, 0x29, 0xc0, 0xaf, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_448[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb0, 0xfb, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_449[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb1, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_450[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb2, 0xfd, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_451[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb3, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_452[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb4, 0x05, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_453[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb5, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_454[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb6, 0x0d, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_455[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb7, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_456[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb8, 0x17, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_457[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb9, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_458[] = {
	0x02, 0x00, 0x29, 0xc0, 0xba, 0x1f, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_459[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_460[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbc, 0x28, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_461[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbd, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_462[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbe, 0x32, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_463[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbf, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_464[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x38, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_465[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_466[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc2, 0x53, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_467[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc3, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_468[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x72, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_469[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_470[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc6, 0x9b, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_471[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc7, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_472[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc8, 0xc3, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_473[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc9, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_474[] = {
	0x02, 0x00, 0x29, 0xc0, 0xca, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_475[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcb, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_476[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcc, 0x36, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_477[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcd, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_478[] = {
	0x02, 0x00, 0x29, 0xc0, 0xce, 0x37, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_479[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcf, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_480[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd0, 0x69, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_481[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd1, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_482[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd2, 0xa1, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_483[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd3, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_484[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd4, 0xc8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_485[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd5, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_486[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd6, 0xff, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_487[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd7, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_488[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd8, 0x26, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_489[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd9, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_490[] = {
	0x02, 0x00, 0x29, 0xc0, 0xda, 0x69, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_491[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdb, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_492[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdc, 0x88, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_493[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdd, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_494[] = {
	0x02, 0x00, 0x29, 0xc0, 0xde, 0xf8, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_495[] = {
	0x02, 0x00, 0x29, 0xc0, 0xdf, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_496[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe0, 0xf9, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_497[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe1, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_498[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe2, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_499[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe3, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_500[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe4, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_501[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe5, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_502[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe6, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_503[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe7, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_504[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe8, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_505[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe9, 0x03, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_506[] = {
	0x02, 0x00, 0x29, 0xc0, 0xea, 0xfe, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_507[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_508[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_509[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x02, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_510[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_511[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x04, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_512[] = {
	0x02, 0x00, 0x29, 0xc0, 0xfb, 0x01, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_513[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_514[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd3, 0x14, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_515[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd4, 0x14, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_516[] = {
	0x02, 0x00, 0x29, 0xc0, 0x11, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_517[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_518[] = {
	0x02, 0x00, 0x29, 0xc0, 0x35, 0x00, 0xff, 0xff
};
static char nt35596_1080p_video_on_cmd_519[] = {
	0x02, 0x00, 0x29, 0xc0, 0x29, 0x00, 0xff, 0xff
};

static struct mipi_dsi_cmd nt35596_1080p_video_on_command[] = {
	{ sizeof(nt35596_1080p_video_on_cmd_0), nt35596_1080p_video_on_cmd_0, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_1), nt35596_1080p_video_on_cmd_1, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_2), nt35596_1080p_video_on_cmd_2, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_3), nt35596_1080p_video_on_cmd_3, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_4), nt35596_1080p_video_on_cmd_4, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_5), nt35596_1080p_video_on_cmd_5, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_6), nt35596_1080p_video_on_cmd_6, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_7), nt35596_1080p_video_on_cmd_7, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_8), nt35596_1080p_video_on_cmd_8, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_9), nt35596_1080p_video_on_cmd_9, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_10), nt35596_1080p_video_on_cmd_10, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_11), nt35596_1080p_video_on_cmd_11, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_12), nt35596_1080p_video_on_cmd_12, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_13), nt35596_1080p_video_on_cmd_13, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_14), nt35596_1080p_video_on_cmd_14, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_15), nt35596_1080p_video_on_cmd_15, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_16), nt35596_1080p_video_on_cmd_16, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_17), nt35596_1080p_video_on_cmd_17, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_18), nt35596_1080p_video_on_cmd_18, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_19), nt35596_1080p_video_on_cmd_19, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_20), nt35596_1080p_video_on_cmd_20, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_21), nt35596_1080p_video_on_cmd_21, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_22), nt35596_1080p_video_on_cmd_22, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_23), nt35596_1080p_video_on_cmd_23, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_24), nt35596_1080p_video_on_cmd_24, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_25), nt35596_1080p_video_on_cmd_25, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_26), nt35596_1080p_video_on_cmd_26, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_27), nt35596_1080p_video_on_cmd_27, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_28), nt35596_1080p_video_on_cmd_28, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_29), nt35596_1080p_video_on_cmd_29, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_30), nt35596_1080p_video_on_cmd_30, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_31), nt35596_1080p_video_on_cmd_31, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_32), nt35596_1080p_video_on_cmd_32, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_33), nt35596_1080p_video_on_cmd_33, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_34), nt35596_1080p_video_on_cmd_34, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_35), nt35596_1080p_video_on_cmd_35, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_36), nt35596_1080p_video_on_cmd_36, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_37), nt35596_1080p_video_on_cmd_37, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_38), nt35596_1080p_video_on_cmd_38, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_39), nt35596_1080p_video_on_cmd_39, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_40), nt35596_1080p_video_on_cmd_40, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_41), nt35596_1080p_video_on_cmd_41, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_42), nt35596_1080p_video_on_cmd_42, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_43), nt35596_1080p_video_on_cmd_43, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_44), nt35596_1080p_video_on_cmd_44, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_45), nt35596_1080p_video_on_cmd_45, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_46), nt35596_1080p_video_on_cmd_46, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_47), nt35596_1080p_video_on_cmd_47, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_48), nt35596_1080p_video_on_cmd_48, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_49), nt35596_1080p_video_on_cmd_49, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_50), nt35596_1080p_video_on_cmd_50, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_51), nt35596_1080p_video_on_cmd_51, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_52), nt35596_1080p_video_on_cmd_52, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_53), nt35596_1080p_video_on_cmd_53, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_54), nt35596_1080p_video_on_cmd_54, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_55), nt35596_1080p_video_on_cmd_55, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_56), nt35596_1080p_video_on_cmd_56, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_57), nt35596_1080p_video_on_cmd_57, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_58), nt35596_1080p_video_on_cmd_58, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_59), nt35596_1080p_video_on_cmd_59, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_60), nt35596_1080p_video_on_cmd_60, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_61), nt35596_1080p_video_on_cmd_61, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_62), nt35596_1080p_video_on_cmd_62, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_63), nt35596_1080p_video_on_cmd_63, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_64), nt35596_1080p_video_on_cmd_64, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_65), nt35596_1080p_video_on_cmd_65, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_66), nt35596_1080p_video_on_cmd_66, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_67), nt35596_1080p_video_on_cmd_67, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_68), nt35596_1080p_video_on_cmd_68, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_69), nt35596_1080p_video_on_cmd_69, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_70), nt35596_1080p_video_on_cmd_70, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_71), nt35596_1080p_video_on_cmd_71, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_72), nt35596_1080p_video_on_cmd_72, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_73), nt35596_1080p_video_on_cmd_73, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_74), nt35596_1080p_video_on_cmd_74, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_75), nt35596_1080p_video_on_cmd_75, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_76), nt35596_1080p_video_on_cmd_76, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_77), nt35596_1080p_video_on_cmd_77, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_78), nt35596_1080p_video_on_cmd_78, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_79), nt35596_1080p_video_on_cmd_79, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_80), nt35596_1080p_video_on_cmd_80, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_81), nt35596_1080p_video_on_cmd_81, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_82), nt35596_1080p_video_on_cmd_82, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_83), nt35596_1080p_video_on_cmd_83, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_84), nt35596_1080p_video_on_cmd_84, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_85), nt35596_1080p_video_on_cmd_85, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_86), nt35596_1080p_video_on_cmd_86, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_87), nt35596_1080p_video_on_cmd_87, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_88), nt35596_1080p_video_on_cmd_88, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_89), nt35596_1080p_video_on_cmd_89, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_90), nt35596_1080p_video_on_cmd_90, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_91), nt35596_1080p_video_on_cmd_91, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_92), nt35596_1080p_video_on_cmd_92, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_93), nt35596_1080p_video_on_cmd_93, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_94), nt35596_1080p_video_on_cmd_94, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_95), nt35596_1080p_video_on_cmd_95, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_96), nt35596_1080p_video_on_cmd_96, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_97), nt35596_1080p_video_on_cmd_97, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_98), nt35596_1080p_video_on_cmd_98, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_99), nt35596_1080p_video_on_cmd_99, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_100), nt35596_1080p_video_on_cmd_100, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_101), nt35596_1080p_video_on_cmd_101, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_102), nt35596_1080p_video_on_cmd_102, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_103), nt35596_1080p_video_on_cmd_103, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_104), nt35596_1080p_video_on_cmd_104, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_105), nt35596_1080p_video_on_cmd_105, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_106), nt35596_1080p_video_on_cmd_106, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_107), nt35596_1080p_video_on_cmd_107, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_108), nt35596_1080p_video_on_cmd_108, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_109), nt35596_1080p_video_on_cmd_109, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_110), nt35596_1080p_video_on_cmd_110, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_111), nt35596_1080p_video_on_cmd_111, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_112), nt35596_1080p_video_on_cmd_112, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_113), nt35596_1080p_video_on_cmd_113, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_114), nt35596_1080p_video_on_cmd_114, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_115), nt35596_1080p_video_on_cmd_115, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_116), nt35596_1080p_video_on_cmd_116, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_117), nt35596_1080p_video_on_cmd_117, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_118), nt35596_1080p_video_on_cmd_118, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_119), nt35596_1080p_video_on_cmd_119, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_120), nt35596_1080p_video_on_cmd_120, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_121), nt35596_1080p_video_on_cmd_121, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_122), nt35596_1080p_video_on_cmd_122, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_123), nt35596_1080p_video_on_cmd_123, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_124), nt35596_1080p_video_on_cmd_124, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_125), nt35596_1080p_video_on_cmd_125, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_126), nt35596_1080p_video_on_cmd_126, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_127), nt35596_1080p_video_on_cmd_127, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_128), nt35596_1080p_video_on_cmd_128, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_129), nt35596_1080p_video_on_cmd_129, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_130), nt35596_1080p_video_on_cmd_130, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_131), nt35596_1080p_video_on_cmd_131, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_132), nt35596_1080p_video_on_cmd_132, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_133), nt35596_1080p_video_on_cmd_133, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_134), nt35596_1080p_video_on_cmd_134, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_135), nt35596_1080p_video_on_cmd_135, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_136), nt35596_1080p_video_on_cmd_136, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_137), nt35596_1080p_video_on_cmd_137, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_138), nt35596_1080p_video_on_cmd_138, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_139), nt35596_1080p_video_on_cmd_139, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_140), nt35596_1080p_video_on_cmd_140, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_141), nt35596_1080p_video_on_cmd_141, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_142), nt35596_1080p_video_on_cmd_142, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_143), nt35596_1080p_video_on_cmd_143, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_144), nt35596_1080p_video_on_cmd_144, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_145), nt35596_1080p_video_on_cmd_145, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_146), nt35596_1080p_video_on_cmd_146, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_147), nt35596_1080p_video_on_cmd_147, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_148), nt35596_1080p_video_on_cmd_148, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_149), nt35596_1080p_video_on_cmd_149, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_150), nt35596_1080p_video_on_cmd_150, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_151), nt35596_1080p_video_on_cmd_151, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_152), nt35596_1080p_video_on_cmd_152, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_153), nt35596_1080p_video_on_cmd_153, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_154), nt35596_1080p_video_on_cmd_154, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_155), nt35596_1080p_video_on_cmd_155, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_156), nt35596_1080p_video_on_cmd_156, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_157), nt35596_1080p_video_on_cmd_157, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_158), nt35596_1080p_video_on_cmd_158, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_159), nt35596_1080p_video_on_cmd_159, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_160), nt35596_1080p_video_on_cmd_160, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_161), nt35596_1080p_video_on_cmd_161, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_162), nt35596_1080p_video_on_cmd_162, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_163), nt35596_1080p_video_on_cmd_163, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_164), nt35596_1080p_video_on_cmd_164, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_165), nt35596_1080p_video_on_cmd_165, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_166), nt35596_1080p_video_on_cmd_166, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_167), nt35596_1080p_video_on_cmd_167, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_168), nt35596_1080p_video_on_cmd_168, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_169), nt35596_1080p_video_on_cmd_169, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_170), nt35596_1080p_video_on_cmd_170, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_171), nt35596_1080p_video_on_cmd_171, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_172), nt35596_1080p_video_on_cmd_172, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_173), nt35596_1080p_video_on_cmd_173, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_174), nt35596_1080p_video_on_cmd_174, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_175), nt35596_1080p_video_on_cmd_175, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_176), nt35596_1080p_video_on_cmd_176, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_177), nt35596_1080p_video_on_cmd_177, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_178), nt35596_1080p_video_on_cmd_178, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_179), nt35596_1080p_video_on_cmd_179, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_180), nt35596_1080p_video_on_cmd_180, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_181), nt35596_1080p_video_on_cmd_181, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_182), nt35596_1080p_video_on_cmd_182, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_183), nt35596_1080p_video_on_cmd_183, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_184), nt35596_1080p_video_on_cmd_184, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_185), nt35596_1080p_video_on_cmd_185, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_186), nt35596_1080p_video_on_cmd_186, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_187), nt35596_1080p_video_on_cmd_187, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_188), nt35596_1080p_video_on_cmd_188, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_189), nt35596_1080p_video_on_cmd_189, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_190), nt35596_1080p_video_on_cmd_190, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_191), nt35596_1080p_video_on_cmd_191, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_192), nt35596_1080p_video_on_cmd_192, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_193), nt35596_1080p_video_on_cmd_193, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_194), nt35596_1080p_video_on_cmd_194, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_195), nt35596_1080p_video_on_cmd_195, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_196), nt35596_1080p_video_on_cmd_196, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_197), nt35596_1080p_video_on_cmd_197, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_198), nt35596_1080p_video_on_cmd_198, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_199), nt35596_1080p_video_on_cmd_199, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_200), nt35596_1080p_video_on_cmd_200, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_201), nt35596_1080p_video_on_cmd_201, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_202), nt35596_1080p_video_on_cmd_202, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_203), nt35596_1080p_video_on_cmd_203, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_204), nt35596_1080p_video_on_cmd_204, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_205), nt35596_1080p_video_on_cmd_205, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_206), nt35596_1080p_video_on_cmd_206, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_207), nt35596_1080p_video_on_cmd_207, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_208), nt35596_1080p_video_on_cmd_208, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_209), nt35596_1080p_video_on_cmd_209, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_210), nt35596_1080p_video_on_cmd_210, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_211), nt35596_1080p_video_on_cmd_211, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_212), nt35596_1080p_video_on_cmd_212, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_213), nt35596_1080p_video_on_cmd_213, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_214), nt35596_1080p_video_on_cmd_214, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_215), nt35596_1080p_video_on_cmd_215, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_216), nt35596_1080p_video_on_cmd_216, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_217), nt35596_1080p_video_on_cmd_217, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_218), nt35596_1080p_video_on_cmd_218, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_219), nt35596_1080p_video_on_cmd_219, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_220), nt35596_1080p_video_on_cmd_220, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_221), nt35596_1080p_video_on_cmd_221, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_222), nt35596_1080p_video_on_cmd_222, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_223), nt35596_1080p_video_on_cmd_223, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_224), nt35596_1080p_video_on_cmd_224, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_225), nt35596_1080p_video_on_cmd_225, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_226), nt35596_1080p_video_on_cmd_226, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_227), nt35596_1080p_video_on_cmd_227, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_228), nt35596_1080p_video_on_cmd_228, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_229), nt35596_1080p_video_on_cmd_229, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_230), nt35596_1080p_video_on_cmd_230, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_231), nt35596_1080p_video_on_cmd_231, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_232), nt35596_1080p_video_on_cmd_232, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_233), nt35596_1080p_video_on_cmd_233, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_234), nt35596_1080p_video_on_cmd_234, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_235), nt35596_1080p_video_on_cmd_235, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_236), nt35596_1080p_video_on_cmd_236, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_237), nt35596_1080p_video_on_cmd_237, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_238), nt35596_1080p_video_on_cmd_238, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_239), nt35596_1080p_video_on_cmd_239, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_240), nt35596_1080p_video_on_cmd_240, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_241), nt35596_1080p_video_on_cmd_241, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_242), nt35596_1080p_video_on_cmd_242, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_243), nt35596_1080p_video_on_cmd_243, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_244), nt35596_1080p_video_on_cmd_244, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_245), nt35596_1080p_video_on_cmd_245, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_246), nt35596_1080p_video_on_cmd_246, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_247), nt35596_1080p_video_on_cmd_247, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_248), nt35596_1080p_video_on_cmd_248, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_249), nt35596_1080p_video_on_cmd_249, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_250), nt35596_1080p_video_on_cmd_250, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_251), nt35596_1080p_video_on_cmd_251, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_252), nt35596_1080p_video_on_cmd_252, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_253), nt35596_1080p_video_on_cmd_253, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_254), nt35596_1080p_video_on_cmd_254, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_255), nt35596_1080p_video_on_cmd_255, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_256), nt35596_1080p_video_on_cmd_256, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_257), nt35596_1080p_video_on_cmd_257, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_258), nt35596_1080p_video_on_cmd_258, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_259), nt35596_1080p_video_on_cmd_259, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_260), nt35596_1080p_video_on_cmd_260, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_261), nt35596_1080p_video_on_cmd_261, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_262), nt35596_1080p_video_on_cmd_262, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_263), nt35596_1080p_video_on_cmd_263, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_264), nt35596_1080p_video_on_cmd_264, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_265), nt35596_1080p_video_on_cmd_265, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_266), nt35596_1080p_video_on_cmd_266, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_267), nt35596_1080p_video_on_cmd_267, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_268), nt35596_1080p_video_on_cmd_268, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_269), nt35596_1080p_video_on_cmd_269, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_270), nt35596_1080p_video_on_cmd_270, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_271), nt35596_1080p_video_on_cmd_271, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_272), nt35596_1080p_video_on_cmd_272, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_273), nt35596_1080p_video_on_cmd_273, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_274), nt35596_1080p_video_on_cmd_274, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_275), nt35596_1080p_video_on_cmd_275, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_276), nt35596_1080p_video_on_cmd_276, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_277), nt35596_1080p_video_on_cmd_277, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_278), nt35596_1080p_video_on_cmd_278, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_279), nt35596_1080p_video_on_cmd_279, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_280), nt35596_1080p_video_on_cmd_280, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_281), nt35596_1080p_video_on_cmd_281, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_282), nt35596_1080p_video_on_cmd_282, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_283), nt35596_1080p_video_on_cmd_283, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_284), nt35596_1080p_video_on_cmd_284, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_285), nt35596_1080p_video_on_cmd_285, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_286), nt35596_1080p_video_on_cmd_286, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_287), nt35596_1080p_video_on_cmd_287, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_288), nt35596_1080p_video_on_cmd_288, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_289), nt35596_1080p_video_on_cmd_289, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_290), nt35596_1080p_video_on_cmd_290, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_291), nt35596_1080p_video_on_cmd_291, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_292), nt35596_1080p_video_on_cmd_292, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_293), nt35596_1080p_video_on_cmd_293, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_294), nt35596_1080p_video_on_cmd_294, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_295), nt35596_1080p_video_on_cmd_295, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_296), nt35596_1080p_video_on_cmd_296, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_297), nt35596_1080p_video_on_cmd_297, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_298), nt35596_1080p_video_on_cmd_298, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_299), nt35596_1080p_video_on_cmd_299, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_300), nt35596_1080p_video_on_cmd_300, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_301), nt35596_1080p_video_on_cmd_301, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_302), nt35596_1080p_video_on_cmd_302, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_303), nt35596_1080p_video_on_cmd_303, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_304), nt35596_1080p_video_on_cmd_304, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_305), nt35596_1080p_video_on_cmd_305, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_306), nt35596_1080p_video_on_cmd_306, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_307), nt35596_1080p_video_on_cmd_307, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_308), nt35596_1080p_video_on_cmd_308, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_309), nt35596_1080p_video_on_cmd_309, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_310), nt35596_1080p_video_on_cmd_310, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_311), nt35596_1080p_video_on_cmd_311, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_312), nt35596_1080p_video_on_cmd_312, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_313), nt35596_1080p_video_on_cmd_313, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_314), nt35596_1080p_video_on_cmd_314, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_315), nt35596_1080p_video_on_cmd_315, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_316), nt35596_1080p_video_on_cmd_316, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_317), nt35596_1080p_video_on_cmd_317, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_318), nt35596_1080p_video_on_cmd_318, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_319), nt35596_1080p_video_on_cmd_319, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_320), nt35596_1080p_video_on_cmd_320, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_321), nt35596_1080p_video_on_cmd_321, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_322), nt35596_1080p_video_on_cmd_322, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_323), nt35596_1080p_video_on_cmd_323, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_324), nt35596_1080p_video_on_cmd_324, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_325), nt35596_1080p_video_on_cmd_325, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_326), nt35596_1080p_video_on_cmd_326, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_327), nt35596_1080p_video_on_cmd_327, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_328), nt35596_1080p_video_on_cmd_328, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_329), nt35596_1080p_video_on_cmd_329, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_330), nt35596_1080p_video_on_cmd_330, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_331), nt35596_1080p_video_on_cmd_331, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_332), nt35596_1080p_video_on_cmd_332, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_333), nt35596_1080p_video_on_cmd_333, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_334), nt35596_1080p_video_on_cmd_334, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_335), nt35596_1080p_video_on_cmd_335, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_336), nt35596_1080p_video_on_cmd_336, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_337), nt35596_1080p_video_on_cmd_337, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_338), nt35596_1080p_video_on_cmd_338, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_339), nt35596_1080p_video_on_cmd_339, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_340), nt35596_1080p_video_on_cmd_340, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_341), nt35596_1080p_video_on_cmd_341, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_342), nt35596_1080p_video_on_cmd_342, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_343), nt35596_1080p_video_on_cmd_343, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_344), nt35596_1080p_video_on_cmd_344, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_345), nt35596_1080p_video_on_cmd_345, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_346), nt35596_1080p_video_on_cmd_346, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_347), nt35596_1080p_video_on_cmd_347, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_348), nt35596_1080p_video_on_cmd_348, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_349), nt35596_1080p_video_on_cmd_349, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_350), nt35596_1080p_video_on_cmd_350, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_351), nt35596_1080p_video_on_cmd_351, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_352), nt35596_1080p_video_on_cmd_352, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_353), nt35596_1080p_video_on_cmd_353, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_354), nt35596_1080p_video_on_cmd_354, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_355), nt35596_1080p_video_on_cmd_355, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_356), nt35596_1080p_video_on_cmd_356, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_357), nt35596_1080p_video_on_cmd_357, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_358), nt35596_1080p_video_on_cmd_358, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_359), nt35596_1080p_video_on_cmd_359, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_360), nt35596_1080p_video_on_cmd_360, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_361), nt35596_1080p_video_on_cmd_361, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_362), nt35596_1080p_video_on_cmd_362, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_363), nt35596_1080p_video_on_cmd_363, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_364), nt35596_1080p_video_on_cmd_364, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_365), nt35596_1080p_video_on_cmd_365, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_366), nt35596_1080p_video_on_cmd_366, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_367), nt35596_1080p_video_on_cmd_367, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_368), nt35596_1080p_video_on_cmd_368, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_369), nt35596_1080p_video_on_cmd_369, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_370), nt35596_1080p_video_on_cmd_370, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_371), nt35596_1080p_video_on_cmd_371, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_372), nt35596_1080p_video_on_cmd_372, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_373), nt35596_1080p_video_on_cmd_373, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_374), nt35596_1080p_video_on_cmd_374, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_375), nt35596_1080p_video_on_cmd_375, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_376), nt35596_1080p_video_on_cmd_376, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_377), nt35596_1080p_video_on_cmd_377, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_378), nt35596_1080p_video_on_cmd_378, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_379), nt35596_1080p_video_on_cmd_379, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_380), nt35596_1080p_video_on_cmd_380, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_381), nt35596_1080p_video_on_cmd_381, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_382), nt35596_1080p_video_on_cmd_382, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_383), nt35596_1080p_video_on_cmd_383, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_384), nt35596_1080p_video_on_cmd_384, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_385), nt35596_1080p_video_on_cmd_385, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_386), nt35596_1080p_video_on_cmd_386, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_387), nt35596_1080p_video_on_cmd_387, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_388), nt35596_1080p_video_on_cmd_388, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_389), nt35596_1080p_video_on_cmd_389, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_390), nt35596_1080p_video_on_cmd_390, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_391), nt35596_1080p_video_on_cmd_391, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_392), nt35596_1080p_video_on_cmd_392, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_393), nt35596_1080p_video_on_cmd_393, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_394), nt35596_1080p_video_on_cmd_394, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_395), nt35596_1080p_video_on_cmd_395, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_396), nt35596_1080p_video_on_cmd_396, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_397), nt35596_1080p_video_on_cmd_397, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_398), nt35596_1080p_video_on_cmd_398, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_399), nt35596_1080p_video_on_cmd_399, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_400), nt35596_1080p_video_on_cmd_400, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_401), nt35596_1080p_video_on_cmd_401, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_402), nt35596_1080p_video_on_cmd_402, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_403), nt35596_1080p_video_on_cmd_403, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_404), nt35596_1080p_video_on_cmd_404, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_405), nt35596_1080p_video_on_cmd_405, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_406), nt35596_1080p_video_on_cmd_406, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_407), nt35596_1080p_video_on_cmd_407, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_408), nt35596_1080p_video_on_cmd_408, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_409), nt35596_1080p_video_on_cmd_409, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_410), nt35596_1080p_video_on_cmd_410, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_411), nt35596_1080p_video_on_cmd_411, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_412), nt35596_1080p_video_on_cmd_412, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_413), nt35596_1080p_video_on_cmd_413, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_414), nt35596_1080p_video_on_cmd_414, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_415), nt35596_1080p_video_on_cmd_415, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_416), nt35596_1080p_video_on_cmd_416, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_417), nt35596_1080p_video_on_cmd_417, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_418), nt35596_1080p_video_on_cmd_418, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_419), nt35596_1080p_video_on_cmd_419, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_420), nt35596_1080p_video_on_cmd_420, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_421), nt35596_1080p_video_on_cmd_421, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_422), nt35596_1080p_video_on_cmd_422, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_423), nt35596_1080p_video_on_cmd_423, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_424), nt35596_1080p_video_on_cmd_424, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_425), nt35596_1080p_video_on_cmd_425, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_426), nt35596_1080p_video_on_cmd_426, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_427), nt35596_1080p_video_on_cmd_427, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_428), nt35596_1080p_video_on_cmd_428, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_429), nt35596_1080p_video_on_cmd_429, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_430), nt35596_1080p_video_on_cmd_430, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_431), nt35596_1080p_video_on_cmd_431, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_432), nt35596_1080p_video_on_cmd_432, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_433), nt35596_1080p_video_on_cmd_433, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_434), nt35596_1080p_video_on_cmd_434, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_435), nt35596_1080p_video_on_cmd_435, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_436), nt35596_1080p_video_on_cmd_436, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_437), nt35596_1080p_video_on_cmd_437, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_438), nt35596_1080p_video_on_cmd_438, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_439), nt35596_1080p_video_on_cmd_439, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_440), nt35596_1080p_video_on_cmd_440, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_441), nt35596_1080p_video_on_cmd_441, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_442), nt35596_1080p_video_on_cmd_442, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_443), nt35596_1080p_video_on_cmd_443, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_444), nt35596_1080p_video_on_cmd_444, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_445), nt35596_1080p_video_on_cmd_445, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_446), nt35596_1080p_video_on_cmd_446, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_447), nt35596_1080p_video_on_cmd_447, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_448), nt35596_1080p_video_on_cmd_448, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_449), nt35596_1080p_video_on_cmd_449, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_450), nt35596_1080p_video_on_cmd_450, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_451), nt35596_1080p_video_on_cmd_451, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_452), nt35596_1080p_video_on_cmd_452, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_453), nt35596_1080p_video_on_cmd_453, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_454), nt35596_1080p_video_on_cmd_454, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_455), nt35596_1080p_video_on_cmd_455, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_456), nt35596_1080p_video_on_cmd_456, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_457), nt35596_1080p_video_on_cmd_457, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_458), nt35596_1080p_video_on_cmd_458, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_459), nt35596_1080p_video_on_cmd_459, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_460), nt35596_1080p_video_on_cmd_460, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_461), nt35596_1080p_video_on_cmd_461, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_462), nt35596_1080p_video_on_cmd_462, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_463), nt35596_1080p_video_on_cmd_463, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_464), nt35596_1080p_video_on_cmd_464, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_465), nt35596_1080p_video_on_cmd_465, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_466), nt35596_1080p_video_on_cmd_466, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_467), nt35596_1080p_video_on_cmd_467, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_468), nt35596_1080p_video_on_cmd_468, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_469), nt35596_1080p_video_on_cmd_469, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_470), nt35596_1080p_video_on_cmd_470, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_471), nt35596_1080p_video_on_cmd_471, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_472), nt35596_1080p_video_on_cmd_472, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_473), nt35596_1080p_video_on_cmd_473, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_474), nt35596_1080p_video_on_cmd_474, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_475), nt35596_1080p_video_on_cmd_475, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_476), nt35596_1080p_video_on_cmd_476, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_477), nt35596_1080p_video_on_cmd_477, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_478), nt35596_1080p_video_on_cmd_478, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_479), nt35596_1080p_video_on_cmd_479, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_480), nt35596_1080p_video_on_cmd_480, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_481), nt35596_1080p_video_on_cmd_481, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_482), nt35596_1080p_video_on_cmd_482, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_483), nt35596_1080p_video_on_cmd_483, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_484), nt35596_1080p_video_on_cmd_484, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_485), nt35596_1080p_video_on_cmd_485, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_486), nt35596_1080p_video_on_cmd_486, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_487), nt35596_1080p_video_on_cmd_487, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_488), nt35596_1080p_video_on_cmd_488, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_489), nt35596_1080p_video_on_cmd_489, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_490), nt35596_1080p_video_on_cmd_490, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_491), nt35596_1080p_video_on_cmd_491, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_492), nt35596_1080p_video_on_cmd_492, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_493), nt35596_1080p_video_on_cmd_493, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_494), nt35596_1080p_video_on_cmd_494, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_495), nt35596_1080p_video_on_cmd_495, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_496), nt35596_1080p_video_on_cmd_496, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_497), nt35596_1080p_video_on_cmd_497, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_498), nt35596_1080p_video_on_cmd_498, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_499), nt35596_1080p_video_on_cmd_499, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_500), nt35596_1080p_video_on_cmd_500, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_501), nt35596_1080p_video_on_cmd_501, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_502), nt35596_1080p_video_on_cmd_502, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_503), nt35596_1080p_video_on_cmd_503, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_504), nt35596_1080p_video_on_cmd_504, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_505), nt35596_1080p_video_on_cmd_505, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_506), nt35596_1080p_video_on_cmd_506, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_507), nt35596_1080p_video_on_cmd_507, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_508), nt35596_1080p_video_on_cmd_508, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_509), nt35596_1080p_video_on_cmd_509, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_510), nt35596_1080p_video_on_cmd_510, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_511), nt35596_1080p_video_on_cmd_511, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_512), nt35596_1080p_video_on_cmd_512, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_513), nt35596_1080p_video_on_cmd_513, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_514), nt35596_1080p_video_on_cmd_514, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_515), nt35596_1080p_video_on_cmd_515, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_516), nt35596_1080p_video_on_cmd_516, 150 },
	{ sizeof(nt35596_1080p_video_on_cmd_517), nt35596_1080p_video_on_cmd_517, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_518), nt35596_1080p_video_on_cmd_518, 0 },
	{ sizeof(nt35596_1080p_video_on_cmd_519), nt35596_1080p_video_on_cmd_519, 120 },
};

static char nt35596_1080p_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char nt35596_1080p_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt35596_1080p_video_off_command[] = {
	{ sizeof(nt35596_1080p_video_off_cmd_0), nt35596_1080p_video_off_cmd_0, 50 },
	{ sizeof(nt35596_1080p_video_off_cmd_1), nt35596_1080p_video_off_cmd_1, 120 },
};

static struct command_state nt35596_1080p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info nt35596_1080p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info nt35596_1080p_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration nt35596_1080p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t nt35596_1080p_video_timings[] = {
	0xf9, 0x3d, 0x34, 0x00, 0x58, 0x4d, 0x36, 0x3f, 0x53, 0x03, 0x04, 0x00
};

static struct panel_timing nt35596_1080p_video_timing_info = {
	.tclk_post = 0x1e,
	.tclk_pre = 0x38,
};

static struct panel_reset_sequence nt35596_1080p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 1, 20 },
	.pin_direction = 2,
};

static struct backlight nt35596_1080p_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_nt35596_1080p_video_select(struct panel_struct *panel,
						    struct msm_panel_info *pinfo,
						    struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &nt35596_1080p_video_panel_data;
	panel->panelres = &nt35596_1080p_video_panel_res;
	panel->color = &nt35596_1080p_video_color;
	panel->videopanel = &nt35596_1080p_video_video_panel;
	panel->commandpanel = &nt35596_1080p_video_command_panel;
	panel->state = &nt35596_1080p_video_state;
	panel->laneconfig = &nt35596_1080p_video_lane_config;
	panel->paneltiminginfo = &nt35596_1080p_video_timing_info;
	panel->panelresetseq = &nt35596_1080p_video_reset_seq;
	panel->backlightinfo = &nt35596_1080p_video_backlight;
	pinfo->mipi.panel_cmds = nt35596_1080p_video_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(nt35596_1080p_video_on_command);
	memcpy(phy_db->timing, nt35596_1080p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NT35596_1080P_VIDEO_H_ */
