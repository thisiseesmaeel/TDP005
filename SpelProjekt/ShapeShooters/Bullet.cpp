//
// Created by Ismail Safwat on 2022-12-02.
//

#include "Bullet.h"

Bullet::Bullet() {

}

Bullet::Bullet(sf::Texture& texture, float coordinateX, float coordinateY, float movementVelocity) {
    this->shape.setTexture(texture);
    this->direction.x = coordinateX;
    this->direction.y = coordinateY;
    this->movementVelocity = movementVelocity;
}

Bullet::~Bullet() {

}


/*
 * Bullet public functions
 */
void Bullet::update() {
    /*
     * How we move the bullet
     */
    this->shape.move(this->movementVelocity * this->direction);

}

void Bullet::render(sf::RenderTarget* target) {
    target->draw(this->shape);
}


