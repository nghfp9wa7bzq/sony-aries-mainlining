// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode generic_mode = {
	.clock = (768 + 26 + 26 + 26) * (1280 + 2 + 2 + 2) * 60 / 1000,
	.hdisplay = 768,
	.hsync_start = 768 + 26,
	.hsync_end = 768 + 26 + 26,
	.htotal = 768 + 26 + 26 + 26,
	.vdisplay = 1280,
	.vsync_start = 1280 + 2,
	.vsync_end = 1280 + 2 + 2,
	.vtotal = 1280 + 2 + 2 + 2,
	.width_mm = 0,
	.height_mm = 0,
};

static const struct panel_desc_dsi generic = {
	.desc = {
		.modes = &generic_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 0,
			.height = 0,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_NO_EOT_PACKET | MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
