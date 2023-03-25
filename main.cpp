#include "SFML/Graphics.hpp"
#include "Game.hpp"
#include "Snake.hpp"
#include "Food.hpp"
#include <iostream>
using namespace sf;

int main() {
    
    Game game;
    game.start();
    
}

// g++ main.cpp Game.cpp Input.cpp Logic.cpp Draw.cpp Snake.cpp Food.cpp Update.cpp -o snake -I include -L lib -l sfml-system -l sfml-window -l sfml-graphics -l sfml-audio -l sfml-network -Wl,-rpath ./lib && ./snake



// g++ main.cpp Game.cpp Input.cpp Logic.cpp Draw.cpp Snake.cpp Food.cpp Update.cpp -o snake -I include -L lib -l sfml-system -l sfml-window -l sfml-graphics -l sfml-audio -l sfml-network -Wl,-rpath ./lib

// ./snake


// g++ main.cpp -o main -I include -L lib -l sfml-system -l sfml-window -l sfml-graphics -l sfml-audio -l sfml-network -Wl,-rpath ./lib