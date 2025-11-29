#include "Core/Application.hpp"
#include "Application.hpp"
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/VideoMode.hpp>
/*
	sf::RenderWindow m_Window;
	TextureHolder m_Textures;
	FontHolder m_Fonts;
	AudioHolder m_Audio;

	StateStack m_StateStack;
*/

Application::Application()
: m_Window(sf::VideoMode(800,800), "SFML_Chess") {}

void Application::run()
{
	sf::Clock clock;
	while (m_Window.isOpen())
	{
		sf::Time dt = clock.restart();
		processInput();
		update(dt);
		render();
	}
}

void Application::processInput()
{
	sf::Event event;
	while (m_Window.pollEvent(event))
{
		if (event.key.code == sf::Keyboard::Escape) m_Window.close();
	}
}
void Application::update(sf::Time dt)
{

}
void Application::render(){

}
