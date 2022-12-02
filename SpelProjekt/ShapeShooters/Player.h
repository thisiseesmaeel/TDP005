//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef PLAYER_H
#define PLAYER_H

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<iostream>

class Player {
private:
    sf::Sprite sprite;
    sf::Texture texture;

    float movementVelocity;
    /*
     * Player Private functions
     */
    void initializeTexture();
    void initializeSprite();
public:
    /*
     * Player constructor
     */
    Player();
    /*'
     * Player destructor
     */
    virtual ~Player();


    /*
     * Player public functions
     */
    void move(const float coordinateX, const float coordinateY);
    void update();
    void render(sf::RenderTarget& target);

};


#endif // !PLAYER_H
