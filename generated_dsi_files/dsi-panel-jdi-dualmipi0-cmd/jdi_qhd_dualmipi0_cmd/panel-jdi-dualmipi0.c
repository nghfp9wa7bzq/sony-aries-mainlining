// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/module.h>
#include <linux/of.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>

struct jdi_dualmipi0 {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	bool prepared;
};

static inline struct jdi_dualmipi0 *to_jdi_dualmipi0(struct drm_panel *panel)
{
	return container_of(panel, struct jdi_dualmipi0, panel);
}

static void jdi_dualmipi0_reset(struct jdi_dualmipi0 *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(200);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(200);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int jdi_dualmipi0_on(struct jdi_dualmipi0 *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq(dsi, 0xb0, 0x03);
	mipi_dsi_dcs_write_seq(dsi, 0x00);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x3a, 0x77);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x2a, 0x00, 0x00, 0x04, 0xff);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x2b, 0x00, 0x00, 0x05, 0x9f);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x35, 0x00);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x44, 0x00, 0x00);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x51, 0xff);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x53, 0x24);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0x55, 0x00);
	usleep_range(10000, 11000);

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
	usleep_range(16000, 17000);

	return 0;
}

static int jdi_dualmipi0_off(struct jdi_dualmipi0 *ctx)
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
	msleep(50);

	ret = mipi_dsi_dcs_enter_sleep_mode(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to enter sleep mode: %d\n", ret);
		return ret;
	}
	msleep(120);

	return 0;
}

static int jdi_dualmipi0_prepare(struct drm_panel *panel)
{
	struct jdi_dualmipi0 *ctx = to_jdi_dualmipi0(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	jdi_dualmipi0_reset(ctx);

	ret = jdi_dualmipi0_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int jdi_dualmipi0_unprepare(struct drm_panel *panel)
{
	struct jdi_dualmipi0 *ctx = to_jdi_dualmipi0(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = jdi_dualmipi0_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	ctx->prepared = false;
	return 0;
}

static const struct drm_display_mode jdi_dualmipi0_mode = {
	.clock = (1280 + 120 + 16 + 44) * (1440 + 8 + 4 + 4) * 60 / 1000,
	.hdisplay = 1280,
	.hsync_start = 1280 + 120,
	.hsync_end = 1280 + 120 + 16,
	.htotal = 1280 + 120 + 16 + 44,
	.vdisplay = 1440,
	.vsync_start = 1440 + 8,
	.vsync_end = 1440 + 8 + 4,
	.vtotal = 1440 + 8 + 4 + 4,
	.width_mm = 0,
	.height_mm = 0,
};

static int jdi_dualmipi0_get_modes(struct drm_panel *panel,
				   struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &jdi_dualmipi0_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs jdi_dualmipi0_panel_funcs = {
	.prepare = jdi_dualmipi0_prepare,
	.unprepare = jdi_dualmipi0_unprepare,
	.get_modes = jdi_dualmipi0_get_modes,
};

static int jdi_dualmipi0_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct jdi_dualmipi0 *ctx;
	int ret;

	ctx = devm_kzalloc(dev, sizeof(*ctx), GFP_KERNEL);
	if (!ctx)
		return -ENOMEM;

	ctx->reset_gpio = devm_gpiod_get(dev, "reset", GPIOD_OUT_HIGH);
	if (IS_ERR(ctx->reset_gpio))
		return dev_err_probe(dev, PTR_ERR(ctx->reset_gpio),
				     "Failed to get reset-gpios\n");

	ctx->dsi = dsi;
	mipi_dsi_set_drvdata(dsi, ctx);

	dsi->lanes = 4;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	drm_panel_init(&ctx->panel, dev, &jdi_dualmipi0_panel_funcs,
		       DRM_MODE_CONNECTOR_DSI);
	ctx->panel.prepare_prev_first = true;

	drm_panel_add(&ctx->panel);

	ret = mipi_dsi_attach(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to attach to DSI host: %d\n", ret);
		drm_panel_remove(&ctx->panel);
		return ret;
	}

	return 0;
}

static void jdi_dualmipi0_remove(struct mipi_dsi_device *dsi)
{
	struct jdi_dualmipi0 *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id jdi_dualmipi0_of_match[] = {
	{ .compatible = "jdi,dualmipi0" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, jdi_dualmipi0_of_match);

static struct mipi_dsi_driver jdi_dualmipi0_driver = {
	.probe = jdi_dualmipi0_probe,
	.remove = jdi_dualmipi0_remove,
	.driver = {
		.name = "panel-jdi-dualmipi0",
		.of_match_table = jdi_dualmipi0_of_match,
	},
};
module_mipi_dsi_driver(jdi_dualmipi0_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for Dual 0 cmd mode dsi panel");
MODULE_LICENSE("GPL");
