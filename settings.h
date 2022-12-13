#pragma once
#include <SFML/Graphics.hpp>

//экран
const float WINDOW_WIDTH = 800;
const float WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float FPS = 60.f;

//ракетки
const float batWidth = 20.f;
const float batHeight = 80.f;
const float batOffset = 50.f;
const sf::Vector2f batSize(20.f, 80.f);
const sf::Color leftBatColor{ 158,20,37 };
const sf::Color rightBatColor{ 20,158,49 };
const float batSpeed = 5.f;
const sf::Vector2f leftbatstartpos{ batOffset, (WINDOW_HEIGHT - batHeight) / 2 };
const sf::Vector2f rightbatstartpos{ WINDOW_WIDTH - batOffset, (WINDOW_HEIGHT - batHeight) / 2 };

//шарик
const float ballRadius = 25.f;
const sf::Color ballColor{ sf::Color::Yellow };
const sf::Vector2f ballstartpos{ (WINDOW_WIDTH - 2 * ballRadius) / 2, (WINDOW_HEIGHT - 2 * ballRadius) / 2 };

//текст
const sf::Vector2f leftscorepos {(WINDOW_WIDTH / 2) - batOffset, 0};
const sf::Vector2f rightscorepos{(WINDOW_WIDTH / 2) + batOffset, 0};
const float textsize = 40.f;
