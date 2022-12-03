//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Player.h"

/*
 * Player Private functions
 */

void Player::initializeVariables() {
    this->movementVelocity = 2.f;
    this->attackControlMax = 10.f;
    this->attackControl = this->attackControlMax;
}

void Player::initializeTexture() {
    /*
     * A texture will be loaded from a file.
     */
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
    this->initializeVariables();
    this->initializeTexture();
    this->initializeSprite();

}

Player::~Player() = default;

const sf::Vector2f &Player::getPos() const {
    return this->sprite.getPosition();
}
sf::FloatRect Player::getBounds() const {
    return this->sprite.getGlobalBounds();
}

/*
 * Player public functions
 */
void Player::move(const float coordinateX, const float coordinateY) {
    this->sprite.move(this->movementVelocity * coordinateX, this->movementVelocity * coordinateY);
}

bool Player::canAttack() {
    if(this->attackControl >= this->attackControlMax){
        this->attackControl += 1.f;
        return true;
    }
    return false;
}


void Player::updateAttack() {
    if(this->attackControl < this->attackControlMax){
        this->attackControl += 0.5f;
    }

}
void Player::update() {
    this->updateAttack();
}

void Player::render(sf::RenderTarget& target) {
    target.draw(this->sprite);
}










