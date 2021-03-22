/*
 *FileName: hc89f0541_uart.c
 *Author: CGN
 *Version: 1.00
 *Date: 2019.10.06
 *Description:
 */

#include "hc89f0541.h"
#include "hc89f0541_uart.h"

void uart1_init(unsigned short baud){
    P1M6 = 0xC2;				        //P16设置为推挽输出
	P1M7 = 0x62;				        //P17设置为上拉输出
	TXD_MAP = 0x16;						//TXD映射P16
	RXD_MAP = 0x17;						//RXD映射P17
	T4CON = 0x06;						//T4工作模式：UART1波特率发生器
	//波特率计算
	//波特率 = 1/16 * (T4时钟源频率 / 定时器4预分频比) / (65536 - 0xFF98)
	//       = 1/16 * ((16000000 / 1) / 104)
	//		 = 9615.38(误差0.16%)

	//波特率9600
	//反推初值 = (65536 - ((T4时钟源频率 / 定时器4预分频比) * (1 / 16)) / 波特率)
	//		   = (65536 - (16000000 * (1 / 16) / 9600))
	//		   = (65536 - 104.167)
	//         = FF98

    TH4 = 0xFF;
	TL4 = 0x98;							//波特率9600
	SCON2 = 0x02;						//8位UART，波特率可变
	SCON = 0x10;						//允许串行接收
	IE |= 0x10;							//使能串口中断
	EA = 1;								//使能总中断
}

void UART1_Rpt(void) interrupt UART1_VECTOR
{
	// if(SCON & 0x01)						//判断接收中断标志位
	// {
	// 	guc_Uartbuf_a[guc_Uartcnt++] = SBUF;//转存8位串口接收数据
	// 	if(guc_Uartcnt >= 5)
	// 	{
	// 		SCON &=~ 0x10;				//失能UART1接收
	// 		guc_Uartflag = 1;
	// 	}
	// 	SCON &=~ 0x01;					//清除接收中断标志位
	// }
}

