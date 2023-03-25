#include <stdio.h>
#include "Game.hpp"
#include "Snake.hpp"
#include "Food.hpp"
#include "SFML/Graphics.hpp"
using namespace sf;

void Game::draw() {
    
    // clear the window
    
    window.clear(sf::Color::Black);

    // draw food item

    window.draw(food.getFoodObj());

    // draw snake head

    window.draw(snake.tail.front().getSnakeObj());

    // draw snake body
    
    for (int i = 1; i < snake.tail.size(); i++)
        {
            window.draw(snake.tail.at(i).getSnakeObj());
        }
    
    // display window
    
    window.display();

}
    

