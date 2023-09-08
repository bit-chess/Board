#include <Arduino.h>
#include <rxtx_rcv.h>

image_board receive_board(void){
    image_board board;
    Serial.readBytes((char*)&board, sizeof(board));

    Serial.println("------RECEIVED--------");
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        Serial.print(board.board[i][j]);
        Serial.print(' ');
      }
      Serial.println(); // Nova linha após cada linha da matriz
    }
    Serial.println("---------------------");
  

    return board;
}