// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_RENESAS_JDI_1080P_PANEL_H_
#define _PANEL_RENESAS_JDI_1080P_PANEL_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config renesas_jdi_1080p_panel_panel_data = {
	.panel_node_id = "somc,renesas_jdi_1080p_panel",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution renesas_jdi_1080p_panel_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 112,
	.hback_porch = 76,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 27,
	.vback_porch = 4,
	.vpulse_width = 4,
	/* Borders not supported yet */
};

static struct color_info renesas_jdi_1080p_panel_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char renesas_jdi_1080p_panel_on_cmd_0[] = {
	0x01, 0x00, 0x05, 0x80
};
static char renesas_jdi_1080p_panel_on_cmd_1[] = {
	0xb0, 0x00, 0x23, 0x80
};
static char renesas_jdi_1080p_panel_on_cmd_2[] = {
	0x00, 0x00, 0x23, 0x80
};
static char renesas_jdi_1080p_panel_on_cmd_3[] = {
	0x00, 0x00, 0x23, 0x80
};
static char renesas_jdi_1080p_panel_on_cmd_4[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc7, 0x08, 0x12, 0x1b,
	0x24, 0x31, 0x48, 0x40, 0x52, 0x5e, 0x61, 0x6a,
	0x76, 0x08, 0x12, 0x1b, 0x24, 0x31, 0x48, 0x40,
	0x52, 0x5e, 0x61, 0x6a, 0x76, 0xff, 0xff, 0xff
};
static char renesas_jdi_1080p_panel_on_cmd_5[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc8, 0x08, 0x12, 0x1b,
	0x24, 0x31, 0x49, 0x41, 0x53, 0x5e, 0x61, 0x6a,
	0x76, 0x08, 0x12, 0x1b, 0x24, 0x31, 0x49, 0x41,
	0x53, 0x5e, 0x61, 0x6a, 0x76, 0xff, 0xff, 0xff
};
static char renesas_jdi_1080p_panel_on_cmd_6[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc9, 0x08, 0x12, 0x1b,
	0x24, 0x31, 0x47, 0x3f, 0x52, 0x5e, 0x61, 0x6a,
	0x76, 0x08, 0x12, 0x1b, 0x24, 0x31, 0x47, 0x3f,
	0x52, 0x5e, 0x61, 0x6a, 0x76, 0xff, 0xff, 0xff
};
static char renesas_jdi_1080p_panel_on_cmd_7[] = {
	0x1b, 0x00, 0x29, 0xc0, 0xd3, 0x1b, 0x33, 0xbb,
	0xcc, 0xc4, 0x33, 0x33, 0x33, 0x00, 0x01, 0x00,
	0xa0, 0xd8, 0xa0, 0x06, 0x2b, 0x33, 0x33, 0x22,
	0x70, 0x02, 0x2b, 0x43, 0x3d, 0xbf, 0x99, 0xff
};
static char renesas_jdi_1080p_panel_on_cmd_8[] = {
	0xd6, 0x01, 0x23, 0x80
};
static char renesas_jdi_1080p_panel_on_cmd_9[] = {
	0x11, 0x00, 0x05, 0x80
};
static char renesas_jdi_1080p_panel_on_cmd_10[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd renesas_jdi_1080p_panel_on_command[] = {
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_0), renesas_jdi_1080p_panel_on_cmd_0, 5 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_1), renesas_jdi_1080p_panel_on_cmd_1, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_2), renesas_jdi_1080p_panel_on_cmd_2, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_3), renesas_jdi_1080p_panel_on_cmd_3, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_4), renesas_jdi_1080p_panel_on_cmd_4, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_5), renesas_jdi_1080p_panel_on_cmd_5, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_6), renesas_jdi_1080p_panel_on_cmd_6, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_7), renesas_jdi_1080p_panel_on_cmd_7, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_8), renesas_jdi_1080p_panel_on_cmd_8, 0 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_9), renesas_jdi_1080p_panel_on_cmd_9, 120 },
	{ sizeof(renesas_jdi_1080p_panel_on_cmd_10), renesas_jdi_1080p_panel_on_cmd_10, 0 },
};

static char renesas_jdi_1080p_panel_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char renesas_jdi_1080p_panel_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd renesas_jdi_1080p_panel_off_command[] = {
	{ sizeof(renesas_jdi_1080p_panel_off_cmd_0), renesas_jdi_1080p_panel_off_cmd_0, 20 },
	{ sizeof(renesas_jdi_1080p_panel_off_cmd_1), renesas_jdi_1080p_panel_off_cmd_1, 80 },
};

static struct command_state renesas_jdi_1080p_panel_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info renesas_jdi_1080p_panel_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info renesas_jdi_1080p_panel_video_panel = {
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

static struct lane_configuration renesas_jdi_1080p_panel_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t renesas_jdi_1080p_panel_timings[] = {
	0xe6, 0x38, 0x26, 0x00, 0x68, 0x6c, 0x2a, 0x3c, 0x2c, 0x03, 0x04, 0x00
};

static struct panel_timing renesas_jdi_1080p_panel_timing_info = {
	.tclk_post = 0x02,
	.tclk_pre = 0x2b,
};

static struct backlight renesas_jdi_1080p_panel_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_renesas_jdi_1080p_panel_select(struct panel_struct *panel,
							struct msm_panel_info *pinfo,
							struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &renesas_jdi_1080p_panel_panel_data;
	panel->panelres = &renesas_jdi_1080p_panel_panel_res;
	panel->color = &renesas_jdi_1080p_panel_color;
	panel->videopanel = &renesas_jdi_1080p_panel_video_panel;
	panel->commandpanel = &renesas_jdi_1080p_panel_command_panel;
	panel->state = &renesas_jdi_1080p_panel_state;
	panel->laneconfig = &renesas_jdi_1080p_panel_lane_config;
	panel->paneltiminginfo = &renesas_jdi_1080p_panel_timing_info;
	panel->panelresetseq = NULL;
	panel->backlightinfo = &renesas_jdi_1080p_panel_backlight;
	pinfo->mipi.panel_cmds = renesas_jdi_1080p_panel_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(renesas_jdi_1080p_panel_on_command);
	memcpy(phy_db->timing, renesas_jdi_1080p_panel_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_RENESAS_JDI_1080P_PANEL_H_ */
