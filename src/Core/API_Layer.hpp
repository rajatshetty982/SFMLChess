#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Window.hpp>

namespace  API_Layer{
class Timer{
private:
	sf::Time Duration;
public:
	Timer(Duration = sf::Time::Zero);
	// setst the time back to 0 and returns time since dt
	sf::Time getDurationSince(sf::Time dt);


};

class Window {

	typedef sf::RenderWindow RenderWindow;
};
} 
