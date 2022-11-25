//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Player.h"

Player::Player() {
    this->initializeSprite();
    this->initializeTexture();
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

void Player::initializeSprite() {
    /*
     * The texture will be set to the sprite.
     */
    this->sprite.setTexture(this->texture);
}

void Player::initializeTexture() {
    /*
     * A texture will be loaded from a file.
     */

}
