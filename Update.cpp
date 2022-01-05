#include <stdio.h>
#include "Game.hpp"
#include "Snake.hpp"
#include "Food.hpp"
#include "SFML/Graphics.hpp"
using namespace sf;

void Game::update(/*float time*/) {
    
    snake.updateTail();
    snake.tail.front().update(/*time*/);
    food.update();
}

// ?
