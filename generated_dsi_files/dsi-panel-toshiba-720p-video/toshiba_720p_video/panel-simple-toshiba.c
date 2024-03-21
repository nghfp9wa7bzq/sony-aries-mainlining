// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode toshiba_mode = {
	.clock = (720 + 144 + 12 + 32) * (1280 + 9 + 4 + 3) * 60 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 144,
	.hsync_end = 720 + 144 + 12,
	.htotal = 720 + 144 + 12 + 32,
	.vdisplay = 1280,
	.vsync_start = 1280 + 9,
	.vsync_end = 1280 + 9 + 4,
	.vtotal = 1280 + 9 + 4 + 3,
	.width_mm = 0,
	.height_mm = 0,
};

static const struct panel_desc_dsi toshiba = {
	.desc = {
		.modes = &toshiba_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 0,
			.height = 0,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
