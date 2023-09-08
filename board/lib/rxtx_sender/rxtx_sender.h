#ifndef RXTX_SENDER_H
#define RXTX_SENDER_H

typedef struct{
    char board[8][8];
}image_board;

image_board build_packet(char **board);
void send_board(image_board board);

#endif
