#include <iostream>
#include "Game.h"
#include<ctime>

int main() {


    srand(time((0)));

    Game game;
    game.run();

    /*
     * Ends the application
     */
    return 0;
}
