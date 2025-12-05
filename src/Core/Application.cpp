#include "Core/Application.hpp"
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/VideoMode.hpp>
#include "Chess/Utils.hpp"
#include "Chess/Piece.hpp"

Application::Application()
	: m_Window(sf::VideoMode(800,800), "SFML_Chess")
	, m_TimePerFrame(sf::milliseconds(16)) {}

void Application::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	while (m_Window.isOpen())
	{
		sf::Time dt = clock.restart();
		timeSinceLastUpdate += dt;
		while (timeSinceLastUpdate > m_TimePerFrame)
		{
			timeSinceLastUpdate -= m_TimePerFrame;

			processInput();
			update(m_TimePerFrame); // NOTE: dt!
		}
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
	Piece piece( PieceColour::Black, PieceType::King);
	static uint64_t count = 0;
	print_piece(piece, count);
	count++;
}
void Application::render(){
	m_Window.clear();
	// m_StateStack.draw();
	m_Window.display();
}
