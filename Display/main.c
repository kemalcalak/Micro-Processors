#include <main.h>

void main()
{
   set_tris_a(0xff);
   set_tris_b(0xff);
   set_tris_c(0x00);
   
   int sayilar[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
   int i=0;
   while(TRUE)
   {
      if(i==10){
         break;
      }
      if(i<0){
         break;
      }
      
      output_c(sayilar[i]);
      if(input(pin_A0)){
         i++;
         delay_ms(100);
      }
      if(input(pin_A1)){
         i--;
         delay_ms(100);
      }
      
      
   }

}
