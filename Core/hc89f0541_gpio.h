/*
 *FileName: hc89f0541_gpio.h
 *Author: CGN
 *Version: 1.00
 *Date: 2019.09.22
 *Description:
 */

#ifndef __HC89F0541_GPIO_H
#define __HC89F0541_GPIO_H

#define PINMODE ((volatile unsigned char xdata*)0xFF00)
#define P0M ((volatile unsigned char xdata*)0xFF00)
#define P1M ((volatile unsigned char xdata*)0xFF08)
#define P2M ((volatile unsigned char xdata*)0xFF10)
#define P3M ((volatile unsigned char xdata*)0xFF18)

#define GPIO_PXMX_OUTEN_EN              (0x80)
#define GPIO_PXMX_INEN_EN               (0x40)
#define GPIO_PXMX_PUEN_EN               (0x20)
#define GPIO_PXMX_PDEN_EN               (0x10)
#define GPIO_PXMX_SMTEN_EN              (0x04)
#define GPIO_PXMX_ODEN_EN               (0x02)
#define GPIO_PXMX_EREN_20_70MA          (0x00)
#define GPIO_PXMX_EREN_10_28MA          (0x01)
#define GPIO_PXMX_EREN_7_14MA           (0x02)
#define GPIO_PXMX_EREN_4_7MA            (0x03)

//commonly use
#define GPIO_PXMX_CURRENT_SRC20MA       (0x00)
#define GPIO_PXMX_CURRENT_SRC10MA       (0x01)
#define GPIO_PXMX_CURRENT_SRC7MA        (0x02)
#define GPIO_PXMX_CURRENT_SRC4MA        (0x03)
#define GPIO_PXMX_CURRENT_SINK70MA      (0x00)
#define GPIO_PXMX_CURRENT_SINK28MA      (0x01)
#define GPIO_PXMX_CURRENT_SINK14MA      (0x02)
#define GPIO_PXMX_CURRENT_SINK7MA       (0x03)

//commonly use
#define GPIO_PXMX_MODE_IN_AN            (0x00)
#define GPIO_PXMX_MODE_IN_PU            (0x60)
#define GPIO_PXMX_MODE_IN_PD            (0x50)
#define GPIO_PXMX_MODE_IN_PUPD          (0x70)
#define GPIO_PXMX_MODE_IN_SMTPU         (0x68)
#define GPIO_PXMX_MODE_IN_SMTPD         (0x58)
#define GPIO_PXMX_MODE_IN_SMTPUPD       (0x78)
#define GPIO_PXMX_MODE_OUT_PP           (0xC0)
#define GPIO_PXMX_MODE_OUT_OD           (0xC4)
#define GPIO_PXMX_MODE_OUT_ODPU         (0xE4)

#define GPIO_P0XDBC_P0XDBCLK_DIV1       (0x00)
#define GPIO_P0XDBC_P0XDBCLK_DIV4       (0x01)
#define GPIO_P0XDBC_P0XDBCLK_DIV16      (0x02)
#define GPIO_P0XDBC_P0XDBCLK_DIV64      (0x03)
#define GPIO_P0XDBC_P0XDBCT             (0x1F)

#define GPIO_EXMAP_FPORT_P0             (0x00)
#define GPIO_EXMAP_FPORT_P1             (0x10)
#define GPIO_EXMAP_FPORT_P2             (0x20)
#define GPIO_EXMAP_FPORT_P3             (0x30)
#define GPIO_EXMAP_FPIN_0               (0x00)
#define GPIO_EXMAP_FPIN_1               (0x01)
#define GPIO_EXMAP_FPIN_2               (0x02)
#define GPIO_EXMAP_FPIN_3               (0x03)
#define GPIO_EXMAP_FPIN_4               (0x04)
#define GPIO_EXMAP_FPIN_5               (0x05)
#define GPIO_EXMAP_FPIN_6               (0x06)
#define GPIO_EXMAP_FPIN_7               (0x07)

#endif
