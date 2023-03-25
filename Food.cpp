#include "Food.hpp"
#include "Snake.hpp"
#include "Game.hpp"
#include "SFML/Graphics.hpp"
#include <cmath>
#include <ctime>
using namespace sf;

// constructor
// ininitalize food position, size, color
Food::Food() {
    foodSize.x = 30;
    foodSize.y = 30;
    foodObj.setSize(foodSize);
    foodObj.setFillColor(sf::Color::Green);
    newFoodPosition();
    foodObj.setPosition(foodPosition);
}

// randomize new food position

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
