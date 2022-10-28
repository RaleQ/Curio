#pragma once
#include "sfml.h"
#include "Log.h"
#include "Button.h"
#include <vector>
class Menu{
public:
	std::vector<Button> m_Buttons;
	sf::Font m_font;
private:
	sf::Texture m_background_texture;
	sf::Sprite m_background;

public:
	void LoadBackground(std::string&);
	void DisplayMenu(sf::RenderWindow&);
	void CreateMenuButtons();
	void LoadMenuFont();
};

