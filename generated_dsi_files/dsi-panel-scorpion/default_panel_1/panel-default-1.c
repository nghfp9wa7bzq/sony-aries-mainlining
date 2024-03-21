// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/delay.h>
#include <linux/module.h>
#include <linux/of.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>

struct default_1 {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	bool prepared;
};

static inline struct default_1 *to_default_1(struct drm_panel *panel)
{
	return container_of(panel, struct default_1, panel);
}

static int default_1_on(struct default_1 *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	mipi_dsi_dcs_write_seq(dsi, 0x01);
	usleep_range(5000, 6000);
	mipi_dsi_generic_write_seq(dsi, 0xb0, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x04, 0x08, 0x00, 0x22, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb4, 0x0c);
	mipi_dsi_generic_write_seq(dsi, 0xb6, 0x3a, 0xd3);
	mipi_dsi_dcs_write_seq(dsi, 0x3a, 0x77);
	mipi_dsi_dcs_write_seq(dsi, 0x2a, 0x00, 0x00, 0x04, 0xaf);
	mipi_dsi_dcs_write_seq(dsi, 0x2b, 0x00, 0x00, 0x07, 0x7f);
	mipi_dsi_dcs_write_seq(dsi, 0x44, 0x00);
	mipi_dsi_dcs_write_seq(dsi, 0x35, 0x00);

	ret = mipi_dsi_dcs_exit_sleep_mode(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to exit sleep mode: %d\n", ret);
		return ret;
	}
	msleep(100);

	ret = mipi_dsi_dcs_set_display_on(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to set display on: %d\n", ret);
		return ret;
	}

	return 0;
}

static int default_1_off(struct default_1 *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	ret = mipi_dsi_dcs_set_display_off(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to set display off: %d\n", ret);
		return ret;
	}
	msleep(20);

	ret = mipi_dsi_dcs_enter_sleep_mode(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to enter sleep mode: %d\n", ret);
		return ret;
	}
	msleep(80);

	return 0;
}

static int default_1_prepare(struct drm_panel *panel)
{
	struct default_1 *ctx = to_default_1(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	ret = default_1_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int default_1_unprepare(struct drm_panel *panel)
{
	struct default_1 *ctx = to_default_1(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = default_1_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);


	ctx->prepared = false;
	return 0;
}

static const struct drm_display_mode default_1_mode = {
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

static int default_1_get_modes(struct drm_panel *panel,
			       struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &default_1_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs default_1_panel_funcs = {
	.prepare = default_1_prepare,
	.unprepare = default_1_unprepare,
	.get_modes = default_1_get_modes,
};

static int default_1_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct default_1 *ctx;
	int ret;

	ctx = devm_kzalloc(dev, sizeof(*ctx), GFP_KERNEL);
	if (!ctx)
		return -ENOMEM;

	ctx->dsi = dsi;
	mipi_dsi_set_drvdata(dsi, ctx);

	dsi->lanes = 4;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO_HSE |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	drm_panel_init(&ctx->panel, dev, &default_1_panel_funcs,
		       DRM_MODE_CONNECTOR_DSI);
	ctx->panel.prepare_prev_first = true;

	ret = drm_panel_of_backlight(&ctx->panel);
	if (ret)
		return dev_err_probe(dev, ret, "Failed to get backlight\n");

	drm_panel_add(&ctx->panel);

	ret = mipi_dsi_attach(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to attach to DSI host: %d\n", ret);
		drm_panel_remove(&ctx->panel);
		return ret;
	}

	return 0;
}

static void default_1_remove(struct mipi_dsi_device *dsi)
{
	struct default_1 *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id default_1_of_match[] = {
	{ .compatible = "default,1" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, default_1_of_match);

static struct mipi_dsi_driver default_1_driver = {
	.probe = default_1_probe,
	.remove = default_1_remove,
	.driver = {
		.name = "panel-default-1",
		.of_match_table = default_1_of_match,
	},
};
module_mipi_dsi_driver(default_1_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for default cmd 1");
MODULE_LICENSE("GPL");
