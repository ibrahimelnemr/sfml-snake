//
//  Food.cpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#include "Food.hpp"
#include "Snake.hpp"
#include "Game.hpp"
#include "SFML/Graphics.hpp"
#include <cmath>
#include <ctime>
using namespace sf;

Food::Food() {
    foodSize.x = 30;
    foodSize.y = 30;
    foodObj.setSize(foodSize);
    foodObj.setFillColor(sf::Color::Green);
    newFoodPosition();
    foodObj.setPosition(foodPosition);
}

void Food::newFoodPosition() {
    int randomx = rand()%(/*game2.rows*/20-2)+1;
    srand(time(0));
    int randomy = rand()%(/*game2.rows*/20-2)+1;
    foodPosition.x = randomx*30;
    foodPosition.y = randomy*30;
}

void Food::update() {
    foodObj.setPosition(foodPosition);
}

RectangleShape Food::getFoodObj () {
    return foodObj;
}

FloatRect Food::getFoodRect() {
    return foodObj.getGlobalBounds();
}
