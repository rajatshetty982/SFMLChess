#pragma once

#include "Game/Pieces.hpp"
#include "Game/Move.hpp"
#include <cstdint>

class Board
{
private:
	static const uint8_t TOTAL_PIECE_TYPE = 12;
	uint64_t Bitboard[TOTAL_PIECE_TYPE];

public:
	Board() = default;
	void makeMove(const Move& move);
};
