#include "sfml.h"
#include "Log.h"


void HandleEvent(sf::RenderWindow& window, sf::Event& event) {
	if (event.type == sf::Event::Closed) {
		window.close();
	}
	std::string message;
	switch (event.type) {

		//window closed
	case sf::Event::Closed:
		CURIO_CORE_TRACE("Window closed");
		break;

		//key pressed
	case sf::Event::KeyPressed:
		CURIO_CORE_TRACE(std::to_string((char)event.key.code) + " button has beed pressed");
		break;

		//key released
	case sf::Event::KeyReleased:
		CURIO_CORE_TRACE(std::to_string((char)event.key.code) + " button has been released");
		break;

		//lost focus
	case sf::Event::LostFocus:
		CURIO_CORE_TRACE("Lost focus on window");
		break;

		//gained focus
	case sf::Event::GainedFocus:
		CURIO_CORE_TRACE("Gained focus on window");
		break;

		//text entered
	case sf::Event::TextEntered:
		CURIO_CORE_TRACE("ASCII character typed: (WIP)");
		break;

		//mousebutton pressed
	case sf::Event::MouseButtonPressed:
		CURIO_CORE_TRACE(std::to_string(event.mouseButton.button) + " mousebutton has been pressed");
		break;

		//mousebutton released
	case sf::Event::MouseButtonReleased:
		CURIO_CORE_TRACE(std::to_string(event.mouseButton.button) + " mousebutton has beed released");
		break;

		//mouse moved
	case sf::Event::MouseMoved:
		//CURIO_CORE_TRACE("Mouse moved");
		break;

		//mouse entered a window
	case sf::Event::MouseEntered:
		CURIO_CORE_TRACE("Mouse entered a window");
		break;

		//mouse left a window
	case sf::Event::MouseLeft:
		CURIO_CORE_TRACE("Mouse left a window");
		break;

		//unexpected event
	default:
		CURIO_CORE_WARN("Unexpected window event has been found!");
		break;
	}
}