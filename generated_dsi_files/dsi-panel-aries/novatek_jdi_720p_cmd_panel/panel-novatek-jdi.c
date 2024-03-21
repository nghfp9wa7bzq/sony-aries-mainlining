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

struct novatek_jdi {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	bool prepared;
};

static inline struct novatek_jdi *to_novatek_jdi(struct drm_panel *panel)
{
	return container_of(panel, struct novatek_jdi, panel);
}

static int novatek_jdi_on(struct novatek_jdi *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	mipi_dsi_dcs_write_seq(dsi, 0xba, 0x03);
	mipi_dsi_dcs_write_seq(dsi, 0xc2, 0x08);
	mipi_dsi_dcs_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_dcs_write_seq(dsi, 0xff, 0x05);
	mipi_dsi_dcs_write_seq(dsi, 0x02, 0x8e);
	mipi_dsi_dcs_write_seq(dsi, 0xa2, 0x00);
	mipi_dsi_dcs_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_dcs_write_seq(dsi, 0xff, 0xee);
	mipi_dsi_dcs_write_seq(dsi, 0x12, 0x50);
	mipi_dsi_dcs_write_seq(dsi, 0x13, 0x02);
	mipi_dsi_dcs_write_seq(dsi, 0x6a, 0x60);
	mipi_dsi_dcs_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_dcs_write_seq(dsi, 0xff, 0x00);

	ret = mipi_dsi_dcs_exit_sleep_mode(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to exit sleep mode: %d\n", ret);
		return ret;
	}
	msleep(100);

	mipi_dsi_dcs_write_seq(dsi, 0x35, 0x00);

	ret = mipi_dsi_dcs_set_display_on(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to set display on: %d\n", ret);
		return ret;
	}

	return 0;
}

static int novatek_jdi_off(struct novatek_jdi *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	ret = mipi_dsi_dcs_set_display_off(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to set display off: %d\n", ret);
		return ret;
	}

	ret = mipi_dsi_dcs_enter_sleep_mode(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to enter sleep mode: %d\n", ret);
		return ret;
	}
	msleep(100);

	return 0;
}

static int novatek_jdi_prepare(struct drm_panel *panel)
{
	struct novatek_jdi *ctx = to_novatek_jdi(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	ret = novatek_jdi_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int novatek_jdi_unprepare(struct drm_panel *panel)
{
	struct novatek_jdi *ctx = to_novatek_jdi(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = novatek_jdi_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);


	ctx->prepared = false;
	return 0;
}

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

static int novatek_jdi_get_modes(struct drm_panel *panel,
				 struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &novatek_jdi_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs novatek_jdi_panel_funcs = {
	.prepare = novatek_jdi_prepare,
	.unprepare = novatek_jdi_unprepare,
	.get_modes = novatek_jdi_get_modes,
};

static int novatek_jdi_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct novatek_jdi *ctx;
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

	drm_panel_init(&ctx->panel, dev, &novatek_jdi_panel_funcs,
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

static void novatek_jdi_remove(struct mipi_dsi_device *dsi)
{
	struct novatek_jdi *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id novatek_jdi_of_match[] = {
	{ .compatible = "novatek,jdi" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, novatek_jdi_of_match);

static struct mipi_dsi_driver novatek_jdi_driver = {
	.probe = novatek_jdi_probe,
	.remove = novatek_jdi_remove,
	.driver = {
		.name = "panel-novatek-jdi",
		.of_match_table = novatek_jdi_of_match,
	},
};
module_mipi_dsi_driver(novatek_jdi_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for jdi novatek 720p cmd");
MODULE_LICENSE("GPL");
