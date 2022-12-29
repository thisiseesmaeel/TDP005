#ifndef BULLET_H
#define BULLET_H

#include<SFML/Graphics.hpp>
#include<iostream>
#include "GameObject.h"
#include "GameGUI.h"
#include "Game.h"

class Bullet : public GameObject {
private:
    /**
     * Private members of Bullet including shape, direction and movement velocity
     */
    sf::Sprite shape{};

    sf::Vector2f direction;
    sf::RenderTarget* target;
    float movementVelocity{};


public:
    /**
     * Bullet Default Constructor
     */
    Bullet();
    /**
     * Bullet constructor
     */
    Bullet(sf::Texture* texture, float positionX, float positionY, float coordinateX, float coordinateY, float movementV);
    /**
     * Bullet destructor
     */
    virtual ~Bullet();

    /**
     * Bullet accessors
     * getBounds() determines the boundaries of the bullet
     */
    sf::FloatRect getBounds() ;
    static std::vector<Bullet*> bullets;




    /**
     * Bullet public functions including update and render
     */
    static void initialize();
    static void updateBullets();
    void update() override;
    void render() override;

};



#endif //!BULLET_H
