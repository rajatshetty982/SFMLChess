#include "Graphics/ChessBoardRenderer.hpp"
#include "math.h"

void ChessBoardRenderer::useTexture(bool state)
{
	m_UsingTexture = state;
}

void ChessBoardRenderer::calculateLayout(unsigned int windowWidth, unsigned int windowHeight)
{
	// The board (8x8) should fit entirely within the smaller window dimension.
	float minDimension = std::min(windowWidth, windowHeight);

	// Using a factor of 90%, of the min dimension to leave a border/padding.
	const float boardSizeFactor = 0.9f; 
	
	// Total size of the 8x8 board
	float totalBoardSize = minDimension * boardSizeFactor;

	// Size of one square
	m_SquareSize = totalBoardSize / 8.0f;
	
	// Board offset for centering
	m_BoardOffset.x = (windowWidth - totalBoardSize) / 2.0f;
	m_BoardOffset.y = (windowHeight - totalBoardSize) / 2.0f;
	
	// need to apply the size to the sprite and generic sfml shapes for the board
}

