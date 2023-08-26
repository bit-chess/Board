#ifndef MUX_H
#define MUX_H

const int seletor[] = {}; //Seletores. Notação: LITTLE ENDIAN
const int analog_reader_pin = 43; //Pino de leitura analógica

void buildSystem(void);
int returnPiece(int value_pin_seletor);
void updateImageBoard(void);

#endif