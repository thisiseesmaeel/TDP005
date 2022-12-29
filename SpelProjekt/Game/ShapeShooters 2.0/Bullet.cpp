#include "Bullet.h"

std::vector<Bullet*> Bullet::bullets;


/**
 * Bullet constructor
 */
Bullet::Bullet() = default;

Bullet::Bullet(sf::Texture* texture, float positionX, float positionY, float coordinateX, float coordinateY, float movementV) {
    shape.setTexture(*texture);
    shape.setPosition(positionX, positionY);
    direction.x = coordinateX;
    direction.y = coordinateY;
    movementVelocity = movementV;
    shape.scale(0.06f, 0.02f);

}
/**
 * Bullet destructor
 */
Bullet::~Bullet() = default;

sf::FloatRect Bullet::getBounds() {
    return shape.getGlobalBounds();
}

/**
 * Bullet public functions implementation
 */

void Bullet::initialize() {
    GameGUI texture;
    texture.textures["BULLET"] = new sf::Texture();
    texture.textures["BULLET"]->loadFromFile("../Textures/bullet2.png");
}

void Bullet::updateBullets() {
    unsigned counter = 0;
    for(auto bullet : bullets){
        bullet->update();
        /**
         * Managing bullets when going toward top of the screen
         */
        if(bullet->getBounds().top + bullet->getBounds().height < 0.f){

            /// Delete bullet from memory and erase them as well.
            delete bullets.at(counter);
            bullets.erase(bullets.begin() + counter);
            --counter;
        }

        ++counter;
    }
}

void Bullet::update() {
    /**
     * How we move the bullet
     */
    shape.move(movementVelocity * direction);
    updateBullets();

}

void Bullet::render() {
    target->draw(shape);
}







