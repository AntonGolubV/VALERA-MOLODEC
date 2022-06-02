#include "const.h"
#include "player.h"

Player::Player(float x, float y) {
	texture.loadFromFile("танк.png");
	sprite.setTexture(texture);
    sprite.setScale(SCALE_PLAYER_X, SCALE_PLAYER_Y);
	sprite.setPosition(x, y);
}
void Player::draw(sf::RenderWindow& window) {
	window.draw(sprite);
}
void Player::update(){
    float speedx = PLAYER_SPEEDX;
    float speedy = PLAYER_SPEEDY;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) &&
        sprite.getPosition().x > 17
        )
    {
        sprite.move(-speedx, 0);
    }
    
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) &&
            sprite.getPosition().x < WINDOW_WIDTH - 45
            )
        {
            sprite.move(speedx, 0);
        }
   
       
        
}

size_t Player::getWidth() { return sprite.getGlobalBounds().width; }
size_t Player::getHeight() { return sprite.getGlobalBounds().height; }
sf::FloatRect Player::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Player::getPosition() { return sprite.getPosition(); }
void Player::reduceHp(float dmg) { hp -= dmg; }
bool Player::isDead() { return hp < 0; }    
float Player::getHp() { return hp; }
