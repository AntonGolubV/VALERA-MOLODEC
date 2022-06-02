#pragma once
#include <string>
#include <iostream>
const int M = 30;
const int N = 50;
const int ts = 20;

const float WINDOW_HEIGHT = M*ts;//600-437 X
const float WINDOW_WIDTH = N*ts;//1000-700 Y
const float PLAYER_SPEEDX = 9.f;
const float PLAYER_SPEEDY = 5.f;
const float PLAYER_HP = 100;
const float ROAD_SPEED_X = 0.f;
const float ROAD_SPEED_Y = 3.f;
const float ROAD_SCALE_X = 1.43f;
const float ROAD_SCALE_Y = 1.37f;
const float SCALE_PLAYER_X = 0.3f;
const float SCALE_PLAYER_Y = 0.3f;
const std::string FILE_OVER = "game over.png";
const std::string SPLASH_FILE_NAME = "race-splash.png";
const std::string IMAGES_FOLDER = "images/";
const std::string WIN_FILE_NAME = IMAGES_FOLDER + "win.jpg";
const std::string LASER_FILE = "laserBlue01.png";
const float LASER_SPEEDY = 10.f; 
const std::string HP_BONUS_FILE_NAME = "enemy.png";
const std::string FONT_FILE_NAME = "res/kenvector_future.ttf";
const size_t METEORS_QTY = 20;


