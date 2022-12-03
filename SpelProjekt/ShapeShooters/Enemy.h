//
// Created by Ismail Safwat on 2022-12-03.
//

#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>
#include<iostream>


class Enemy {
private:
    sf::CircleShape shape;
    int type;
    int healthPoint;
    int healthPointMax;
    int damage;
    int points;

    /*
     * Enemy private functions
     */
    void initializeShape();
    void initializeVariables();
public:
    /*
     * Enemy constructor
     */
    Enemy(float positionX, float positionY);
    /*
     * Enemy destructor
     */
    virtual ~Enemy();
    /*
     * Enemy public functions
     */
    void update();
    void render(sf::RenderTarget* target);
};


#endif //!ENEMY_H
