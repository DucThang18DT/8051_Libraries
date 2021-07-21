/*---------------------------------------------------*
					LED_7SEG.c
-*---------------------------------------------------*
	File     				 	: 	LED_7SEG.c  - Library file
	Creat   					: 	17/05/2020
	Lastest Modified 	: 	17/05/2020
	By      					: 	Pham Duc Thang
	Require 					: 	#include "LED_7SEG.h"
-*---------------------------------------------------*/

#include "LED_7SEG.h"
#include "Port.h"
#include "Delay.h"


/*----------------------------------------------------------------*
	Set_Time : Set hour, minute, second, day, date, month, year
-*----------------------------------------------------------------*
	Push button 1 to change mode
	Push button 2 to increase value
	Push button 3 to decrease value
-*-------- -------------------------------------------------------*/
void Set_Time(unsigned char *Time, unsigned char Factor){
	if (AT89_BUTTON2 ==0 ){
		Delay_ms(200);
		*Time = ((++*Time)%Factor);
	}
	if (AT89_BUTTON3 ==0 ){
		Delay_ms(200);
		if (*Time == 0) *Time = Factor -1;
		else *Time = ((--*Time)%Factor);
	}
}


/*----------------------------------------------------------------*
void Show_Time(bit Port_Top ,bit Port_Last ,char Value){
	Port_Top = 0;
	AT89_LED = ~Num_Cathode[Value/10];
	Delay(1);
	Port_Top = 1;
	Port_Last = 0;
	AT89_LED = ~Num_Cathode[Value%10];
	Delay(1);
	Port_Last = 1;
}
-*-------- -------------------------------------------------------*/

void Show_Hour(unsigned char Time, unsigned char* Num_Cathode){
	AT89_HOUR_TOP_PIN = 0;
	AT89_LED = ~Num_Cathode[Time/10];
	Delay(1);
	AT89_HOUR_TOP_PIN = 1;
	AT89_HOUR_LAST_PIN = 0;
	AT89_LED = ~Num_Cathode[Time%10];
	Delay(1);
	AT89_HOUR_LAST_PIN = 1;
}

void Show_Minute(unsigned char Time, unsigned char* Num_Cathode){
	AT89_MINUTE_TOP_PIN = 0;
	AT89_LED = ~Num_Cathode[Time/10];
	Delay(1);
	AT89_MINUTE_TOP_PIN = 1;
	AT89_MINUTE_LAST_PIN = 0;
	AT89_LED = ~Num_Cathode[Time%10];
	Delay(1);
	AT89_MINUTE_LAST_PIN = 1;
}

void Show_Second(unsigned char Time, unsigned char* Num_Cathode){
	AT89_SECOND_TOP_PIN = 0;
	AT89_LED = ~Num_Cathode[Time/10];
	Delay(1);
	AT89_SECOND_TOP_PIN = 1;
	AT89_SECOND_LAST_PIN = 0;
	AT89_LED = ~Num_Cathode[Time%10];
	Delay(1);
	AT89_SECOND_LAST_PIN = 1;
}

void Show_Year(unsigned char Time, unsigned char* Num_Cathode){
	AT89_SECOND_TOP_PIN = 0;
	AT89_LED = ~Num_Cathode[Time/10];
	Delay(1);
	AT89_SECOND_TOP_PIN = 1;
	AT89_SECOND_LAST_PIN = 0;
	AT89_LED = ~Num_Cathode[Time%10];
	Delay(1);
	AT89_SECOND_LAST_PIN = 1;
}

void Show_Month(unsigned char Time, unsigned char* Num_Cathode){
	AT89_MINUTE_TOP_PIN = 0;
	AT89_LED = ~Num_Cathode[Time/10];
	Delay(1);
	AT89_MINUTE_TOP_PIN = 1;
	AT89_MINUTE_LAST_PIN = 0;
	AT89_LED = ~Num_Cathode[Time%10];
	Delay(1);
	AT89_MINUTE_LAST_PIN = 1;
}

void Show_Date(unsigned char Time, unsigned char* Num_Cathode){
	AT89_HOUR_TOP_PIN = 0;
	AT89_LED = ~Num_Cathode[Time/10];
	Delay(1);
	AT89_HOUR_TOP_PIN = 1;
	AT89_HOUR_LAST_PIN = 0;
	AT89_LED = ~Num_Cathode[Time%10];
	Delay(1);
	AT89_HOUR_LAST_PIN = 1;
}

void Show_Day(unsigned char Time, unsigned char* Num_Cathode){
	AT89_SECOND_TOP_PIN = 0;
	AT89_LED = ~Num_Cathode[Time/10];
	Delay(1);
	AT89_SECOND_TOP_PIN = 1;
	AT89_SECOND_LAST_PIN = 0;
	AT89_LED = ~Num_Cathode[Time%10];
	Delay(1);
	AT89_SECOND_LAST_PIN = 1;
}

/*---------------------------------------------------*
-*---------------- End File -------------------------*
-*---------------------------------------------------*/