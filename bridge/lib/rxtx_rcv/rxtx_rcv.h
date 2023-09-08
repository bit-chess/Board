#ifndef RXTX_RCV_H
#define RXTX_RCV_H

typedef struct{
    char board[8][8];
}image_board;

image_board receive_board(void);

#endif