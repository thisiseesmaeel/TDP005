#ifndef GAME_H
#define GAME_H


#include <vector>
#include "GameObject.h"
#include "GameWindow.h"
#include "GameUniverse.h"
#include "GameGUI.h"
#include "Bullet.h"
#include "Player.h"
#include "Enemy.h"
#include "CollisionManagement.h"

class Game {

public:
    Game();
    virtual ~Game();
    void run();
    static void updatePollEvents();
    static void render();


    /**
     * Points
     */
    unsigned points{};


private:



    void updateWar();


    void initializeSystems();
    void updateGameObjects();
    void renderGameObjects();
    std::vector<GameObject*> gameObjects;


};


#endif //!GAME_H
