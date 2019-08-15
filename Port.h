#ifndef _PORT_H_
#define _PORT_H_
#include "main.h"


//SSD
#define SSD_Port_Data PORTD
#define SSD_Port_Control TRISD
#define Second_Units_Pin RB4
#define Enable_Second_Units PORTB=(PORTB & 0X1f)
#define Second_Tens_Pin RB5
#define Enable_Second_Tens PORTB=(PORTB & 0X2f)
#define Minute_Units_Pin RB6
#define Enable_Minute_Units PORTB=(PORTB & 0X4f)
#define Minute_Tens_Pin RB7
#define Enable_Minute_Tens PORTB=(PORTB & 0X8f)

//switches
#define Reset_SW_Pin RB0
#define Plus_SW_Pin RB1
#define Minus_SW_Pin RB2
#define Mode_SW_Pin RB4
//leds
#define LED1_Pin RB0
#define LED2_Pin RB1
#define LED3_Pin RB2
#define LED4_Pin RB4


#endif // _PORT_H
