//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Player.h"

/**
 * Player Private functions
 */

void Player::initializeVariables() {
    this->movementVelocity = 5.f;
    this->attackControlMax = 10.f;
    this->attackControl = this->attackControlMax;
    this->healthPointMax = 100;
    this->healthPoint = this->healthPointMax;

}

void Player::initializeTexture() {
    /**
     * A texture will be loaded from a file.
     */
    if(!this->texture.loadFromFile("../Textures/shapeshooter.png")){
        std::cout << "Failed to load the file!" << "\n";
    }
}

void Player::initializeSprite() {
    /**
     * The texture will be set to the sprite.
     */
    this->sprite.setTexture(this->texture);

    /**
     * Resize the sprite here.
     */
    this->sprite.scale(0.4f, 0.4f);
}



Player::Player() {
    this->initializeVariables();
    this->initializeTexture();
    this->initializeSprite();

}

Player::~Player() = default;

/**
 * Player accessor implementation
 */
const sf::Vector2f &Player::getPos() const {
    return this->sprite.getPosition();
}
sf::FloatRect Player::getBounds() const {
    return this->sprite.getGlobalBounds();
}

const int &Player::getHealthPoint() const {
    return this->healthPoint;
}

const int &Player::getHealthPointMax() const {
    return this->healthPointMax;
}

/**
 * Player modifier implementation
 */
void Player::setPosition(const sf::Vector2f position) {
    this->sprite.setPosition(position);
}

void Player::setPosition(const float x, const float y) {
    this->sprite.setPosition(x, y);
}

void Player::setHealthPoint(const int hp) {
    this->healthPoint = hp;
}

void Player::reduceHealthPoint(const int value) {
    this->healthPoint -= value;
    if(this->healthPoint < 0){
        this->healthPoint = 0;
    }
}




/**
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


















