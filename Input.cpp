//
//  Input.cpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#include <stdio.h>
#include "Game.hpp"
#include "Snake.hpp"
#include "SFML/Graphics.hpp"
#include <iostream>

void Game::input() {

    if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Right)) {
        
        snake.tail.front().downMove = false;
        snake.tail.front().upMove = false;
        snake.tail.front().rightMove = true;
        snake.tail.front().leftMove = false;
    }
    
    else if((event.type==sf::Event::KeyPressed) && (event.key.code ==sf::Keyboard::Left)) {
        snake.tail.front().downMove = false;
        snake.tail.front().upMove = false;
        snake.tail.front().rightMove = false;
        snake.tail.front().leftMove = true;
    }
    
    else if ((event.type==sf::Event::KeyPressed) && (event.key.code ==sf::Keyboard::Up)) {
        snake.tail.front().downMove = false;
        snake.tail.front().upMove = true;
        snake.tail.front().rightMove = false;
        snake.tail.front().leftMove = false;
     
    }
    
    else if((event.type==sf::Event::KeyPressed) && (event.key.code ==sf::Keyboard::Down)) {
        snake.tail.front().downMove = true;
        snake.tail.front().upMove = false;
        snake.tail.front().rightMove = false;
        snake.tail.front().leftMove = false;
  
    }

    snake.tail.front().move();
    snake.adjustPosition();
}
