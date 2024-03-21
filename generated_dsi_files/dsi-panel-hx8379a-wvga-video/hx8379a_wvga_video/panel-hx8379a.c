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

struct hx8379a {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	bool prepared;
};

static inline struct hx8379a *to_hx8379a(struct drm_panel *panel)
{
	return container_of(panel, struct hx8379a, panel);
}

static void hx8379a_reset(struct hx8379a *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(2000, 3000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int hx8379a_on(struct hx8379a *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;
	struct device *dev = &dsi->dev;
	int ret;

	mipi_dsi_dcs_write_seq(dsi, 0xb9, 0xff, 0x83, 0x79);
	mipi_dsi_dcs_write_seq(dsi, 0xba, 0x51, 0x93);
	mipi_dsi_dcs_write_seq(dsi, 0xb1,
			       0x00, 0x50, 0x44, 0xea, 0x8d, 0x08, 0x11, 0x11,
			       0x11, 0x27, 0x2f, 0x9a, 0x1a, 0x42, 0x0b, 0x6e,
			       0xf1, 0x00, 0xe6);
	mipi_dsi_dcs_write_seq(dsi, 0xb2,
			       0x00, 0x00, 0x3c, 0x08, 0x04, 0x19, 0x22, 0x00,
			       0xff, 0x08, 0x04, 0x19, 0x20);
	mipi_dsi_dcs_write_seq(dsi, 0xb4,
			       0x80, 0x08, 0x00, 0x32, 0x10, 0x03, 0x32, 0x13,
			       0x70, 0x32, 0x10, 0x08, 0x37, 0x01, 0x28, 0x07,
			       0x37, 0x08, 0x35, 0x08, 0x3d, 0x44, 0x08, 0x00,
			       0x40, 0x08, 0x28, 0x08, 0x30, 0x30, 0x04);
	mipi_dsi_dcs_write_seq(dsi, 0xd5,
			       0x00, 0x00, 0x0a, 0x00, 0x01, 0x05, 0x00, 0x03,
			       0x00, 0x88, 0x88, 0x88, 0x88, 0x23, 0x01, 0x67,
			       0x45, 0x02, 0x13, 0x88, 0x88, 0x88, 0x88, 0x88,
			       0x88, 0x88, 0x88, 0x88, 0x88, 0x54, 0x76, 0x10,
			       0x32, 0x31, 0x20, 0x88, 0x88, 0x88, 0x88, 0x88,
			       0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_dcs_write_seq(dsi, 0xe0,
			       0x79, 0x05, 0x0f, 0x14, 0x23, 0x24, 0x3f, 0x30,
			       0x46, 0x06, 0x10, 0x13, 0x16, 0x17, 0x16, 0x16,
			       0x13, 0x18, 0x05, 0x0f, 0x14, 0x23, 0x24, 0x3f,
			       0x30, 0x46, 0x06, 0x10, 0x13, 0x16, 0x17, 0x16,
			       0x16, 0x13, 0x18);
	mipi_dsi_dcs_write_seq(dsi, 0xc1,
			       0x01, 0x00, 0x07, 0x10, 0x17, 0x1d, 0x2a, 0x33,
			       0x3a, 0x43, 0x4a, 0x52, 0x5b, 0x64, 0x6d, 0x78,
			       0x7f, 0x88, 0x90, 0x98, 0xa0, 0xa9, 0xb2, 0xb9,
			       0xc1, 0xc9, 0xd1, 0xd7, 0xdf, 0xe6, 0xed, 0xf4,
			       0xfa, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			       0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x18, 0x20,
			       0x28, 0x30, 0x38, 0x40, 0x47, 0x4f, 0x58, 0x60,
			       0x68, 0x70, 0x78, 0x80, 0x88, 0x90, 0x98, 0xa0,
			       0xa9, 0xb1, 0xb9, 0xc1, 0xc9, 0xd1, 0xd8, 0xe0,
			       0xe8, 0xf0, 0xf9, 0xfe, 0x00, 0x00, 0x00, 0x00,
			       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10,
			       0x18, 0x1e, 0x26, 0x2e, 0x34, 0x3a, 0x41, 0x49,
			       0x4f, 0x58, 0x5e, 0x67, 0x6f, 0x77, 0x80, 0x88,
			       0x8f, 0x97, 0x9f, 0xa7, 0xaf, 0xb8, 0xbf, 0xc7,
			       0xd1, 0xd8, 0xe3, 0xea, 0xf6, 0xff, 0x00, 0x00,
			       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0x02);
	mipi_dsi_dcs_write_seq(dsi, 0xb6, 0x00, 0x9c, 0x00, 0x9c);

	ret = mipi_dsi_dcs_exit_sleep_mode(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to exit sleep mode: %d\n", ret);
		return ret;
	}
	msleep(150);

	ret = mipi_dsi_dcs_set_display_on(dsi);
	if (ret < 0) {
		dev_err(dev, "Failed to set display on: %d\n", ret);
		return ret;
	}
	msleep(120);

	return 0;
}

static int hx8379a_off(struct hx8379a *ctx)
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

static int hx8379a_prepare(struct drm_panel *panel)
{
	struct hx8379a *ctx = to_hx8379a(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	hx8379a_reset(ctx);

	ret = hx8379a_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int hx8379a_unprepare(struct drm_panel *panel)
{
	struct hx8379a *ctx = to_hx8379a(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = hx8379a_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	ctx->prepared = false;
	return 0;
}

static const struct drm_display_mode hx8379a_mode = {
	.clock = (480 + 100 + 40 + 94) * (800 + 6 + 6 + 4) * 60 / 1000,
	.hdisplay = 480,
	.hsync_start = 480 + 100,
	.hsync_end = 480 + 100 + 40,
	.htotal = 480 + 100 + 40 + 94,
	.vdisplay = 800,
	.vsync_start = 800 + 6,
	.vsync_end = 800 + 6 + 6,
	.vtotal = 800 + 6 + 6 + 4,
	.width_mm = 0,
	.height_mm = 0,
};

static int hx8379a_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &hx8379a_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs hx8379a_panel_funcs = {
	.prepare = hx8379a_prepare,
	.unprepare = hx8379a_unprepare,
	.get_modes = hx8379a_get_modes,
};

static int hx8379a_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct hx8379a *ctx;
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

	drm_panel_init(&ctx->panel, dev, &hx8379a_panel_funcs,
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

static void hx8379a_remove(struct mipi_dsi_device *dsi)
{
	struct hx8379a *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id hx8379a_of_match[] = {
	{ .compatible = "mdss,hx8379a" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, hx8379a_of_match);

static struct mipi_dsi_driver hx8379a_driver = {
	.probe = hx8379a_probe,
	.remove = hx8379a_remove,
	.driver = {
		.name = "panel-hx8379a",
		.of_match_table = hx8379a_of_match,
	},
};
module_mipi_dsi_driver(hx8379a_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for HX8379A wvga video mode dsi panel");
MODULE_LICENSE("GPL");
