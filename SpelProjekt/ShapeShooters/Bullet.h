//
// Created by Ismail Safwat on 2022-12-02.
//

#ifndef BULLET_H
#define BULLET_H

#include<SFML/Graphics.hpp>
#include<iostream>

class Bullet {
private:
    sf::Sprite shape;

    sf::Vector2f direction;
    float movementVelocity;

    /*
     * Bullet private functions
     */

public:
    /*
     * Bullet Default Constructor
     */
    Bullet();
    /*
     * Bullet constructor
     */
    Bullet(sf::Texture& texture, float coordinateX, float coordinateY, float movementVelocity);
    /*
     * Bullet destructor
     */
    virtual ~Bullet();
    /*
     * Bullet public functions
     */
    void update();
    void render(sf::RenderTarget* target);

};



#endif // !BULLET_H
