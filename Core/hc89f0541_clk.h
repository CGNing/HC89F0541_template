/*
 *FileName: hc89f0541_clk.h
 *Author: CGN
 *Version: 1.00
 *Date: 2019.09.24
 *Description:
 */

#ifndef __HC89F0541_H
#define __HC89F0541_H

#define CLK_CLKCON_HSIEN_EN         (0x02)
#define CLK_CLKCON_XTALEN_EN        (0x04)
#define CLK_CLKCON_LSRCRDY_OK       (0x10)
#define CLK_CLKCON_HSRCRDY_OK       (0x20)
#define CLK_CLKCON_LXTALRDY_OK      (0x40)
#define CLK_CLKCON_HXTALRDY_OK      (0x80)

#define CLK_CLKSWR_RC32M_DIV1       (0x00)
#define CLK_CLKSWR_RC32M_DIV2       (0x01)
#define CLK_CLKSWR_RC32M_DIV4       (0x02)
#define CLK_CLKSWR_RC32M_DIV8       (0x03)
#define CLK_CLKSWR_CLKSEL_LSI       (0x00)      //system clock select
#define CLK_CLKSWR_CLKSEL_HSI       (0x10)
#define CLK_CLKSWR_CLKSEL_LSE       (0x20)
#define CLK_CLKSWR_CLKSEL_HSE       (0x30)
#define CLK_CLKSWR_CLKSTA_LSI       (0x00)      //system clock state
#define CLK_CLKSWR_CLKSTA_HSI       (0x40)
#define CLK_CLKSWR_CLKSTA_LSE       (0x80)
#define CLK_CLKSWR_CLKSTA_HSE       (0xC0)

#define CLK_CLKSWR_SET_HSI16M       (0x51)

#define CLK_CLKDIV_DIV1             (0x01)

#define CLK_CLKOUT_CLKOUTEN_EN      (0x10)

#define CLK_CLKOUT_SEL_CPUCLK       (0x00)
#define CLK_CLKOUT_SEL_OSCCLK       (0x01)
#define CLK_CLKOUT_SEL_WDTCLK       (0x02)
#define CLK_CLKOUT_SEL_XTALCLK      (0x03)
#define CLK_CLKOUT_SEL_RC32MDIV1    (0x04)
#define CLK_CLKOUT_SEL_RC32MDIV2    (0x05)
#define CLK_CLKOUT_SEL_RC32MDIV4    (0x06)
#define CLK_CLKOUT_SEL_RC32MDIV8    (0x07)

#define CLK_XTALCFG_XTALSEL_LSE         (0x00)
#define CLK_XTALCFG_XTALSEL_HSE         (0x01)
#define CLK_XTALCFG_HXTALMODESEL_4M8M   (0x00)
#define CLK_XTALCFG_HXTALMODESEL_4M8MS  (0x04)
#define CLK_XTALCFG_HXTALMODESEL_16M24M (0x0C)
#define CLK_XTALCFG_LXTALCFG_16384      (0x00)
#define CLK_XTALCFG_LXTALCFG_4096       (0x10)
#define CLK_XTALCFG_LXTALCFG_1024       (0x20)
#define CLK_XTALCFG_LXTALCFG_65535      (0x30)
#define CLK_XTALCFG_HXTALCFG_16384      (0x00)
#define CLK_XTALCFG_HXTALCFG_4096       (0x40)
#define CLK_XTALCFG_HXTALCFG_1024       (0x80)
#define CLK_XTALCFG_HXTALCFG_65535      (0xC0)

#define CLK_FREQCLK_LESS1M          (0x10)
#define CLK_FREQCLK_2M              (0x08)
#define CLK_FREQCLK_4M              (0x04)
#define CLK_FREQCLK_8M              (0x02)
#define CLK_FREQCLK_16M             (0x01)

#define CLK_TRMEN_RCTRMEN_EN        (0x01)

#define CLK_TRMV_RCTRMV

#endif
