#ifndef PLAYER_H
#define PLAYER_H

#include<SFML/Graphics.hpp>
#include<iostream>
#include "GameObject.h"
#include "GameGUI.h"
#include "Game.h"
#include "Bullet.h"

class Player : public GameObject {
private:
    /**
     * Private members of player including sprite, texture, attack control, health points etc
     */
    sf::Sprite sprite;
    sf::Texture texture;
    sf::RenderTarget* target{};

    float movementVelocity{};

    float attackControl{};
    float attackControlMax{};

    int healthPoint;
    int healthPointMax;





    /**
     * Player Private functions
     * Variables, texture and sprite is initialized here
     */


public:
    /**
     * Player constructor
     */
    Player();

    /**
     * Player destructor
     */
    virtual ~Player();

    static Player* player;

    /**
     * Player accessors including getPos() for position, getBounds() for getting boundaries of the player.
     * getHealthPoint() and getHealthPointMax() for getting the health point
     */
    const sf::Vector2f& getPos() ;
    static sf::FloatRect getBounds() ;
    const int& getHealthPoint() ;
    static const int& getHealthPointMax() ;

    /**
     * Player modifiers
     * Set the position of the player
     * Set and reduce the health point of the player
     */

    void setPosition(float x, float y);

    static void reduceHealthPoint(const int value);

    sf::RectangleShape playerHealthPointBar;
    sf::RectangleShape playerHealthPointBarBackground;

    /**
     * Player public functions including move() to move the player, canAttack() and updateAttack() to handle when the attacking situations
     * Other functions are update() to update the player as well as render() to render.
     */
    void move(float coordinateX, float coordinateY);
    void initialize();
    bool canAttack();
    void updateAttack();
    void updateUpdateAttack();
    void update() override;
    void render() override;

};


#endif //!PLAYER_H
