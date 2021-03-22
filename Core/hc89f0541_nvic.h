/*
 *FileName: hc89f0541_nvic.h
 *Author: CGN
 *Version: 1.00
 *Date: 2019.10.05
 *Description:
 */

#ifndef __HC89F0541_NVIC_H
#define __HC89F0541_NVIC_H

//interrupt enable
#define NVIC_IE_EX0_EN      (0x01)
#define NVIC_IE_ET0_EN      (0x02)
#define NVIC_IE_EX1_EN      (0x04)
#define NVIC_IE_ET1_EN      (0x08)
#define NVIC_IE_ESI_EN      (0x10)
#define NVIC_IE_EWDT_EN     (0x20)
#define NVIC_IE_ES2_EN      (0x40)
#define NVIC_IE_EA_EN       (0x80)

#define NVIC_IE1_ESPI_EN    (0x01)
#define NVIC_IE1_EIIC_EN    (0x02)
#define NVIC_IE1_ET3_EN     (0x04)
#define NVIC_IE1_ET4_EN     (0x08)
#define NVIC_IE1_ET5_EN     (0x10)
#define NVIC_IE1_EADC_EN    (0x40)
#define NVIC_IE1_EX2_7_EN   (0x80)

#define NVIC_IE2_EX8_17_EN  (0x01)
#define NVIC_IE2_EXP2_EN    (0x02)

//interrupt priority, 0 is lowest
#define NVIC_IP0_PX0_0      (0x00)
#define NVIC_IP0_PX0_1      (0x01)
#define NVIC_IP0_PX0_2      (0x02)
#define NVIC_IP0_PX0_3      (0x03)
#define NVIC_IP0_PT0_0      (0x00)
#define NVIC_IP0_PT0_1      (0x04)
#define NVIC_IP0_PT0_2      (0x08)
#define NVIC_IP0_PT0_3      (0x0C)
#define NVIC_IP0_PX1_0      (0x00)
#define NVIC_IP0_PX1_1      (0x10)
#define NVIC_IP0_PX1_2      (0x20)
#define NVIC_IP0_PX1_3      (0x30)
#define NVIC_IP0_PT1_0      (0x00)
#define NVIC_IP0_PT1_1      (0x40)
#define NVIC_IP0_PT1_2      (0x80)
#define NVIC_IP0_PT1_3      (0xC0)

#define NVIC_IP1_PS1_0      (0x00)      //uart1
#define NVIC_IP1_PS1_1      (0x01)
#define NVIC_IP1_PS1_2      (0x02)
#define NVIC_IP1_PS1_3      (0x03)
#define NVIC_IP1_PWDT_0     (0x00)
#define NVIC_IP1_PWDT_1     (0x04)
#define NVIC_IP1_PWDT_2     (0x08)
#define NVIC_IP1_PWDT_3     (0x0C)
#define NVIC_IP1_PLVD_0     (0x00)
#define NVIC_IP1_PLVD_1     (0x10)
#define NVIC_IP1_PLVD_2     (0x20)
#define NVIC_IP1_PLVD_3     (0x30)
#define NVIC_IP1_PS2_0      (0x00)      //uart2
#define NVIC_IP1_PS2_1      (0x40)
#define NVIC_IP1_PS2_2      (0x80)
#define NVIC_IP1_PS2_3      (0xC0)

#define NVIC_IP2_PSPI_0     (0x00)
#define NVIC_IP2_PSPI_1     (0x01)
#define NVIC_IP2_PSPI_2     (0x02)
#define NVIC_IP2_PSPI_3     (0x03)
#define NVIC_IP2_PIIC_0     (0x00)
#define NVIC_IP2_PIIC_1     (0x04)
#define NVIC_IP2_PIIC_2     (0x08)
#define NVIC_IP2_PIIC_3     (0x0C)
#define NVIC_IP2_PT3_0      (0x00)
#define NVIC_IP2_PT3_1      (0x10)
#define NVIC_IP2_PT3_2      (0x20)
#define NVIC_IP2_PT3_3      (0x30)
#define NVIC_IP2_PT4_0      (0x00)
#define NVIC_IP2_PT4_1      (0x40)
#define NVIC_IP2_PT4_2      (0x80)
#define NVIC_IP2_PT4_3      (0xC0)

#define NVIC_IP3_PPWM_PX2_7_0       (0x00)
#define NVIC_IP3_PPWM_PX2_7_1       (0x01)
#define NVIC_IP3_PPWM_PX2_7_2       (0x02)
#define NVIC_IP3_PPWM_PX2_7_3       (0x03)
#define NVIC_IP3_PT5_px8_17_0       (0x00)
#define NVIC_IP3_PT5_px8_17_1       (0x04)
#define NVIC_IP3_PT5_px8_17_2       (0x08)
#define NVIC_IP3_PT5_px8_17_3       (0x0C)
#define NVIC_IP3_PP2INT_0           (0x00)
#define NVIC_IP3_PP2INT_1           (0x10)
#define NVIC_IP3_PP2INT_2           (0x20)
#define NVIC_IP3_PP2INT_3           (0x30)
#define NVIC_IP3_PADC_0             (0x00)
#define NVIC_IP3_PADC_1             (0x40)
#define NVIC_IP3_PADC_2             (0x80)
#define NVIC_IP3_PADC_3             (0xC0)

//external interrupt voltage level
#define NVIC_PITS0_IT0_LOW          (0x00)
#define NVIC_PITS0_IT0_NEGEDGE      (0x01)
#define NVIC_PITS0_IT0_POSEDGE      (0x02)
#define NVIC_PITS0_IT0_BOTHEDGE     (0x03)
#define NVIC_PITS0_IT1_LOW          (0x00)
#define NVIC_PITS0_IT1_NEGEDGE      (0x04)
#define NVIC_PITS0_IT1_POSEDGE      (0x08)
#define NVIC_PITS0_IT1_BOTHEDGE     (0x0C)
#define NVIC_PITS0_IT2_LOW          (0x00)
#define NVIC_PITS0_IT2_NEGEDGE      (0x10)
#define NVIC_PITS0_IT2_POSEDGE      (0x20)
#define NVIC_PITS0_IT2_BOTHEDGE     (0x30)
#define NVIC_PITS0_IT3_LOW          (0x00)
#define NVIC_PITS0_IT3_NEGEDGE      (0x40)
#define NVIC_PITS0_IT3_POSEDGE      (0x80)
#define NVIC_PITS0_IT3_BOTHEDGE     (0xC0)

//......

//external interrupt enable
#define NVIC_PINTE0_EINT2_EN    (0x04)
#define NVIC_PINTE0_EINT3_EN    (0x08)
#define NVIC_PINTE0_EINT4_EN    (0x10)
#define NVIC_PINTE0_EINT5_EN    (0x20)
#define NVIC_PINTE0_EINT6_EN    (0x40)
#define NVIC_PINTE0_EINT7_EN    (0x80)
    
#define NVIC_PINTE1_EINT8_EN    (0x01)
#define NVIC_PINTE1_EINT9_EN    (0x02)
#define NVIC_PINTE1_EINT10_EN   (0x04)
#define NVIC_PINTE1_EINT11_EN   (0x08)
#define NVIC_PINTE1_EINT12_EN   (0x10)
#define NVIC_PINTE1_EINT13_EN   (0x20)
#define NVIC_PINTE1_EINT14_EN   (0x40)
#define NVIC_PINTE1_EINT15_EN   (0x80)

#define NVIC_PINTE2_EINT16_EN   (0x01)
#define NVIC_PINTE2_EINT17_EN   (0x02)

//P2 negative edge interrupt
#define NVIC_P2INTE_EP2INT0_EN  (0x01)
#define NVIC_P2INTE_EP2INT1_EN  (0x02)
#define NVIC_P2INTE_EP2INT2_EN  (0x04)
#define NVIC_P2INTE_EP2INT3_EN  (0x08)
#define NVIC_P2INTE_EP2INT4_EN  (0x10)
#define NVIC_P2INTE_EP2INT5_EN  (0x20)
#define NVIC_P2INTE_EP2INT6_EN  (0x40)
#define NVIC_P2INTE_EP2INT7_EN  (0x80)

//external interrupt flag
#define NVIC_PINTF0_INT0F_IRQ   (0x01)
#define NVIC_PINTF0_INT1F_IRQ   (0x02)
#define NVIC_PINTF0_INT2F_IRQ   (0x04)
#define NVIC_PINTF0_INT3F_IRQ   (0x08)
#define NVIC_PINTF0_INT4F_IRQ   (0x10)
#define NVIC_PINTF0_INT5F_IRQ   (0x20)
#define NVIC_PINTF0_INT6F_IRQ   (0x40)
#define NVIC_PINTF0_INT7F_IRQ   (0x80)

#define NVIC_PINTF1_INT8F_IRQ   (0x01)
#define NVIC_PINTF1_INT9F_IRQ   (0x02)
#define NVIC_PINTF1_INT10F_IRQ  (0x04)
#define NVIC_PINTF1_INT11F_IRQ  (0x08)
#define NVIC_PINTF1_INT12F_IRQ  (0x10)
#define NVIC_PINTF1_INT13F_IRQ  (0x20)
#define NVIC_PINTF1_INT14F_IRQ  (0x40)
#define NVIC_PINTF1_INT15F_IRQ  (0x80)

#define NVIC_PINTF2_INT16F_IRQ  (0x01)
#define NVIC_PINTF2_INT17F_IRQ  (0x02)
#define NVIC_PINTF2_P2INTF_IRQ  (0x80)

#endif
