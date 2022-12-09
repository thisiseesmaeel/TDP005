//
// Created by Ismail Safwat on 2022-12-02.
//

#include "Bullet.h"
/**
 * Bullet constructor
 */
Bullet::Bullet() = default;

Bullet::Bullet(sf::Texture* texture, float positionX, float positionY, float coordinateX, float coordinateY, float movementVelocity) {
    this->shape.setTexture(*texture);
    this->shape.setPosition(positionX, positionY);
    this->direction.x = coordinateX;
    this->direction.y = coordinateY;
    this->movementVelocity = movementVelocity;
    this->shape.scale(0.06f, 0.02f);

}
/**
 * Bullet destructor
 */
Bullet::~Bullet() = default;

sf::FloatRect Bullet::getBounds() const {
    return this->shape.getGlobalBounds();
}

/**
 * Bullet public functions implementation
 */
void Bullet::update() {
    /**
     * How we move the bullet
     */
    this->shape.move(this->movementVelocity * this->direction);

}

void Bullet::render(sf::RenderTarget* target) {
    target->draw(this->shape);
}




