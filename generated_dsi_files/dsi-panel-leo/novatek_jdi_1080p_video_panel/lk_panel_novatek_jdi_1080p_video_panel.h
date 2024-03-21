// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NOVATEK_JDI_1080P_VIDEO_PANEL_H_
#define _PANEL_NOVATEK_JDI_1080P_VIDEO_PANEL_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config novatek_jdi_1080p_video_panel_panel_data = {
	.panel_node_id = "somc,novatek_jdi_1080p_video_panel",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution novatek_jdi_1080p_video_panel_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 112,
	.hback_porch = 76,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 8,
	.vback_porch = 4,
	.vpulse_width = 4,
	/* Borders not supported yet */
};

static struct color_info novatek_jdi_1080p_video_panel_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char novatek_jdi_1080p_video_panel_on_cmd_0[] = {
	0xff, 0x10, 0x23, 0x80
};
static char novatek_jdi_1080p_video_panel_on_cmd_1[] = {
	0x01, 0x00, 0x05, 0x80
};
static char novatek_jdi_1080p_video_panel_on_cmd_2[] = {
	0xbb, 0x03, 0x15, 0x80
};
static char novatek_jdi_1080p_video_panel_on_cmd_3[] = {
	0x35, 0x00, 0x15, 0x80
};
static char novatek_jdi_1080p_video_panel_on_cmd_4[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2a, 0x00, 0x00, 0x04,
	0x37, 0xff, 0xff, 0xff
};
static char novatek_jdi_1080p_video_panel_on_cmd_5[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2b, 0x00, 0x00, 0x07,
	0x7f, 0xff, 0xff, 0xff
};
static char novatek_jdi_1080p_video_panel_on_cmd_6[] = {
	0x04, 0x00, 0x39, 0xc0, 0x3b, 0x03, 0x08, 0x08
};
static char novatek_jdi_1080p_video_panel_on_cmd_7[] = {
	0x11, 0x00, 0x05, 0x80
};
static char novatek_jdi_1080p_video_panel_on_cmd_8[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_jdi_1080p_video_panel_on_command[] = {
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_0), novatek_jdi_1080p_video_panel_on_cmd_0, 0 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_1), novatek_jdi_1080p_video_panel_on_cmd_1, 20 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_2), novatek_jdi_1080p_video_panel_on_cmd_2, 0 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_3), novatek_jdi_1080p_video_panel_on_cmd_3, 0 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_4), novatek_jdi_1080p_video_panel_on_cmd_4, 0 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_5), novatek_jdi_1080p_video_panel_on_cmd_5, 0 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_6), novatek_jdi_1080p_video_panel_on_cmd_6, 0 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_7), novatek_jdi_1080p_video_panel_on_cmd_7, 100 },
	{ sizeof(novatek_jdi_1080p_video_panel_on_cmd_8), novatek_jdi_1080p_video_panel_on_cmd_8, 40 },
};

static char novatek_jdi_1080p_video_panel_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char novatek_jdi_1080p_video_panel_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_jdi_1080p_video_panel_off_command[] = {
	{ sizeof(novatek_jdi_1080p_video_panel_off_cmd_0), novatek_jdi_1080p_video_panel_off_cmd_0, 20 },
	{ sizeof(novatek_jdi_1080p_video_panel_off_cmd_1), novatek_jdi_1080p_video_panel_off_cmd_1, 80 },
};

static struct command_state novatek_jdi_1080p_video_panel_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info novatek_jdi_1080p_video_panel_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info novatek_jdi_1080p_video_panel_video_panel = {
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

static struct lane_configuration novatek_jdi_1080p_video_panel_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t novatek_jdi_1080p_video_panel_timings[] = {
	0xe6, 0x38, 0x26, 0x00, 0x68, 0x6c, 0x2a, 0x3a, 0x2c, 0x03, 0x04, 0x00
};

static struct panel_timing novatek_jdi_1080p_video_panel_timing_info = {
	.tclk_post = 0x02,
	.tclk_pre = 0x2b,
};

static struct backlight novatek_jdi_1080p_video_panel_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_novatek_jdi_1080p_video_panel_select(struct panel_struct *panel,
							      struct msm_panel_info *pinfo,
							      struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &novatek_jdi_1080p_video_panel_panel_data;
	panel->panelres = &novatek_jdi_1080p_video_panel_panel_res;
	panel->color = &novatek_jdi_1080p_video_panel_color;
	panel->videopanel = &novatek_jdi_1080p_video_panel_video_panel;
	panel->commandpanel = &novatek_jdi_1080p_video_panel_command_panel;
	panel->state = &novatek_jdi_1080p_video_panel_state;
	panel->laneconfig = &novatek_jdi_1080p_video_panel_lane_config;
	panel->paneltiminginfo = &novatek_jdi_1080p_video_panel_timing_info;
	panel->panelresetseq = NULL;
	panel->backlightinfo = &novatek_jdi_1080p_video_panel_backlight;
	pinfo->mipi.panel_cmds = novatek_jdi_1080p_video_panel_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(novatek_jdi_1080p_video_panel_on_command);
	memcpy(phy_db->timing, novatek_jdi_1080p_video_panel_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NOVATEK_JDI_1080P_VIDEO_PANEL_H_ */
