//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include<map>
#include<string>
#include<sstream>


class Game {
private:
    /**
     * Window
     */
    sf::RenderWindow* window{};

    /**
     * Resources
     */
    ///For each string there will be textures.
    ///I made Texture as pointer because I want to make sure map contains the actual textures.
    std::map<std::string, sf::Texture*> textures;
    std::vector<Bullet*> bullets;

    /**
     * Game GUI
     */
    sf::Font font;
    sf::Text pointText;
    sf::Text gameOverText;

    /**
     * Universe
     */
    sf::Texture universeBackgroundTexture;
    sf::Sprite universeBackground;

    /**
     * Points
     */
     unsigned points;

    /**
     * Player
     */
    Player* player{};

    /**
     * Player GUI
     */
     sf::RectangleShape playerHealthPointBar;
     sf::RectangleShape playerHealthPointBarBackground;

    /**
     * Enemy
     * Here defines many enemies instead of one.
     */
    float spawnTimer{};
    float spawnTimerMax{};
    std::vector<Enemy*> enemies;


    /**
     * Game Private functions
     */
    void initializeWindow();
    void initializeTextures();
    void initializeGUI();
    void initializeUniverse();
    void initializeSystems();
    void initializeVariables();
    void initializePlayer();
    void initializeEnemy();

public:
    /**
     * Game constructor
     */
    Game();
    /**
     * Game destructor
     */
    virtual ~Game();



    /**
     * Game public functions
     */
    void run();
    void updatePollEvents();
    void updateInput();
    void updateGUI();
    void updateUniverse();
    void updateCollision();
    void updateBullets();
    void updateEnemies();
    void updateWar();
    void update();
    void renderGUI();
    void renderUniverse();
    void render();

};


#endif //!GAME_H
