//
// Created by Ismail Safwat on 2022-12-03.
//

#include "Enemy.h"

/**
 * Enemy private functions
 */
void Enemy::initializeShape() {
    this->shape.setRadius(rand() %30 + 30);
    this->shape.setPointCount(rand() %20 + 3);
    this->shape.setFillColor(sf::Color(rand()%255 + 1, rand()%255 + 1, rand()%255 + 1, 255));
}

void Enemy::initializeVariables() {
    this->speed = 3.f;
    this->type = 0;
    this->healthPoint = 0;
    this->healthPointMax = 10;
    this->damage = 2;
    this->points = 6;
}

/**
 * Enemy constructor
 */
Enemy::Enemy(float positionX, float positionY) {
    this->initializeShape();
    this->initializeVariables();
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

/**
 * Enemy public functions
 */
void Enemy::update() {
    this->shape.move(0.f, this->speed);
}

void Enemy::render(sf::RenderTarget* target) {
    target->draw(this->shape);
}




