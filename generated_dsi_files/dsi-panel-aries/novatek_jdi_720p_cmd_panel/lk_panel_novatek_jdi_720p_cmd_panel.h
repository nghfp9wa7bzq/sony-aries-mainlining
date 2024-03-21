// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NOVATEK_JDI_720P_CMD_PANEL_H_
#define _PANEL_NOVATEK_JDI_720P_CMD_PANEL_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config novatek_jdi_720p_cmd_panel_panel_data = {
	.panel_node_id = "somc,novatek_jdi_720p_cmd_panel",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution novatek_jdi_720p_cmd_panel_panel_res = {
	.panel_width = 720,
	.panel_height = 1280,
	.hfront_porch = 36,
	.hback_porch = 8,
	.hpulse_width = 8,
	.hsync_skew = 0,
	.vfront_porch = 251,
	.vback_porch = 4,
	.vpulse_width = 5,
	/* Borders not supported yet */
};

static struct color_info novatek_jdi_720p_cmd_panel_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char novatek_jdi_720p_cmd_panel_on_cmd_0[] = {
	0xba, 0x03, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_1[] = {
	0xc2, 0x08, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_2[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_3[] = {
	0xff, 0x05, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_4[] = {
	0x02, 0x8e, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_5[] = {
	0xa2, 0x00, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_6[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_7[] = {
	0xff, 0xee, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_8[] = {
	0x12, 0x50, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_9[] = {
	0x13, 0x02, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_10[] = {
	0x6a, 0x60, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_11[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_12[] = {
	0xff, 0x00, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_13[] = {
	0x11, 0x00, 0x05, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_14[] = {
	0x35, 0x00, 0x15, 0x80
};
static char novatek_jdi_720p_cmd_panel_on_cmd_15[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_jdi_720p_cmd_panel_on_command[] = {
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_0), novatek_jdi_720p_cmd_panel_on_cmd_0, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_1), novatek_jdi_720p_cmd_panel_on_cmd_1, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_2), novatek_jdi_720p_cmd_panel_on_cmd_2, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_3), novatek_jdi_720p_cmd_panel_on_cmd_3, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_4), novatek_jdi_720p_cmd_panel_on_cmd_4, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_5), novatek_jdi_720p_cmd_panel_on_cmd_5, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_6), novatek_jdi_720p_cmd_panel_on_cmd_6, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_7), novatek_jdi_720p_cmd_panel_on_cmd_7, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_8), novatek_jdi_720p_cmd_panel_on_cmd_8, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_9), novatek_jdi_720p_cmd_panel_on_cmd_9, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_10), novatek_jdi_720p_cmd_panel_on_cmd_10, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_11), novatek_jdi_720p_cmd_panel_on_cmd_11, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_12), novatek_jdi_720p_cmd_panel_on_cmd_12, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_13), novatek_jdi_720p_cmd_panel_on_cmd_13, 100 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_14), novatek_jdi_720p_cmd_panel_on_cmd_14, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_on_cmd_15), novatek_jdi_720p_cmd_panel_on_cmd_15, 0 },
};

static char novatek_jdi_720p_cmd_panel_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char novatek_jdi_720p_cmd_panel_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_jdi_720p_cmd_panel_off_command[] = {
	{ sizeof(novatek_jdi_720p_cmd_panel_off_cmd_0), novatek_jdi_720p_cmd_panel_off_cmd_0, 0 },
	{ sizeof(novatek_jdi_720p_cmd_panel_off_cmd_1), novatek_jdi_720p_cmd_panel_off_cmd_1, 100 },
};

static struct command_state novatek_jdi_720p_cmd_panel_state = {
	.oncommand_state = 1,
	.offcommand_state = 1,
};

static struct commandpanel_info novatek_jdi_720p_cmd_panel_command_panel = {
	/* FIXME: This is a command mode panel */
};

static struct videopanel_info novatek_jdi_720p_cmd_panel_video_panel = {
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

static struct lane_configuration novatek_jdi_720p_cmd_panel_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t novatek_jdi_720p_cmd_panel_timings[] = {
	0x7a, 0x1a, 0x12, 0x00, 0x3e, 0x42, 0x16, 0x20, 0x14, 0x03, 0x04, 0x00
};

static struct panel_timing novatek_jdi_720p_cmd_panel_timing_info = {
	.tclk_post = 0x11,
	.tclk_pre = 0x1a,
};

static struct backlight novatek_jdi_720p_cmd_panel_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_novatek_jdi_720p_cmd_panel_select(struct panel_struct *panel,
							   struct msm_panel_info *pinfo,
							   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &novatek_jdi_720p_cmd_panel_panel_data;
	panel->panelres = &novatek_jdi_720p_cmd_panel_panel_res;
	panel->color = &novatek_jdi_720p_cmd_panel_color;
	panel->videopanel = &novatek_jdi_720p_cmd_panel_video_panel;
	panel->commandpanel = &novatek_jdi_720p_cmd_panel_command_panel;
	panel->state = &novatek_jdi_720p_cmd_panel_state;
	panel->laneconfig = &novatek_jdi_720p_cmd_panel_lane_config;
	panel->paneltiminginfo = &novatek_jdi_720p_cmd_panel_timing_info;
	panel->panelresetseq = NULL;
	panel->backlightinfo = &novatek_jdi_720p_cmd_panel_backlight;
	pinfo->mipi.panel_cmds = novatek_jdi_720p_cmd_panel_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(novatek_jdi_720p_cmd_panel_on_command);
	memcpy(phy_db->timing, novatek_jdi_720p_cmd_panel_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NOVATEK_JDI_720P_CMD_PANEL_H_ */
