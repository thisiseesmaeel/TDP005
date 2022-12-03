//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include<map>


class Game {
private:
    /*
     * Window
     */
    sf::RenderWindow* window{};

    /*
     * Resources
     */
    //For each string there will be textures.
    //I made Texture as pointer because I want to make sure map contains the actual textures.
    std::map<std::string, sf::Texture*> textures;
    std::vector<Bullet*> bullets;

    /*
     * Player
     */
    Player* player{};

    /*
     * Enemy
     * Here defines many enemies instead of one.
     */
    float spawnTimer;
    float spawnTimerMax;
    std::vector<Enemy*> enemies;

    /*
     * Game Private functions
     */
    void initializeWindow();
    void initializeTextures();
    void initializePlayer();
    void initializeEnemy();

public:
    /*
     * Game constructor
     */
    Game();
    /*
     * Game destructor
     */
    virtual ~Game();



    /*
     * Game public functions
     */
    void run();
    void updatePollEvents();
    void updateInput();
    void updateBullets();
    void updateEnemies();
    void update();
    void render();

};


#endif //!GAME_H
