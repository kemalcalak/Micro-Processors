#include <main.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   set_tris_a(0xff);
   set_tris_b(0xff);
   set_tris_c(0x00);
   output_c(0x00);
   set_tris_d(0x00);
   output_d(0x00);
   while(TRUE)
   {
      if(input(pin_B0)){
         int a= rand() % 13;
         while(a<2){
         if(a==0)
             a= rand() % 13;
         if(a==1)
             a= rand() % 13;
         }
         switch(a){
            case 2:
               output_high(pin_C3);
               output_high(pin_D3);
               delay_ms(1000);
               break;
            case 3:
               output_high(pin_D3);
               output_high(pin_C2);
               output_high(pin_C4);
               delay_ms(1000);
               break;
            case 4:
               output_high(pin_C2);
               output_high(pin_C4);
               output_high(pin_D2);
               output_high(pin_D4);
               delay_ms(1000);
               break;
            case 5:
               output_high(pin_C0);
               output_high(pin_C3);
               output_high(pin_C6);
               output_high(pin_D4);
               output_high(pin_D2);
               delay_ms(1000);
               break;
            case 6:
               output_high(pin_C0);
               output_high(pin_C3);
               output_high(pin_C6);
               output_high(pin_D0);
               output_high(pin_D3);
               output_high(pin_D6);
               delay_ms(1000);
               break;
            case 7:
               output_high(pin_C0);
               output_high(pin_C1);
               output_high(pin_C5);
               output_high(pin_C6);
               output_high(pin_D0);
               output_high(pin_D3);
               output_high(pin_D6);
               delay_ms(1000);
               break;
            case 8:
               output_high(pin_C0);
               output_high(pin_C1);
               output_high(pin_C5);
               output_high(pin_C6);
               output_high(pin_D0);
               output_high(pin_D1);
               output_high(pin_D5);
               output_high(pin_D6);
               delay_ms(1000);
               break;
            case 9:
               output_high(pin_C0);
               output_high(pin_C1);
               output_high(pin_C3);
               output_high(pin_C5);
               output_high(pin_C6);
               output_high(pin_D0);
               output_high(pin_D1);
               output_high(pin_D5);
               output_high(pin_D6);
               delay_ms(1000);
               break;
            case 10:
               output_high(pin_C0);
               output_high(pin_C1);
               output_high(pin_C3);
               output_high(pin_C5);
               output_high(pin_C6);
               output_high(pin_D0);
               output_high(pin_D1);
               output_high(pin_D3);
               output_high(pin_D5);
               output_high(pin_D6);
               delay_ms(1000);
               break;
            case 11:
               output_high(pin_C0);
               output_high(pin_C1);
               output_high(pin_C2);
               output_high(pin_C4);
               output_high(pin_C5);
               output_high(pin_C6);
               output_high(pin_D0);
               output_high(pin_D1);
               output_high(pin_D3);
               output_high(pin_D5);
               output_high(pin_D6);
               delay_ms(1000);
               break;
            case 12:
               output_high(pin_C0);
               output_high(pin_C1);
               output_high(pin_C2);
               output_high(pin_C4);
               output_high(pin_C5);
               output_high(pin_C6);
               output_high(pin_D0);
               output_high(pin_D1);
               output_high(pin_D2);
               output_high(pin_D4);
               output_high(pin_D5);
               output_high(pin_D6);
               delay_ms(1000);
               break;
         }
         output_low(pin_C0);
         output_low(pin_C1);
         output_low(pin_C2);
         output_low(pin_C3);
         output_low(pin_C4);
         output_low(pin_C5);
         output_low(pin_C6);
         output_low(pin_D0);
         output_low(pin_D1);
         output_low(pin_D2);
         output_low(pin_D3);
         output_low(pin_D4);
         output_low(pin_D5);
         output_low(pin_D6);  
         delay_ms(500);       
         }
   }

}
