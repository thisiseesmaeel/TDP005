#include <iostream>
#include "Game.h"
#include <random>

/**
 * Main function
 * @return
 */
int main() {

    std::random_device rd;  // non-deterministic generator
    std::mt19937 gen(rd()); // use Mersenne Twister as the engine
    std::uniform_int_distribution<> dis(1, 6); // generate random
    dis(gen);

    Game game;
    game.run();

    /*
     * Ends the application
     */
    return 0;
}
