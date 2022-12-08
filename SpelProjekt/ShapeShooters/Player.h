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

    float movementVelocity{};

    float attackControl{};
    float attackControlMax{};
    /*
     * Player Private functions
     */
    void initializeVariables();
    void initializeTexture();
    void initializeSprite();
public:
    /**
     * Player constructor
     */
    Player();

    /**
     * Player destructor
     */
    virtual ~Player();

    /**
     * Player accessors
     */
    const sf::Vector2f& getPos() const;
    sf::FloatRect getBounds() const;

    /**
     * Player modifiers
     */
    void setPosition(sf::Vector2f position);
    void setPosition(float x, float y);

    /**
     * Player public functions
     */
    void move(float coordinateX, float coordinateY);
    bool canAttack();
    void updateAttack();
    void update();
    void render(sf::RenderTarget& target);

};


#endif //!PLAYER_H
