//
//  Snake.cpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#include "Snake.hpp"
#include "Game.hpp"
#include "Food.hpp"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace sf;

Game game;

Snake::Snake() {
    SnakeObj.setPosition(0, 0);
    snakeSize.x = 30;
    snakeSize.y = 30;
    SnakeObj.setSize(snakeSize);
    SnakeObj.setFillColor(sf::Color::White);
    snakeSpeed = 5;
    rightSpeed = 0;
    leftSpeed = 0;
    upSpeed = 0;
    downSpeed = 0;
    tailLength = 0;
    rightMove = true;
    leftMove = false;
    downMove = false;
    upMove = false;
    
}
RectangleShape Snake::getSnakeObj() {
    return SnakeObj;
}

void Snake::setPosition(Vector2f position) {
    snakePosition.x = position.x;
    snakePosition.y = position.y;
}

 
void Snake::sidesOrBottom() {
    if (snakePosition.x > game.windowWidth + snakeSize.x)
        snakePosition.x = -snakeSize.x;
    
    else if (snakePosition.x < 0 - snakeSize.x)
        snakePosition.x = game.windowWidth + snakeSize.x;
    
    else if (snakePosition.y < 0 - snakeSize.y)
        snakePosition.y = game.windowWidth;
    
    else if (snakePosition.y >game.windowWidth + snakeSize.y)
        snakePosition.y = 0 - snakeSize.y;
}


void Snake::update() {
  
    SnakeObj.setPosition(snakePosition);

}

void Snake::updateTail() {

 for(int i = 1; i < tail.size(); i++) {

     tail.at(i).SnakeObj.setPosition(tail.at(i).snakePosition);


  }
}
        
  
void Snake::adjustPosition() {
    
    
    for (int i =1; i < tail.size(); i++) {
        tail.at(i).setPosition(tail.at(i-1).SnakeObj.getPosition());
    }
}

float Snake::getSnakeSpeed() {
    return snakeSpeed;
}

FloatRect Snake::getSnakeFloatRect() {
    return SnakeObj.getGlobalBounds();
}

void Snake::grow() {
    
    tail.push_back(Snake());
    tail.back().setPosition(tail.at(tail.size()-2).SnakeObj.getPosition());
    tailLength++;
}

void Snake::move() {
    if (rightMove)  {
          snakePosition.x += game.windowWidth / game.rows;
      }
      
      else if (leftMove)  {
               snakePosition.x -= game.windowWidth / game.rows;
      }
      
      else if (upMove)  {
                snakePosition.y -= game.windowWidth / game.rows;
      }
      
      else if (downMove)  {
                snakePosition.y += game.windowWidth / game.rows;
      }
      
      sidesOrBottom();

}

void Snake::moveDown() {
    downMove = true;
    upMove = false;
    rightMove = false;
    leftMove = false;
    

}

void Snake::moveUp() {
    upMove = true;
    downMove = false;
    rightMove = false;
    leftMove = false;
    
 }

void Snake::moveRight(){
    rightMove = true;
    leftMove = false;
    upMove = false;
    downMove = false;
    
}

void Snake::moveLeft() {
    leftMove = true;
    rightMove = false;
    upMove = false;
    downMove = false;
    
  
}

Vector2f Snake::getSnakePosition() {
    return snakePosition;
}

int Snake::getLength () {
    return tailLength;
}

void Snake::setLength(int length) {
    tailLength = length;
}
