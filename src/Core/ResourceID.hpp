#pragma once

namespace sf {
class Texture;
class Font;
class Sound;
}

namespace TextureId {

namespace Piece {
enum class ID {
	WhitePawn, WhiteKnight, WhiteBishop, WhiteRook, WhiteQueen, WhiteKing,
	BlackPawn, BlackKnight, BlackBishop, BlackRook, BlackQueen, BlackKing,
};
}

namespace Board {
enum class ID {
	LightSquare,
	DarkSquare,
	Wood,
	Marble,
	Green,
};
}

namespace UI {
enum class ID {
	ButtonNormal,
	ButtonHover,
	ButtonPressed,
	Cursor,
};
}

} //

namespace FontId {
enum class ID 
{
	Ariel,
};
};

namespace AudioId
{
enum class ID
{
	Move,
};
};


template <typename Identifier, typename Resource>
class ResourceHolder;

typedef ResourceHolder<TextureId::Piece::ID, sf::Texture> PieceTextureHolder;
typedef ResourceHolder<TextureId::Board::ID, sf::Texture> BoardTextureHolder;
typedef ResourceHolder<TextureId::Board::ID, sf::Texture> FontHolder;
typedef ResourceHolder<TextureId::Board::ID, sf::Texture> AudioHolder;

