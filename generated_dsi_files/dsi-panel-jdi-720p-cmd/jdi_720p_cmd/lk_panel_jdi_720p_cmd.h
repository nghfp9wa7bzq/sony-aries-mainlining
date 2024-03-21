// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_JDI_720P_CMD_H_
#define _PANEL_JDI_720P_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config jdi_720p_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_jdi_720p_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 50,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution jdi_720p_cmd_panel_res = {
	.panel_width = 720,
	.panel_height = 1280,
	.hfront_porch = 130,
	.hback_porch = 130,
	.hpulse_width = 8,
	.hsync_skew = 0,
	.vfront_porch = 32,
	.vback_porch = 32,
	.vpulse_width = 4,
	/* Borders not supported yet */
};

static struct color_info jdi_720p_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char jdi_720p_cmd_on_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char jdi_720p_cmd_on_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};
static char jdi_720p_cmd_on_cmd_2[] = {
	0x01, 0x00, 0x05, 0x80
};
static char jdi_720p_cmd_on_cmd_3[] = {
	0x11, 0x00, 0x05, 0x80
};
static char jdi_720p_cmd_on_cmd_4[] = {
	0x29, 0x00, 0x05, 0x80
};
static char jdi_720p_cmd_on_cmd_5[] = {
	0x35, 0x00, 0x15, 0x80
};
static char jdi_720p_cmd_on_cmd_6[] = {
	0x04, 0x00, 0x39, 0xc0, 0xff, 0x12, 0x82, 0x01
};
static char jdi_720p_cmd_on_cmd_7[] = {
	0x00, 0x80, 0x15, 0x80
};
static char jdi_720p_cmd_on_cmd_8[] = {
	0xff, 0x12, 0x15, 0x80
};
static char jdi_720p_cmd_on_cmd_9[] = {
	0x00, 0x81, 0x15, 0x80
};
static char jdi_720p_cmd_on_cmd_10[] = {
	0xff, 0x82, 0x15, 0x80
};
static char jdi_720p_cmd_on_cmd_11[] = {
	0x00, 0xb4, 0x15, 0x80
};
static char jdi_720p_cmd_on_cmd_12[] = {
	0xc0, 0x40, 0x15, 0x80
};
static char jdi_720p_cmd_on_cmd_13[] = {
	0x08, 0x00, 0x39, 0xc0, 0x00, 0x80, 0xff, 0x00,
	0x00, 0x81, 0xff, 0x00
};
static char jdi_720p_cmd_on_cmd_14[] = {
	0x06, 0x00, 0x39, 0xc0, 0x00, 0x00, 0xff, 0x00,
	0x00, 0x00, 0xff, 0xff
};

static struct mipi_dsi_cmd jdi_720p_cmd_on_command[] = {
	{ sizeof(jdi_720p_cmd_on_cmd_0), jdi_720p_cmd_on_cmd_0, 120 },
	{ sizeof(jdi_720p_cmd_on_cmd_1), jdi_720p_cmd_on_cmd_1, 120 },
	{ sizeof(jdi_720p_cmd_on_cmd_2), jdi_720p_cmd_on_cmd_2, 100 },
	{ sizeof(jdi_720p_cmd_on_cmd_3), jdi_720p_cmd_on_cmd_3, 100 },
	{ sizeof(jdi_720p_cmd_on_cmd_4), jdi_720p_cmd_on_cmd_4, 100 },
	{ sizeof(jdi_720p_cmd_on_cmd_5), jdi_720p_cmd_on_cmd_5, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_6), jdi_720p_cmd_on_cmd_6, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_7), jdi_720p_cmd_on_cmd_7, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_8), jdi_720p_cmd_on_cmd_8, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_9), jdi_720p_cmd_on_cmd_9, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_10), jdi_720p_cmd_on_cmd_10, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_11), jdi_720p_cmd_on_cmd_11, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_12), jdi_720p_cmd_on_cmd_12, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_13), jdi_720p_cmd_on_cmd_13, 10 },
	{ sizeof(jdi_720p_cmd_on_cmd_14), jdi_720p_cmd_on_cmd_14, 10 },
};

static char jdi_720p_cmd_off_cmd_0[] = {
	0x34, 0x00, 0x05, 0x80
};
static char jdi_720p_cmd_off_cmd_1[] = {
	0x28, 0x00, 0x05, 0x80
};
static char jdi_720p_cmd_off_cmd_2[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_720p_cmd_off_command[] = {
	{ sizeof(jdi_720p_cmd_off_cmd_0), jdi_720p_cmd_off_cmd_0, 10 },
	{ sizeof(jdi_720p_cmd_off_cmd_1), jdi_720p_cmd_off_cmd_1, 10 },
	{ sizeof(jdi_720p_cmd_off_cmd_2), jdi_720p_cmd_off_cmd_2, 120 },
};

static struct command_state jdi_720p_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info jdi_720p_cmd_command_panel = {
	/* FIXME: This is a command mode panel */
};

static struct videopanel_info jdi_720p_cmd_video_panel = {
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

static struct lane_configuration jdi_720p_cmd_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t jdi_720p_cmd_timings[] = {
	0x6e, 0x26, 0x1b, 0x00, 0x35, 0x34, 0x20, 0x28, 0x17, 0x03, 0x04, 0x00
};

static struct panel_timing jdi_720p_cmd_timing_info = {
	.tclk_post = 0x20,
	.tclk_pre = 0x2a,
};

static struct panel_reset_sequence jdi_720p_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 200, 20 },
	.pin_direction = 2,
};

static struct backlight jdi_720p_cmd_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_jdi_720p_cmd_select(struct panel_struct *panel,
					     struct msm_panel_info *pinfo,
					     struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &jdi_720p_cmd_panel_data;
	panel->panelres = &jdi_720p_cmd_panel_res;
	panel->color = &jdi_720p_cmd_color;
	panel->videopanel = &jdi_720p_cmd_video_panel;
	panel->commandpanel = &jdi_720p_cmd_command_panel;
	panel->state = &jdi_720p_cmd_state;
	panel->laneconfig = &jdi_720p_cmd_lane_config;
	panel->paneltiminginfo = &jdi_720p_cmd_timing_info;
	panel->panelresetseq = &jdi_720p_cmd_reset_seq;
	panel->backlightinfo = &jdi_720p_cmd_backlight;
	pinfo->mipi.panel_cmds = jdi_720p_cmd_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(jdi_720p_cmd_on_command);
	memcpy(phy_db->timing, jdi_720p_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_JDI_720P_CMD_H_ */
