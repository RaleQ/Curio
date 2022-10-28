#pragma once
#include "sfml.h"

class Button
{
public:
	sf::RectangleShape m_Button;
	sf::Text m_Text;
private:
	float m_Height;
	float m_Width;
	sf::Color m_Color;
	std::string m_TextContent;
	sf::Font m_Font;

	sf::Vector2f m_Position;
public:
	Button() {
		this->m_Height = 1;
		this->m_Width = 1;
		this->m_Color = sf::Color::Black;
		this->m_Text.setString("Default");
		this->m_Text.setCharacterSize(10);
		this->m_Text.setFillColor(sf::Color::White);
		this->m_Text.setStyle(sf::Text::Bold);
		this->m_Text.setFont(m_Font);
		this->m_Text.setPosition(100, 0);

		this->m_Position.x = 0.0f;
		this->m_Position.y = 0.0f;
	}
	Button(float Height,float Width,sf::Color BackgroundColor,std::string Text,int CharacterSize,sf::Color TextColor,sf::Font& font, float button_x, float button_y) {
		this->m_Font = font;
		this->m_Color = BackgroundColor;
		this->m_Height = Height;
		this->m_Width = Width;
		this->m_TextContent = Text;

		this->m_Button = sf::RectangleShape(sf::Vector2f(Width, Height));
		this->m_Button.setFillColor(BackgroundColor);
		this->m_Button.setPosition(sf::Vector2f(button_x, button_y));

		this->m_Text.setFont(font);
		this->m_Text.setString(Text);
		this->m_Text.setCharacterSize(CharacterSize);
		this->m_Text.setFillColor(TextColor);
		this->m_Text.setStyle(sf::Text::Bold);
		this->m_Text.setPosition(sf::Vector2f(100, 0));

		this->m_Position.x = button_x;
		this->m_Position.y = button_y;

		//this->m_Text.setPosition((this->m_Button.getGlobalBounds().width / 2) - (this->m_Text.getGlobalBounds().width / 2), (this->m_Button.getGlobalBounds().height / 2) - (this->m_Text.getGlobalBounds().height / 2));
	}
};

