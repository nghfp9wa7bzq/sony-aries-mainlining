// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_DSI_JDI_QHD_VIDEO_1_H_
#define _PANEL_DSI_JDI_QHD_VIDEO_1_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config dsi_jdi_qhd_video_1_panel_data = {
	.panel_node_id = "qcom,dsi_jdi_qhd_video_1",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution dsi_jdi_qhd_video_1_panel_res = {
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

static struct color_info dsi_jdi_qhd_video_1_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char dsi_jdi_qhd_video_1_on_cmd_0[] = {
	0x00, 0x00, 0x05, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_1[] = {
	0x3a, 0x77, 0x15, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_2[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2a, 0x00, 0x00, 0x04,
	0xff, 0xff, 0xff, 0xff
};
static char dsi_jdi_qhd_video_1_on_cmd_3[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2b, 0x00, 0x00, 0x05,
	0x9f, 0xff, 0xff, 0xff
};
static char dsi_jdi_qhd_video_1_on_cmd_4[] = {
	0x35, 0x00, 0x15, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_5[] = {
	0x03, 0x00, 0x39, 0xc0, 0x44, 0x00, 0x00, 0xff
};
static char dsi_jdi_qhd_video_1_on_cmd_6[] = {
	0x51, 0xff, 0x15, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_7[] = {
	0x53, 0x24, 0x15, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_8[] = {
	0x55, 0x00, 0x15, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_9[] = {
	0x11, 0x00, 0x05, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_10[] = {
	0xb0, 0x00, 0x23, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_11[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb3, 0x14, 0xff, 0xff
};
static char dsi_jdi_qhd_video_1_on_cmd_12[] = {
	0x14, 0x00, 0x29, 0xc0, 0xce, 0x7d, 0x40, 0x48,
	0x56, 0x67, 0x78, 0x88, 0x98, 0xa7, 0xb5, 0xc3,
	0xd1, 0xde, 0xe9, 0xf2, 0xfa, 0xff, 0x04, 0x00
};
static char dsi_jdi_qhd_video_1_on_cmd_13[] = {
	0xb0, 0x03, 0x23, 0x80
};
static char dsi_jdi_qhd_video_1_on_cmd_14[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd dsi_jdi_qhd_video_1_on_command[] = {
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_0), dsi_jdi_qhd_video_1_on_cmd_0, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_1), dsi_jdi_qhd_video_1_on_cmd_1, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_2), dsi_jdi_qhd_video_1_on_cmd_2, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_3), dsi_jdi_qhd_video_1_on_cmd_3, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_4), dsi_jdi_qhd_video_1_on_cmd_4, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_5), dsi_jdi_qhd_video_1_on_cmd_5, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_6), dsi_jdi_qhd_video_1_on_cmd_6, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_7), dsi_jdi_qhd_video_1_on_cmd_7, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_8), dsi_jdi_qhd_video_1_on_cmd_8, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_9), dsi_jdi_qhd_video_1_on_cmd_9, 120 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_10), dsi_jdi_qhd_video_1_on_cmd_10, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_11), dsi_jdi_qhd_video_1_on_cmd_11, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_12), dsi_jdi_qhd_video_1_on_cmd_12, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_13), dsi_jdi_qhd_video_1_on_cmd_13, 10 },
	{ sizeof(dsi_jdi_qhd_video_1_on_cmd_14), dsi_jdi_qhd_video_1_on_cmd_14, 16 },
};

static char dsi_jdi_qhd_video_1_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char dsi_jdi_qhd_video_1_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd dsi_jdi_qhd_video_1_off_command[] = {
	{ sizeof(dsi_jdi_qhd_video_1_off_cmd_0), dsi_jdi_qhd_video_1_off_cmd_0, 50 },
	{ sizeof(dsi_jdi_qhd_video_1_off_cmd_1), dsi_jdi_qhd_video_1_off_cmd_1, 120 },
};

static struct command_state dsi_jdi_qhd_video_1_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info dsi_jdi_qhd_video_1_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info dsi_jdi_qhd_video_1_video_panel = {
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

static struct lane_configuration dsi_jdi_qhd_video_1_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t dsi_jdi_qhd_video_1_timings[] = {
	0xcd, 0x32, 0x22, 0x00, 0x60, 0x64, 0x26, 0x34, 0x29, 0x03, 0x04, 0x00
};

static struct panel_timing dsi_jdi_qhd_video_1_timing_info = {
	.tclk_post = 0x03,
	.tclk_pre = 0x27,
};

static struct panel_reset_sequence dsi_jdi_qhd_video_1_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 200, 20 },
	.pin_direction = 2,
};

static inline void panel_dsi_jdi_qhd_video_1_select(struct panel_struct *panel,
						    struct msm_panel_info *pinfo,
						    struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &dsi_jdi_qhd_video_1_panel_data;
	panel->panelres = &dsi_jdi_qhd_video_1_panel_res;
	panel->color = &dsi_jdi_qhd_video_1_color;
	panel->videopanel = &dsi_jdi_qhd_video_1_video_panel;
	panel->commandpanel = &dsi_jdi_qhd_video_1_command_panel;
	panel->state = &dsi_jdi_qhd_video_1_state;
	panel->laneconfig = &dsi_jdi_qhd_video_1_lane_config;
	panel->paneltiminginfo = &dsi_jdi_qhd_video_1_timing_info;
	panel->panelresetseq = &dsi_jdi_qhd_video_1_reset_seq;
	panel->backlightinfo = NULL;
	pinfo->mipi.panel_cmds = dsi_jdi_qhd_video_1_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(dsi_jdi_qhd_video_1_on_command);
	memcpy(phy_db->timing, dsi_jdi_qhd_video_1_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_DSI_JDI_QHD_VIDEO_1_H_ */
