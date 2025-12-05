#include <SFML/System/Time.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class State
{
public:
	State();
	virtual ~State() = default;
	virtual void update(sf::Time dt) = 0;
	virtual void render(sf::RenderTarget& target) = 0;
	virtual void processInput(const sf::Event& event) = 0;

private:

};
