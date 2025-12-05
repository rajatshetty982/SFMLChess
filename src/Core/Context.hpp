#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "Core/ResourceHolder.hpp"
#include "Core/StateStack.hpp"

enum TextureID {}; // this should be somewhere in textureHolder.hpp

struct Context
{
	sf::RenderWindow* window;
	ResourceHolder<TextureID, sf::Texture>*   resources;       // textures, fonts, sounds
	Core::StateStack*       stack;           // to push/pop other states
	//
    // Player*         player;
    // Settings*       settings;
    // SoundPlayer*    soundPlayer;
};
