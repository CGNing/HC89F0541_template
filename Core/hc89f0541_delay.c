/*
 *FileName: hc89f0541_delay.c
 *Author: CGN
 *Version: 1.00
 *Date: 2019.10.05
 *Description:
 */

#include "hc89f0541_delay.h"

void delay_ms(unsigned int t){
	unsigned int temp;
	for(;t > 0;t --)
	for(temp = 1596;temp > 0;temp --);
}

void delay_us(unsigned int t){
	t = t >> 1;
	while(t--);	
}
