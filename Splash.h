#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"
//500*700

class SplashScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	SplashScreen(std::string file_name,  float x, float y,float scale_x= 2.f,float scale_y = 0.86f  ) {
		texture.loadFromFile(file_name);
		sprite.setTexture(texture);
		sprite.setPosition(x, y);
		sprite.setScale(scale_x, scale_y);
		sprite.setColor(sf::Color(255, 228, 181));
	}
	sf::Sprite getSprite() { return sprite; }
};