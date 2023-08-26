#include <Arduino.h>
#include <mux.h>

void buildSystem(void){
    for(int i=0;i<sizeof(seletor)/sizeof(int);i++) pinMode(seletor[i], OUTPUT);
}

int returnPiece(int value_pin_seletor){
    //setando o mux
    for(int i=0;i<sizeof(seletor)/sizeof(int);i++) digitalWrite(seletor[i], (value_pin_seletor>>i & 1));
    return analogRead(analog_reader_pin);
}

void updateImageBoard(void){ //passar ponteiro para a matriz bit-board
    return;
}