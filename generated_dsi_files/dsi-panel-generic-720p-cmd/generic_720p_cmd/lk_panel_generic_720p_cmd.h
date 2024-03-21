// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_GENERIC_720P_CMD_H_
#define _PANEL_GENERIC_720P_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config generic_720p_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_generic_720p_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution generic_720p_cmd_panel_res = {
	.panel_width = 768,
	.panel_height = 1280,
	.hfront_porch = 26,
	.hback_porch = 26,
	.hpulse_width = 26,
	.hsync_skew = 0,
	.vfront_porch = 2,
	.vback_porch = 2,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info generic_720p_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char generic_720p_cmd_on_cmd_0[] = {
	0x11, 0x00, 0x05, 0x80
};
static char generic_720p_cmd_on_cmd_1[] = {
	0x36, 0x00, 0x15, 0x80
};
static char generic_720p_cmd_on_cmd_2[] = {
	0x29, 0x00, 0x05, 0x80
};
static char generic_720p_cmd_on_cmd_3[] = {
	0x53, 0x24, 0x15, 0x80
};
static char generic_720p_cmd_on_cmd_4[] = {
	0x35, 0x00, 0x15, 0x80
};

static struct mipi_dsi_cmd generic_720p_cmd_on_command[] = {
	{ sizeof(generic_720p_cmd_on_cmd_0), generic_720p_cmd_on_cmd_0, 120 },
	{ sizeof(generic_720p_cmd_on_cmd_1), generic_720p_cmd_on_cmd_1, 10 },
	{ sizeof(generic_720p_cmd_on_cmd_2), generic_720p_cmd_on_cmd_2, 10 },
	{ sizeof(generic_720p_cmd_on_cmd_3), generic_720p_cmd_on_cmd_3, 10 },
	{ sizeof(generic_720p_cmd_on_cmd_4), generic_720p_cmd_on_cmd_4, 10 },
};

static char generic_720p_cmd_off_cmd_0[] = {
	0x34, 0x00, 0x05, 0x80
};
static char generic_720p_cmd_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};
static char generic_720p_cmd_off_cmd_2[] = {
	0x28, 0x00, 0x05, 0x80
};
static char generic_720p_cmd_off_cmd_3[] = {
	0x53, 0x00, 0x15, 0x80
};

static struct mipi_dsi_cmd generic_720p_cmd_off_command[] = {
	{ sizeof(generic_720p_cmd_off_cmd_0), generic_720p_cmd_off_cmd_0, 10 },
	{ sizeof(generic_720p_cmd_off_cmd_1), generic_720p_cmd_off_cmd_1, 120 },
	{ sizeof(generic_720p_cmd_off_cmd_2), generic_720p_cmd_off_cmd_2, 120 },
	{ sizeof(generic_720p_cmd_off_cmd_3), generic_720p_cmd_off_cmd_3, 10 },
};

static struct command_state generic_720p_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info generic_720p_cmd_command_panel = {
	/* FIXME: This is a command mode panel */
};

static struct videopanel_info generic_720p_cmd_video_panel = {
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

static struct lane_configuration generic_720p_cmd_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t generic_720p_cmd_timings[] = {
	0x6e, 0x26, 0x1b, 0x00, 0x35, 0x34, 0x20, 0x28, 0x17, 0x03, 0x04, 0x00
};

static struct panel_timing generic_720p_cmd_timing_info = {
	.tclk_post = 0x20,
	.tclk_pre = 0x2a,
};

static struct panel_reset_sequence generic_720p_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 200, 20 },
	.pin_direction = 2,
};

static struct backlight generic_720p_cmd_backlight = {
	.bl_interface_type = BL_PWM,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_generic_720p_cmd_select(struct panel_struct *panel,
						 struct msm_panel_info *pinfo,
						 struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &generic_720p_cmd_panel_data;
	panel->panelres = &generic_720p_cmd_panel_res;
	panel->color = &generic_720p_cmd_color;
	panel->videopanel = &generic_720p_cmd_video_panel;
	panel->commandpanel = &generic_720p_cmd_command_panel;
	panel->state = &generic_720p_cmd_state;
	panel->laneconfig = &generic_720p_cmd_lane_config;
	panel->paneltiminginfo = &generic_720p_cmd_timing_info;
	panel->panelresetseq = &generic_720p_cmd_reset_seq;
	panel->backlightinfo = &generic_720p_cmd_backlight;
	pinfo->mipi.panel_cmds = generic_720p_cmd_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(generic_720p_cmd_on_command);
	memcpy(phy_db->timing, generic_720p_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_GENERIC_720P_CMD_H_ */
