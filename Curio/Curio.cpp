#include <iostream>
#include <string>
#include "sfml.h"
#include "Events.h"
#include "Log.h"
#include "Menu.h"
#include "Button.h"

int main() {

	Log::Init();
	//CURIO_CORE_TRACE("Trace log");
	//CURIO_CORE_INFO("Info log");
	//CURIO_CORE_WARN("Warn log");
	//CURIO_CORE_ERROR("Error log");
	//CURIO_CORE_CRITICAL("Critical log");
	CURIO_CORE_INFO("Started application");

	sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Curio", sf::Style::Close | sf::Style::Titlebar | sf::Style::Fullscreen);

	CURIO_CORE_INFO("Window created");

	CURIO_CORE_INFO("Creating menu");
	Menu menu;

	CURIO_CORE_INFO("Loading fonts");
	menu.LoadMenuFont();

	window.setVerticalSyncEnabled(false);
	window.setFramerateLimit(60);

	CURIO_CORE_INFO("Creating menu background");
	std::string path = "background.jpg";
	menu.LoadBackground(path);
	CURIO_CORE_INFO("Creating menu buttons");
	menu.CreateMenuButtons();

	CURIO_CORE_INFO("Entering game loop");

	while (window.isOpen()) {

		//Events

		sf::Event event;
		while (window.pollEvent(event)) {
			HandleEvent(window, event);
		}
		menu.DisplayMenu(window);
		window.display();
	}

	return 0;
}