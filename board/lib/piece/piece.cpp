#include <piece.h>

//implementação visando a representação em char, entretando devemos trocar para int, pois a representação será em bitboard
char analogToRepresentationPiece(int analog_value_piece){
    char ans;
    switch (analog_value_piece){
        case ROOK_WHITE:
            ans = 'T';
            break;

        case KNIGHT_WHITE:
            ans = 'C';
            break;

        case BISHOP_WHITE:
            ans = 'B';
            break;

        case KING_WHITE:
            ans = 'K';
            break;

        case QUEEN_WHITE:
            ans = 'Q';
            break;

        case PAWN_WHITE:
            ans = 'P';
            break;

        case ROOK_BLACK:
            ans = 't';
            break;

        case KNIGHT_BLACK:
            ans = 'c';
            break;

        case BISHOP_BLACK:
            ans = 'b';
            break;

        case KING_BLACK:
            ans = 'k';
            break;

        case QUEEN_BLACK:
            ans = 'q';
            break;

        case PAWN_BLACK:
            ans = 'p';
            break;

        default:
            ans = 'x';
            break;
    }

    return ans;
}