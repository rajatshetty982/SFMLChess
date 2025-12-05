#include "Core/State.hpp"

class GameState : public State
{
	void update(sf::Time dt) override;
	void processInput(const sf::Event& event) override;
	void render(sf::RenderTarget& target) override;
};


