//
//  Snake.hpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#ifndef Snake_hpp
#define Snake_hpp

#include <stdio.h>
#include "SFML/Graphics.hpp"
#include <vector>
#include <cstdlib>
using namespace sf;

class Snake {
public:
    Snake();
    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();
    void sidesOrBottom();
    float rightSpeed;
    float leftSpeed;
    float upSpeed;
    float downSpeed;
    bool downMove;
    bool upMove;
    bool leftMove;
    bool rightMove;
    void eat();
    void update();
    void updateTail();
    RectangleShape getSnakeObj();
    void setPosition(Vector2f position);
    Vector2f getSnakePosition();
    float getSnakeSpeed();
    FloatRect getSnakeFloatRect();
    void grow();
    std::vector <Snake> tail;
    void move();
    void adjustPosition();
    int getLength();
    void setLength(int length);
    
private:
    float snakeSpeed;
    float tailLength;
    Vector2f snakeSize;
    Vector2f snakePosition;
    RectangleShape SnakeObj;

};

#endif /* Snake_hpp */
