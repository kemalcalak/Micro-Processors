#include <main.h>

#INT_EXT
void  EXT_isr(void) 
{
   int sayac;
   for(sayac=0;sayac<5;sayac++){
      output_high(pin_D0);
      delay_ms(500);
      output_low(pin_D0);
      delay_ms(500);
   }
}


void main()
{
   set_tris_b(0xff);
   set_tris_d(0x00);
   output_d(0x00);
   enable_interrupts(INT_EXT);
   enable_interrupts(GLOBAL);
   //ext_int_edge(0,H_to_L);
   ext_int_edge(0,L_to_H);

   while(TRUE)
   {
      output_high(pin_D0);
   }

}
