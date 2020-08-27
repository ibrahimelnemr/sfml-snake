//
//  Food.hpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#ifndef Food_hpp
#define Food_hpp

#include <stdio.h>
#include "SFML/Graphics.hpp"
using namespace sf;

class Food {
public:
    Food();
    void newFoodPosition();
    void update();
    RectangleShape getFoodObj();
    FloatRect getFoodRect();

private:
    Vector2f foodPosition;
    RectangleShape foodObj;
    Vector2f foodSize;
};

#endif /* Food_hpp */
