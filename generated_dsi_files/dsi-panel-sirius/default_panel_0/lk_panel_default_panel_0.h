// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_DEFAULT_PANEL_0_H_
#define _PANEL_DEFAULT_PANEL_0_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config default_panel_0_panel_data = {
	.panel_node_id = "somc,default_panel_0",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution default_panel_0_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 128,
	.hback_porch = 76,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 4,
	.vback_porch = 3,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info default_panel_0_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char default_panel_0_on_cmd_0[] = {
	0xb0, 0x04, 0x23, 0x80
};
static char default_panel_0_on_cmd_1[] = {
	0x00, 0x00, 0x23, 0x80
};
static char default_panel_0_on_cmd_2[] = {
	0x00, 0x00, 0x23, 0x80
};
static char default_panel_0_on_cmd_3[] = {
	0xd6, 0x01, 0x23, 0x80
};
static char default_panel_0_on_cmd_4[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc0, 0x0f, 0x0f, 0xff
};
static char default_panel_0_on_cmd_5[] = {
	0x03, 0x00, 0x29, 0xc0, 0xec, 0x00, 0x10, 0xff
};
static char default_panel_0_on_cmd_6[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc7, 0x05, 0x19, 0x22,
	0x2b, 0x38, 0x51, 0x41, 0x50, 0x5c, 0x64, 0x6b,
	0x74, 0x0f, 0x23, 0x2b, 0x32, 0x3f, 0x52, 0x44,
	0x55, 0x61, 0x69, 0x70, 0x77, 0xff, 0xff, 0xff
};
static char default_panel_0_on_cmd_7[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc8, 0x03, 0x18, 0x21,
	0x2b, 0x38, 0x51, 0x42, 0x4f, 0x5d, 0x65, 0x6c,
	0x74, 0x0d, 0x22, 0x2a, 0x32, 0x3e, 0x52, 0x41,
	0x54, 0x5d, 0x66, 0x6d, 0x77, 0xff, 0xff, 0xff
};
static char default_panel_0_on_cmd_8[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc9, 0x00, 0x15, 0x1e,
	0x28, 0x36, 0x50, 0x42, 0x50, 0x5e, 0x66, 0x6d,
	0x74, 0x0a, 0x1f, 0x27, 0x2f, 0x3d, 0x51, 0x41,
	0x55, 0x5e, 0x67, 0x6e, 0x77, 0xff, 0xff, 0xff
};
static char default_panel_0_on_cmd_9[] = {
	0x11, 0x00, 0x05, 0x80
};
static char default_panel_0_on_cmd_10[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd default_panel_0_on_command[] = {
	{ sizeof(default_panel_0_on_cmd_0), default_panel_0_on_cmd_0, 0 },
	{ sizeof(default_panel_0_on_cmd_1), default_panel_0_on_cmd_1, 0 },
	{ sizeof(default_panel_0_on_cmd_2), default_panel_0_on_cmd_2, 0 },
	{ sizeof(default_panel_0_on_cmd_3), default_panel_0_on_cmd_3, 0 },
	{ sizeof(default_panel_0_on_cmd_4), default_panel_0_on_cmd_4, 0 },
	{ sizeof(default_panel_0_on_cmd_5), default_panel_0_on_cmd_5, 0 },
	{ sizeof(default_panel_0_on_cmd_6), default_panel_0_on_cmd_6, 0 },
	{ sizeof(default_panel_0_on_cmd_7), default_panel_0_on_cmd_7, 0 },
	{ sizeof(default_panel_0_on_cmd_8), default_panel_0_on_cmd_8, 0 },
	{ sizeof(default_panel_0_on_cmd_9), default_panel_0_on_cmd_9, 0 },
	{ sizeof(default_panel_0_on_cmd_10), default_panel_0_on_cmd_10, 0 },
};

static char default_panel_0_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char default_panel_0_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd default_panel_0_off_command[] = {
	{ sizeof(default_panel_0_off_cmd_0), default_panel_0_off_cmd_0, 20 },
	{ sizeof(default_panel_0_off_cmd_1), default_panel_0_off_cmd_1, 110 },
};

static struct command_state default_panel_0_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info default_panel_0_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info default_panel_0_video_panel = {
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

static struct lane_configuration default_panel_0_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t default_panel_0_timings[] = {
	0xe6, 0x38, 0x26, 0x00, 0x68, 0x6c, 0x2a, 0x3a, 0x2c, 0x03, 0x04, 0x00
};

static struct panel_timing default_panel_0_timing_info = {
	.tclk_post = 0x02,
	.tclk_pre = 0x2b,
};

static struct backlight default_panel_0_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_default_panel_0_select(struct panel_struct *panel,
						struct msm_panel_info *pinfo,
						struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &default_panel_0_panel_data;
	panel->panelres = &default_panel_0_panel_res;
	panel->color = &default_panel_0_color;
	panel->videopanel = &default_panel_0_video_panel;
	panel->commandpanel = &default_panel_0_command_panel;
	panel->state = &default_panel_0_state;
	panel->laneconfig = &default_panel_0_lane_config;
	panel->paneltiminginfo = &default_panel_0_timing_info;
	panel->panelresetseq = NULL;
	panel->backlightinfo = &default_panel_0_backlight;
	pinfo->mipi.panel_cmds = default_panel_0_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(default_panel_0_on_command);
	memcpy(phy_db->timing, default_panel_0_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_DEFAULT_PANEL_0_H_ */
