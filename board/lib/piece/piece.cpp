#include <piece.h>

//implementação visando a representação em char, entretando devemos trocar para int, pois a representação será em bitboard
char analogToRepresentationPiece(int analog_value_piece){
    char ans;
    switch (analog_value_piece){
        case ROOK_WHITE:
            ans = 'x';
            break;

        case KNIGHT_WHITE:
            ans = 'x';
            break;

        case BISHOP_WHITE:
            ans = 'x';
            break;

        case KING_WHITE:
            ans = 'x';
            break;

        case QUEEN_WHITE:
            ans = 'x';
            break;

        case PAWN_WHITE:
            ans = 'x';
            break;

        case ROOK_BLACK:
            ans = 'x';
            break;

        case KNIGHT_BLACK:
            ans = 'x';
            break;

        case BISHOP_BLACK:
            ans = 'x';
            break;

        case KING_BLACK:
            ans = 'x';
            break;

        case QUEEN_BLACK:
            ans = 'x';
            break;

        case PAWN_BLACK:
            ans = 'x';
            break;

        default:
            ans = 'x';
            break;
    }

    return ans;
}