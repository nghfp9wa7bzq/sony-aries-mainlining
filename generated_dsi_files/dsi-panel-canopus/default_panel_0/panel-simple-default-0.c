// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode default_0_mode = {
	.clock = (1080 + 112 + 4 + 76) * (1920 + 31 + 4 + 4) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 112,
	.hsync_end = 1080 + 112 + 4,
	.htotal = 1080 + 112 + 4 + 76,
	.vdisplay = 1920,
	.vsync_start = 1920 + 31,
	.vsync_end = 1920 + 31 + 4,
	.vtotal = 1920 + 31 + 4 + 4,
	.width_mm = 62,
	.height_mm = 110,
};

static const struct panel_desc_dsi default_0 = {
	.desc = {
		.modes = &default_0_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 62,
			.height = 110,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_HSE |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
