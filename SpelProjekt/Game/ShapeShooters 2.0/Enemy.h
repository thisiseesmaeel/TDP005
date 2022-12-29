#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>
#include<iostream>
#include "GameObject.h"
#include "Enemy.h"
#include "GameWindow.h"
#include "Player.h"


class Enemy : public GameObject {
private:
    unsigned pointCount{};
    sf::CircleShape shape;
    float speed{};
    int healthPoint{};
    int healthPointMax{};
    int damage{};
    int points{};
    sf::RenderTarget* target{};

    float spawnTimer{};
    float spawnTimerMax{};


    /**
     * Enemy private functions
     * Variables and shape are initialized here
     */


public:

    Enemy();

    /**
     * Enemy constructor
     */
    Enemy(float positionX, float positionY);

    /**
     * Enemy destructor
     */
    virtual ~Enemy();

    /**
     * Enemy accessor
     */
    sf::FloatRect getBounds() ;
    const int& getPoints() ;
    const int& getDamage() ;
    static std::vector<Enemy*> enemies;


    /**
     * Enemy public functions
     * Like Player, enemy is needed to get updated and rendered which is defined here via update() and render() respectively.
     */
    void initialize();
    void updateEnemies();
    void update() override;
    void render() override;
};


#endif //!ENEMY_H
