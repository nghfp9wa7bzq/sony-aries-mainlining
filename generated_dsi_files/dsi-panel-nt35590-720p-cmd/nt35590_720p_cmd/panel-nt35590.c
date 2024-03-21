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

struct nt35590 {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	bool prepared;
};

static inline struct nt35590 *to_nt35590(struct drm_panel *panel)
{
	return container_of(panel, struct nt35590, panel);
}

static void nt35590_reset(struct nt35590 *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(1000, 2000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int nt35590_on(struct nt35590 *ctx)
{
	struct mipi_dsi_device *dsi = ctx->dsi;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq(dsi, 0xff, 0xee);
	mipi_dsi_generic_write_seq(dsi, 0x26, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0x26, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x00);
	usleep_range(16000, 17000);
	mipi_dsi_generic_write_seq(dsi, 0xba, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xc2, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x4a);
	mipi_dsi_generic_write_seq(dsi, 0x01, 0x33);
	mipi_dsi_generic_write_seq(dsi, 0x02, 0x53);
	mipi_dsi_generic_write_seq(dsi, 0x03, 0x55);
	mipi_dsi_generic_write_seq(dsi, 0x04, 0x55);
	mipi_dsi_generic_write_seq(dsi, 0x05, 0x33);
	mipi_dsi_generic_write_seq(dsi, 0x06, 0x22);
	mipi_dsi_generic_write_seq(dsi, 0x08, 0x56);
	mipi_dsi_generic_write_seq(dsi, 0x09, 0x8f);
	mipi_dsi_generic_write_seq(dsi, 0x36, 0x73);
	mipi_dsi_generic_write_seq(dsi, 0x0b, 0x9f);
	mipi_dsi_generic_write_seq(dsi, 0x0c, 0x9f);
	mipi_dsi_generic_write_seq(dsi, 0x0d, 0x2f);
	mipi_dsi_generic_write_seq(dsi, 0x0e, 0x24);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x83);
	mipi_dsi_generic_write_seq(dsi, 0x12, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x71, 0x2c);
	mipi_dsi_generic_write_seq(dsi, 0x6f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x0f, 0x0a);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x01, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x02, 0x8b);
	mipi_dsi_generic_write_seq(dsi, 0x03, 0x82);
	mipi_dsi_generic_write_seq(dsi, 0x04, 0x82);
	mipi_dsi_generic_write_seq(dsi, 0x05, 0x30);
	mipi_dsi_generic_write_seq(dsi, 0x06, 0x33);
	mipi_dsi_generic_write_seq(dsi, 0x07, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x08, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x09, 0x46);
	mipi_dsi_generic_write_seq(dsi, 0x0a, 0x46);
	mipi_dsi_generic_write_seq(dsi, 0x0d, 0x0b);
	mipi_dsi_generic_write_seq(dsi, 0x0e, 0x1d);
	mipi_dsi_generic_write_seq(dsi, 0x0f, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0x10, 0x53);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x12, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x14, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x15, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x16, 0x05);
	mipi_dsi_generic_write_seq(dsi, 0x17, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x19, 0x7f);
	mipi_dsi_generic_write_seq(dsi, 0x1a, 0xff);
	mipi_dsi_generic_write_seq(dsi, 0x1b, 0x0f);
	mipi_dsi_generic_write_seq(dsi, 0x1c, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1e, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x1f, 0x07);
	mipi_dsi_generic_write_seq(dsi, 0x20, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x21, 0x06);
	mipi_dsi_generic_write_seq(dsi, 0x22, 0x55);
	mipi_dsi_generic_write_seq(dsi, 0x23, 0x4d);
	mipi_dsi_generic_write_seq(dsi, 0x2d, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x28, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x2f, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x83, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x9e, 0x58);
	mipi_dsi_generic_write_seq(dsi, 0x9f, 0x6a);
	mipi_dsi_generic_write_seq(dsi, 0xa0, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xa2, 0x10);
	mipi_dsi_generic_write_seq(dsi, 0xbb, 0x0a);
	mipi_dsi_generic_write_seq(dsi, 0xbc, 0x0a);
	mipi_dsi_generic_write_seq(dsi, 0x32, 0x08);
	mipi_dsi_generic_write_seq(dsi, 0x33, 0xb8);
	mipi_dsi_generic_write_seq(dsi, 0x36, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x37, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x43, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x4b, 0x21);
	mipi_dsi_generic_write_seq(dsi, 0x4c, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x50, 0x21);
	mipi_dsi_generic_write_seq(dsi, 0x51, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x58, 0x21);
	mipi_dsi_generic_write_seq(dsi, 0x59, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x5d, 0x21);
	mipi_dsi_generic_write_seq(dsi, 0x5e, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x6c, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x6d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x75, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x76, 0x7d);
	mipi_dsi_generic_write_seq(dsi, 0x77, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x78, 0x8a);
	mipi_dsi_generic_write_seq(dsi, 0x79, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7a, 0x9c);
	mipi_dsi_generic_write_seq(dsi, 0x7b, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7c, 0xb1);
	mipi_dsi_generic_write_seq(dsi, 0x7d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7e, 0xbf);
	mipi_dsi_generic_write_seq(dsi, 0x7f, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x80, 0xcf);
	mipi_dsi_generic_write_seq(dsi, 0x81, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x82, 0xdd);
	mipi_dsi_generic_write_seq(dsi, 0x83, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x84, 0xe8);
	mipi_dsi_generic_write_seq(dsi, 0x85, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x86, 0xf2);
	mipi_dsi_generic_write_seq(dsi, 0x87, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x88, 0x1f);
	mipi_dsi_generic_write_seq(dsi, 0x89, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8a, 0x41);
	mipi_dsi_generic_write_seq(dsi, 0x8b, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8c, 0x78);
	mipi_dsi_generic_write_seq(dsi, 0x8d, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8e, 0xa5);
	mipi_dsi_generic_write_seq(dsi, 0x8f, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x90, 0xee);
	mipi_dsi_generic_write_seq(dsi, 0x91, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x92, 0x29);
	mipi_dsi_generic_write_seq(dsi, 0x93, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x94, 0x2a);
	mipi_dsi_generic_write_seq(dsi, 0x95, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x96, 0x5d);
	mipi_dsi_generic_write_seq(dsi, 0x97, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x98, 0x93);
	mipi_dsi_generic_write_seq(dsi, 0x99, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x9a, 0xb8);
	mipi_dsi_generic_write_seq(dsi, 0x9b, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x9c, 0xe7);
	mipi_dsi_generic_write_seq(dsi, 0x9d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9e, 0x07);
	mipi_dsi_generic_write_seq(dsi, 0x9f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa0, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0xa2, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa3, 0x46);
	mipi_dsi_generic_write_seq(dsi, 0xa4, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa5, 0x56);
	mipi_dsi_generic_write_seq(dsi, 0xa6, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa7, 0x66);
	mipi_dsi_generic_write_seq(dsi, 0xa9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xaa, 0x7a);
	mipi_dsi_generic_write_seq(dsi, 0xab, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xac, 0x93);
	mipi_dsi_generic_write_seq(dsi, 0xad, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xae, 0xa3);
	mipi_dsi_generic_write_seq(dsi, 0xaf, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xb0, 0xb4);
	mipi_dsi_generic_write_seq(dsi, 0xb1, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xb2, 0xcb);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb4, 0x7d);
	mipi_dsi_generic_write_seq(dsi, 0xb5, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb6, 0x8a);
	mipi_dsi_generic_write_seq(dsi, 0xb7, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb8, 0x9c);
	mipi_dsi_generic_write_seq(dsi, 0xb9, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xba, 0xb1);
	mipi_dsi_generic_write_seq(dsi, 0xbb, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xbc, 0xbf);
	mipi_dsi_generic_write_seq(dsi, 0xbd, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xbe, 0xcf);
	mipi_dsi_generic_write_seq(dsi, 0xbf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc0, 0xdd);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc2, 0xe8);
	mipi_dsi_generic_write_seq(dsi, 0xc3, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0xf2);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc6, 0x1f);
	mipi_dsi_generic_write_seq(dsi, 0xc7, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc8, 0x41);
	mipi_dsi_generic_write_seq(dsi, 0xc9, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xca, 0x78);
	mipi_dsi_generic_write_seq(dsi, 0xcb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0xa5);
	mipi_dsi_generic_write_seq(dsi, 0xcd, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xce, 0xee);
	mipi_dsi_generic_write_seq(dsi, 0xcf, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd0, 0x29);
	mipi_dsi_generic_write_seq(dsi, 0xd1, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd2, 0x2a);
	mipi_dsi_generic_write_seq(dsi, 0xd3, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd4, 0x5d);
	mipi_dsi_generic_write_seq(dsi, 0xd5, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd6, 0x93);
	mipi_dsi_generic_write_seq(dsi, 0xd7, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd8, 0xb8);
	mipi_dsi_generic_write_seq(dsi, 0xd9, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xda, 0xe7);
	mipi_dsi_generic_write_seq(dsi, 0xdb, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xdc, 0x07);
	mipi_dsi_generic_write_seq(dsi, 0xdd, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xde, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0xdf, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe0, 0x46);
	mipi_dsi_generic_write_seq(dsi, 0xe1, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe2, 0x56);
	mipi_dsi_generic_write_seq(dsi, 0xe3, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe4, 0x66);
	mipi_dsi_generic_write_seq(dsi, 0xe5, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe6, 0x7a);
	mipi_dsi_generic_write_seq(dsi, 0xe7, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe8, 0x93);
	mipi_dsi_generic_write_seq(dsi, 0xe9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xea, 0xa3);
	mipi_dsi_generic_write_seq(dsi, 0xeb, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xec, 0xb4);
	mipi_dsi_generic_write_seq(dsi, 0xed, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xee, 0xcb);
	mipi_dsi_generic_write_seq(dsi, 0xef, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf0, 0xed);
	mipi_dsi_generic_write_seq(dsi, 0xf1, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf2, 0xf3);
	mipi_dsi_generic_write_seq(dsi, 0xf3, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xf4, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0xf5, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xf6, 0x09);
	mipi_dsi_generic_write_seq(dsi, 0xf7, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xf8, 0x13);
	mipi_dsi_generic_write_seq(dsi, 0xf9, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xfa, 0x1d);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x00, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x01, 0x26);
	mipi_dsi_generic_write_seq(dsi, 0x02, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x03, 0x2f);
	mipi_dsi_generic_write_seq(dsi, 0x04, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x05, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0x06, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x07, 0x56);
	mipi_dsi_generic_write_seq(dsi, 0x08, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x09, 0x70);
	mipi_dsi_generic_write_seq(dsi, 0x0a, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x0b, 0x9d);
	mipi_dsi_generic_write_seq(dsi, 0x0c, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x0d, 0xc2);
	mipi_dsi_generic_write_seq(dsi, 0x0e, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x0f, 0xff);
	mipi_dsi_generic_write_seq(dsi, 0x10, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x31);
	mipi_dsi_generic_write_seq(dsi, 0x12, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x13, 0x32);
	mipi_dsi_generic_write_seq(dsi, 0x14, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x15, 0x60);
	mipi_dsi_generic_write_seq(dsi, 0x16, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x17, 0x94);
	mipi_dsi_generic_write_seq(dsi, 0x18, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x19, 0xb5);
	mipi_dsi_generic_write_seq(dsi, 0x1a, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x1b, 0xe3);
	mipi_dsi_generic_write_seq(dsi, 0x1c, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x1d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x1e, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x1f, 0x2d);
	mipi_dsi_generic_write_seq(dsi, 0x20, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x21, 0x3a);
	mipi_dsi_generic_write_seq(dsi, 0x22, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x23, 0x48);
	mipi_dsi_generic_write_seq(dsi, 0x24, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x25, 0x57);
	mipi_dsi_generic_write_seq(dsi, 0x26, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x27, 0x68);
	mipi_dsi_generic_write_seq(dsi, 0x28, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x29, 0x7b);
	mipi_dsi_generic_write_seq(dsi, 0x2a, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x2b, 0x90);
	mipi_dsi_generic_write_seq(dsi, 0x2d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x2f, 0xa0);
	mipi_dsi_generic_write_seq(dsi, 0x30, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x31, 0xcb);
	mipi_dsi_generic_write_seq(dsi, 0x32, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x33, 0xed);
	mipi_dsi_generic_write_seq(dsi, 0x34, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x35, 0xf3);
	mipi_dsi_generic_write_seq(dsi, 0x36, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x37, 0xfe);
	mipi_dsi_generic_write_seq(dsi, 0x38, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x39, 0x09);
	mipi_dsi_generic_write_seq(dsi, 0x3a, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x3b, 0x13);
	mipi_dsi_generic_write_seq(dsi, 0x3d, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x3f, 0x1d);
	mipi_dsi_generic_write_seq(dsi, 0x40, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x41, 0x26);
	mipi_dsi_generic_write_seq(dsi, 0x42, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x43, 0x2f);
	mipi_dsi_generic_write_seq(dsi, 0x44, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x45, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0x46, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x47, 0x56);
	mipi_dsi_generic_write_seq(dsi, 0x48, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x49, 0x70);
	mipi_dsi_generic_write_seq(dsi, 0x4a, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x4b, 0x9d);
	mipi_dsi_generic_write_seq(dsi, 0x4c, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x4d, 0xc2);
	mipi_dsi_generic_write_seq(dsi, 0x4e, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x4f, 0xff);
	mipi_dsi_generic_write_seq(dsi, 0x50, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x51, 0x31);
	mipi_dsi_generic_write_seq(dsi, 0x52, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x53, 0x32);
	mipi_dsi_generic_write_seq(dsi, 0x54, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x55, 0x60);
	mipi_dsi_generic_write_seq(dsi, 0x56, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x58, 0x94);
	mipi_dsi_generic_write_seq(dsi, 0x59, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5a, 0xb5);
	mipi_dsi_generic_write_seq(dsi, 0x5b, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x5c, 0xe3);
	mipi_dsi_generic_write_seq(dsi, 0x5d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x5e, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x5f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x60, 0x2d);
	mipi_dsi_generic_write_seq(dsi, 0x61, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x62, 0x3a);
	mipi_dsi_generic_write_seq(dsi, 0x63, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x64, 0x48);
	mipi_dsi_generic_write_seq(dsi, 0x65, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x66, 0x57);
	mipi_dsi_generic_write_seq(dsi, 0x67, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x68, 0x68);
	mipi_dsi_generic_write_seq(dsi, 0x69, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x6a, 0x7b);
	mipi_dsi_generic_write_seq(dsi, 0x6b, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x6c, 0x90);
	mipi_dsi_generic_write_seq(dsi, 0x6d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x6e, 0xa0);
	mipi_dsi_generic_write_seq(dsi, 0x6f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x70, 0xcb);
	mipi_dsi_generic_write_seq(dsi, 0x71, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x72, 0x19);
	mipi_dsi_generic_write_seq(dsi, 0x73, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x74, 0x36);
	mipi_dsi_generic_write_seq(dsi, 0x75, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x76, 0x55);
	mipi_dsi_generic_write_seq(dsi, 0x77, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x78, 0x70);
	mipi_dsi_generic_write_seq(dsi, 0x79, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7a, 0x83);
	mipi_dsi_generic_write_seq(dsi, 0x7b, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7c, 0x99);
	mipi_dsi_generic_write_seq(dsi, 0x7d, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x7e, 0xa8);
	mipi_dsi_generic_write_seq(dsi, 0x7f, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x80, 0xb7);
	mipi_dsi_generic_write_seq(dsi, 0x81, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x82, 0xc5);
	mipi_dsi_generic_write_seq(dsi, 0x83, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x84, 0xf7);
	mipi_dsi_generic_write_seq(dsi, 0x85, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x86, 0x1e);
	mipi_dsi_generic_write_seq(dsi, 0x87, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x88, 0x60);
	mipi_dsi_generic_write_seq(dsi, 0x89, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8a, 0x95);
	mipi_dsi_generic_write_seq(dsi, 0x8b, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x8c, 0xe1);
	mipi_dsi_generic_write_seq(dsi, 0x8d, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x8e, 0x20);
	mipi_dsi_generic_write_seq(dsi, 0x8f, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x90, 0x23);
	mipi_dsi_generic_write_seq(dsi, 0x91, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x92, 0x59);
	mipi_dsi_generic_write_seq(dsi, 0x93, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x94, 0x94);
	mipi_dsi_generic_write_seq(dsi, 0x95, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x96, 0xb4);
	mipi_dsi_generic_write_seq(dsi, 0x97, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x98, 0xe1);
	mipi_dsi_generic_write_seq(dsi, 0x99, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9a, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0x9b, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9c, 0x28);
	mipi_dsi_generic_write_seq(dsi, 0x9d, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0x9e, 0x30);
	mipi_dsi_generic_write_seq(dsi, 0x9f, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa0, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0xa2, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa3, 0x3b);
	mipi_dsi_generic_write_seq(dsi, 0xa4, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa5, 0x40);
	mipi_dsi_generic_write_seq(dsi, 0xa6, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xa7, 0x50);
	mipi_dsi_generic_write_seq(dsi, 0xa9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xaa, 0x6d);
	mipi_dsi_generic_write_seq(dsi, 0xab, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xac, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xad, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xae, 0xcb);
	mipi_dsi_generic_write_seq(dsi, 0xaf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb0, 0x19);
	mipi_dsi_generic_write_seq(dsi, 0xb1, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb2, 0x36);
	mipi_dsi_generic_write_seq(dsi, 0xb3, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb4, 0x55);
	mipi_dsi_generic_write_seq(dsi, 0xb5, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb6, 0x70);
	mipi_dsi_generic_write_seq(dsi, 0xb7, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xb8, 0x83);
	mipi_dsi_generic_write_seq(dsi, 0xb9, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xba, 0x99);
	mipi_dsi_generic_write_seq(dsi, 0xbb, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xbc, 0xa8);
	mipi_dsi_generic_write_seq(dsi, 0xbd, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xbe, 0xb7);
	mipi_dsi_generic_write_seq(dsi, 0xbf, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc0, 0xc5);
	mipi_dsi_generic_write_seq(dsi, 0xc1, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0xc2, 0xf7);
	mipi_dsi_generic_write_seq(dsi, 0xc3, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc4, 0x1e);
	mipi_dsi_generic_write_seq(dsi, 0xc5, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc6, 0x60);
	mipi_dsi_generic_write_seq(dsi, 0xc7, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xc8, 0x95);
	mipi_dsi_generic_write_seq(dsi, 0xc9, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xca, 0xe1);
	mipi_dsi_generic_write_seq(dsi, 0xcb, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xcc, 0x20);
	mipi_dsi_generic_write_seq(dsi, 0xcd, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xce, 0x23);
	mipi_dsi_generic_write_seq(dsi, 0xcf, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd0, 0x59);
	mipi_dsi_generic_write_seq(dsi, 0xd1, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd2, 0x94);
	mipi_dsi_generic_write_seq(dsi, 0xd3, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd4, 0xb4);
	mipi_dsi_generic_write_seq(dsi, 0xd5, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xd6, 0xe1);
	mipi_dsi_generic_write_seq(dsi, 0xd7, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xd8, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xd9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xda, 0x28);
	mipi_dsi_generic_write_seq(dsi, 0xdb, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xdc, 0x30);
	mipi_dsi_generic_write_seq(dsi, 0xdd, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xde, 0x37);
	mipi_dsi_generic_write_seq(dsi, 0xdf, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe0, 0x3b);
	mipi_dsi_generic_write_seq(dsi, 0xe1, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe2, 0x40);
	mipi_dsi_generic_write_seq(dsi, 0xe3, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe4, 0x50);
	mipi_dsi_generic_write_seq(dsi, 0xe5, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe6, 0x6d);
	mipi_dsi_generic_write_seq(dsi, 0xe7, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xe8, 0x80);
	mipi_dsi_generic_write_seq(dsi, 0xe9, 0x03);
	mipi_dsi_generic_write_seq(dsi, 0xea, 0xcb);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x04);
	mipi_dsi_generic_write_seq(dsi, 0xfb, 0x01);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x11, 0x00);
	msleep(100);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0xee);
	mipi_dsi_generic_write_seq(dsi, 0x12, 0x50);
	mipi_dsi_generic_write_seq(dsi, 0x13, 0x02);
	mipi_dsi_generic_write_seq(dsi, 0x6a, 0x60);
	mipi_dsi_generic_write_seq(dsi, 0xff, 0x00);
	mipi_dsi_generic_write_seq(dsi, 0x29, 0x00);
	msleep(120);

	return 0;
}

static int nt35590_off(struct nt35590 *ctx)
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

static int nt35590_prepare(struct drm_panel *panel)
{
	struct nt35590 *ctx = to_nt35590(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (ctx->prepared)
		return 0;

	nt35590_reset(ctx);

	ret = nt35590_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	ctx->prepared = true;
	return 0;
}

static int nt35590_unprepare(struct drm_panel *panel)
{
	struct nt35590 *ctx = to_nt35590(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	if (!ctx->prepared)
		return 0;

	ret = nt35590_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	ctx->prepared = false;
	return 0;
}

static const struct drm_display_mode nt35590_mode = {
	.clock = (720 + 140 + 8 + 164) * (1280 + 6 + 1 + 1) * 60 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 140,
	.hsync_end = 720 + 140 + 8,
	.htotal = 720 + 140 + 8 + 164,
	.vdisplay = 1280,
	.vsync_start = 1280 + 6,
	.vsync_end = 1280 + 6 + 1,
	.vtotal = 1280 + 6 + 1 + 1,
	.width_mm = 59,
	.height_mm = 104,
};

static int nt35590_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	struct drm_display_mode *mode;

	mode = drm_mode_duplicate(connector->dev, &nt35590_mode);
	if (!mode)
		return -ENOMEM;

	drm_mode_set_name(mode);

	mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
	connector->display_info.width_mm = mode->width_mm;
	connector->display_info.height_mm = mode->height_mm;
	drm_mode_probed_add(connector, mode);

	return 1;
}

static const struct drm_panel_funcs nt35590_panel_funcs = {
	.prepare = nt35590_prepare,
	.unprepare = nt35590_unprepare,
	.get_modes = nt35590_get_modes,
};

static int nt35590_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct nt35590 *ctx;
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
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO_BURST | MIPI_DSI_MODE_VIDEO_HSE |
			  MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	drm_panel_init(&ctx->panel, dev, &nt35590_panel_funcs,
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

static void nt35590_remove(struct mipi_dsi_device *dsi)
{
	struct nt35590 *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id nt35590_of_match[] = {
	{ .compatible = "mdss,nt35590" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, nt35590_of_match);

static struct mipi_dsi_driver nt35590_driver = {
	.probe = nt35590_probe,
	.remove = nt35590_remove,
	.driver = {
		.name = "panel-nt35590",
		.of_match_table = nt35590_of_match,
	},
};
module_mipi_dsi_driver(nt35590_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for nt35590 720p command mode dsi panel");
MODULE_LICENSE("GPL");
