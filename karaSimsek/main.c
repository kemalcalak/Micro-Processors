#include <main.h>
int z=1;
void main()
{
   set_tris_b(0x00);       // B portu �?k??
   output_b(0x00);
   
   output_b(z);            // PORTB<--z
   
while(1)
{
   delay_ms(1000);
   while(input_state(pin_B7)==0)
      {
         z=z<<1;        // bir bit sola kay
         output_b(z);   // PORTB<--z
         delay_ms(1000);
      }
   delay_ms(1000);
   while(input_state(pin_B0)==0)
      {
         z=z>>1;        // bir bit sola kay
         output_b(z);   // PORTB<--z
         delay_ms(1000);
      }
}
}
