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
    P1M6 = 0xC2;				        //P16����Ϊ�������
	P1M7 = 0x62;				        //P17����Ϊ�������
	TXD_MAP = 0x16;						//TXDӳ��P16
	RXD_MAP = 0x17;						//RXDӳ��P17
	T4CON = 0x06;						//T4����ģʽ��UART1�����ʷ�����
	//�����ʼ���
	//������ = 1/16 * (T4ʱ��ԴƵ�� / ��ʱ��4Ԥ��Ƶ��) / (65536 - 0xFF98)
	//       = 1/16 * ((16000000 / 1) / 104)
	//		 = 9615.38(���0.16%)

	//������9600
	//���Ƴ�ֵ = (65536 - ((T4ʱ��ԴƵ�� / ��ʱ��4Ԥ��Ƶ��) * (1 / 16)) / ������)
	//		   = (65536 - (16000000 * (1 / 16) / 9600))
	//		   = (65536 - 104.167)
	//         = FF98

    TH4 = 0xFF;
	TL4 = 0x98;							//������9600
	SCON2 = 0x02;						//8λUART�������ʿɱ�
	SCON = 0x10;						//�����н���
	IE |= 0x10;							//ʹ�ܴ����ж�
	EA = 1;								//ʹ�����ж�
}

void UART1_Rpt(void) interrupt UART1_VECTOR
{
	// if(SCON & 0x01)						//�жϽ����жϱ�־λ
	// {
	// 	guc_Uartbuf_a[guc_Uartcnt++] = SBUF;//ת��8λ���ڽ�������
	// 	if(guc_Uartcnt >= 5)
	// 	{
	// 		SCON &=~ 0x10;				//ʧ��UART1����
	// 		guc_Uartflag = 1;
	// 	}
	// 	SCON &=~ 0x01;					//��������жϱ�־λ
	// }
}

