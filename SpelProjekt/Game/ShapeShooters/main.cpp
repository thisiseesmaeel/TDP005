#include <iostream>
#include "Game.h"
#include<ctime>

/**
 * Main function
 * @return
 */
int main() {


    srand(time((nullptr)));

    Game game;
    game.run();

    /*
     * Ends the application
     */
    return 0;
}
