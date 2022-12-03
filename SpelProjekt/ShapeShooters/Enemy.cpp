//
// Created by Ismail Safwat on 2022-12-03.
//

#include "Enemy.h"

/*
 * Enemy private functions
 */
void Enemy::initializeShape() {
    this->shape.setRadius(rand() %20 + 20);
    this->shape.setPointCount(rand() %20 + 3);
}

void Enemy::initializeVariables() {
    this->type = 0;
    this->healthPoint = 0;
    this->healthPointMax = 10;
    this->damage = 2;
    this->points = 6;
}

/*
 * Enemy constructor and destructor
 */
Enemy::Enemy(float positionX, float positionY) {
    this->initializeShape();
    this->initializeVariables();
    this->shape.setPosition(positionX, positionY);

}

Enemy::~Enemy() {

}

/*
 * Enemy public functions
 */
void Enemy::update() {

}

void Enemy::render(sf::RenderTarget* target) {
    target->draw(this->shape);
}


