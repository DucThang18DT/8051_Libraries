/*---------------------------------------------------*
					LCD.h
-*---------------------------------------------------*
	File     				 	: 	LCD.h  - Library file
	Creat   					: 	16/05/2020
	Lastest Modified 	: 	16/05/2020
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*---------------------------------------------------*/

#ifndef _LCD_H_
#define _LCD_H_

	void Initialization_LCD();
	void Send_Cmd(char);
	void Send_Data(char);
	void Send_Data_array(char*);
	
#endif

/*---------------------------------------------------*
-*---------------- End File -------------------------*
-*---------------------------------------------------*/