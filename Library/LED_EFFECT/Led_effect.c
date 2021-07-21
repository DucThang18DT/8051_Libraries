/*---------------------------------------------------*
					Led_effect.c
-*---------------------------------------------------*
	File     				 	: 	Led_effect.c  - Library file
	Creat   					: 	29/05/2020
	Lastest Modified 	: 	29/05/2020
	By      					: 	Pham Duc Thang
	Require 					: 	#include "Led_effect.h"
-*---------------------------------------------------*/

#include "Led_effect.h"
#include "Port.h"

/*----------------------------------------------------------------*
	Spin : Led running spinning effect
-*----------------------------------------------------------------*
	Parameter : Spin_Status1[], Spin_Status2[] - status of led from 1-6
-*-------- -------------------------------------------------------*/
void Spin(){
	unsigned char Spin_Status1[] = {0xDE, 0xEF, 0xFE, 0xEF, 0xFE, 0xED};
	unsigned char Spin_Status2[] = {0xEB, 0xFE, 0xEF, 0xFE, 0xEF, 0xBE};

	// Status 1
	AT89_HOUR_TOP_PIN     = 0;
	AT89_LED = Spin_Status1[0];
	Delay_ms(1);
	AT89_HOUR_TOP_PIN     = 1;

	AT89_HOUR_LAST_PIN    = 0;
	AT89_LED = Spin_Status1[1];
	Delay_ms(1);
	AT89_HOUR_LAST_PIN    = 1;

	AT89_MINUTE_TOP_PIN   = 0;
	AT89_LED = Spin_Status1[2];
	Delay_ms(1);
	AT89_MINUTE_TOP_PIN   = 1;

	AT89_MINUTE_LAST_PIN  = 0;
	AT89_LED = Spin_Status1[3];
	Delay_ms(1);
	AT89_MINUTE_LAST_PIN  = 1;

	AT89_SECOND_TOP_PIN   = 0;
	AT89_LED = Spin_Status1[4];
	Delay_ms(1);
	AT89_SECOND_TOP_PIN   = 1;

	AT89_SECOND_LAST_PIN  = 0;
	AT89_LED = Spin_Status1[5];
	Delay_ms(1);
	AT89_SECOND_LAST_PIN  = 1;
	
	Delay_ms(10);
	
	// Status 2
	AT89_HOUR_TOP_PIN     = 0;
	AT89_LED = Spin_Status2[0];
	Delay_ms(1);
	AT89_HOUR_TOP_PIN     = 1;

	AT89_HOUR_LAST_PIN    = 0;
	AT89_LED = Spin_Status2[1];
	Delay_ms(1);
	AT89_HOUR_LAST_PIN    = 1;

	AT89_MINUTE_TOP_PIN   = 0;
	AT89_LED = Spin_Status2[2];
	Delay_ms(1);
	AT89_MINUTE_TOP_PIN   = 1;

	AT89_MINUTE_LAST_PIN  = 0;
	AT89_LED = Spin_Status2[3];
	Delay_ms(1);
	AT89_MINUTE_LAST_PIN  = 1;

	AT89_SECOND_TOP_PIN   = 0;
	AT89_LED = Spin_Status2[4];
	Delay_ms(1);
	AT89_SECOND_TOP_PIN   = 1;

	AT89_SECOND_LAST_PIN  = 0;
	AT89_LED = Spin_Status2[5];
	Delay_ms(1);
	AT89_SECOND_LAST_PIN  = 1;
	
	Delay_ms(10);
}


/*---------------------------------------------------*
-*---------------- End File -------------------------*
-*---------------------------------------------------*/