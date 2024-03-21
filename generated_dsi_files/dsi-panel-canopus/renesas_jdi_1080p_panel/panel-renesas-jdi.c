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

struct renesas_jdi {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	bool prepared;
};

static inline struct renesas_jdi *to_renesas_jdi(struct drm_panel *panel)
{
	return container_of(panel, struct renesas_jdi, panel);
}

static int renesas_jdi_on(struct renesas_jdi *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq(dsi, 0x01);
	usleep_range(5000, 6000);
	mipi_dsi_generic_write_seq(dsi, 0xb0, 0x00);
	mipi_dsi_dcs_write_seq(dsi, 0x36, 0xc0);

	ret = mipi_dsi_dcs_exit_sleep_mode(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to exit sleep mode: %d\n", ret);
		return ret;
	}
	msleep(120);

	ret = mipi_dsi_dcs_set_display_on(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to set display on: %d\n", ret);
		return ret;
	}

	return 0;
}

static int renesas_jdi_off(struct renesas_jdi *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

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

static int renesas_jdi_prepare(struct drm_panel *panel)
{
	struct renesas_jdi *ctx = to_renesas_jdi(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	ret = renesas_jdi_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int renesas_jdi_unprepare(struct drm_panel *panel)
{
	struct renesas_jdi *ctx = to_renesas_jdi(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = renesas_jdi_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);


	ctx->prepared = false;
	return 0;
}

static const struct drm_display_mode renesas_jdi_mode = {
	.clock = (1080 + 112 + 4 + 76) * (1920 + 31 + 4 + 4) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 112,
	.hsync_end = 1080 + 112 + 4,
	.htotal = 1080 + 112 + 4 + 76,
	.vdisplay = 1920,
	.vsync_start = 1920 + 31,
	.vsync_end = 1920 + 31 + 4,
	.vtotal = 1920 + 31 + 4 + 4,
	.width_mm = 62,
	.height_mm = 110,
};

static int renesas_jdi_get_modes(struct drm_panel *panel,
				 struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &renesas_jdi_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs renesas_jdi_panel_funcs = {
	.prepare = renesas_jdi_prepare,
	.unprepare = renesas_jdi_unprepare,
	.get_modes = renesas_jdi_get_modes,
};

static int renesas_jdi_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct renesas_jdi *ctx;
	int ret;

	ctx = devm_kzalloc(dev, sizeof(*ctx), GFP_KERNEL);
	if (!ctx)
		return -ENOMEM;

	ctx->dsi = dsi;
	mipi_dsi_set_drvdata(dsi, ctx);

	dsi->lanes = 4;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_HSE |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	drm_panel_init(&ctx->panel, dev, &renesas_jdi_panel_funcs,
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

static void renesas_jdi_remove(struct mipi_dsi_device *dsi)
{
	struct renesas_jdi *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id renesas_jdi_of_match[] = {
	{ .compatible = "renesas,jdi" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, renesas_jdi_of_match);

static struct mipi_dsi_driver renesas_jdi_driver = {
	.probe = renesas_jdi_probe,
	.remove = renesas_jdi_remove,
	.driver = {
		.name = "panel-renesas-jdi",
		.of_match_table = renesas_jdi_of_match,
	},
};
module_mipi_dsi_driver(renesas_jdi_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for jdi renesas 1080p video");
MODULE_LICENSE("GPL");
