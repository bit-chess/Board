#ifndef RXTX_RCV
#define RXTX_RCV

typedef struct{
    char board[8][8];
}image_board;

image_board receive_board(void);

#endif