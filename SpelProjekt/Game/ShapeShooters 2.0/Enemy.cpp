#include "Enemy.h"
/**
 * Enemy private functions
 */
std::vector<Enemy*> Enemy::enemies;


/**
 * Enemy constructor
 */

Enemy::Enemy() = default;

Enemy::Enemy(float positionX, float positionY) {

    shape.setPosition(positionX, positionY);

}

/**
 * Enemy destructor
 */
Enemy::~Enemy() = default;


sf::FloatRect Enemy::getBounds() {
    return shape.getGlobalBounds();
}

const int &Enemy::getPoints() {
    return points;
}

const int &Enemy::getDamage() {
    return damage;
}


/**
 * Enemy public functions
 */

void Enemy::initialize() {
    /**
     * Almost all variables are determined by pointCount for randomness sake.
     */
    pointCount = rand() %10 + 2; // with a minimum of 2 and maximum of 11
    speed = static_cast<float>(pointCount/2);
    healthPointMax = static_cast<int>(pointCount);
    healthPoint = healthPointMax;
    damage = static_cast<int>(pointCount);
    points = static_cast<int>(pointCount);


    shape.setRadius(static_cast<float>(pointCount * 4));
    shape.setPointCount(pointCount);
    shape.setFillColor(sf::Color(rand()%255 + 1, rand()%255 + 1, rand()%255 + 1, 255));

    spawnTimerMax = 40.f;
    spawnTimer = spawnTimerMax;
}

void Enemy::updateEnemies() {

    Player player;

    /**
     * Enemies spawn here
     */
    spawnTimer += 0.5f;
    if(spawnTimer >= spawnTimerMax){
        enemies.push_back(new Enemy(rand() % GameWindow::window->getSize().x-10.f, -50.f));
        spawnTimer = 0.f;
    }

    /**
     * Updating enemies here
     */
    unsigned counter = 0;
    for(auto *enemy : enemies){
        enemy->update();
        /**
         * Managing enemies when going toward bottom of the screen
         */
        if(enemy->getBounds().top > static_cast<float>(GameWindow::window->getSize().y)){

            /// Delete enemy from memory and erase them as well.
            delete enemies.at(counter);
            enemies.erase(enemies.begin() + counter);

            std::cout << enemies.size() << std::endl;
        }
            /**
             * If enemy collides with player then it (enemy) still will be erased
             */
        else if(enemy->getBounds().intersects(Player::getBounds())){
            Player::reduceHealthPoint(enemies.at(counter)->getDamage());
            delete enemies.at(counter);
            enemies.erase(enemies.begin() + counter);
        }

        ++counter;
    }
}
void Enemy::update() {
    shape.move(0.f, speed);
    updateEnemies();
}

void Enemy::render() {
    target->draw(shape);
}








