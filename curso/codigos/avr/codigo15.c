

#include <avr/io.h>	     //biblioteca para acesso aos registradores do uC


int main(void) //função principal
{
	 DDRB = DDRB & 0b11111101;   // pino 1 da porta B = entrada
   DDRC = DDRC | 0b10000000;   // pino 7 da porta C = saida
   
   while(1)
   {
     if(PINB & 0b00000010)
       PORTC = PORTC | 0b10000000;
     else
       PORTC = PORTC & 0b01111111;
   }
   return 0;   
}

//  
//
