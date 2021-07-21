/*---------------------------------------------------*
					LCD.c
-*---------------------------------------------------*
	File     				 	: 	LCD.c  - Library file
	Creat   					: 	16/05/2020
	Lastest Modified 	: 	16/05/2020
	By      					: 	Pham Duc Thang
	Require 					: 	#include "LCD.h"
-*---------------------------------------------------*/

#include "LCD.h"
#include "Port.h"
#include "Delay.h"

void Initialization_LCD(){
	Send_Cmd(0x30);
	Delay(5);
	Send_Cmd(0x030);
	Delay(1);
	Send_Cmd(0x30);
	Send_Cmd(0x38);
}

void Send_Cmd(char Cmd){
	LCD_RS = 0;
	AT89_LCD = Cmd;
	LCD_E = 0;
	LCD_E = 1;
	Delay(3);
}

void Send_Data(char Data){
	LCD_RS = 1;
	AT89_LCD = Data;
	LCD_E = 0;
	Delay(3);
	LCD_E = 1;
}

void Send_Data_array(char* Data){
	unsigned char Count = 0;
	LCD_RS = 1;
	while (Data[Count] != 0){
		AT89_LCD = Data[Count];
		LCD_E = 0;
		Delay(3);
		LCD_E = 1;
		++Count;
	}
}
/*---------------------------------------------------*
-*---------------- End File -------------------------*
-*---------------------------------------------------*/