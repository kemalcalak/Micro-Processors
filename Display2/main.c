#include <main.h>

void main()
{
   set_tris_a(0xff);
   set_tris_c(0x00);
   output_c(0x00);
   int sayi=0,a,b,c;
   while(TRUE)
   {
         if (sayi < 10) {
        a = 0;
        b = 0;
        c = sayi;
    }
    else if (sayi == 10) {
        a = 0; 
        b = 1;
        c = 0;
    }
    else if (sayi > 10 && sayi < 100) {
        a = 0;
        b = sayi / 10;
        c = sayi - (b * 10);
    }
    else if (sayi == 100) {
        a = 1;
        b = 0;
        c = 0;
    }
    else {
        a = sayi / 100;
        b = (sayi - (a * 100)) / 10;
        c = sayi - (a * 100 + b * 10);
    }
         switch(a){
            case 0:
               output_c(0b00010000);
            break;
            case 1:
               output_c(0b00010001);
            break;
            case 2:
               output_c(0b00010010);
            break;
            case 3:
               output_c(0b00010011);
            break;
            case 4:
               output_c(0b00010100);
            break;
            case 5:
               output_c(0b00010101);
            break;
            case 6:
               output_c(0b00010110);
            break;
            case 7:
               output_c(0b00010111);
            break;
            case 8:
               output_c(0b00011000);
            break;
            case 9:
               output_c(0b00011001);
            break;
         }
         delay_ms(200);
         switch(b){
            case 0:
               output_c(0b00100000);
            break;
            case 1:
               output_c(0b00100001);
            break;
            case 2:
               output_c(0b00100010);
            break;
            case 3:
               output_c(0b00100011);
            break;
            case 4:
               output_c(0b00100100);
            break;
            case 5:
               output_c(0b00100101);
            break;
            case 6:
               output_c(0b00100110);
            break;
            case 7:
               output_c(0b00100111);
            break;
            case 8:
               output_c(0b00101000);
            break;
            case 9:
               output_c(0b00101001);
            break;
         }
         delay_ms(200);
         switch(c){
            case 0:
               output_c(0b01000000);
            break;
            case 1:
               output_c(0b01000001);
            break;
            case 2:
               output_c(0b01000010);
            break;
            case 3:
               output_c(0b01000011);
            break;
            case 4:
               output_c(0b01000100);
            break;
            case 5:
               output_c(0b01000101);
            break;
            case 6:
               output_c(0b01000110);
            break;
            case 7:
               output_c(0b01000111);
            break;
            case 8:
               output_c(0b01001000);
            break;
            case 9:
               output_c(0b01001001);
            break;
         }
         delay_ms(200);
         sayi++;
   }

}
