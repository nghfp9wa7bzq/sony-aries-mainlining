// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode default_0_mode = {
	.clock = (1200 + 12 + 8 + 8) * (1920 + 102 + 4 + 4) * 60 / 1000,
	.hdisplay = 1200,
	.hsync_start = 1200 + 12,
	.hsync_end = 1200 + 12 + 8,
	.htotal = 1200 + 12 + 8 + 8,
	.vdisplay = 1920,
	.vsync_start = 1920 + 102,
	.vsync_end = 1920 + 102 + 4,
	.vtotal = 1920 + 102 + 4 + 4,
	.width_mm = 108,
	.height_mm = 172,
};

static const struct panel_desc_dsi default_0 = {
	.desc = {
		.modes = &default_0_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 108,
			.height = 172,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
