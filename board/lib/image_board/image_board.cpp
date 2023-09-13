#include <Arduino.h>
#include <image_board.h>
#include "../piece/piece.h"
#include "../mux/mux.h"
#include "../data_board/board.h"

image_board updateImageBoard(void){ //passar ponteiro para a matriz bit-board
    image_board board;
    
    int counter = 0;
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            board.board[i][j] = analogToRepresentationPiece(returnPiece(counter));
            counter++;
            delay(5);
        }
    }

    return board;
}

image_board updateImageBoard(int until){ //passar ponteiro para a matriz bit-board
    image_board board;

    int counter = 0;
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            if(counter < until) board.board[i][j] = analogToRepresentationPiece(returnPiece(counter));
            else board.board[i][j] = 'x';
            counter++;
            delay(5);
        }
    }
    
    return board;
}