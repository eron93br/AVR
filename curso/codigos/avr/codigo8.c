#define F_CPU 16000000UL 


#include <avr/io.h>	     //biblioteca para acesso aos registradores do uC
#include "util/delay.h"	    //biblioteca para funções de delay

int main(void) //função principal
{
   void delay_ms(int d)
   {
     _delay_ms(d);     // delay de d micro segundos
   }
   
	 DDRB = 0xFF;       //  PORT B ouput
   
   while(1)
   {
      PORTB = 0xFF;
      delay_ms(10);
      PORTB = 0x55;
      delay_ms(10);
   }
   return 0;   
}

// O objetivo desse codigo, toggle os pinos da porta B com delay de 10ms
