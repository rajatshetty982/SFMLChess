#include "Chess/Piece.hpp"

 #include <iostream>
// #include <string>

void print_piece(Piece p) {
	p.m_FrameCount = 0;

    std::cout << (p.m_Colour == PieceColour::White ? "White" : "Black")
              << ' ' << static_cast<int>(p.m_Type) << "frame count: " << p.m_FrameCount << '\n';
	p.m_FrameCount++;
}
