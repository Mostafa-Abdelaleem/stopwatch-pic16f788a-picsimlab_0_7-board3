#ifndef _Timer_H_
#define _Timer_H_
#include "Port.h"

#define Timer_Tick_ms (5)
#define Timer_Intial_value (100)

void Tmr_Start(void);
void Tmr_Stop(void);
void Timer_INIT(void);
tByte Tmr_Check_Overflow(void);
void Tmr_Update(void) __interrupt 0;




#endif // _Timer_H_
