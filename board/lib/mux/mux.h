#ifndef MUX_H
#define MUX_H

#define QTD_MUX 4

const int seletor[QTD_MUX][QTD_MUX] = {{22, 23, 24, 25}, {26, 27, 28, 29}, {30, 31, 32, 33}, {34, 35, 36, 37}}; //Seletores. Notação: LITTLE ENDIAN. {{S0s},{S1s},{S2s},{S3s}}
const int which_mux[QTD_MUX] = {38, 39, 40, 41}; //conjunto de pinos de enable dos muxs
const int SIG = A0; //Pino de leitura analógica

void buildSystem(void);
int returnPiece(int value_pin_seletor);

#endif