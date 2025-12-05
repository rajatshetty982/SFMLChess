#pragma once

 #include "Core/ResourceHolder.hpp"
#include "Core/ResourceID.hpp"
#include "Core/State.hpp"

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Window.hpp>
// #include <cstdint>
#include <memory>

namespace Core {
enum class StateID
{
	INITIALISATION,
	MENU,
	PLAYING,
	QUIT,
};
}

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
	sf::Time m_TimePerFrame; // int64 is what sfml use for time, I will make my own typedefs later to put all types coupled with sfml somewhere later
	sf::RenderWindow m_Window;
	// StateStack m_StateStack;

	PieceTextureHolder m_PieceTextures;
	FontHolder m_Fonts;
	AudioHolder m_Audio;

	Core::StateID m_CurrentState = Core::StateID::INITIALISATION;
	Core::StateStack m_StateStack;
};
