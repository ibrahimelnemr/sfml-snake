//
//  Game.hpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "SFML/Graphics.hpp"
#include "Snake.hpp"
#include "Food.hpp"
#include <sstream>

using namespace sf;

class Game {
public:
    void start();
    Snake snake;
    Food food;
    Event event;
    int getRows();
    const int windowWidth = 600;
    const int rows = 20;
    int score = 0;
    Text text;
    Font font;
    int endScore = 0;
    Text startMessage;
    Text endMessage;
    std::stringstream ss;
    std::stringstream ss2;
    
private:
    void input();
    void update(/*float time*/);
    void draw();
    void logic();
    RenderWindow window;

};

#endif /* Game_hpp */
