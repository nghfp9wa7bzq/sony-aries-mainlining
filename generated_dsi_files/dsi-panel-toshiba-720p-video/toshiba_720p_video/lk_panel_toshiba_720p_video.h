// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_TOSHIBA_720P_VIDEO_H_
#define _PANEL_TOSHIBA_720P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config toshiba_720p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_toshiba_720p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution toshiba_720p_video_panel_res = {
	.panel_width = 720,
	.panel_height = 1280,
	.hfront_porch = 144,
	.hback_porch = 32,
	.hpulse_width = 12,
	.hsync_skew = 0,
	.vfront_porch = 9,
	.vback_porch = 3,
	.vpulse_width = 4,
	/* Borders not supported yet */
};

static struct color_info toshiba_720p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char toshiba_720p_video_on_cmd_0[] = {
	0xb0, 0x00, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_1[] = {
	0xb2, 0x00, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_2[] = {
	0xb3, 0x0c, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_3[] = {
	0xb4, 0x02, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_4[] = {
	0x06, 0x00, 0x29, 0xc0, 0xc0, 0x40, 0x02, 0x7f,
	0xc8, 0x08, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_5[] = {
	0x10, 0x00, 0x29, 0xc0, 0xc1, 0x00, 0xa8, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x9d, 0x08, 0x27, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char toshiba_720p_video_on_cmd_6[] = {
	0x06, 0x00, 0x29, 0xc0, 0xc2, 0x00, 0x00, 0x09,
	0x00, 0x00, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_7[] = {
	0xc3, 0x04, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_8[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc4, 0x4d, 0x83, 0x00
};
static char toshiba_720p_video_on_cmd_9[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xc6, 0x12, 0x00, 0x08,
	0x71, 0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0xff
};
static char toshiba_720p_video_on_cmd_10[] = {
	0xc7, 0x22, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_11[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc8, 0x4c, 0x0c, 0x0c,
	0x0c, 0xff, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_12[] = {
	0x0e, 0x00, 0x29, 0xc0, 0xc9, 0x00, 0x40, 0x00,
	0x16, 0x32, 0x2e, 0x3a, 0x43, 0x3e, 0x3c, 0x45,
	0x79, 0x3f, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_13[] = {
	0x0e, 0x00, 0x29, 0xc0, 0xca, 0x00, 0x46, 0x1a,
	0x23, 0x21, 0x1c, 0x25, 0x31, 0x2d, 0x49, 0x5f,
	0x7f, 0x3f, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_14[] = {
	0x0e, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x4c, 0x20,
	0x3a, 0x42, 0x40, 0x47, 0x4b, 0x42, 0x3e, 0x46,
	0x7e, 0x3f, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_15[] = {
	0x0e, 0x00, 0x29, 0xc0, 0xcc, 0x00, 0x41, 0x19,
	0x21, 0x1d, 0x14, 0x18, 0x1f, 0x1d, 0x25, 0x3f,
	0x73, 0x3f, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_16[] = {
	0x0e, 0x00, 0x29, 0xc0, 0xcd, 0x23, 0x79, 0x5a,
	0x5f, 0x57, 0x4c, 0x51, 0x51, 0x45, 0x3f, 0x4b,
	0x7f, 0x3f, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_17[] = {
	0x0e, 0x00, 0x29, 0xc0, 0xce, 0x00, 0x40, 0x14,
	0x20, 0x1a, 0x0e, 0x0e, 0x13, 0x08, 0x00, 0x05,
	0x46, 0x1c, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_18[] = {
	0x04, 0x00, 0x29, 0xc0, 0xd0, 0x6a, 0x64, 0x01
};
static char toshiba_720p_video_on_cmd_19[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd1, 0x77, 0xd4, 0xff
};
static char toshiba_720p_video_on_cmd_20[] = {
	0xd3, 0x33, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_21[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd5, 0x0f, 0x0f, 0xff
};
static char toshiba_720p_video_on_cmd_22[] = {
	0x07, 0x00, 0x29, 0xc0, 0xd8, 0x34, 0x64, 0x23,
	0x25, 0x62, 0x32, 0xff
};
static char toshiba_720p_video_on_cmd_23[] = {
	0x0c, 0x00, 0x29, 0xc0, 0xde, 0x10, 0x7b, 0x11,
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
static char toshiba_720p_video_on_cmd_24[] = {
	0x09, 0x00, 0x29, 0xc0, 0xfd, 0x04, 0x55, 0x53,
	0x00, 0x70, 0xff, 0x10, 0x73, 0xff, 0xff, 0xff
};
static char toshiba_720p_video_on_cmd_25[] = {
	0xe2, 0x00, 0x23, 0x80
};
static char toshiba_720p_video_on_cmd_26[] = {
	0x11, 0x00, 0x05, 0x80
};
static char toshiba_720p_video_on_cmd_27[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd toshiba_720p_video_on_command[] = {
	{ sizeof(toshiba_720p_video_on_cmd_0), toshiba_720p_video_on_cmd_0, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_1), toshiba_720p_video_on_cmd_1, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_2), toshiba_720p_video_on_cmd_2, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_3), toshiba_720p_video_on_cmd_3, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_4), toshiba_720p_video_on_cmd_4, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_5), toshiba_720p_video_on_cmd_5, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_6), toshiba_720p_video_on_cmd_6, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_7), toshiba_720p_video_on_cmd_7, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_8), toshiba_720p_video_on_cmd_8, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_9), toshiba_720p_video_on_cmd_9, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_10), toshiba_720p_video_on_cmd_10, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_11), toshiba_720p_video_on_cmd_11, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_12), toshiba_720p_video_on_cmd_12, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_13), toshiba_720p_video_on_cmd_13, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_14), toshiba_720p_video_on_cmd_14, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_15), toshiba_720p_video_on_cmd_15, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_16), toshiba_720p_video_on_cmd_16, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_17), toshiba_720p_video_on_cmd_17, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_18), toshiba_720p_video_on_cmd_18, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_19), toshiba_720p_video_on_cmd_19, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_20), toshiba_720p_video_on_cmd_20, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_21), toshiba_720p_video_on_cmd_21, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_22), toshiba_720p_video_on_cmd_22, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_23), toshiba_720p_video_on_cmd_23, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_24), toshiba_720p_video_on_cmd_24, 0 },
	{ sizeof(toshiba_720p_video_on_cmd_25), toshiba_720p_video_on_cmd_25, 10 },
	{ sizeof(toshiba_720p_video_on_cmd_26), toshiba_720p_video_on_cmd_26, 120 },
	{ sizeof(toshiba_720p_video_on_cmd_27), toshiba_720p_video_on_cmd_27, 50 },
};

static char toshiba_720p_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char toshiba_720p_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd toshiba_720p_video_off_command[] = {
	{ sizeof(toshiba_720p_video_off_cmd_0), toshiba_720p_video_off_cmd_0, 50 },
	{ sizeof(toshiba_720p_video_off_cmd_1), toshiba_720p_video_off_cmd_1, 120 },
};

static struct command_state toshiba_720p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info toshiba_720p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info toshiba_720p_video_video_panel = {
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

static struct lane_configuration toshiba_720p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t toshiba_720p_video_timings[] = {
	0xb0, 0x23, 0x1b, 0x00, 0x94, 0x93, 0x1e, 0x25, 0x15, 0x03, 0x04, 0x00
};

static struct panel_timing toshiba_720p_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1b,
};

static struct panel_reset_sequence toshiba_720p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 200, 20 },
	.pin_direction = 2,
};

static struct backlight toshiba_720p_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_toshiba_720p_video_select(struct panel_struct *panel,
						   struct msm_panel_info *pinfo,
						   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &toshiba_720p_video_panel_data;
	panel->panelres = &toshiba_720p_video_panel_res;
	panel->color = &toshiba_720p_video_color;
	panel->videopanel = &toshiba_720p_video_video_panel;
	panel->commandpanel = &toshiba_720p_video_command_panel;
	panel->state = &toshiba_720p_video_state;
	panel->laneconfig = &toshiba_720p_video_lane_config;
	panel->paneltiminginfo = &toshiba_720p_video_timing_info;
	panel->panelresetseq = &toshiba_720p_video_reset_seq;
	panel->backlightinfo = &toshiba_720p_video_backlight;
	pinfo->mipi.panel_cmds = toshiba_720p_video_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(toshiba_720p_video_on_command);
	memcpy(phy_db->timing, toshiba_720p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_TOSHIBA_720P_VIDEO_H_ */
