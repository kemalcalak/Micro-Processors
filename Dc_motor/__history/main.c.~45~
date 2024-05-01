#include <main.h>

void main()
{
   set_tris_A(0xff);
   set_tris_B(0x00);
   output_b(0x00);
   int sayac=0;
   while(TRUE)
   {
      if(sayac<10){
         
         output_b(0b00011000);
      }
      if(input(pin_A0)==1){
         delay_ms(200);
         sayac++;
      }
      if(sayac==10){
         delay_ms(100);
         output_b(0b00000101);
      }
      if(input(pin_A1)==1){
         delay_ms(100);
         sayac--;
      }
      
      if(input(pin_A2)==1){
         delay_ms(100);
         output_b(0b00000000);
      }
   }

}
