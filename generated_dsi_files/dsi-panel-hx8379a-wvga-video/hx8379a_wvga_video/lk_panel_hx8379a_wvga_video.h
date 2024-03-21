// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_HX8379A_WVGA_VIDEO_H_
#define _PANEL_HX8379A_WVGA_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config hx8379a_wvga_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_hx8379a_wvga_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution hx8379a_wvga_video_panel_res = {
	.panel_width = 480,
	.panel_height = 800,
	.hfront_porch = 100,
	.hback_porch = 94,
	.hpulse_width = 40,
	.hsync_skew = 0,
	.vfront_porch = 6,
	.vback_porch = 4,
	.vpulse_width = 6,
	/* Borders not supported yet */
};

static struct color_info hx8379a_wvga_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char hx8379a_wvga_video_on_cmd_0[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb9, 0xff, 0x83, 0x79
};
static char hx8379a_wvga_video_on_cmd_1[] = {
	0x03, 0x00, 0x39, 0xc0, 0xba, 0x51, 0x93, 0xff
};
static char hx8379a_wvga_video_on_cmd_2[] = {
	0x14, 0x00, 0x39, 0xc0, 0xb1, 0x00, 0x50, 0x44,
	0xea, 0x8d, 0x08, 0x11, 0x11, 0x11, 0x27, 0x2f,
	0x9a, 0x1a, 0x42, 0x0b, 0x6e, 0xf1, 0x00, 0xe6
};
static char hx8379a_wvga_video_on_cmd_3[] = {
	0x0e, 0x00, 0x39, 0xc0, 0xb2, 0x00, 0x00, 0x3c,
	0x08, 0x04, 0x19, 0x22, 0x00, 0xff, 0x08, 0x04,
	0x19, 0x20, 0xff, 0xff
};
static char hx8379a_wvga_video_on_cmd_4[] = {
	0x20, 0x00, 0x39, 0xc0, 0xb4, 0x80, 0x08, 0x00,
	0x32, 0x10, 0x03, 0x32, 0x13, 0x70, 0x32, 0x10,
	0x08, 0x37, 0x01, 0x28, 0x07, 0x37, 0x08, 0x35,
	0x08, 0x3d, 0x44, 0x08, 0x00, 0x40, 0x08, 0x28,
	0x08, 0x30, 0x30, 0x04
};
static char hx8379a_wvga_video_on_cmd_5[] = {
	0x30, 0x00, 0x39, 0xc0, 0xd5, 0x00, 0x00, 0x0a,
	0x00, 0x01, 0x05, 0x00, 0x03, 0x00, 0x88, 0x88,
	0x88, 0x88, 0x23, 0x01, 0x67, 0x45, 0x02, 0x13,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x54, 0x76, 0x10, 0x32, 0x31, 0x20,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char hx8379a_wvga_video_on_cmd_6[] = {
	0x24, 0x00, 0x39, 0xc0, 0xe0, 0x79, 0x05, 0x0f,
	0x14, 0x23, 0x24, 0x3f, 0x30, 0x46, 0x06, 0x10,
	0x13, 0x16, 0x17, 0x16, 0x16, 0x13, 0x18, 0x05,
	0x0f, 0x14, 0x23, 0x24, 0x3f, 0x30, 0x46, 0x06,
	0x10, 0x13, 0x16, 0x17, 0x16, 0x16, 0x13, 0x18
};
static char hx8379a_wvga_video_on_cmd_7[] = {
	0x80, 0x00, 0x39, 0xc0, 0xc1, 0x01, 0x00, 0x07,
	0x10, 0x17, 0x1d, 0x2a, 0x33, 0x3a, 0x43, 0x4a,
	0x52, 0x5b, 0x64, 0x6d, 0x78, 0x7f, 0x88, 0x90,
	0x98, 0xa0, 0xa9, 0xb2, 0xb9, 0xc1, 0xc9, 0xd1,
	0xd7, 0xdf, 0xe6, 0xed, 0xf4, 0xfa, 0xfd, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x10, 0x18, 0x20, 0x28, 0x30, 0x38,
	0x40, 0x47, 0x4f, 0x58, 0x60, 0x68, 0x70, 0x78,
	0x80, 0x88, 0x90, 0x98, 0xa0, 0xa9, 0xb1, 0xb9,
	0xc1, 0xc9, 0xd1, 0xd8, 0xe0, 0xe8, 0xf0, 0xf9,
	0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x08, 0x10, 0x18, 0x1e, 0x26,
	0x2e, 0x34, 0x3a, 0x41, 0x49, 0x4f, 0x58, 0x5e,
	0x67, 0x6f, 0x77, 0x80, 0x88, 0x8f, 0x97, 0x9f,
	0xa7, 0xaf, 0xb8, 0xbf, 0xc7, 0xd1, 0xd8, 0xe3,
	0xea, 0xf6, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char hx8379a_wvga_video_on_cmd_8[] = {
	0xcc, 0x02, 0x23, 0x80
};
static char hx8379a_wvga_video_on_cmd_9[] = {
	0x05, 0x00, 0x39, 0xc0, 0xb6, 0x00, 0x9c, 0x00,
	0x9c, 0xff, 0xff, 0xff
};
static char hx8379a_wvga_video_on_cmd_10[] = {
	0x11, 0x00, 0x05, 0x80
};
static char hx8379a_wvga_video_on_cmd_11[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd hx8379a_wvga_video_on_command[] = {
	{ sizeof(hx8379a_wvga_video_on_cmd_0), hx8379a_wvga_video_on_cmd_0, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_1), hx8379a_wvga_video_on_cmd_1, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_2), hx8379a_wvga_video_on_cmd_2, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_3), hx8379a_wvga_video_on_cmd_3, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_4), hx8379a_wvga_video_on_cmd_4, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_5), hx8379a_wvga_video_on_cmd_5, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_6), hx8379a_wvga_video_on_cmd_6, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_7), hx8379a_wvga_video_on_cmd_7, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_8), hx8379a_wvga_video_on_cmd_8, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_9), hx8379a_wvga_video_on_cmd_9, 0 },
	{ sizeof(hx8379a_wvga_video_on_cmd_10), hx8379a_wvga_video_on_cmd_10, 150 },
	{ sizeof(hx8379a_wvga_video_on_cmd_11), hx8379a_wvga_video_on_cmd_11, 120 },
};

static char hx8379a_wvga_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char hx8379a_wvga_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd hx8379a_wvga_video_off_command[] = {
	{ sizeof(hx8379a_wvga_video_off_cmd_0), hx8379a_wvga_video_off_cmd_0, 50 },
	{ sizeof(hx8379a_wvga_video_off_cmd_1), hx8379a_wvga_video_off_cmd_1, 120 },
};

static struct command_state hx8379a_wvga_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 0,
};

static struct commandpanel_info hx8379a_wvga_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info hx8379a_wvga_video_video_panel = {
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

static struct lane_configuration hx8379a_wvga_video_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 1,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t hx8379a_wvga_video_timings[] = {
	0x78, 0x1b, 0x11, 0x00, 0x3e, 0x43, 0x16, 0x1e, 0x1d, 0x03, 0x04, 0x00
};

static struct panel_timing hx8379a_wvga_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1b,
};

static struct panel_reset_sequence hx8379a_wvga_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 2, 20 },
	.pin_direction = 2,
};

static struct backlight hx8379a_wvga_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_hx8379a_wvga_video_select(struct panel_struct *panel,
						   struct msm_panel_info *pinfo,
						   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &hx8379a_wvga_video_panel_data;
	panel->panelres = &hx8379a_wvga_video_panel_res;
	panel->color = &hx8379a_wvga_video_color;
	panel->videopanel = &hx8379a_wvga_video_video_panel;
	panel->commandpanel = &hx8379a_wvga_video_command_panel;
	panel->state = &hx8379a_wvga_video_state;
	panel->laneconfig = &hx8379a_wvga_video_lane_config;
	panel->paneltiminginfo = &hx8379a_wvga_video_timing_info;
	panel->panelresetseq = &hx8379a_wvga_video_reset_seq;
	panel->backlightinfo = &hx8379a_wvga_video_backlight;
	pinfo->mipi.panel_cmds = hx8379a_wvga_video_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(hx8379a_wvga_video_on_command);
	memcpy(phy_db->timing, hx8379a_wvga_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_HX8379A_WVGA_VIDEO_H_ */
