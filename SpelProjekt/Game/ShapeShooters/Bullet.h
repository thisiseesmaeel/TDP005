#ifndef BULLET_H
#define BULLET_H

#include<SFML/Graphics.hpp>
#include<iostream>

class Bullet {
private:
    /**
     * Private members of Bullet including shape, direction and movement velocity
     */
    sf::Sprite shape;

    sf::Vector2f direction;
    float movementVelocity{};

public:
    /**
     * Bullet Default Constructor
     */
    Bullet();
    /**
     * Bullet constructor
     */
    Bullet(sf::Texture* texture, float positionX, float positionY, float coordinateX, float coordinateY, float movementVelocity);
    /**
     * Bullet destructor
     */
    virtual ~Bullet();

    /**
     * Bullet accessors
     * getBounds() determines the boundaries of the bullet
     */
    sf::FloatRect getBounds() const;

    /**
     * Bullet public functions including update and render
     */
    void update();
    void render(sf::RenderTarget* target);

};



#endif //!BULLET_H
