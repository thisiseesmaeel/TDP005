//
// Created by Ismail Safwat on 2022-11-25.
//

#ifndef SPACESHOOTERS_PLAYER_H
#define SPACESHOOTERS_PLAYER_H

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>

class Player {
private:
    sf::Sprite sprite;
    sf::Texture texture;

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
    void update();
    void render(sf::RenderTarget& target);

};


#endif //SPACESHOOTERS_PLAYER_H
