#include "IC_74595.h"
#include "D:\Work\8051\Projects\IC_74595\Port.h"

void IC_74595_Out(char *p, char Num){
	char Count, Count_Bit, Pointer;
	for (Count = 0; Count < Num; Count++){
		Pointer = *(p+Count);
		for (Count_Bit = 0; Count_Bit < 8; Count_Bit++){
			DS = (Pointer>>Count_Bit)&1;
			SH_CP =0;
			SH_CP = 1;
		}
	}
	ST_CP = 0;
	ST_CP = 1;
}