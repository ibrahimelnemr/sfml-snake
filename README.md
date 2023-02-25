# Snake-Game
 
A clone of the classic Snake arcade game.

# Instructions

1. Clone the repository
2. Open a terminal inside the sfml-snake directory
3. Run the following command:
`g++ main.cpp Game.cpp Input.cpp Logic.cpp Draw.cpp Snake.cpp Food.cpp Update.cpp -o snake_sfml -I include -L lib -l sfml-system -l sfml-window -l sfml-graphics -l sfml-audio -l sfml-network -Wl,-rpath ./lib`
4. Run `./snake_sfml`
5. Enjoy!
