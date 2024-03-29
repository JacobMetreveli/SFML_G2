#include <iostream>
#include "../include/Game.h"
#include <ctime>


int main() {

    // Initialize random seed
    srand(static_cast<unsigned>(time(0)));

    // Initialize game object
    Game game;

    // Game loop
    while(game.running()) {
        game.update();
        game.render();
    }

    // End of application
    return 0;
}