//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Player.h"

/*
 * Private functions
 */

void Player::initializeSprite() {
    /*
     * The texture will be set to the sprite.
     */
    this->sprite.setTexture(this->texture);

    /*
     * Resize the sprite here.
     */
    this->sprite.scale(1.2f, 1.2f);
}

void Player::initializeTexture() {
    /*
     * A texture will be loaded from a file.
     */
    if(!this->texture.loadFromFile("/Users/ismailsafwat/CLionProjects/ShapeShooters/Textures/shapeshooter.png")){
        std::cout << "ERROR::PLAYER::INITIALIZETEXTURE::Failed to load the file!" << "\n";
    }
}

Player::Player() {
    this->initializeSprite();
    this->initializeTexture();
    this->movementVelocity = 1.f;
}

Player::~Player() = default;

/*
 * Functions
 */
void Player::update() {

}

void Player::render(sf::RenderTarget& target) {
    target.draw(this->sprite);
}

void Player::move(const float coordinateX, const float coordinateY) {
    this->sprite.move(this->movementVelocity * coordinateX, this->movementVelocity * coordinateY);
}


