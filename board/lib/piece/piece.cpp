#include <piece.h>

//implementação visando a representação em char, entretando devemos trocar para int, pois a representação será em bitboard
char analogToRepresentationPiece(int analog_value_piece){
    char ans;

    if(analog_value_piece >= ROOK_WHITE_MIN && analog_value_piece <= ROOK_WHITE_MAX) ans = 'T';
    else if(analog_value_piece >= KNIGHT_WHITE_MIN && analog_value_piece <= KNIGHT_WHITE_MAX) ans = 'C';
    else if(analog_value_piece >= BISHOP_WHITE_MIN && analog_value_piece <= BISHOP_WHITE_MAX) ans = 'B';
    else if(analog_value_piece >= KING_WHITE_MIN && analog_value_piece <= KING_WHITE_MAX) ans = 'K';
    else if(analog_value_piece >= PAWN_WHITE_MIN && analog_value_piece <= PAWN_WHITE_MAX) ans = 'P';
    else if(analog_value_piece >= QUEEN_WHITE_MIN && analog_value_piece <= QUEEN_WHITE_MAX) ans = 'Q';
    else if(analog_value_piece >= ROOK_BLACK_MIN && analog_value_piece <= ROOK_BLACK_MAX) ans = 't';
    else if(analog_value_piece >= KNIGHT_BLACK_MIN && analog_value_piece <= KNIGHT_BLACK_MAX) ans = 'c';
    else if(analog_value_piece >= BISHOP_BLACK_MIN && analog_value_piece <= BISHOP_BLACK_MAX) ans = 'b';
    else if(analog_value_piece >= ROOK_BLACK_MIN && analog_value_piece <= ROOK_BLACK_MAX) ans = 't';
    else if(analog_value_piece >= KNIGHT_BLACK_MIN && analog_value_piece <= KNIGHT_BLACK_MAX) ans = 'c';
    else if(analog_value_piece >= KING_BLACK_MIN && analog_value_piece <= KING_BLACK_MAX) ans = 'k';
    else if(analog_value_piece >= QUEEN_BLACK_MIN && analog_value_piece <= QUEEN_BLACK_MAX) ans = 'q';
    else if(analog_value_piece >= KING_BLACK_MIN && analog_value_piece <= KING_BLACK_MAX) ans = 'k';
    else if(analog_value_piece >= PAWN_BLACK_MIN && analog_value_piece <= PAWN_BLACK_MAX) ans = 'p';
    else ans = 'x';

    return ans;
}