#include "D:\Work T.Pongsak\Microcontroller\Work\Assignment09\Assignment09.h"

void main()
{
   char msa[]={'A','S','S','I','G','N','M','E','N','T','0','9'};
   char msg[]={'E','L','E','C','T','R','O','N','I','C','S'};
   int i,x;
   setup_adc_ports(NO_ANALOGS|VSS_VDD);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);// This device COMP currently not supported by the PICWizard
//Setup_Oscillator parameter not selected from Intr Oscillotar Config tab

   // TODO: USER CODE!!
      delay_ms(500);
      for(i=0;i<11;i++){
                  putc(msg[i]);
                  delay_ms(200);
      }
      while(1);


/*
      while(1){
         for(i=0;i<12;i++){
                  putc(msa[i]);
                  delay_ms(200);
         }
         for(x=0;x<11;x++){
                  putc(msg[x]);
                  delay_ms(200);
         }
         delay_ms(2000);
      }
      */
}
