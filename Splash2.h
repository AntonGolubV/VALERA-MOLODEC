#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"
//500*700

class Splash2 {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Splash2(std::string file_name, float x, float y) {
		texture.loadFromFile(file_name);
		sprite.setTexture(texture);
		sprite.setPosition(x, y);
		sprite.setScale(0.83f, 0.5f);

	}
	sf::Sprite getSprite() { return sprite; }
};