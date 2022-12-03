#include <iostream>
#include "Game.h"
#include<time.h>

int main() {


    srand(time((0)));

    Game game;
    game.run();

    /*
     * Ends the application
     */
    return 0;
}
