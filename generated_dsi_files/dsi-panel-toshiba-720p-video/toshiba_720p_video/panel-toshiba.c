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

struct toshiba {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	bool prepared;
};

static inline struct toshiba *to_toshiba(struct drm_panel *panel)
{
	return container_of(panel, struct toshiba, panel);
}

static void toshiba_reset(struct toshiba *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(200);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int toshiba_on(struct toshiba *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq(dsi, 0xb0, 0x00);
	usleep_range(10000, 11000);
	mipi_dsi_generic_write_seq(dsi, 0xb2, 0x00);
	usleep_range(10000, 11000);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x0c);
	usleep_range(10000, 11000);
	mipi_dsi_generic_write_seq(dsi, 0xb4, 0x02);
	usleep_range(10000, 11000);
	mipi_dsi_generic_write_seq(dsi, 0xc0, 0x40, 0x02, 0x7f, 0xc8, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0xc1,
				   0x00, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00,
				   0x9d, 0x08, 0x27, 0x00, 0x00, 0x00, 0x00,
				   0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc2, 0x00, 0x00, 0x09, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc3, 0x04);
	usleep_range(10000, 11000);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0x4d, 0x83, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc6,
				   0x12, 0x00, 0x08, 0x71, 0x00, 0x00, 0x00,
				   0x80, 0x00, 0x04);
	mipi_dsi_generic_write_seq(dsi, 0xc7, 0x22);
	usleep_range(10000, 11000);
	mipi_dsi_generic_write_seq(dsi, 0xc8, 0x4c, 0x0c, 0x0c, 0x0c);
	mipi_dsi_generic_write_seq(dsi, 0xc9,
				   0x00, 0x40, 0x00, 0x16, 0x32, 0x2e, 0x3a,
				   0x43, 0x3e, 0x3c, 0x45, 0x79, 0x3f);
	mipi_dsi_generic_write_seq(dsi, 0xca,
				   0x00, 0x46, 0x1a, 0x23, 0x21, 0x1c, 0x25,
				   0x31, 0x2d, 0x49, 0x5f, 0x7f, 0x3f);
	mipi_dsi_generic_write_seq(dsi, 0xcb,
				   0x00, 0x4c, 0x20, 0x3a, 0x42, 0x40, 0x47,
				   0x4b, 0x42, 0x3e, 0x46, 0x7e, 0x3f);
	mipi_dsi_generic_write_seq(dsi, 0xcc,
				   0x00, 0x41, 0x19, 0x21, 0x1d, 0x14, 0x18,
				   0x1f, 0x1d, 0x25, 0x3f, 0x73, 0x3f);
	mipi_dsi_generic_write_seq(dsi, 0xcd,
				   0x23, 0x79, 0x5a, 0x5f, 0x57, 0x4c, 0x51,
				   0x51, 0x45, 0x3f, 0x4b, 0x7f, 0x3f);
	mipi_dsi_generic_write_seq(dsi, 0xce,
				   0x00, 0x40, 0x14, 0x20, 0x1a, 0x0e, 0x0e,
				   0x13, 0x08, 0x00, 0x05, 0x46, 0x1c);
	mipi_dsi_generic_write_seq(dsi, 0xd0, 0x6a, 0x64, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xd1, 0x77, 0xd4);
	mipi_dsi_generic_write_seq(dsi, 0xd3, 0x33);
	usleep_range(10000, 11000);
	mipi_dsi_generic_write_seq(dsi, 0xd5, 0x0f, 0x0f);
	mipi_dsi_generic_write_seq(dsi, 0xd8,
				   0x34, 0x64, 0x23, 0x25, 0x62, 0x32);
	mipi_dsi_generic_write_seq(dsi, 0xde,
				   0x10, 0x7b, 0x11, 0x0a, 0x00, 0x00, 0x00,
				   0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xfd,
				   0x04, 0x55, 0x53, 0x00, 0x70, 0xff, 0x10,
				   0x73);
	mipi_dsi_generic_write_seq(dsi, 0xe2, 0x00);
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
	msleep(50);

	return 0;
}

static int toshiba_off(struct toshiba *ctx)
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

static int toshiba_prepare(struct drm_panel *panel)
{
	struct toshiba *ctx = to_toshiba(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	toshiba_reset(ctx);

	ret = toshiba_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int toshiba_unprepare(struct drm_panel *panel)
{
	struct toshiba *ctx = to_toshiba(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = toshiba_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	ctx->prepared = false;
	return 0;
}

static const struct drm_display_mode toshiba_mode = {
	.clock = (720 + 144 + 12 + 32) * (1280 + 9 + 4 + 3) * 60 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 144,
	.hsync_end = 720 + 144 + 12,
	.htotal = 720 + 144 + 12 + 32,
	.vdisplay = 1280,
	.vsync_start = 1280 + 9,
	.vsync_end = 1280 + 9 + 4,
	.vtotal = 1280 + 9 + 4 + 3,
	.width_mm = 0,
	.height_mm = 0,
};

static int toshiba_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &toshiba_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs toshiba_panel_funcs = {
	.prepare = toshiba_prepare,
	.unprepare = toshiba_unprepare,
	.get_modes = toshiba_get_modes,
};

static int toshiba_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct toshiba *ctx;
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
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	drm_panel_init(&ctx->panel, dev, &toshiba_panel_funcs,
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

static void toshiba_remove(struct mipi_dsi_device *dsi)
{
	struct toshiba *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id toshiba_of_match[] = {
	{ .compatible = "toshiba" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, toshiba_of_match);

static struct mipi_dsi_driver toshiba_driver = {
	.probe = toshiba_probe,
	.remove = toshiba_remove,
	.driver = {
		.name = "panel-toshiba",
		.of_match_table = toshiba_of_match,
	},
};
module_mipi_dsi_driver(toshiba_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for toshiba 720p video mode dsi panel");
MODULE_LICENSE("GPL");
