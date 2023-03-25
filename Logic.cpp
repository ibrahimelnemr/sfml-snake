//
//  Logic.cpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 7/2/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#include <stdio.h>
#include "Game.hpp"
#include "SFML/Graphics.hpp"
#include <iostream>
using namespace sf;

void Game::logic() {

    snake.adjustPosition();

// check if snake head collided with food object
    if (snake.tail.front().getSnakeFloatRect().intersects(food.getFoodRect()))

    {
        food.newFoodPosition();
        snake.grow();
    }

// check if snake head collided with any block in snake body

    for (int i = 1; i < snake.tail.size(); i++) 
    
    {
        
        if (snake.tail.front().getSnakeFloatRect().intersects(snake.tail.at(i).getSnakeFloatRect()))
   
        {
            endScore = snake.getLength();
            snake.setLength(-2);
            snake.tail.resize(1);
        }

    }

    
}
