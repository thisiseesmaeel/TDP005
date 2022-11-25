//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef SPACESHOOTERS_GAME_H
#define SPACESHOOTERS_GAME_H

#include "Player.h"


class Game {
private:
    sf::RenderWindow* window{};

    /*
     * Private functions
     */
    void initializeWindow();

public:
    Game();

    virtual ~Game();

    /*
     * Functions
     */
    void run();
    void update();
    void render();

};


#endif //SPACESHOOTERS_GAME_H
