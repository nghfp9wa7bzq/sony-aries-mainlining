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

struct otm8018b {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	bool prepared;
};

static inline struct otm8018b *to_otm8018b(struct drm_panel *panel)
{
	return container_of(panel, struct otm8018b, panel);
}

static void otm8018b_reset(struct otm8018b *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(2000, 3000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int otm8018b_on(struct otm8018b *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	mipi_dsi_generic_write_seq(dsi, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x80, 0x09, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x80, 0x09);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xd6, 0x48);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xb4);
	mipi_dsi_generic_write_seq(dsi, 0xc0, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x82);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0xa3);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x90);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0x96, 0x87);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xd8, 0x74, 0x72);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xd9, 0x56);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xe1,
				   0x00, 0x06, 0x0a, 0x07, 0x03, 0x16, 0x08,
				   0x0a, 0x04, 0x06, 0x07, 0x08, 0x0f, 0x23,
				   0x22, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xe2,
				   0x00, 0x06, 0x0a, 0x07, 0x03, 0x16, 0x08,
				   0x0a, 0x04, 0x06, 0x07, 0x08, 0x0f, 0x23,
				   0x22, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x81);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0x77);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xa0);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0xea);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xa1);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x89);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x81);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0x83);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x92);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xb1);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0xa9);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x92);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x45);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x90);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xc0, 0x00, 0x58, 0x00, 0x14, 0x16);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0x30);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x90);
	mipi_dsi_generic_write_seq(dsi, 0xc0,
				   0x00, 0x44, 0x00, 0x00, 0x00, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xa6);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0x01, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xce,
				   0x87, 0x03, 0x00, 0x85, 0x03, 0x00, 0x86,
				   0x03, 0x00, 0x84, 0x03, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xa0);
	mipi_dsi_generic_write_seq(dsi, 0xce,
				   0x38, 0x03, 0x03, 0x58, 0x00, 0x00, 0x00,
				   0x38, 0x02, 0x03, 0x59, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xb0);
	mipi_dsi_generic_write_seq(dsi, 0xce,
				   0x38, 0x01, 0x03, 0x5a, 0x00, 0x00, 0x00,
				   0x38, 0x00, 0x03, 0x5b, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xc0);
	mipi_dsi_generic_write_seq(dsi, 0xce,
				   0x30, 0x00, 0x03, 0x5c, 0x00, 0x00, 0x00,
				   0x30, 0x01, 0x03, 0x5d, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xd0);
	mipi_dsi_generic_write_seq(dsi, 0xce,
				   0x30, 0x02, 0x03, 0x5e, 0x00, 0x00, 0x00,
				   0x30, 0x03, 0x03, 0x5f, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xc7);
	mipi_dsi_generic_write_seq(dsi, 0xcf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xc9);
	mipi_dsi_generic_write_seq(dsi, 0xcf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xd0);
	mipi_dsi_generic_write_seq(dsi, 0xcf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xc4);
	mipi_dsi_generic_write_seq(dsi, 0xcb,
				   0x04, 0x04, 0x04, 0x04, 0x04, 0x04);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xd9);
	mipi_dsi_generic_write_seq(dsi, 0xcb,
				   0x04, 0x04, 0x04, 0x04, 0x04, 0x04);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x84);
	mipi_dsi_generic_write_seq(dsi, 0xcc,
				   0x0c, 0x0a, 0x10, 0x0e, 0x03, 0x04);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x9e);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xa0);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0x09, 0x0f, 0x0d, 0x01, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xb4);
	mipi_dsi_generic_write_seq(dsi, 0xcc,
				   0x0d, 0x0f, 0x09, 0x0b, 0x02, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xce);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0x0e);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0xd0);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0x10, 0x0a, 0x0c, 0x04, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0xff, 0xff, 0xff);

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

static int otm8018b_off(struct otm8018b *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

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

static int otm8018b_prepare(struct drm_panel *panel)
{
	struct otm8018b *ctx = to_otm8018b(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	otm8018b_reset(ctx);

	ret = otm8018b_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int otm8018b_unprepare(struct drm_panel *panel)
{
	struct otm8018b *ctx = to_otm8018b(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = otm8018b_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	ctx->prepared = false;
	return 0;
}

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

static int otm8018b_get_modes(struct drm_panel *panel,
			      struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &otm8018b_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs otm8018b_panel_funcs = {
	.prepare = otm8018b_prepare,
	.unprepare = otm8018b_unprepare,
	.get_modes = otm8018b_get_modes,
};

static int otm8018b_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct otm8018b *ctx;
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

	dsi->lanes = 2;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS | MIPI_DSI_MODE_LPM;

	drm_panel_init(&ctx->panel, dev, &otm8018b_panel_funcs,
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

static void otm8018b_remove(struct mipi_dsi_device *dsi)
{
	struct otm8018b *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id otm8018b_of_match[] = {
	{ .compatible = "mdss,otm8018b" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, otm8018b_of_match);

static struct mipi_dsi_driver otm8018b_driver = {
	.probe = otm8018b_probe,
	.remove = otm8018b_remove,
	.driver = {
		.name = "panel-otm8018b",
		.of_match_table = otm8018b_of_match,
	},
};
module_mipi_dsi_driver(otm8018b_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for OTM8018b fwvga video mode dsi panel");
MODULE_LICENSE("GPL");
