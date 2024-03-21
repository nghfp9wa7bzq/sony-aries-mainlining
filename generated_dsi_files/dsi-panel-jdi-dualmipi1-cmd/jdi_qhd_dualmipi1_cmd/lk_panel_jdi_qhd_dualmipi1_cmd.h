// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_JDI_QHD_DUALMIPI1_CMD_H_
#define _PANEL_JDI_QHD_DUALMIPI1_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config jdi_qhd_dualmipi1_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_jdi_qhd_dualmipi1_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution jdi_qhd_dualmipi1_cmd_panel_res = {
	.panel_width = 1280,
	.panel_height = 1440,
	.hfront_porch = 120,
	.hback_porch = 44,
	.hpulse_width = 16,
	.hsync_skew = 0,
	.vfront_porch = 8,
	.vback_porch = 4,
	.vpulse_width = 4,
	/* Borders not supported yet */
};

static struct color_info jdi_qhd_dualmipi1_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char jdi_qhd_dualmipi1_cmd_on_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb0, 0x03, 0xff, 0xff
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_1[] = {
	0x00, 0x00, 0x05, 0x80
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_2[] = {
	0x3a, 0x77, 0x15, 0x80
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_3[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2a, 0x00, 0x00, 0x04,
	0xff, 0xff, 0xff, 0xff
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_4[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2b, 0x00, 0x00, 0x05,
	0x9f, 0xff, 0xff, 0xff
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_5[] = {
	0x35, 0x00, 0x15, 0x80
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_6[] = {
	0x03, 0x00, 0x39, 0xc0, 0x44, 0x00, 0x00, 0xff
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_7[] = {
	0x51, 0xff, 0x15, 0x80
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_8[] = {
	0x53, 0x24, 0x15, 0x80
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_9[] = {
	0x55, 0x00, 0x15, 0x80
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_10[] = {
	0x11, 0x00, 0x05, 0x80
};
static char jdi_qhd_dualmipi1_cmd_on_cmd_11[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_qhd_dualmipi1_cmd_on_command[] = {
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_0), jdi_qhd_dualmipi1_cmd_on_cmd_0, 0 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_1), jdi_qhd_dualmipi1_cmd_on_cmd_1, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_2), jdi_qhd_dualmipi1_cmd_on_cmd_2, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_3), jdi_qhd_dualmipi1_cmd_on_cmd_3, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_4), jdi_qhd_dualmipi1_cmd_on_cmd_4, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_5), jdi_qhd_dualmipi1_cmd_on_cmd_5, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_6), jdi_qhd_dualmipi1_cmd_on_cmd_6, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_7), jdi_qhd_dualmipi1_cmd_on_cmd_7, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_8), jdi_qhd_dualmipi1_cmd_on_cmd_8, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_9), jdi_qhd_dualmipi1_cmd_on_cmd_9, 10 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_10), jdi_qhd_dualmipi1_cmd_on_cmd_10, 120 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_on_cmd_11), jdi_qhd_dualmipi1_cmd_on_cmd_11, 16 },
};

static char jdi_qhd_dualmipi1_cmd_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char jdi_qhd_dualmipi1_cmd_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_qhd_dualmipi1_cmd_off_command[] = {
	{ sizeof(jdi_qhd_dualmipi1_cmd_off_cmd_0), jdi_qhd_dualmipi1_cmd_off_cmd_0, 50 },
	{ sizeof(jdi_qhd_dualmipi1_cmd_off_cmd_1), jdi_qhd_dualmipi1_cmd_off_cmd_1, 120 },
};

static struct command_state jdi_qhd_dualmipi1_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info jdi_qhd_dualmipi1_cmd_command_panel = {
	/* FIXME: This is a command mode panel */
};

static struct videopanel_info jdi_qhd_dualmipi1_cmd_video_panel = {
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

static struct lane_configuration jdi_qhd_dualmipi1_cmd_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t jdi_qhd_dualmipi1_cmd_timings[] = {
	0xcd, 0x32, 0x22, 0x00, 0x60, 0x64, 0x26, 0x34, 0x29, 0x03, 0x04, 0x00
};

static struct panel_timing jdi_qhd_dualmipi1_cmd_timing_info = {
	.tclk_post = 0x03,
	.tclk_pre = 0x27,
};

static struct panel_reset_sequence jdi_qhd_dualmipi1_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 200, 200, 20 },
	.pin_direction = 2,
};

static inline void panel_jdi_qhd_dualmipi1_cmd_select(struct panel_struct *panel,
						      struct msm_panel_info *pinfo,
						      struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &jdi_qhd_dualmipi1_cmd_panel_data;
	panel->panelres = &jdi_qhd_dualmipi1_cmd_panel_res;
	panel->color = &jdi_qhd_dualmipi1_cmd_color;
	panel->videopanel = &jdi_qhd_dualmipi1_cmd_video_panel;
	panel->commandpanel = &jdi_qhd_dualmipi1_cmd_command_panel;
	panel->state = &jdi_qhd_dualmipi1_cmd_state;
	panel->laneconfig = &jdi_qhd_dualmipi1_cmd_lane_config;
	panel->paneltiminginfo = &jdi_qhd_dualmipi1_cmd_timing_info;
	panel->panelresetseq = &jdi_qhd_dualmipi1_cmd_reset_seq;
	panel->backlightinfo = NULL;
	pinfo->mipi.panel_cmds = jdi_qhd_dualmipi1_cmd_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(jdi_qhd_dualmipi1_cmd_on_command);
	memcpy(phy_db->timing, jdi_qhd_dualmipi1_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_JDI_QHD_DUALMIPI1_CMD_H_ */
