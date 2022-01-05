#include <stdio.h>
#include "Game.hpp"
#include "Snake.hpp"
#include "Food.hpp"
#include "SFML/Graphics.hpp"
using namespace sf;

void Game::draw() {
    
    window.clear(sf::Color::Black);
    
    window.draw(food.getFoodObj());

    window.draw(snake.tail.front().getSnakeObj());

 for (int i = 1; i < snake.tail.size(); i++) {
    window.draw(snake.tail.at(i).getSnakeObj());
    }
    
    window.display();

}
    

