#include "Core/State.hpp"
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Window/Event.hpp>

class MenuState : public State
{
	void update(sf::Time dt) override;
	void processInput(const sf::Event& event) override;
	void render(sf::RenderTarget& target) override;
};

