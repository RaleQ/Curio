#include "Menu.h"
#include "Button.h"
#include <string>

void Menu::LoadBackground(std::string& file) {
	if (!this->m_background_texture.loadFromFile(file)) {
		CURIO_CORE_ERROR("File could not be found or loading file failed");
		CURIO_CORE_ERROR("Given file directory: " + file);
	}
	else {
		this->m_background.setTexture(this->m_background_texture);
	}


}

void Menu::LoadMenuFont() {
	this->m_font.loadFromFile("ArialCE.ttf");
}

void Menu::CreateMenuButtons() {
	m_Buttons.reserve(4);
	this->m_Buttons.emplace_back(Button(100.0f, 200.0f, sf::Color::Yellow, std::string("Button1"), 10, sf::Color::Red, this->m_font, 0.0f, 0.0f));
	this->m_Buttons.emplace_back(Button(100.0f, 200.0f, sf::Color::Yellow, std::string("Button2"), 10, sf::Color::Red, this->m_font, 0.0f, 300.0f));
	this->m_Buttons.emplace_back(Button(100.0f, 200.0f, sf::Color::Yellow, std::string("Button3"), 10, sf::Color::Red, this->m_font, 0.0f, 600.0f));
	this->m_Buttons.emplace_back(Button(100.0f, 200.0f, sf::Color::Yellow, std::string("Button4"), 10, sf::Color::Red, this->m_font, 0.0f, 900.0f));
}

void Menu::DisplayMenu(sf::RenderWindow& window) {
	window.draw(this->m_background);
	window.draw(this->m_Buttons[0].m_Button);
	window.draw(this->m_Buttons[0].m_Text);
}

