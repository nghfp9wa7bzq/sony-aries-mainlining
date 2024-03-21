// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode novatek_jdi_mode = {
	.clock = (720 + 36 + 8 + 8) * (1280 + 251 + 5 + 4) * 60 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 36,
	.hsync_end = 720 + 36 + 8,
	.htotal = 720 + 36 + 8 + 8,
	.vdisplay = 1280,
	.vsync_start = 1280 + 251,
	.vsync_end = 1280 + 251 + 5,
	.vtotal = 1280 + 251 + 5 + 4,
	.width_mm = 56,
	.height_mm = 100,
};

static const struct panel_desc_dsi novatek_jdi = {
	.desc = {
		.modes = &novatek_jdi_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 56,
			.height = 100,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
