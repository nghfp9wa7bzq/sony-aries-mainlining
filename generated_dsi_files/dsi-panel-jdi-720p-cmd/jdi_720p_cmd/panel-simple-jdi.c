// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode jdi_mode = {
	.clock = (720 + 130 + 8 + 130) * (1280 + 32 + 4 + 32) * 50 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 130,
	.hsync_end = 720 + 130 + 8,
	.htotal = 720 + 130 + 8 + 130,
	.vdisplay = 1280,
	.vsync_start = 1280 + 32,
	.vsync_end = 1280 + 32 + 4,
	.vtotal = 1280 + 32 + 4 + 32,
	.width_mm = 0,
	.height_mm = 0,
};

static const struct panel_desc_dsi jdi = {
	.desc = {
		.modes = &jdi_mode,
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
