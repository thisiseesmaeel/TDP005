#include "Player.h"


Player* Player::player;

/**
 * Player Private functions
 */


Player::Player() = default;

Player::~Player() = default;

/**
 * Player accessor implementation
 */
const sf::Vector2f &Player::getPos() {
    return sprite.getPosition();
}
sf::FloatRect Player::getBounds() {
    return player->sprite.getGlobalBounds();
}

const int &Player::getHealthPoint() {
    return healthPoint;
}

const int &Player::getHealthPointMax() {
    return player->healthPointMax;
}

/**
 * Player modifier implementation
 */

void Player::setPosition(const float x, const float y) {
    sprite.setPosition(x, y);
}

void Player::reduceHealthPoint(const int value) {
    player->healthPoint -= value;
    if(player->healthPoint < 0){
        player->healthPoint = 0;
    }
}


/**
 * Player public functions
 */
void Player::move(const float coordinateX, const float coordinateY) {
    sprite.move(movementVelocity * coordinateX, movementVelocity * coordinateY);
}
void Player::initialize() {

    Player::player = new Player();

    playerHealthPointBar.setSize(sf::Vector2f(300.f, 25.f));
    playerHealthPointBar.setPosition(sf::Vector2(25.f, 25.f));
    playerHealthPointBar.setFillColor(sf::Color::Red);

    playerHealthPointBarBackground = playerHealthPointBar;

    playerHealthPointBarBackground.setFillColor(sf::Color(25, 25, 25, 255));

    movementVelocity = 5.f;
    attackControlMax = 10.f;
    attackControl = attackControlMax;
    healthPointMax = 100;
    healthPoint = healthPointMax;



    /**
     * A texture will be loaded from a file.
     */
    if(!texture.loadFromFile("../Textures/shapeshooter.png")){
        std::cout << "Failed to load the file!" << "\n";
    }



    /**
     * The texture will be set to the sprite.
     */
    sprite.setTexture(texture);
    /**
     * Resize the sprite here.
     */
    sprite.scale(0.4f, 0.4f);


}

bool Player::canAttack() {
    if(attackControl >= attackControlMax){
        attackControl += 1.f;
        return true;
    }
    return false;
}


void Player::updateAttack() {
    if(attackControl < attackControlMax){
        attackControl += 0.5f;
    }

}
void Player::updateUpdateAttack() {
    updateAttack();
}
void Player::update() {
    GameGUI bulletTexture;
    updateUpdateAttack();
    /**
     * Move Player
     */
    ///MOVE TO THE LEFT
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        player->move(-1.f, 0.f);
    ///MOVE TO THE RIGHT
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        player->move(1.f, 0.f);
    ///MOVE FORWARD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        player->move(0.f, -1.f);
    ///MOVE BACKWARD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        player->move(0.f, 1.f);

    /**
     * When left button of mouse is pressed and player can attack
     */
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left) && player->canAttack()){
        Bullet::bullets.push_back(new Bullet(bulletTexture.textures["BULLET"],
                                     player->getPos().x + player->getBounds().width/2.5f,
                                     player->getPos().y,
                                     0.f, -1.f,
                                     5.f));
    }
}

void Player::render() {
    target->draw(sprite);
}




















