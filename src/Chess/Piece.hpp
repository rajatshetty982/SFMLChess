#pragma once

#include <cstdint>

enum class PieceType : uint8_t 
{
	None = 0,
	Pawn, Knight, Bishop, Rook, Queen, King
};
enum class PieceColour : uint8_t {
	White, Black
};

struct Piece
{
	PieceType m_Type = PieceType::None;
	PieceColour m_Colour = PieceColour::White;

	static uint64_t m_FrameCount;

	constexpr	Piece() noexcept = default;
	constexpr Piece (PieceColour c, PieceType t) noexcept
	: m_Colour(c), m_Type(t) {}



	constexpr explicit operator int() const noexcept
	{
		return (m_Colour == PieceColour::White ? 0 : 6) + (static_cast<int>(m_Type) - 1);
	}

};
//
// constexpr Piece make_piece(PieceColour c, PieceType t) noexcept {
// 	return Piece(c, t);
// }

constexpr PieceType  type_of(Piece p) noexcept   { return p.m_Type; }
constexpr PieceColour color_of(Piece p) noexcept { return p.m_Colour; }

void print_piece(Piece p);
