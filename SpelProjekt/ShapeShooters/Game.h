//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef SHAPESHOOTERS_GAME_H
#define SHAPESHOOTERS_GAME_H

#include "Player.h"


class Game {
private:
    sf::RenderWindow* window{};

    /*
     * Player
     */
    Player* player;

    /*
     * Private functions
     */
    void initializeWindow();
    void initializePlayer();

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


#endif //SHAPESHOOTERS_GAME_H
