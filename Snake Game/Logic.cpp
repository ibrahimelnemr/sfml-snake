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

if        (snake.tail.front().getSnakeFloatRect().intersects(food.getFoodRect()))
    
    {
        food.newFoodPosition();
        snake.grow();
    }


    for (int i = 1; i < snake.tail.size(); i++) {
        
        if        (snake.tail.front().getSnakeFloatRect().intersects(snake.tail.at(i).getSnakeFloatRect()))
            
        {
            endScore = snake.getLength();
            snake.setLength(-2);
            snake.tail.resize(1);
            
        }

    }


    
}
