// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode otm8018b_mode = {
	.clock = (480 + 80 + 8 + 54) * (854 + 12 + 2 + 16) * 60 / 1000,
	.hdisplay = 480,
	.hsync_start = 480 + 80,
	.hsync_end = 480 + 80 + 8,
	.htotal = 480 + 80 + 8 + 54,
	.vdisplay = 854,
	.vsync_start = 854 + 12,
	.vsync_end = 854 + 12 + 2,
	.vtotal = 854 + 12 + 2 + 16,
	.width_mm = 0,
	.height_mm = 0,
};

static const struct panel_desc_dsi otm8018b = {
	.desc = {
		.modes = &otm8018b_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 0,
			.height = 0,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS | MIPI_DSI_MODE_LPM,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 2,
};
