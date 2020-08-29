//
//  Game.cpp
//  Snake Game
//
//  Created by Ibrahim El Nemr on 6/30/20.
//  Copyright © 2020 Ibrahim El Nemr. All rights reserved.
//

#include "Game.hpp"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <sstream>
using namespace sf;


void Game::start() {
    window.create(VideoMode(windowWidth, windowWidth), "Snake");
    Clock clock;

    window.setFramerateLimit(5);
    snake.tail.push_back(Snake());
    srand(time(0));
    snake.setLength(-1);
    
    text.setFont(font);
    text.setCharacterSize(50);
    text.setPosition(100, 100);
    
    startMessage.setFont(font);
    startMessage.setCharacterSize(50);
    startMessage.setPosition(100, 100);
    
    endMessage.setFont(font);
    endMessage.setCharacterSize(50);
    endMessage.setPosition(100, 100);
    
    while(window.isOpen()) {

        while(window.pollEvent(event)) {
              if (event.type == Event::Closed)
                  window.close();
        }
        
        Time time = clock.restart();
        float seconds = time.asSeconds();
        
        font.loadFromFile("/Users/Ibrahim/Desktop/Nexa Light.otf");
        

        if (snake.getLength() >= 0) {
                input();
                logic();
                update(/*seconds*/);
                draw();
        }
    
        if (snake.getLength() == -1) {
            // Start screen
            
            startMessage.setString("Welcome to Snake.\nPress any key \nto begin.");
            window.clear(sf::Color::Black);
            window.draw(startMessage);
            window.display();
            
            if (event.type == sf::Event::KeyPressed) {
                snake.setLength(0);
        }
            
        }
        
        if (snake.getLength() == -2) {
            // End screen
            ss2 << "Your score was: " << endScore << ". \n Press any key\n to play again";
            endMessage.setString(ss2.str());
            ss2.str(" ");
            window.clear(sf::Color::Black);
            window.draw(endMessage);
            window.display();
                
            if (event.type == sf::Event::KeyPressed) {
                    snake.setLength(0);
            }
        }
        
    

        }

}

