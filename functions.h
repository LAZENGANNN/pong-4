#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

void initBat(sf::RectangleShape& bat, const sf::Color batColor, const sf::Vector2f batPosition) {
	bat.setSize(batSize);
	bat.setFillColor(batColor);
	bat.setPosition(batPosition);
}

void initBall(sf::CircleShape& ball, const sf::Color Color, const sf::Vector2f Position) {
	ball.setFillColor(Color);
	ball.setPosition(Position);
}

//void initText( Font font, scorepos) {
//
//}

void windowdraw(RectangleShape leftBat, Recta) {
	window.draw(leftBat);
	window.draw(rightBat);
	window.draw(ball);
	window.draw(leftPlayerScoreText);
	window.draw(rightPlayerScoreText);
}