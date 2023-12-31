#include <Arduino.h>
#include <mux.h>

void buildSystem(void){
    for(int i=0;i<QTD_MUX;i++) for(int j=0;j<QTD_MUX;j++) pinMode(seletor[i][j], OUTPUT);
    for(int i=0;i<QTD_MUX;i++) pinMode(which_mux[i], OUTPUT);
}

int returnPiece(int value_pin_seletor){
    //setando os seletores do mux
    for(int i=0;i<QTD_MUX;i++) {
        for(int j=0;j<QTD_MUX;j++) {
            digitalWrite(seletor[i][j], ((value_pin_seletor >> i) & 1) ? HIGH : LOW);
            delay(1);
        }
    }
    int enable_idx = ((value_pin_seletor >> 4) & 1) + 2*(((value_pin_seletor >> 5) & 1) );    
    
    delay(1);

    //setando qual o mux
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

    return analogRead(SIG[enable_idx]);
}
