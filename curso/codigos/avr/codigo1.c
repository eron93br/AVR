#define F_CPU 16000000UL 


#include <avr/io.h>	     //biblioteca para acesso aos registradores do uC
#include "util/delay.h"	    //biblioteca para funções de delay

int main(void) //função principal
{
	 DDRB = 0xFF; //configura pino PB5 como saída e demais como entradas
	 unsigned char z;
   for(z=0. z<= 255; z++)
      PORTB = z;
   
   _delay_ms(100); //aguarda 0.1 s
   return 0;   
}

// O objetivo desse programa eh jogar valores de 00 ate F na portaB do MCU!

