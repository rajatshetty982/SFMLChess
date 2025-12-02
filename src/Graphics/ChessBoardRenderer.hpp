#include "Chess/Utils.hpp"
#include <cstdint>
namespace boardColours
{

typedef uint32_t Colour;

struct Presets
{
	static constexpr Colour MyGreen = 0xEEEED2FF; // lastt ff is for Alpha
	static constexpr Colour MyWhite = 0x769656FF; 

};
}

class ChessBoardRenderer
{
public:
	ChessBoardRenderer()=default;

	void useTexture(bool);
	void changeBoardColours();
	void calculateLayout(unsigned int windowWidth, unsigned int windowHeight); // to resize the board when window is resized

private:
	bool m_UsingTexture = false;
	boardColours::Colour defaultDark = boardColours::Presets::MyGreen;
	boardColours::Colour defaultLight = boardColours::Presets::MyWhite;
	unsigned int m_SquareSize; // TODO: set a default for this
	chess::VectorF m_BoardOffset;
};

/*

#define L_RGB_RED 118
#define L_RGB_GREEN 150
#define L_RGB_BLUE 86

#define D_RGB_RED 238
#define D_RGB_GREEN 238
#define D_RGB_BLUE 210
// #define TILE_SIZE 80
#define DARK_COLOR 0xEEEED2 // rgb: 118,150,86
#define LIGHT_COLOR 0x769656 // 238,238,210

*/
