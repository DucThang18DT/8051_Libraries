/*---------------------------------------------------*
					Port.h
-*---------------------------------------------------*
	File     				 	: 	Port.h  - Library file
	Creat   					: 	25/03/2020
	Lastest Modified 	: 	16/05/2020
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*---------------------------------------------------*/

#include <REGX52.H>

#ifndef _PORT_H_
#define _PORT_H_
	
	/*----------------------------------------------------------------*
		Declare the pins and its names of IC DS1307
  -*-------- -------------------------------------------------------*/
	#define DS1307_Second   0x00
	#define DS1307_Minute   0x01
	#define DS1307_Hour     0x02
	#define DS1307_Day      0x03
	#define DS1307_Date     0x04
	#define DS1307_Month    0x05
	#define DS1307_Year     0x06
	
	/*----------------------------------------------------------------*
		Declare the pins and its names of I2C communication
  -*-------- -------------------------------------------------------*/
	sbit I2C_SCL = P1^0;
	sbit I2C_SDA = P1^1;
	
	/*----------------------------------------------------------------*
		Declare the pins and its names of IC AT89C52
  -*-------- -------------------------------------------------------*/
	sbit AT89_HOUR_TOP_PIN     = P2^0;
	sbit AT89_HOUR_LAST_PIN    = P2^1;
	sbit AT89_MINUTE_TOP_PIN   = P2^2;
	sbit AT89_MINUTE_LAST_PIN  = P2^3;
	sbit AT89_SECOND_TOP_PIN   = P2^4;
	sbit AT89_SECOND_LAST_PIN  = P2^5;
	sbit AT89_BUTTON1 = P3^0;
	sbit AT89_BUTTON2 = P3^1;
	sbit AT89_BUTTON3 = P3^2;
	#define AT89_LED P0
	
	
#endif

/*---------------------------------------------------*
-*---------------- End File -------------------------*
-*---------------------------------------------------*/