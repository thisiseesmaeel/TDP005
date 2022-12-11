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
     * For each string there will be textures.
     * I made Texture as pointer because I want to make sure map contains the actual textures.
     */
    std::map<std::string, sf::Texture*> textures;
    std::vector<Bullet*> bullets;

    /**
     * Game GUI including font, point text and game over text
     */
    sf::Font font;
    sf::Text pointText;
    sf::Text gameOverText;

    /**
     * Universe including background sprite and texture
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
     * Player GUI including health point bar and background
     */
     sf::RectangleShape playerHealthPointBar;
     sf::RectangleShape playerHealthPointBarBackground;

    /**
     * Enemy properties including spawn timer, spawn timer max and a vector of enemies
     */
    float spawnTimer{};
    float spawnTimerMax{};
    std::vector<Enemy*> enemies;


    /**
     * Game Private functions
     * Window, textures, GUIs, universe, players and enemies get initialized here
     */
    void initializeWindow();
    void initializeTextures();
    void initializeGUI();
    void initializeUniverse();
    void initializeSystems();
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
     * GUIs, universe, collisions, bullets, enemies and etc get updated here
     */
    void run();
    void updatePollEvents();
    void updateInput();
    void updateGUI();
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
