#include "Chess/Piece.hpp"

 #include <iostream>
// #include <string>

void print_piece(Piece p, uint64_t count) {
    std::cout << (p.m_Colour == PieceColour::White ? "White" : "Black")
              << ' ' << static_cast<int>(p.m_Type) << "frame count: " << count << '\n';
}
