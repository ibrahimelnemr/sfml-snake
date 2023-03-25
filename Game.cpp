#include "Game.hpp"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <sstream>
using namespace sf;

// START
void Game::start() {
    //create window
    window.create(VideoMode(windowWidth, windowWidth), "Snake");
    // initialize clock
    Clock clock;
    
    // set frame rate
    window.setFramerateLimit(15);
    
    // Initialize first block of snake (head)
    snake.tail.push_back(Snake());
    
    srand(time(0));
    
    snake.setLength(-1);
    
    // Configure text
    text.setFont(font);
    text.setCharacterSize(50);
    text.setPosition(100, 100);
    
    // Configure start message
    startMessage.setFont(font);
    startMessage.setCharacterSize(50);
    startMessage.setPosition(100, 100);
    
    // Configure end message
    endMessage.setFont(font);
    endMessage.setCharacterSize(50);
    endMessage.setPosition(100, 100);

    // Game loop
    while(window.isOpen()) {

        while(window.pollEvent(event)) {
              if (event.type == Event::Closed)
                  window.close();
        }
        
        // Configure time
        Time time = clock.restart();
        float seconds = time.asSeconds();
        
        // Load font
        font.loadFromFile("Nexa Light.otf");
        
        // Game functions

        if (snake.getLength() >= 0) {
                input();
                logic();
                update(/*seconds*/);
                draw();
        }

        // Display start screen
        if (snake.getLength() == -1) {

            // Set start message            
            startMessage.setString("Welcome to Snake.\nPress any key \nto begin.");

            // Clear window
            window.clear(sf::Color::Black);
            
            // Draw start message
            window.draw(startMessage);

            // Display
            window.display();
            
            // Start game if key is pressed
            // Set snake length to 0
            if (event.type == sf::Event::KeyPressed) {
                snake.setLength(0);
        }
            
        }
        
        // Show end screen if game over
        if (snake.getLength() == -2) {
            
            ss2 << "Your score was: " << endScore << ". \n Press any key\n to play again";
            endMessage.setString(ss2.str());
            ss2.str(" ");
            
            // Clear window
            window.clear(sf::Color::Black);
            
            // Draw end message
            window.draw(endMessage);
            
            // Display
            window.display();
            
            // Restart game if key pressed
            if (event.type == sf::Event::KeyPressed) {
                    snake.setLength(0);
            }
        }
        
    

        }

}

