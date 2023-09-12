#include <Arduino.h>
#include <rxtx_sender.h>

image_board build_packet(char **board){
    image_board board_;
    uint8_t cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(board[i][j] != 'x') cnt++;
            board_.board[i][j] = board[i][j]; 
        }
    }
    return board_;
}

void send_board(image_board board){
    Serial.write((uint8_t*)&board, sizeof(board));
    Serial.flush();
    delay(100);
}