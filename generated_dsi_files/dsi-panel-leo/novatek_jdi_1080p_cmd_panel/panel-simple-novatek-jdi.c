// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode novatek_jdi_mode = {
	.clock = (1080 + 56 + 8 + 8) * (1920 + 233 + 2 + 8) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 56,
	.hsync_end = 1080 + 56 + 8,
	.htotal = 1080 + 56 + 8 + 8,
	.vdisplay = 1920,
	.vsync_start = 1920 + 233,
	.vsync_end = 1920 + 233 + 2,
	.vtotal = 1920 + 233 + 2 + 8,
	.width_mm = 64,
	.height_mm = 114,
};

static const struct panel_desc_dsi novatek_jdi = {
	.desc = {
		.modes = &novatek_jdi_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 64,
			.height = 114,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
