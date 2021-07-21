/*---------------------------------------------------*
					LED_7SEG.h
-*---------------------------------------------------*
	File     				 	: 	LED_7SEG.h  - Library file
	Creat   					: 	17/05/2020
	Lastest Modified 	: 	17/05/2020
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*---------------------------------------------------*/

#ifndef _LED_7SEG_H_
#define _LED_7SEG_H_

	void Set_Time(unsigned char*, unsigned char);
	//void Show_Time(bit ,bit ,char);
	void Show_Hour(unsigned char, unsigned char*);
	void Show_Minute(unsigned char, unsigned char*);
	void Show_Second(unsigned char, unsigned char*);
	void Show_Year(unsigned char, unsigned char*);
	void Show_Month(unsigned char, unsigned char*);
	void Show_Date(unsigned char, unsigned char*);
	void Show_Day(unsigned char, unsigned char*);

#endif

/*---------------------------------------------------*
-*---------------- End File -------------------------*
-*---------------------------------------------------*/