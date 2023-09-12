#ifndef RXTX_SENDER_H
#define RXTX_SENDER_H

#include "../data_board/board.h"

image_board build_packet(char **board);
void send_board(image_board board);

#endif
