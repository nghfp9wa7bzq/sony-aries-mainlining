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

struct nt35596 {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	bool prepared;
};

static inline struct nt35596 *to_nt35596(struct drm_panel *panel)
{
	return container_of(panel, struct nt35596, panel);
}

static void nt35596_reset(struct nt35596 *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(1000, 2000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int nt35596_on(struct nt35596 *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq(dsi, 0xff, 0xee);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x1f, 0x45);
	mipi_dsi_generic_write_seq(dsi, 0x24, 0x4f);
	mipi_dsi_generic_write_seq(dsi, 0x38, 0xc8);
	mipi_dsi_generic_write_seq(dsi, 0x39, 0x2c);
	mipi_dsi_generic_write_seq(dsi, 0x1e, 0xbb);
	mipi_dsi_generic_write_seq(dsi, 0x1d, 0x0f);
	mipi_dsi_generic_write_seq(dsi, 0x7e, 0xb1);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x35, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xba, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x01, 0x55);
	mipi_dsi_generic_write_seq(dsi, 0x02, 0x40);
	mipi_dsi_generic_write_seq(dsi, 0x05, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x06, 0x1b);
	mipi_dsi_generic_write_seq(dsi, 0x07, 0x24);
	mipi_dsi_generic_write_seq(dsi, 0x08, 0x0c);
	mipi_dsi_generic_write_seq(dsi, 0x0b, 0x87);
	mipi_dsi_generic_write_seq(dsi, 0x0c, 0x87);
	mipi_dsi_generic_write_seq(dsi, 0x0e, 0xb0);
	mipi_dsi_generic_write_seq(dsi, 0x0f, 0xb3);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0x12, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0x13, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0x14, 0x4a);
	mipi_dsi_generic_write_seq(dsi, 0x15, 0x18);
	mipi_dsi_generic_write_seq(dsi, 0x16, 0x18);
	mipi_dsi_generic_write_seq(dsi, 0x18, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x19, 0x77);
	mipi_dsi_generic_write_seq(dsi, 0x1a, 0x55);
	mipi_dsi_generic_write_seq(dsi, 0x1b, 0x13);
	mipi_dsi_generic_write_seq(dsi, 0x1c, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1e, 0x13);
	mipi_dsi_generic_write_seq(dsi, 0x1f, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x23, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x24, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x25, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x26, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x27, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x28, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x35, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x66, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x58, 0x82);
	mipi_dsi_generic_write_seq(dsi, 0x59, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5a, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5b, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5c, 0x82);
	mipi_dsi_generic_write_seq(dsi, 0x5d, 0x82);
	mipi_dsi_generic_write_seq(dsi, 0x5e, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5f, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x72, 0x31);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x01, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0x02, 0x0c);
	mipi_dsi_generic_write_seq(dsi, 0x03, 0x09);
	mipi_dsi_generic_write_seq(dsi, 0x04, 0x0a);
	mipi_dsi_generic_write_seq(dsi, 0x05, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x06, 0x0f);
	mipi_dsi_generic_write_seq(dsi, 0x07, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0x08, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x09, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x0a, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x0b, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x0c, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x0d, 0x13);
	mipi_dsi_generic_write_seq(dsi, 0x0e, 0x15);
	mipi_dsi_generic_write_seq(dsi, 0x0f, 0x17);
	mipi_dsi_generic_write_seq(dsi, 0x10, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0x12, 0x0c);
	mipi_dsi_generic_write_seq(dsi, 0x13, 0x09);
	mipi_dsi_generic_write_seq(dsi, 0x14, 0x0a);
	mipi_dsi_generic_write_seq(dsi, 0x15, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x16, 0x0f);
	mipi_dsi_generic_write_seq(dsi, 0x17, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0x18, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x19, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1a, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1b, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1c, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1d, 0x13);
	mipi_dsi_generic_write_seq(dsi, 0x1e, 0x15);
	mipi_dsi_generic_write_seq(dsi, 0x1f, 0x17);
	mipi_dsi_generic_write_seq(dsi, 0x20, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x21, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x22, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x23, 0x40);
	mipi_dsi_generic_write_seq(dsi, 0x24, 0x40);
	mipi_dsi_generic_write_seq(dsi, 0x25, 0xed);
	mipi_dsi_generic_write_seq(dsi, 0x29, 0x58);
	mipi_dsi_generic_write_seq(dsi, 0x2a, 0x12);
	mipi_dsi_generic_write_seq(dsi, 0x2b, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x4b, 0x06);
	mipi_dsi_generic_write_seq(dsi, 0x4c, 0x11);
	mipi_dsi_generic_write_seq(dsi, 0x4d, 0x20);
	mipi_dsi_generic_write_seq(dsi, 0x4e, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x4f, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x50, 0x20);
	mipi_dsi_generic_write_seq(dsi, 0x51, 0x61);
	mipi_dsi_generic_write_seq(dsi, 0x52, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x53, 0x63);
	mipi_dsi_generic_write_seq(dsi, 0x54, 0x77);
	mipi_dsi_generic_write_seq(dsi, 0x55, 0xed);
	mipi_dsi_generic_write_seq(dsi, 0x5b, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x5c, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x5d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x5e, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x5f, 0x15);
	mipi_dsi_generic_write_seq(dsi, 0x60, 0x75);
	mipi_dsi_generic_write_seq(dsi, 0x61, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x62, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x63, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x64, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x65, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x66, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x67, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x68, 0x04);
	mipi_dsi_generic_write_seq(dsi, 0x69, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x6a, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x6c, 0x40);
	mipi_dsi_generic_write_seq(dsi, 0x75, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x76, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x7a, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0x7b, 0xc5);
	mipi_dsi_generic_write_seq(dsi, 0x7c, 0xd8);
	mipi_dsi_generic_write_seq(dsi, 0x7d, 0x60);
	mipi_dsi_generic_write_seq(dsi, 0x7f, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0x80, 0x81);
	mipi_dsi_generic_write_seq(dsi, 0x83, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0x93, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0x94, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0x8a, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x9b, 0x0f);
	mipi_dsi_generic_write_seq(dsi, 0xea, 0xff);
	mipi_dsi_generic_write_seq(dsi, 0xec, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x75, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x76, 0x8e);
	mipi_dsi_generic_write_seq(dsi, 0x77, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x78, 0x90);
	mipi_dsi_generic_write_seq(dsi, 0x79, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7a, 0xb2);
	mipi_dsi_generic_write_seq(dsi, 0x7b, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7c, 0xc7);
	mipi_dsi_generic_write_seq(dsi, 0x7d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7e, 0xd7);
	mipi_dsi_generic_write_seq(dsi, 0x7f, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x80, 0xe9);
	mipi_dsi_generic_write_seq(dsi, 0x81, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x82, 0xf9);
	mipi_dsi_generic_write_seq(dsi, 0x83, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x84, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x85, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x86, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0x87, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x88, 0x3a);
	mipi_dsi_generic_write_seq(dsi, 0x89, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8a, 0x5d);
	mipi_dsi_generic_write_seq(dsi, 0x8b, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8c, 0x94);
	mipi_dsi_generic_write_seq(dsi, 0x8d, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8e, 0xbc);
	mipi_dsi_generic_write_seq(dsi, 0x8f, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x90, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x91, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x92, 0x39);
	mipi_dsi_generic_write_seq(dsi, 0x93, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x94, 0x3a);
	mipi_dsi_generic_write_seq(dsi, 0x95, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x96, 0x6b);
	mipi_dsi_generic_write_seq(dsi, 0x97, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x98, 0xa2);
	mipi_dsi_generic_write_seq(dsi, 0x99, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x9a, 0xc7);
	mipi_dsi_generic_write_seq(dsi, 0x9b, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x9c, 0xfb);
	mipi_dsi_generic_write_seq(dsi, 0x9d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9e, 0x20);
	mipi_dsi_generic_write_seq(dsi, 0x9f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa0, 0x54);
	mipi_dsi_generic_write_seq(dsi, 0xa2, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa3, 0x6d);
	mipi_dsi_generic_write_seq(dsi, 0xa4, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa5, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xa6, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa7, 0x81);
	mipi_dsi_generic_write_seq(dsi, 0xa9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xaa, 0xc7);
	mipi_dsi_generic_write_seq(dsi, 0xab, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xac, 0xf0);
	mipi_dsi_generic_write_seq(dsi, 0xad, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xae, 0xf8);
	mipi_dsi_generic_write_seq(dsi, 0xaf, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xb0, 0xfd);
	mipi_dsi_generic_write_seq(dsi, 0xb1, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xb2, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb4, 0x8e);
	mipi_dsi_generic_write_seq(dsi, 0xb5, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb6, 0x90);
	mipi_dsi_generic_write_seq(dsi, 0xb7, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb8, 0xb2);
	mipi_dsi_generic_write_seq(dsi, 0xb9, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xba, 0xc7);
	mipi_dsi_generic_write_seq(dsi, 0xbb, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xbc, 0xd7);
	mipi_dsi_generic_write_seq(dsi, 0xbd, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xbe, 0xe9);
	mipi_dsi_generic_write_seq(dsi, 0xbf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc0, 0xf9);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc2, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc3, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc6, 0x3a);
	mipi_dsi_generic_write_seq(dsi, 0xc7, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc8, 0x5d);
	mipi_dsi_generic_write_seq(dsi, 0xc9, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xca, 0x94);
	mipi_dsi_generic_write_seq(dsi, 0xcb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0xbc);
	mipi_dsi_generic_write_seq(dsi, 0xcd, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xce, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xcf, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd0, 0x39);
	mipi_dsi_generic_write_seq(dsi, 0xd1, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd2, 0x3a);
	mipi_dsi_generic_write_seq(dsi, 0xd3, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd4, 0x6b);
	mipi_dsi_generic_write_seq(dsi, 0xd5, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd6, 0xa2);
	mipi_dsi_generic_write_seq(dsi, 0xd7, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd8, 0xc7);
	mipi_dsi_generic_write_seq(dsi, 0xd9, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xda, 0xfb);
	mipi_dsi_generic_write_seq(dsi, 0xdb, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xdc, 0x20);
	mipi_dsi_generic_write_seq(dsi, 0xdd, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xde, 0x54);
	mipi_dsi_generic_write_seq(dsi, 0xdf, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe0, 0x6d);
	mipi_dsi_generic_write_seq(dsi, 0xe1, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe2, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xe3, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe4, 0x81);
	mipi_dsi_generic_write_seq(dsi, 0xe5, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe6, 0xc7);
	mipi_dsi_generic_write_seq(dsi, 0xe7, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe8, 0xf0);
	mipi_dsi_generic_write_seq(dsi, 0xe9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xea, 0xf8);
	mipi_dsi_generic_write_seq(dsi, 0xeb, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xec, 0xfd);
	mipi_dsi_generic_write_seq(dsi, 0xed, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xee, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xef, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf0, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xf1, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf2, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0xf3, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf4, 0x0d);
	mipi_dsi_generic_write_seq(dsi, 0xf5, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf6, 0x4a);
	mipi_dsi_generic_write_seq(dsi, 0xf7, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf8, 0x71);
	mipi_dsi_generic_write_seq(dsi, 0xf9, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xfa, 0x8c);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x01, 0xa1);
	mipi_dsi_generic_write_seq(dsi, 0x02, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x03, 0xb6);
	mipi_dsi_generic_write_seq(dsi, 0x04, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x05, 0xc9);
	mipi_dsi_generic_write_seq(dsi, 0x06, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x07, 0xfd);
	mipi_dsi_generic_write_seq(dsi, 0x08, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x09, 0x29);
	mipi_dsi_generic_write_seq(dsi, 0x0a, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x0b, 0x6b);
	mipi_dsi_generic_write_seq(dsi, 0x0c, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x0d, 0x9e);
	mipi_dsi_generic_write_seq(dsi, 0x0e, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x0f, 0xeb);
	mipi_dsi_generic_write_seq(dsi, 0x10, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x25);
	mipi_dsi_generic_write_seq(dsi, 0x12, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x13, 0x27);
	mipi_dsi_generic_write_seq(dsi, 0x14, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x15, 0x5c);
	mipi_dsi_generic_write_seq(dsi, 0x16, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x17, 0x95);
	mipi_dsi_generic_write_seq(dsi, 0x18, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x19, 0xba);
	mipi_dsi_generic_write_seq(dsi, 0x1a, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x1b, 0xec);
	mipi_dsi_generic_write_seq(dsi, 0x1c, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x1d, 0x0c);
	mipi_dsi_generic_write_seq(dsi, 0x1e, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x1f, 0x34);
	mipi_dsi_generic_write_seq(dsi, 0x20, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x21, 0x3f);
	mipi_dsi_generic_write_seq(dsi, 0x22, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x23, 0x48);
	mipi_dsi_generic_write_seq(dsi, 0x24, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x25, 0x49);
	mipi_dsi_generic_write_seq(dsi, 0x26, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x27, 0x6b);
	mipi_dsi_generic_write_seq(dsi, 0x28, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x29, 0x7e);
	mipi_dsi_generic_write_seq(dsi, 0x2a, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x2b, 0x8f);
	mipi_dsi_generic_write_seq(dsi, 0x2d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x2f, 0x9e);
	mipi_dsi_generic_write_seq(dsi, 0x30, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x31, 0xa0);
	mipi_dsi_generic_write_seq(dsi, 0x32, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x33, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x34, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x35, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0x36, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x37, 0x0d);
	mipi_dsi_generic_write_seq(dsi, 0x38, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x39, 0x4a);
	mipi_dsi_generic_write_seq(dsi, 0x3a, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x3b, 0x71);
	mipi_dsi_generic_write_seq(dsi, 0x3d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x3f, 0x8c);
	mipi_dsi_generic_write_seq(dsi, 0x40, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x41, 0xa1);
	mipi_dsi_generic_write_seq(dsi, 0x42, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x43, 0xb6);
	mipi_dsi_generic_write_seq(dsi, 0x44, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x45, 0xc9);
	mipi_dsi_generic_write_seq(dsi, 0x46, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x47, 0xfd);
	mipi_dsi_generic_write_seq(dsi, 0x48, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x49, 0x29);
	mipi_dsi_generic_write_seq(dsi, 0x4a, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x4b, 0x6b);
	mipi_dsi_generic_write_seq(dsi, 0x4c, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x4d, 0x9e);
	mipi_dsi_generic_write_seq(dsi, 0x4e, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x4f, 0xeb);
	mipi_dsi_generic_write_seq(dsi, 0x50, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x51, 0x25);
	mipi_dsi_generic_write_seq(dsi, 0x52, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x53, 0x27);
	mipi_dsi_generic_write_seq(dsi, 0x54, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x55, 0x5c);
	mipi_dsi_generic_write_seq(dsi, 0x56, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x58, 0x95);
	mipi_dsi_generic_write_seq(dsi, 0x59, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5a, 0xba);
	mipi_dsi_generic_write_seq(dsi, 0x5b, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5c, 0xec);
	mipi_dsi_generic_write_seq(dsi, 0x5d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x5e, 0x0c);
	mipi_dsi_generic_write_seq(dsi, 0x5f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x60, 0x34);
	mipi_dsi_generic_write_seq(dsi, 0x61, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x62, 0x3f);
	mipi_dsi_generic_write_seq(dsi, 0x63, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x64, 0x48);
	mipi_dsi_generic_write_seq(dsi, 0x65, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x66, 0x49);
	mipi_dsi_generic_write_seq(dsi, 0x67, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x68, 0x6b);
	mipi_dsi_generic_write_seq(dsi, 0x69, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x6a, 0x7e);
	mipi_dsi_generic_write_seq(dsi, 0x6b, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x6c, 0x8f);
	mipi_dsi_generic_write_seq(dsi, 0x6d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x6e, 0x9e);
	mipi_dsi_generic_write_seq(dsi, 0x6f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x70, 0xa0);
	mipi_dsi_generic_write_seq(dsi, 0x71, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x72, 0xfb);
	mipi_dsi_generic_write_seq(dsi, 0x73, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x74, 0xfd);
	mipi_dsi_generic_write_seq(dsi, 0x75, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x76, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0x77, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x78, 0x0d);
	mipi_dsi_generic_write_seq(dsi, 0x79, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x7a, 0x17);
	mipi_dsi_generic_write_seq(dsi, 0x7b, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x7c, 0x1f);
	mipi_dsi_generic_write_seq(dsi, 0x7d, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x7e, 0x28);
	mipi_dsi_generic_write_seq(dsi, 0x7f, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x80, 0x32);
	mipi_dsi_generic_write_seq(dsi, 0x81, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x82, 0x38);
	mipi_dsi_generic_write_seq(dsi, 0x83, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x84, 0x53);
	mipi_dsi_generic_write_seq(dsi, 0x85, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x86, 0x72);
	mipi_dsi_generic_write_seq(dsi, 0x87, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x88, 0x9b);
	mipi_dsi_generic_write_seq(dsi, 0x89, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8a, 0xc3);
	mipi_dsi_generic_write_seq(dsi, 0x8b, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x8c, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8d, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x8e, 0x36);
	mipi_dsi_generic_write_seq(dsi, 0x8f, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x90, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0x91, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x92, 0x69);
	mipi_dsi_generic_write_seq(dsi, 0x93, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x94, 0xa1);
	mipi_dsi_generic_write_seq(dsi, 0x95, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x96, 0xc8);
	mipi_dsi_generic_write_seq(dsi, 0x97, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x98, 0xff);
	mipi_dsi_generic_write_seq(dsi, 0x99, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9a, 0x26);
	mipi_dsi_generic_write_seq(dsi, 0x9b, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9c, 0x69);
	mipi_dsi_generic_write_seq(dsi, 0x9d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9e, 0x88);
	mipi_dsi_generic_write_seq(dsi, 0x9f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa0, 0xf8);
	mipi_dsi_generic_write_seq(dsi, 0xa2, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa3, 0xf9);
	mipi_dsi_generic_write_seq(dsi, 0xa4, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa5, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xa6, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa7, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xa9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xaa, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xab, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xac, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xad, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xae, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xaf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb0, 0xfb);
	mipi_dsi_generic_write_seq(dsi, 0xb1, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb2, 0xfd);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xb4, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0xb5, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xb6, 0x0d);
	mipi_dsi_generic_write_seq(dsi, 0xb7, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xb8, 0x17);
	mipi_dsi_generic_write_seq(dsi, 0xb9, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xba, 0x1f);
	mipi_dsi_generic_write_seq(dsi, 0xbb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xbc, 0x28);
	mipi_dsi_generic_write_seq(dsi, 0xbd, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xbe, 0x32);
	mipi_dsi_generic_write_seq(dsi, 0xbf, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc0, 0x38);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc2, 0x53);
	mipi_dsi_generic_write_seq(dsi, 0xc3, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0x72);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc6, 0x9b);
	mipi_dsi_generic_write_seq(dsi, 0xc7, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc8, 0xc3);
	mipi_dsi_generic_write_seq(dsi, 0xc9, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xca, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xcb, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0x36);
	mipi_dsi_generic_write_seq(dsi, 0xcd, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xce, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0xcf, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd0, 0x69);
	mipi_dsi_generic_write_seq(dsi, 0xd1, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd2, 0xa1);
	mipi_dsi_generic_write_seq(dsi, 0xd3, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd4, 0xc8);
	mipi_dsi_generic_write_seq(dsi, 0xd5, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd6, 0xff);
	mipi_dsi_generic_write_seq(dsi, 0xd7, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xd8, 0x26);
	mipi_dsi_generic_write_seq(dsi, 0xd9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xda, 0x69);
	mipi_dsi_generic_write_seq(dsi, 0xdb, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xdc, 0x88);
	mipi_dsi_generic_write_seq(dsi, 0xdd, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xde, 0xf8);
	mipi_dsi_generic_write_seq(dsi, 0xdf, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe0, 0xf9);
	mipi_dsi_generic_write_seq(dsi, 0xe1, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe2, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xe3, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe4, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xe5, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe6, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xe7, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe8, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xe9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xea, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x04);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xd3, 0x14);
	mipi_dsi_generic_write_seq(dsi, 0xd4, 0x14);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x00);
	msleep(150);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x35, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x29, 0x00);
	msleep(120);

	return 0;
}

static int nt35596_off(struct nt35596 *ctx)
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

static int nt35596_prepare(struct drm_panel *panel)
{
	struct nt35596 *ctx = to_nt35596(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	nt35596_reset(ctx);

	ret = nt35596_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int nt35596_unprepare(struct drm_panel *panel)
{
	struct nt35596 *ctx = to_nt35596(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = nt35596_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	ctx->prepared = false;
	return 0;
}

static const struct drm_display_mode nt35596_mode = {
	.clock = (1080 + 32 + 8 + 32) * (1920 + 2 + 2 + 18) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 32,
	.hsync_end = 1080 + 32 + 8,
	.htotal = 1080 + 32 + 8 + 32,
	.vdisplay = 1920,
	.vsync_start = 1920 + 2,
	.vsync_end = 1920 + 2 + 2,
	.vtotal = 1920 + 2 + 2 + 18,
	.width_mm = 0,
	.height_mm = 0,
};

static int nt35596_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &nt35596_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs nt35596_panel_funcs = {
	.prepare = nt35596_prepare,
	.unprepare = nt35596_unprepare,
	.get_modes = nt35596_get_modes,
};

static int nt35596_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct nt35596 *ctx;
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
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
			  MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	drm_panel_init(&ctx->panel, dev, &nt35596_panel_funcs,
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

static void nt35596_remove(struct mipi_dsi_device *dsi)
{
	struct nt35596 *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id nt35596_of_match[] = {
	{ .compatible = "mdss,nt35596" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, nt35596_of_match);

static struct mipi_dsi_driver nt35596_driver = {
	.probe = nt35596_probe,
	.remove = nt35596_remove,
	.driver = {
		.name = "panel-nt35596",
		.of_match_table = nt35596_of_match,
	},
};
module_mipi_dsi_driver(nt35596_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for nt35596 1080p video mode dsi panel");
MODULE_LICENSE("GPL");
