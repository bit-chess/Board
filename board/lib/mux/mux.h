#ifndef MUX_H
#define MUX_H

#define QTD_MUX 4

const int seletor[QTD_MUX][QTD_MUX] = {{}}; //Seletores. Notação: LITTLE ENDIAN. {{S0s},{S1s},{S2s},{S3s}}
const int which_mux[QTD_MUX] = {}; //conjunto de pinos de enable dos muxs
const int SIG = 43; //Pino de leitura analógica

void buildSystem(void);
int returnPiece(int value_pin_seletor);
void updateImageBoard(void);

#endif