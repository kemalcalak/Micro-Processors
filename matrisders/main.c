#include <main.h>

int sutun[5]={0x10,0x08,0x04,0x02,0x01};
int K[5]={0x80, 0xF7, 0xEB, 0xDD, 0xBE};
int T[5]={0xFE, 0xFE, 0x80, 0xFE, 0xFE};
int U[5]={0xC0, 0xBF, 0xBF, 0xBF, 0xC0};
int i,j;

int yaz(int harf[5])
{
   for(i=0;i<125;i++)
   {
      for(j=0;j<5;j++)
      {
         output_b(harf[j]);
         output_c(sutun[j]);
         delay_ms(20);
      }
   }
   output_b(0x00);
   output_c(0x00);
}

void main()
{
   set_tris_b(0x00);
   set_tris_c(0x00);
   output_b(0x00);
   output_c(0x00);
   
   while(TRUE)
   {
      yaz(K);
      yaz(T);
      yaz(U);
   }

}
