#pragma once

#include "Chess/Piece.hpp"
#include "Chess/GameRules.hpp"
#include "Chess/Utils.hpp"
// #include <cstdint>

class Board
{
private:
	static const uint8_t TOTAL_PIECE_TYPE = 12;
	uint64_t Bitboard[TOTAL_PIECE_TYPE];

	Move move;

public:
	Board() = default;
	void selectPiece(chess::Vector2i piecePosition );
	void makeMove(const Move& move);

};
