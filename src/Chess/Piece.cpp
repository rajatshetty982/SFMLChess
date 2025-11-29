#include "Chess/Piece.hpp"

#include <iostream>
#include <string>

void print_piece(Piece p) {
    std::cout << (p.colour == PieceColour::White ? "White" : "Black")
              << ' ' << static_cast<int>(p.type) << '\n';
}
