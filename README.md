# Microcontroladores AVR

Em geral os MCUs da Atmel, os AVRs vão muito além do modelo Atmega328P utilizado pelo clássico Arduino UNO. Existe uma grande família de microcontroladores assim como os PIC, a diferença é que ainda não são tão populares quanto o PIC no Brasil.

Os que tenho experiência com programação são:

- Atmega 328P

O clássico Atmega utilizado pelo Arduino UNO, com especificações interessantes para um modelo inicial.

- Attiny85

MCU basico de 8 pinos que pode ser programado tambem via IDE Arduino. 

- Atmega 2560

O utilizado pelo Arduino MEGA, possui hardware equivalente ao 328P com maior memoria e numero de I/Os. 

# Software

- AVR Dude

AVRDUDE é uma aplicação de código aberto para gravar programas na Flash de processadores AVR (como os utilizados na plataforma Arduino). A própria IDE do Arduino utiliza o AVRDUDE para fazer a carga dos sketches. Vamos ver aqui um resumo do seu uso.

O AVRDUDE roda em um PC (sob Windows, Linux ou MacOS) e se comunica com um programador externo, através de uma porta serial ou paralela do PC. O programador está conectado ao microcontrolador e utiliza a programação paralela ou SPI do AVR. Uma das vantagens do AVRDUDE é suportar uma quantidade muito grande de programadores e de modelos de microcontrolador.

A execução do AVRDUDE é controlada por parâmetros de linha de comando e um arquivo de configuração. Vamos examinar aqui apenas os parâmetros de linha de comando essenciais. O AVRDUDE e sua documentação completa podem ser encontrados em alguns locais:
O executável para Windows faz parte do pacote WinAVR, hospedado no sourceforge.
Se você instalou a IDE do Arduino, o avrdude faz parte dos arquivos sob hardware\tools\avr
Um tutorial mais completo pode ser encontrado no site ladyada. http://www.ladyada.net/learn/avr/avrdude.html 

- Atmel Studio

Atmel Studio é a plataforma de desenvolvimento disponibilizada gratuitamente pela Atmel para desenvolver projetos com seus microcontroladores. Suporta tanto os Atmel AVR quanto os Atmel ARM Cortex.

- Arduino IDE

# Programadores

 Para a programacao de microcontroladores AVR temos algumas opcoes diferentes,
 em sua maior parte elas usam gravadores da Atmel como o Atmel ICE e AVR Dragon:
 
 - AVR Dragon
 
Funciona como emulador e programador, custa em torno de US$50 e programa via conector ISP. 
 
 - USBasp
 
USBasp é um gravador para controladores Atmel AVR com uma conexão USB construída em sua placa.
É constituído de um ATMega8 e outros simples componentes eletrônicos. O gravador apenas utiliza de um driver USB para comunicação, não sendo necessário um controlador USB especial

# Referências 

 Seguem algumas EXCELENTES referências  na area! 


- [Getting Started with Atmel Studio 7](https://onlinedocs.microchip.com/pr/GUID-54E8AE06-C4C4-430C-B316-1C19714D122B-en-US-2/index.html?GUID-00257F02-E33C-40C3-B324-83DBCC05EC30)

- AVR Microcontroller and Embedded Systems: Using Assembly and C

http://bit.ly/2piamfR

- Tutorial primeiros passos com Atmel Studio com Arduino UNO

https://www.embarcados.com.br/atmel-studio/

- AVR Programming - Derek Molloy

http://derekmolloy.ie/the-arduino/avr-programming-introduction-tutorial/
