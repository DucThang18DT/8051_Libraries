/*---------------------------------------------------*
					Delay.c
-*---------------------------------------------------*
	File     				 	: 	Delay.c  - Library file
	Creat   					: 	11/03/2020
	Lastest Modified 	: 	17/05/2020
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*---------------------------------------------------*/

#include <REGX52.H>
#include "Delay.h"


/*----------------------------------------------------------------*
	Delay : Delay IC DS1307 for a very short period of time
-*-------- -------------------------------------------------------*/
void Delay(unsigned int Time){
	unsigned int Count_1, Count_2;
	for (Count_1 =0; Count_1 <= Time ; Count_1++)
		for (Count_2 = 0; Count_2 <=123; Count_2++);
}

/*----------------------------------------------------------------*
	Delay_us : Delay IC DS1307 for a very short period of time
-*----------------------------------------------------------------*
	parameter : Time - time delay in micro second
-*-------- -------------------------------------------------------*/
void Delay_us(unsigned int Time){
	TMOD=0X02;
	TH0=256-Time;
	TR0=1;
	while(!TF0);
	TF0=0;
}

/*----------------------------------------------------------------*
	Delay_ms : Delay IC DS1307 for a very short period of time
-*----------------------------------------------------------------*
	parameter : Time - time delay in milli second
-*-------- -------------------------------------------------------*/
void Delay_ms(unsigned int Time){
	int Count;
	TMOD=0X02;
	TH0=0x00;
	while(Time!=0)
	{
		for(Count = 0 ;Count < 4;Count++){
		TR0=1;
		while(!TF0);
		TF0=0;}
		Time--;
	}
}

/*---------------------------------------------------*
-*---------------- End File -------------------------*
-*---------------------------------------------------*/