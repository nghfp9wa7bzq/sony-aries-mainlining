// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode hx8389b_mode = {
	.clock = (540 + 60 + 39 + 39) * (960 + 9 + 3 + 13) * 60 / 1000,
	.hdisplay = 540,
	.hsync_start = 540 + 60,
	.hsync_end = 540 + 60 + 39,
	.htotal = 540 + 60 + 39 + 39,
	.vdisplay = 960,
	.vsync_start = 960 + 9,
	.vsync_end = 960 + 9 + 3,
	.vtotal = 960 + 9 + 3 + 13,
	.width_mm = 0,
	.height_mm = 0,
};

static const struct panel_desc_dsi hx8389b = {
	.desc = {
		.modes = &hx8389b_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 0,
			.height = 0,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
		 MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS | MIPI_DSI_MODE_LPM,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 2,
};
