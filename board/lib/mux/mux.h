#ifndef MUX_H
#define MUX_H

#include <Arduino.h>

#define QTD_MUX 4

const int seletor[QTD_MUX][QTD_MUX] = {{A1, 0, 0, 0}, {A2, 0, 31, 32}, {A3, 33, 34, 35}, {A4, 36, 37, 38}}; //Seletores. Notação: LITTLE ENDIAN. {{S0s},{S1s},{S2s},{S3s}}
const int which_mux[QTD_MUX] = {A0, 39, 40, 41}; //conjunto de pinos de enable dos muxs
const int SIG[QTD_MUX] = {A5, A1, A2, A3}; //Pino de leitura analógica

void buildSystem(void);
int returnPiece(int value_pin_seletor);

#endif