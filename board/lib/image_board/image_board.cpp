#include <image_board.h>
#include <Arduino.h>
#include "../piece/piece.h"
#include "../mux/mux.h"

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

    Serial.println("--------\nImage board: ");
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            Serial.print(board[i][j]);
        }
        Serial.println();
    }
    Serial.println("--------\n\n");
    
    return board;
}