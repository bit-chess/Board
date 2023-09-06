#ifndef MUX_H
#define MUX_H

#define QTD_MUX 4

const int seletor[QTD_MUX][QTD_MUX] = {{23, 27, 28, 29}, {24, 30, 31, 32}, {25, 33, 34, 35}, {26, 36, 37, 38}}; //Seletores. Notação: LITTLE ENDIAN. {{S0s},{S1s},{S2s},{S3s}}
const int which_mux[QTD_MUX] = {22, 39, 40, 41}; //conjunto de pinos de enable dos muxs
const int SIG = A0; //Pino de leitura analógica

void buildSystem(void);
int returnPiece(int value_pin_seletor);

#endif