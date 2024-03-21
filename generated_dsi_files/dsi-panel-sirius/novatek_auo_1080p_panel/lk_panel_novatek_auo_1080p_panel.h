// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NOVATEK_AUO_1080P_PANEL_H_
#define _PANEL_NOVATEK_AUO_1080P_PANEL_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config novatek_auo_1080p_panel_panel_data = {
	.panel_node_id = "somc,novatek_auo_1080p_panel",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution novatek_auo_1080p_panel_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 104,
	.hback_porch = 56,
	.hpulse_width = 20,
	.hsync_skew = 0,
	.vfront_porch = 6,
	.vback_porch = 46,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info novatek_auo_1080p_panel_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char novatek_auo_1080p_panel_on_cmd_0[] = {
	0xff, 0x05, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_1[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_2[] = {
	0x93, 0x06, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_3[] = {
	0x94, 0x30, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_4[] = {
	0xff, 0x00, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_5[] = {
	0xff, 0x01, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_6[] = {
	0x01, 0x55, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_7[] = {
	0x15, 0x0f, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_8[] = {
	0x16, 0x0f, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_9[] = {
	0x1b, 0x1b, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_10[] = {
	0x1c, 0xf7, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_11[] = {
	0x60, 0x0f, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_12[] = {
	0x58, 0x82, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_13[] = {
	0x59, 0x00, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_14[] = {
	0x5a, 0x02, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_15[] = {
	0x5b, 0x00, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_16[] = {
	0x5c, 0x82, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_17[] = {
	0x5d, 0x80, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_18[] = {
	0x5e, 0x02, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_19[] = {
	0x5f, 0x00, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_20[] = {
	0x66, 0x01, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_21[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_22[] = {
	0xff, 0x05, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_23[] = {
	0x54, 0x75, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_24[] = {
	0x85, 0x05, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_25[] = {
	0xa6, 0x04, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_26[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_27[] = {
	0xff, 0xff, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_28[] = {
	0x4f, 0x03, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_29[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_30[] = {
	0xff, 0x00, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_31[] = {
	0x35, 0x01, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_32[] = {
	0xd3, 0x30, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_33[] = {
	0xd4, 0x06, 0x15, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_34[] = {
	0x11, 0x00, 0x05, 0x80
};
static char novatek_auo_1080p_panel_on_cmd_35[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_auo_1080p_panel_on_command[] = {
	{ sizeof(novatek_auo_1080p_panel_on_cmd_0), novatek_auo_1080p_panel_on_cmd_0, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_1), novatek_auo_1080p_panel_on_cmd_1, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_2), novatek_auo_1080p_panel_on_cmd_2, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_3), novatek_auo_1080p_panel_on_cmd_3, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_4), novatek_auo_1080p_panel_on_cmd_4, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_5), novatek_auo_1080p_panel_on_cmd_5, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_6), novatek_auo_1080p_panel_on_cmd_6, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_7), novatek_auo_1080p_panel_on_cmd_7, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_8), novatek_auo_1080p_panel_on_cmd_8, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_9), novatek_auo_1080p_panel_on_cmd_9, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_10), novatek_auo_1080p_panel_on_cmd_10, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_11), novatek_auo_1080p_panel_on_cmd_11, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_12), novatek_auo_1080p_panel_on_cmd_12, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_13), novatek_auo_1080p_panel_on_cmd_13, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_14), novatek_auo_1080p_panel_on_cmd_14, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_15), novatek_auo_1080p_panel_on_cmd_15, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_16), novatek_auo_1080p_panel_on_cmd_16, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_17), novatek_auo_1080p_panel_on_cmd_17, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_18), novatek_auo_1080p_panel_on_cmd_18, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_19), novatek_auo_1080p_panel_on_cmd_19, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_20), novatek_auo_1080p_panel_on_cmd_20, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_21), novatek_auo_1080p_panel_on_cmd_21, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_22), novatek_auo_1080p_panel_on_cmd_22, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_23), novatek_auo_1080p_panel_on_cmd_23, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_24), novatek_auo_1080p_panel_on_cmd_24, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_25), novatek_auo_1080p_panel_on_cmd_25, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_26), novatek_auo_1080p_panel_on_cmd_26, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_27), novatek_auo_1080p_panel_on_cmd_27, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_28), novatek_auo_1080p_panel_on_cmd_28, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_29), novatek_auo_1080p_panel_on_cmd_29, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_30), novatek_auo_1080p_panel_on_cmd_30, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_31), novatek_auo_1080p_panel_on_cmd_31, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_32), novatek_auo_1080p_panel_on_cmd_32, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_33), novatek_auo_1080p_panel_on_cmd_33, 0 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_34), novatek_auo_1080p_panel_on_cmd_34, 100 },
	{ sizeof(novatek_auo_1080p_panel_on_cmd_35), novatek_auo_1080p_panel_on_cmd_35, 100 },
};

static char novatek_auo_1080p_panel_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char novatek_auo_1080p_panel_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd novatek_auo_1080p_panel_off_command[] = {
	{ sizeof(novatek_auo_1080p_panel_off_cmd_0), novatek_auo_1080p_panel_off_cmd_0, 20 },
	{ sizeof(novatek_auo_1080p_panel_off_cmd_1), novatek_auo_1080p_panel_off_cmd_1, 100 },
};

static struct command_state novatek_auo_1080p_panel_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info novatek_auo_1080p_panel_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info novatek_auo_1080p_panel_video_panel = {
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

static struct lane_configuration novatek_auo_1080p_panel_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t novatek_auo_1080p_panel_timings[] = {
	0xe6, 0x38, 0x26, 0x00, 0x68, 0x6c, 0x2a, 0x3c, 0x2c, 0x03, 0x04, 0x00
};

static struct panel_timing novatek_auo_1080p_panel_timing_info = {
	.tclk_post = 0x02,
	.tclk_pre = 0x2b,
};

static struct backlight novatek_auo_1080p_panel_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_novatek_auo_1080p_panel_select(struct panel_struct *panel,
							struct msm_panel_info *pinfo,
							struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &novatek_auo_1080p_panel_panel_data;
	panel->panelres = &novatek_auo_1080p_panel_panel_res;
	panel->color = &novatek_auo_1080p_panel_color;
	panel->videopanel = &novatek_auo_1080p_panel_video_panel;
	panel->commandpanel = &novatek_auo_1080p_panel_command_panel;
	panel->state = &novatek_auo_1080p_panel_state;
	panel->laneconfig = &novatek_auo_1080p_panel_lane_config;
	panel->paneltiminginfo = &novatek_auo_1080p_panel_timing_info;
	panel->panelresetseq = NULL;
	panel->backlightinfo = &novatek_auo_1080p_panel_backlight;
	pinfo->mipi.panel_cmds = novatek_auo_1080p_panel_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(novatek_auo_1080p_panel_on_command);
	memcpy(phy_db->timing, novatek_auo_1080p_panel_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NOVATEK_AUO_1080P_PANEL_H_ */
