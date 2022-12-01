//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef SPACESHOOTERS_PLAYER_H
#define SPACESHOOTERS_PLAYER_H

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<iostream>

class Player {
private:
    sf::Sprite sprite;
    sf::Texture texture;

    float movementVelocity;
    /*
     * Private functions
     */
    void initializeSprite();
    void initializeTexture();
public:
    Player();

    virtual ~Player();


    /*
     * Functions
     */
    void move(const float coordinateX, const float coordinateY);
    void update();
    void render(sf::RenderTarget& target);

};


#endif //SPACESHOOTERS_PLAYER_H
