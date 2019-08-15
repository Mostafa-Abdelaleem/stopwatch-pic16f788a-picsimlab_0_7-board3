#include"main.h"
#include"Port.h"
#include"Timer.h"

tWord __at(0x2007) CONFIG = _HS_OSC & _WDT_OFF & _PWRTE_ON & _BODEN_OFF & _LVP_OFF & _CPD_OFF & _WRT_OFF & _DEBUG_OFF & _CP_OFF;

volatile tByte run_flag=0;

void main(void){
    tWord cnt=0;

TRISB=0X00;
PORTB=0;
Timer_INIT();
Tmr_Start();
RB0=0;
while(1){

    if(run_flag){

        cnt+=Timer_Tick_ms;

    if(cnt==2000){
        RB0^=1;

        cnt=0;
    }}
    run_flag=0;

}
}
