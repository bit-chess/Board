#ifndef PIECE_H
#define PIECE_H

#define ROOK_WHITE_MIN 0
#define KNIGHT_WHITE_MIN 600
#define BISHOP_WHITE_MIN 2
#define KING_WHITE_MIN 3
#define QUEEN_WHITE_MIN 4
#define PAWN_WHITE_MIN 5

#define ROOK_WHITE_MAX 0
#define KNIGHT_WHITE_MAX 650
#define BISHOP_WHITE_MAX 2
#define KING_WHITE_MAX 3
#define QUEEN_WHITE_MAX 4
#define PAWN_WHITE_MAX 5

#define ROOK_BLACK_MIN 6
#define KNIGHT_BLACK_MIN 7
#define BISHOP_BLACK_MIN 8
#define KING_BLACK_MIN 9
#define QUEEN_BLACK_MIN 10
#define PAWN_BLACK_MIN 900

#define ROOK_BLACK_MAX 6
#define KNIGHT_BLACK_MAX 7
#define BISHOP_BLACK_MAX 8
#define KING_BLACK_MAX 9
#define QUEEN_BLACK_MAX 10
#define PAWN_BLACK_MAX 980

char analogToRepresentationPiece(int analog_value_piece);

#endif