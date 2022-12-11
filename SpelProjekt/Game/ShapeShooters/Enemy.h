#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>
#include<iostream>


class Enemy {
private:
    unsigned pointCount;
    sf::CircleShape shape;
    float speed;
    int healthPoint;
    int healthPointMax;
    int damage;
    int points;

    /**
     * Enemy private functions
     * Variables and shape are initialized here
     */
    void initializeVariables();
    void initializeShape();
public:
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
    sf::FloatRect getBounds() const;
    const int& getPoints() const;
    const int& getDamage() const;

    /**
     * Enemy public functions
     * Like Player, enemy is needed to get updated and rendered which is defined here via update() and render() respectively.
     */
    void update();
    void render(sf::RenderTarget* target);
};


#endif //!ENEMY_H
