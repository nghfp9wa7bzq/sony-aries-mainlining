// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_OTM8018B_FWVGA_VIDEO_H_
#define _PANEL_OTM8018B_FWVGA_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config otm8018b_fwvga_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_otm8018b_fwvga_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution otm8018b_fwvga_video_panel_res = {
	.panel_width = 480,
	.panel_height = 854,
	.hfront_porch = 80,
	.hback_porch = 54,
	.hpulse_width = 8,
	.hsync_skew = 0,
	.vfront_porch = 12,
	.vback_porch = 16,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info otm8018b_fwvga_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char otm8018b_fwvga_video_on_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_1[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0x80, 0x09, 0x01
};
static char otm8018b_fwvga_video_on_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_3[] = {
	0x03, 0x00, 0x29, 0xc0, 0xff, 0x80, 0x09, 0xff
};
static char otm8018b_fwvga_video_on_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_5[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd6, 0x48, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x03, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_7[] = {
	0x02, 0x00, 0x29, 0xc0, 0xff, 0x01, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_8[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb4, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_9[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x10, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_10[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x82, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_11[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0xa3, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_12[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_13[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc5, 0x96, 0x87, 0xff
};
static char otm8018b_fwvga_video_on_cmd_14[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_15[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd8, 0x74, 0x72, 0xff
};
static char otm8018b_fwvga_video_on_cmd_16[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_17[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd9, 0x56, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_18[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_19[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe1, 0x00, 0x06, 0x0a,
	0x07, 0x03, 0x16, 0x08, 0x0a, 0x04, 0x06, 0x07,
	0x08, 0x0f, 0x23, 0x22, 0x05, 0xff, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_20[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_21[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe2, 0x00, 0x06, 0x0a,
	0x07, 0x03, 0x16, 0x08, 0x0a, 0x04, 0x06, 0x07,
	0x08, 0x0f, 0x23, 0x22, 0x05, 0xff, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_22[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x81, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_23[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0x77, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_24[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_25[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0xea, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_26[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa1, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_27[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0x08, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_28[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x89, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_29[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x08, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_30[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x81, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_31[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x83, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_32[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x92, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_33[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x01, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_34[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb1, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_35[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0xa9, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_36[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x92, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_37[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb3, 0x45, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_38[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_39[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb3, 0x02, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_40[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_41[] = {
	0x06, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x58, 0x00,
	0x14, 0x16, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_42[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_43[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x30, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_44[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_45[] = {
	0x07, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x44, 0x00,
	0x00, 0x00, 0x03, 0xff
};
static char otm8018b_fwvga_video_on_cmd_46[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa6, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_47[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc1, 0x01, 0x00, 0x00
};
static char otm8018b_fwvga_video_on_cmd_48[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_49[] = {
	0x0d, 0x00, 0x29, 0xc0, 0xce, 0x87, 0x03, 0x00,
	0x85, 0x03, 0x00, 0x86, 0x03, 0x00, 0x84, 0x03,
	0x00, 0xff, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_50[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_51[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x38, 0x03, 0x03,
	0x58, 0x00, 0x00, 0x00, 0x38, 0x02, 0x03, 0x59,
	0x00, 0x00, 0x00, 0xff
};
static char otm8018b_fwvga_video_on_cmd_52[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_53[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x38, 0x01, 0x03,
	0x5a, 0x00, 0x00, 0x00, 0x38, 0x00, 0x03, 0x5b,
	0x00, 0x00, 0x00, 0xff
};
static char otm8018b_fwvga_video_on_cmd_54[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_55[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x30, 0x00, 0x03,
	0x5c, 0x00, 0x00, 0x00, 0x30, 0x01, 0x03, 0x5d,
	0x00, 0x00, 0x00, 0xff
};
static char otm8018b_fwvga_video_on_cmd_56[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_57[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x30, 0x02, 0x03,
	0x5e, 0x00, 0x00, 0x00, 0x30, 0x03, 0x03, 0x5f,
	0x00, 0x00, 0x00, 0xff
};
static char otm8018b_fwvga_video_on_cmd_58[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc7, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_59[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcf, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_60[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc9, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_61[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcf, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_62[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_63[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcf, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_64[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc4, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_65[] = {
	0x07, 0x00, 0x29, 0xc0, 0xcb, 0x04, 0x04, 0x04,
	0x04, 0x04, 0x04, 0xff
};
static char otm8018b_fwvga_video_on_cmd_66[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd9, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_67[] = {
	0x07, 0x00, 0x29, 0xc0, 0xcb, 0x04, 0x04, 0x04,
	0x04, 0x04, 0x04, 0xff
};
static char otm8018b_fwvga_video_on_cmd_68[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x84, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_69[] = {
	0x07, 0x00, 0x29, 0xc0, 0xcc, 0x0c, 0x0a, 0x10,
	0x0e, 0x03, 0x04, 0xff
};
static char otm8018b_fwvga_video_on_cmd_70[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x9e, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_71[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcc, 0x0b, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_72[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_73[] = {
	0x06, 0x00, 0x29, 0xc0, 0xcc, 0x09, 0x0f, 0x0d,
	0x01, 0x02, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_74[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb4, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_75[] = {
	0x07, 0x00, 0x29, 0xc0, 0xcc, 0x0d, 0x0f, 0x09,
	0x0b, 0x02, 0x01, 0xff
};
static char otm8018b_fwvga_video_on_cmd_76[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xce, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_77[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcc, 0x0e, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_78[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_79[] = {
	0x06, 0x00, 0x29, 0xc0, 0xcc, 0x10, 0x0a, 0x0c,
	0x04, 0x03, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_80[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_81[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0xff, 0xff, 0xff
};
static char otm8018b_fwvga_video_on_cmd_82[] = {
	0x11, 0x00, 0x05, 0x80
};
static char otm8018b_fwvga_video_on_cmd_83[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd otm8018b_fwvga_video_on_command[] = {
	{ sizeof(otm8018b_fwvga_video_on_cmd_0), otm8018b_fwvga_video_on_cmd_0, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_1), otm8018b_fwvga_video_on_cmd_1, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_2), otm8018b_fwvga_video_on_cmd_2, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_3), otm8018b_fwvga_video_on_cmd_3, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_4), otm8018b_fwvga_video_on_cmd_4, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_5), otm8018b_fwvga_video_on_cmd_5, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_6), otm8018b_fwvga_video_on_cmd_6, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_7), otm8018b_fwvga_video_on_cmd_7, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_8), otm8018b_fwvga_video_on_cmd_8, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_9), otm8018b_fwvga_video_on_cmd_9, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_10), otm8018b_fwvga_video_on_cmd_10, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_11), otm8018b_fwvga_video_on_cmd_11, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_12), otm8018b_fwvga_video_on_cmd_12, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_13), otm8018b_fwvga_video_on_cmd_13, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_14), otm8018b_fwvga_video_on_cmd_14, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_15), otm8018b_fwvga_video_on_cmd_15, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_16), otm8018b_fwvga_video_on_cmd_16, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_17), otm8018b_fwvga_video_on_cmd_17, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_18), otm8018b_fwvga_video_on_cmd_18, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_19), otm8018b_fwvga_video_on_cmd_19, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_20), otm8018b_fwvga_video_on_cmd_20, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_21), otm8018b_fwvga_video_on_cmd_21, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_22), otm8018b_fwvga_video_on_cmd_22, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_23), otm8018b_fwvga_video_on_cmd_23, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_24), otm8018b_fwvga_video_on_cmd_24, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_25), otm8018b_fwvga_video_on_cmd_25, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_26), otm8018b_fwvga_video_on_cmd_26, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_27), otm8018b_fwvga_video_on_cmd_27, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_28), otm8018b_fwvga_video_on_cmd_28, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_29), otm8018b_fwvga_video_on_cmd_29, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_30), otm8018b_fwvga_video_on_cmd_30, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_31), otm8018b_fwvga_video_on_cmd_31, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_32), otm8018b_fwvga_video_on_cmd_32, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_33), otm8018b_fwvga_video_on_cmd_33, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_34), otm8018b_fwvga_video_on_cmd_34, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_35), otm8018b_fwvga_video_on_cmd_35, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_36), otm8018b_fwvga_video_on_cmd_36, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_37), otm8018b_fwvga_video_on_cmd_37, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_38), otm8018b_fwvga_video_on_cmd_38, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_39), otm8018b_fwvga_video_on_cmd_39, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_40), otm8018b_fwvga_video_on_cmd_40, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_41), otm8018b_fwvga_video_on_cmd_41, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_42), otm8018b_fwvga_video_on_cmd_42, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_43), otm8018b_fwvga_video_on_cmd_43, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_44), otm8018b_fwvga_video_on_cmd_44, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_45), otm8018b_fwvga_video_on_cmd_45, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_46), otm8018b_fwvga_video_on_cmd_46, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_47), otm8018b_fwvga_video_on_cmd_47, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_48), otm8018b_fwvga_video_on_cmd_48, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_49), otm8018b_fwvga_video_on_cmd_49, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_50), otm8018b_fwvga_video_on_cmd_50, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_51), otm8018b_fwvga_video_on_cmd_51, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_52), otm8018b_fwvga_video_on_cmd_52, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_53), otm8018b_fwvga_video_on_cmd_53, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_54), otm8018b_fwvga_video_on_cmd_54, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_55), otm8018b_fwvga_video_on_cmd_55, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_56), otm8018b_fwvga_video_on_cmd_56, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_57), otm8018b_fwvga_video_on_cmd_57, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_58), otm8018b_fwvga_video_on_cmd_58, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_59), otm8018b_fwvga_video_on_cmd_59, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_60), otm8018b_fwvga_video_on_cmd_60, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_61), otm8018b_fwvga_video_on_cmd_61, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_62), otm8018b_fwvga_video_on_cmd_62, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_63), otm8018b_fwvga_video_on_cmd_63, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_64), otm8018b_fwvga_video_on_cmd_64, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_65), otm8018b_fwvga_video_on_cmd_65, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_66), otm8018b_fwvga_video_on_cmd_66, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_67), otm8018b_fwvga_video_on_cmd_67, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_68), otm8018b_fwvga_video_on_cmd_68, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_69), otm8018b_fwvga_video_on_cmd_69, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_70), otm8018b_fwvga_video_on_cmd_70, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_71), otm8018b_fwvga_video_on_cmd_71, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_72), otm8018b_fwvga_video_on_cmd_72, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_73), otm8018b_fwvga_video_on_cmd_73, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_74), otm8018b_fwvga_video_on_cmd_74, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_75), otm8018b_fwvga_video_on_cmd_75, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_76), otm8018b_fwvga_video_on_cmd_76, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_77), otm8018b_fwvga_video_on_cmd_77, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_78), otm8018b_fwvga_video_on_cmd_78, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_79), otm8018b_fwvga_video_on_cmd_79, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_80), otm8018b_fwvga_video_on_cmd_80, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_81), otm8018b_fwvga_video_on_cmd_81, 0 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_82), otm8018b_fwvga_video_on_cmd_82, 120 },
	{ sizeof(otm8018b_fwvga_video_on_cmd_83), otm8018b_fwvga_video_on_cmd_83, 50 },
};

static char otm8018b_fwvga_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char otm8018b_fwvga_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd otm8018b_fwvga_video_off_command[] = {
	{ sizeof(otm8018b_fwvga_video_off_cmd_0), otm8018b_fwvga_video_off_cmd_0, 50 },
	{ sizeof(otm8018b_fwvga_video_off_cmd_1), otm8018b_fwvga_video_off_cmd_1, 120 },
};

static struct command_state otm8018b_fwvga_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 0,
};

static struct commandpanel_info otm8018b_fwvga_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info otm8018b_fwvga_video_video_panel = {
	.hsync_pulse = 0,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 1,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration otm8018b_fwvga_video_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 1,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t otm8018b_fwvga_video_timings[] = {
	0x8b, 0x1f, 0x14, 0x00, 0x45, 0x4a, 0x19, 0x23, 0x23, 0x03, 0x04, 0x00
};

static struct panel_timing otm8018b_fwvga_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1b,
};

static struct panel_reset_sequence otm8018b_fwvga_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 2, 20 },
	.pin_direction = 2,
};

static struct backlight otm8018b_fwvga_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_otm8018b_fwvga_video_select(struct panel_struct *panel,
						     struct msm_panel_info *pinfo,
						     struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &otm8018b_fwvga_video_panel_data;
	panel->panelres = &otm8018b_fwvga_video_panel_res;
	panel->color = &otm8018b_fwvga_video_color;
	panel->videopanel = &otm8018b_fwvga_video_video_panel;
	panel->commandpanel = &otm8018b_fwvga_video_command_panel;
	panel->state = &otm8018b_fwvga_video_state;
	panel->laneconfig = &otm8018b_fwvga_video_lane_config;
	panel->paneltiminginfo = &otm8018b_fwvga_video_timing_info;
	panel->panelresetseq = &otm8018b_fwvga_video_reset_seq;
	panel->backlightinfo = &otm8018b_fwvga_video_backlight;
	pinfo->mipi.panel_cmds = otm8018b_fwvga_video_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(otm8018b_fwvga_video_on_command);
	memcpy(phy_db->timing, otm8018b_fwvga_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_OTM8018B_FWVGA_VIDEO_H_ */
