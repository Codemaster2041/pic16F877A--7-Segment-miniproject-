#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES PUT                      //Power Up Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4MHz)

void main()
{

   while(TRUE)
   {
 output_c(0x3f);
      delay_ms(1200);
      output_C(0X06);
      delay_ms(1200);
      output_C(0X5b);
      delay_ms(1200);
      output_C(0X4f);
      delay_ms(1200);
      output_C(0X66);
      delay_ms(1200);
      output_C(0X6d);
      delay_ms(1200);
      output_C(0Xfd);
      delay_ms(1200);
      output_C(0X07);
      delay_ms(1200);
      output_c(0x3f);
      delay_ms(1200);
      output_C(0X06);
      delay_ms(1200);
      output_C(0X5b);
      delay_ms(1200);
      output_C(0X4f);
      delay_ms(1200);
      output_C(0X66);
      delay_ms(1200);
      output_C(0X6d);
      delay_ms(1200);
      output_C(0Xfd);
      delay_ms(1200);
      output_C(0X07);
      delay_ms(1200);
      output_C(0Xff);
      delay_ms(1200);
      output_C(0Xef);
      delay_ms(1200);
      
   }

   }     
