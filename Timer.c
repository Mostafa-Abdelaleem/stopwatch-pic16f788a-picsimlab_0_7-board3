#include "Timer.h"
#include "main.h"
#include "Port.h"

extern tByte run_flag;

void Timer_INIT(void){
    External_Triger;
    Assign_prescaler_timer;
    TMR_Prescaler_64;
}


void Tmr_Start(void){
    Clear_Tmr0_Flag;
    Set_Tmr_Intialval(Timer_Intial_value);
    Enable_G_Interrupt;
    Enable_Tmr_Interrupt;
    Internal_Clock;
}

void Tmr_Stop(void){
     External_Triger;
}

tByte Tmr_Check_Overflow(void){
    return Tmr_Get_flag;
}

void Tmr_Update(void) __interrupt 0{
    run_flag=1;
    Clear_Tmr0_Flag;
    Set_Tmr_Intialval(Timer_Intial_value);

}
