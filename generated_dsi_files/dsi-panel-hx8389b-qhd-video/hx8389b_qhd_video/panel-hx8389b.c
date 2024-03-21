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

struct hx8389b {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	bool prepared;
};

static inline struct hx8389b *to_hx8389b(struct drm_panel *panel)
{
	return container_of(panel, struct hx8389b, panel);
}

static void hx8389b_reset(struct hx8389b *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(2000, 3000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int hx8389b_on(struct hx8389b *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	mipi_dsi_dcs_write_seq(dsi, 0xb9, 0xff, 0x83, 0x89);
	usleep_range(10000, 11000);
	mipi_dsi_dcs_write_seq(dsi, 0xcc, 0x02);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xc0, 0x43, 0x17);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xba,
			       0x41, 0x93, 0x00, 0x16, 0xa4, 0x10, 0x18);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xb1,
			       0x00, 0x00, 0x06, 0xeb, 0x59, 0x10, 0x11, 0xee,
			       0xee, 0x3a, 0x42, 0x3f, 0x3f, 0x43, 0x01, 0x5a,
			       0xf6, 0x00, 0xe6);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xb2,
			       0x00, 0x00, 0x78, 0x0c, 0x07, 0x3f, 0x80);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xb7, 0x00, 0x00, 0x50);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xb4,
			       0x80, 0x08, 0x00, 0x32, 0x10, 0x04, 0x32, 0x10,
			       0x00, 0x32, 0x10, 0x00, 0x37, 0x0a, 0x40, 0x08,
			       0x37, 0x00, 0x46, 0x02, 0x58, 0x58, 0x02);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xd5,
			       0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
			       0x60, 0x00, 0x99, 0x88, 0xaa, 0xbb, 0x88, 0x23,
			       0x88, 0x01, 0x88, 0x67, 0x88, 0x45, 0x01, 0x23,
			       0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x99, 0xbb,
			       0xaa, 0x88, 0x54, 0x88, 0x76, 0x88, 0x10, 0x88,
			       0x32, 0x32, 0x10, 0x88, 0x88, 0x88, 0x88, 0x88,
			       0x3c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xe0,
			       0x05, 0x11, 0x16, 0x35, 0x3f, 0x3f, 0x21, 0x43,
			       0x07, 0x0c, 0x0f, 0x11, 0x12, 0x10, 0x10, 0x1d,
			       0x18, 0x05, 0x11, 0x16, 0x35, 0x3f, 0x3f, 0x21,
			       0x43, 0x07, 0x0c, 0x0f, 0x11, 0x12, 0x10, 0x10,
			       0x1d, 0x18);
	usleep_range(1000, 2000);
	mipi_dsi_dcs_write_seq(dsi, 0xc1,
			       0x01, 0x00, 0x07, 0x13, 0x21, 0x29, 0x2f, 0x34,
			       0x3b, 0x42, 0x48, 0x50, 0x58, 0x61, 0x69, 0x71,
			       0x79, 0x81, 0x88, 0x90, 0x98, 0xa0, 0xa9, 0xb1,
			       0xb9, 0xc1, 0xc8, 0xce, 0xd6, 0xdf, 0xe6, 0xef,
			       0xf7, 0xff, 0x0e, 0x5a, 0x73, 0x69, 0x36, 0x8e,
			       0x69, 0x5f, 0xc0, 0x00, 0x07, 0x13, 0x21, 0x29,
			       0x2f, 0x34, 0x3b, 0x42, 0x48, 0x50, 0x58, 0x61,
			       0x69, 0x71, 0x79, 0x81, 0x88, 0x90, 0x98, 0xa0,
			       0xa9, 0xb1, 0xb9, 0xc1, 0xc8, 0xce, 0xd6, 0xdf,
			       0xe6, 0xef, 0xf7, 0xff, 0x0e, 0x5a, 0x73, 0x69,
			       0x36, 0x8e, 0x69, 0x5f, 0xc0, 0x00, 0x07, 0x13,
			       0x21, 0x29, 0x2f, 0x34, 0x3b, 0x42, 0x48, 0x50,
			       0x58, 0x61, 0x69, 0x71, 0x79, 0x81, 0x88, 0x90,
			       0x98, 0xa0, 0xa9, 0xb1, 0xb9, 0xc1, 0xc8, 0xce,
			       0xd6, 0xdf, 0xe6, 0xef, 0xf7, 0xff, 0x0e, 0x5a,
			       0x73, 0x69, 0x36, 0x8e, 0x69, 0x5f, 0xc0);
	usleep_range(5000, 6000);
	mipi_dsi_dcs_write_seq(dsi, 0xb6, 0x00, 0x88, 0x00, 0x88);
	usleep_range(1000, 2000);

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

static int hx8389b_off(struct hx8389b *ctx)
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

static int hx8389b_prepare(struct drm_panel *panel)
{
	struct hx8389b *ctx = to_hx8389b(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	hx8389b_reset(ctx);

	ret = hx8389b_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int hx8389b_unprepare(struct drm_panel *panel)
{
	struct hx8389b *ctx = to_hx8389b(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = hx8389b_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	ctx->prepared = false;
	return 0;
}

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

static int hx8389b_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &hx8389b_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs hx8389b_panel_funcs = {
	.prepare = hx8389b_prepare,
	.unprepare = hx8389b_unprepare,
	.get_modes = hx8389b_get_modes,
};

static int hx8389b_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct hx8389b *ctx;
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
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
			  MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS | MIPI_DSI_MODE_LPM;

	drm_panel_init(&ctx->panel, dev, &hx8389b_panel_funcs,
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

static void hx8389b_remove(struct mipi_dsi_device *dsi)
{
	struct hx8389b *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id hx8389b_of_match[] = {
	{ .compatible = "mdss,hx8389b" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, hx8389b_of_match);

static struct mipi_dsi_driver hx8389b_driver = {
	.probe = hx8389b_probe,
	.remove = hx8389b_remove,
	.driver = {
		.name = "panel-hx8389b",
		.of_match_table = hx8389b_of_match,
	},
};
module_mipi_dsi_driver(hx8389b_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for hx8389b qhd video mode dsi panel");
MODULE_LICENSE("GPL");
