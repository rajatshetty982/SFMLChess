#pragma once

#include "Core/ResourceHolder.hpp"
#include "Engine/ResourceID.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Window.hpp>

class Application
{
public:
	Application();
	void run();

private:
	void processInput();
	void update(sf::Time dt);
	void render();

private:
	sf::RenderWindow m_Window;
	PieceTextureHolder m_PieceTextures;
	FontHolder m_Fonts;
	AudioHolder m_Audio;

	// StateStack m_StateStack;
};
