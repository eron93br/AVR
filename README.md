# Microcontroladores AVR

Em geral os MCUs da Atmel, os AVRs vao muito alem do modelo Atmega328P utilizado pelo classico Arduino UNO.
Existe uma grande familia de microcontroladores assim como os PIC, a diferenca eh que ainda nao sao tao
populares quanto o PIC no Brasil. 

Os que tenho experiencia com programacao sao:

- Atmega 328P

O classico Atmega utilizado pelo Arduino UNO, com especificacoes interessantes para um modelo inicial.

- Attiny85

MCU basico de 8 pinos que pode ser programado tambem via IDE Arduino. 

- Atmega 2560

O utilizado pelo Arduino MEGA, possui hardware equivalente ao 328P com maior memoria e numero de I/Os. 

# Software

- AVR Dude

- Atmel Studio

- Arduino IDE

# Programadores

 Para a programacao de microcontroladores AVR temos algumas opcoes diferentes,
 em sua maior parte elas usam gravadores da Atmel como o Atmel ICE e AVR Dragon:
 
 - AVR Dragon
 
Funciona como emulador e programador, custa em torno de US$50 e programa via conector ISP. 
 
 - USBasp
 
USBasp é um gravador para controladores Atmel AVR com uma conexão USB construída em sua placa.
É constituído de um ATMega8 e outros simples componentes eletrônicos. O gravador apenas utiliza de um driver USB para comunicação, não sendo necessário um controlador USB especial
