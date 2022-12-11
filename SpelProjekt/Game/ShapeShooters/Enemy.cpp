//
// Created by Ismail Safwat on 2022-12-03.
//

#include "Enemy.h"

/**
 * Enemy private functions
 */

void Enemy::initializeVariables() {
    this->pointCount = rand() %10 + 2; // with a minimum of 2 and maximum of 11
    this->speed = static_cast<float>(this->pointCount/2);
    this->type = 0;
    this->healthPointMax = static_cast<int>(this->pointCount);
    this->healthPoint = this->healthPointMax;
    this->damage = this->pointCount;
    this->points = this->pointCount;
}

void Enemy::initializeShape() {
    this->shape.setRadius(this->pointCount * 4);
    this->shape.setPointCount(this->pointCount);
    this->shape.setFillColor(sf::Color(rand()%255 + 1, rand()%255 + 1, rand()%255 + 1, 255));
}

/**
 * Enemy constructor
 */
Enemy::Enemy(float positionX, float positionY) {
    this->initializeVariables();
    this->initializeShape();
    this->shape.setPosition(positionX, positionY);

}

/**
 * Enemy destructor
 */
Enemy::~Enemy() {

}


sf::FloatRect Enemy::getBounds() const {
    return this->shape.getGlobalBounds();
}

const int &Enemy::getPoints() const {
    return this->points;
}

const int &Enemy::getDamage() const {
    return this->damage;
}


/**
 * Enemy public functions
 */
void Enemy::update() {
    this->shape.move(0.f, this->speed);
}

void Enemy::render(sf::RenderTarget* target) {
    target->draw(this->shape);
}






