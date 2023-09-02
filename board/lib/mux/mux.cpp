#include <Arduino.h>
#include <mux.h>
#include "../piece/piece.h"

void buildSystem(void){
    for(int i=0;i<QTD_MUX;i++) for(int j=0;j<QTD_MUX;j++) pinMode(seletor[i][j], OUTPUT);
}

int returnPiece(int value_pin_seletor){
    //setando os seletores do mux
    for(int i=0;i<QTD_MUX;i++) for(int j=0;j<QTD_MUX;j++) digitalWrite(seletor[i][j], ((value_pin_seletor >> i) & 1));
    int enable_idx = ((value_pin_seletor >> 4) & 1) + 2*(((value_pin_seletor >> 5) & 1) );    

    //setando qial o mux
    switch (enable_idx)
    {
        case 0:
            digitalWrite(which_mux[0], LOW);
            digitalWrite(which_mux[1], HIGH);
            digitalWrite(which_mux[2], HIGH);
            digitalWrite(which_mux[3], HIGH);
            break;
        case 1:
            digitalWrite(which_mux[0], HIGH);
            digitalWrite(which_mux[1], LOW);
            digitalWrite(which_mux[2], HIGH);
            digitalWrite(which_mux[3], HIGH);
            break;
        case 2:
            digitalWrite(which_mux[0], HIGH);
            digitalWrite(which_mux[1], HIGH);
            digitalWrite(which_mux[2], LOW);
            digitalWrite(which_mux[3], HIGH);
            break;
        case 3:
            digitalWrite(which_mux[0], HIGH);
            digitalWrite(which_mux[1], HIGH);
            digitalWrite(which_mux[2], HIGH);
            digitalWrite(which_mux[3], LOW);
            break;
        default:
            break;
    }

    return analogRead(SIG);
}

char **updateImageBoard(void){ //passar ponteiro para a matriz bit-board
    char **board = new char*[8];
    for (int i=0;i<8;i++) board[i] = new char[8];
    
    int counter = 0;

    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            board[i][j] = analogToRepresentationPiece(returnPiece(counter));
            counter++;
            delay(50);
        }
    }

    return board;
}