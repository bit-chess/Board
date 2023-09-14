# Board
Software referente ao tabuleiro fisico

## Hardware
O sistema apresenta os seguintes componentes:

- (x1) Arduino Mega
- (x1) ESP32;
- (x4) MUX CD74HC4067;
- (x1) Tabuleiro de Madeira;

## Sofware
O sistema é dividido em duas partes:

### Leitura do Tabuleiro
A leitura é reaizada pelo conjunto de MUX e as entradas são convertidas de valores analógicos para a representação em BitBoard.

### Comunicação
Atualmente existe uma comunicação serial entre a interface(que será integrada à I.A.) e o Arduino Mega que faz parte do tabuleiro inteligente.
