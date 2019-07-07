#include <main.h>
#include <HDM64GS12M.c>
#include <graphics.c>

char hola[]="Hola";


void main()
{  
   glcd_init(ON);
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_CLOCK_INTERNAL);
   glcd_fillscreen(OFF);
   while(TRUE)
   {
      glcd_text57(10, 10, hola, 2, ON);
      delay_ms(200);
      glcd_fillscreen(OFF);
   }
}
