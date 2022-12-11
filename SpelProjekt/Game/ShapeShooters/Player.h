#ifndef PLAYER_H
#define PLAYER_H

#include<SFML/Graphics.hpp>
#include<iostream>

class Player {
private:
    /**
     * Private members of player including sprite, texture, attack control, health points etc
     */
    sf::Sprite sprite;
    sf::Texture texture;

    float movementVelocity{};

    float attackControl{};
    float attackControlMax{};

    int healthPoint;
    int healthPointMax;

    /**
     * Player Private functions
     * Variables, texture and sprite is initialized here
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
     * Player accessors including getPos() for position, getBounds() for getting boundaries of the player.
     * getHealthPoint() and getHealthPointMax() for getting the health point
     */
    const sf::Vector2f& getPos() const;
    sf::FloatRect getBounds() const;
    const int& getHealthPoint() const;
    const int& getHealthPointMax() const;

    /**
     * Player modifiers
     * Set the position of the player
     * Set and reduce the health point of the player
     */
    //void setPosition(sf::Vector2f position);
    void setPosition(float x, float y);
    //void setHealthPoint(const int hp);
    void reduceHealthPoint(const int value);

    /**
     * Player public functions including move() to move the player, canAttack() and updateAttack() to handle when the attacking situations
     * Other functions are update() to update the player as well as render() to render.
     */
    void move(float coordinateX, float coordinateY);
    bool canAttack();
    void updateAttack();
    void update();
    void render(sf::RenderTarget& target);

};


#endif //!PLAYER_H
