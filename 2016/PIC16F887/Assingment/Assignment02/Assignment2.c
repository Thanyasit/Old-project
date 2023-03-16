#include "D:\Work T.Pongsak\Microcontroller\Work\Assignment2\Assignment2.h"


void main()
{
   char segment[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
   int i;
   int1 sw;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);

   // TODO: USER CODE!!
   SET_TRIS_b(0x80);//set port b=(0b10000000)
   SET_TRIS_d(0x01);//set port d=(0b00000001)
   output_b(segment[0]);//sent 0x3F port b 
   delay_ms(500);//show Number 0
   while(1){// loop
            sw = input(PIN_D0);// sw= (+5v=1,0v=0)
            if(sw==0){  //if sw=0v i++
                     i++;
            }
            if(i==-1){ 
                     i=9;
            }
            output_b(segment[i]);//sent i port b(i=Number)
            delay_ms(500);//show Number(i)
            if(i==9){
                     i=-1;
            }
  }
}
