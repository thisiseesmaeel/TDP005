//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Player.h"

/*
 * Player Private functions
 */

void Player::initializeTexture() {
    /*
     * A texture will be loaded from a file.
     */
    //TODO Här går det inte att visa bilden när man kompilerar.
    if(!this->texture.loadFromFile("/Users/ismailsafwat/CLionProjects/ShapeShooters/shapeshooter.png")){
        std::cout << "ERROR::PLAYER::INITIALIZETEXTURE::Failed to load the file!" << "\n";
    }
}

void Player::initializeSprite() {
    /*
     * The texture will be set to the sprite.
     */
    this->sprite.setTexture(this->texture);

    /*
     * Resize the sprite here.
     */
    this->sprite.scale(0.2f, 0.2f);
}



Player::Player() {
    this->initializeTexture();
    this->initializeSprite();
    this->movementVelocity = 1.f;
}

Player::~Player() = default;

const sf::Vector2f &Player::getPos() const {
    return this->sprite.getPosition();
}

/*
 * Player public functions
 */
void Player::update() {

}

void Player::render(sf::RenderTarget& target) {
    target.draw(this->sprite);
}

void Player::move(const float coordinateX, const float coordinateY) {
    this->sprite.move(this->movementVelocity * coordinateX, this->movementVelocity * coordinateY);
}


