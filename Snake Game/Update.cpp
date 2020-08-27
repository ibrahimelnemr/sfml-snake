//
//  Update.cpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

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
