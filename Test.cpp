#include <iostream>
#include "SFML/Graphics.hpp"
using namespace sf;

class Game {
public:
    void start();
    //Snake snake;
    //Food food;
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
    
private:
    void input();
    void update(/*float time*/);
    void draw();
    void logic();
    RenderWindow window;

};

int main() 
{
    RenderWindow window;
    Event event;
    window.create(VideoMode(800, 800), "Snake");
    
    while(window.isOpen()) {

        while(window.pollEvent(event)) {
              if (event.type == Event::Closed)
                  window.close();
        }
    }

    window.clear(sf::Color::Black);
    window.display();

}

   

// g++ Test.cpp -o Test -I include -L lib -l sfml-system -l sfml-window -l sfml-graphics -l sfml-audio -l sfml-network -Wl,-rpath ./lib
