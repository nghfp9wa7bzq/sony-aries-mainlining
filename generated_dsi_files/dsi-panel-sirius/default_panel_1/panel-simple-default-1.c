// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode default_1_mode = {
	.clock = (1080 + 128 + 4 + 76) * (1920 + 4 + 2 + 3) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 128,
	.hsync_end = 1080 + 128 + 4,
	.htotal = 1080 + 128 + 4 + 76,
	.vdisplay = 1920,
	.vsync_start = 1920 + 4,
	.vsync_end = 1920 + 4 + 2,
	.vtotal = 1920 + 4 + 2 + 3,
	.width_mm = 64,
	.height_mm = 114,
};

static const struct panel_desc_dsi default_1 = {
	.desc = {
		.modes = &default_1_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 64,
			.height = 114,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_HSE |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
