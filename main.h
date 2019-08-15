#ifndef __MAIN_H__
#define __MAIN_H__
#include <pic16f877a.h>


#define PortA_Data PORTA
#define PortA_control TRISA
#define PortB_Data PORTB
#define PortB_control TRISB
#define PortC_Data PORTC
#define PortC_control TRISC
#define PortE_Data PORTE
#define PortE_control TRISE

/* GPIO port operations */
#define InitPort(CONTROL, DIRECTION)   ((CONTROL) = (DIRECTION)?(~GPIO_OUT):(GPIO_OUT))
#define WritePort(PORT, DATA)          ((PORT) = (DATA))
#define ReadPort(PORT)                 (PORT)

/* GPIO port pin operations */
#define InitPortPin(CONTROL, PIN, DIRECTION)   ((CONTROL) = (CONTROL & (~(1 << PIN)))|(DIRECTION << PIN))
#define WritePortPin(PORT, PIN, DATA)          ((PORT) = (PORT & (~(1 << PIN)))|(DATA << PIN))
#define ReadPortPin(PORT, PIN)                 (((PORT) & (1 << PIN)) >> (PIN))

//timer macros
#define Internal_Clock     T0CS=0
#define External_Triger     T0CS=1
#define Assign_prescaler_timer PSA=0

#define TMR_Prescaler_64 PS0=1;\
                         PS1=0;\
                         PS2=1

#define Tmr_Get_flag			(TMR0IF)
#define Set_Tmr_Intialval(value)   TMR0=value
#define Enable_G_Interrupt GIE=1
#define Disable_G_Interrupt GIE=0
#define Enable_Tmr_Interrupt TMR0IE=1
#define Disable_Tmr_Interrupt TMR0IE=1
#define Clear_Tmr0_Flag   TMR0IF=0
#define SET_Tmr0_Flag   TMR0IF=1

typedef unsigned char tByte;
typedef unsigned int tWord;


#endif
