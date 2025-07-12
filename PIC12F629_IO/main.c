#include <main.h>

int bien_bnt1 = 0;
void main()
{
   port_a_pullups(0x03);
   output_low(led_1);
   output_low(led_2);
   while(TRUE)
   {
      if(input(bnt_1) == 0)
      {
         delay_ms(200);
         bien_bnt1 = 1;
      }
      if(bien_bnt1)
      {
         bien_bnt1 = 0;
         output_high(led_1);
         delay_ms(3000);
         output_low(led_1);
      }
   }
}
