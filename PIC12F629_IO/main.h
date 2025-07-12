#include <12F629.h>
#FUSES NOWDT,INTRC_IO,NOPROTECT,NOMCLR,NOPUT
#use delay(internal=4MHz)
#use FIXED_IO( A_outputs=PIN_A3,PIN_A2 )
#define bnt_1   PIN_A0
#define bnt_2   PIN_A1
#define led_1   PIN_A2
#define led_2   PIN_A3


