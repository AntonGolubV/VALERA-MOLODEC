#pragma once
#include "player.h"
#include "Road.h"
#include "barrier.h"
#include "Splash.h"
#include <list>
#include "laser.h"
#include "explosion.h"
#include "text.h"
#include "bonus.h"
#include "Text2.h"
#include "Splash2.h"

class Game {
public:
	enum GameState { SPLASH, PLAY, WIN,  GAME_OVER };
	Game();
	void play();
	void check_event();
	void update();
	void draw();
	void check_collisions();
	
private:

	sf::RenderWindow window;
    GameState game_state{ SPLASH};
	Player player;
	sf::RectangleShape window_borders;
	Road road;
	std::vector<Meteor*> meteor_sprites;
	SplashScreen splash_screen, game_over_screen;
	sf::Clock clock;
	TextObj hp_text;
	std::list<Laser*> laser_sprites;
	Laser laser;
	std::list<Explosion*> exp_sprites;
	std::list<Bonus*> bonus_sprites;
	size_t score = 0;
	TextObject score_text;
	Splash2 win_screen;
	
	


	
};