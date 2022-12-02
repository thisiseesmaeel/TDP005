//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef SHAPESHOOTERS_PLAYER_H
#define SHAPESHOOTERS_PLAYER_H

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
    void initializeTexture();
    void initializeSprite();
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


#endif //SHAPESHOOTERS_PLAYER_H
