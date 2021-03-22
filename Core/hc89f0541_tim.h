/*
 *FileName: hc89f0541_tim.h
 *Author: CGN
 *Version: 1.00
 *Date: 2019.10.05
 *Description:
 */

#ifndef __HC89F0541_TIM_H
#define __HC89F0541_TIM_H

#define TIM0_1_TCON_TR0_EN          (0x10)
#define TIM0_1_TCON_TF0_OVF         (0x20)
#define TIM0_1_TCON_TR1_EN          (0x40)
#define TIM0_1_TCON_TF1_OVF         (0x80)

#define TIM0_1_TCON1_T0X12_DIV12    (0x00)
#define TIM0_1_TCON1_T0X12_FOSC     (0x01)
#define TIM0_1_TCON1_T0OUT_EN       (0x02)
#define TIM0_1_TCON1_T1X12_DIV12    (0x00)
#define TIM0_1_TCON1_T1X12_FOSC     (0x10)
#define TIM0_1_TCON1_T1OUT          (0x20)

#define TIM0_1_TMOD_M0_16ARRP       (0x00)
#define TIM0_1_TMOD_M0_16           (0x01)
#define TIM0_1_TMOD_M0_8ARRP        (0x02)
#define TIM0_1_TMOD_M0_8DBL         (0x03)
#define TIM0_1_TMOD_CT0_EXCNT       (0x04)
#define TIM0_1_TMOD_GATE0_INTTREN   (0x08)
#define TIM0_1_TMOD_M1_16ARRP       (0x00)
#define TIM0_1_TMOD_M1_16           (0x10)
#define TIM0_1_TMOD_M1_8ARRP        (0x20)
#define TIM0_1_TMOD_M1_STOP         (0x30)
#define TIM0_1_TMOD_CT1_EXCNT       (0x40)
#define TIM0_1_TMOD_GATE1_INTTREN   (0x80)

#define TIM3_T3CON_T3CLKS_FOSC      (0x00)
#define TIM3_T3CON_T3CLKS_EXPIN     (0x01)
#define TIM3_T3CON_T3CLKS_EXCLKLOW  (0x02)
#define TIM3_T3CON_TR3_EN           (0x04)
#define TIM3_T3CON_T3PS_DIV1        (0x00)
#define TIM3_T3CON_T3PS_DIV8        (0x10)
#define TIM3_T3CON_T3PS_DIV64       (0x20)
#define TIM3_T3CON_T3PS_DIV256      (0x30)
#define TIM3_T3CON_T3PDEN_EN        (0x40)      //power down run enable
#define TIM3_T3CON_TF3_OVF          (0x80)

#define TIM4_T4CON_T4CLKS_FOSC      (0x00)
#define TIM4_T4CON_T4CLKS_EXPIN     (0x01)
#define TIM4_T4CON_TR4_EN           (0x02)
#define TIM4_T4CON_T4M_16ARRP       (0x00)
#define TIM4_T4CON_T4M_UARTBAUD     (0x04)
#define TIM4_T4CON_T4M_POSEDGE      (0x08)
#define TIM4_T4CON_T4M_NEGEDGE      (0x0C)
#define TIM4_T4CON_T4PS_DIV1        (0x00)
#define TIM4_T4CON_T4PS_DIV8        (0x10)
#define TIM4_T4CON_T4PS_DIV64       (0x20)
#define TIM4_T4CON_T4PS_DIV256      (0x30)
#define TIM4_T4CON_TC4_CMPTRIEN     (0x40)
#define TIM4_T4CON_TF4_OVF          (0x80)

#endif
