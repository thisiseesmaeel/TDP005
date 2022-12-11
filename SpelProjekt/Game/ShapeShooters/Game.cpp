//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Game.h"
/**
 * Game Constructor
 */
Game::Game() {
    this->initializeWindow();
    this->initializeTextures();
    this->initializeGUI();
    this->initializeUniverse();
    this->initializeSystems();
    this->initializePlayer();
    this->initializeEnemy();
}
/**
 * Game Destructor
 */
Game::~Game() {
    delete this->window;
    delete this->player;

    /**
     * To avoid memory leaks after the game ends
     * Delete textures
     */
    for(auto &t : this->textures){
        delete t.second;
    }

    /**
     * Delete bullets
     */
    for(auto *b : this->bullets){
        delete b;
    }
    /**
     * Delete enemies
     */
    for(auto *e : this->enemies){
        delete e;
    }
}

/**
 * Private functions
 */
void Game::initializeWindow() {
    /**
     * Initializing window with the application name.
     * Setting the frame rate limit.
     * Setting the Vsync as false.
     */
    this->window = new sf::RenderWindow(sf::VideoMode(1600, 900), "Shape Shooters", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
    this->window->setFramerateLimit(144);
    this->window->setVerticalSyncEnabled(false);
}

void Game::initializeTextures() {
    this->textures["BULLET"] = new sf::Texture();
    this->textures["BULLET"]->loadFromFile("../Textures/bullet2.png");
}

void Game::initializeGUI() {
    /**
     * Fonts are loaded here
     */
    if(!this->font.loadFromFile("../Fonts/Nasa21-l23X.ttf")){
        std::cout << "Font can not be loaded!" << std::endl;
    }
    /**
     * Initializing Point texts here
     */
    this->pointText.setPosition(1500.f, 25.f);
    this->pointText.setFont(this->font);
    this->pointText.setCharacterSize(20);
    this->pointText.setFillColor(sf::Color::Cyan);

    this->gameOverText.setFont(this->font);
    this->gameOverText.setCharacterSize(75);
    this->gameOverText.setFillColor(sf::Color::Red);
    this->gameOverText.setString("Game Over!");
    /**
     * Centering the game over text here
     */
    this->gameOverText.setPosition(this->window->getSize().x / 2.f - this->gameOverText.getGlobalBounds().width / 2.f, this->window->getSize().y / 2.f);

    /**
     * Initialize player GUI here
     */
    this->playerHealthPointBar.setSize(sf::Vector2f(300.f, 25.f));
    this->playerHealthPointBar.setPosition(sf::Vector2(25.f, 25.f));
    this->playerHealthPointBar.setFillColor(sf::Color::Red);

    this->playerHealthPointBarBackground = this->playerHealthPointBar;
    this->playerHealthPointBarBackground.setFillColor(sf::Color(25, 25, 25, 255));
}

void Game::initializeUniverse() {
    if(!this->universeBackgroundTexture.loadFromFile("../Textures/background.jpeg")){
        std::cout << "World background texture fails to load!" << std::endl;
    }
    this->universeBackground.setTexture(this->universeBackgroundTexture);
}

void Game::initializeSystems() {
    this->points = 0;
}

void Game::initializePlayer() {
    this->player = new Player();

}

void Game::initializeEnemy() {
    this->spawnTimerMax = 40.f;
    this->spawnTimer = this->spawnTimerMax;
}

/**
 * Game functions implementation
 */
void Game::run() {

    while(this->window->isOpen()){
        this->updatePollEvents();
        if(this->player->getHealthPoint() > 0) {
            this->update();
            /*
             * First update then render the game.
             */
            this->render();
        }
    }

}

void Game::updatePollEvents() {

    sf::Event e{};
    while(this->window->pollEvent(e)) {
        /**
         * Two different ways to close the window:
         * 1. by pressing the close button
         * 2. by pressing the Esc button on the keyboard
         */
        if(e.Event::type == sf::Event::Closed)
            this->window->close();

        if(e.Event::key.code == sf::Keyboard::Escape)
            this->window->close();
    }
}

void Game::updateInput() {
    /**
     * Move Player
     */
    ///MOVE TO THE LEFT
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        this->player->move(-1.f, 0.f);
    ///MOVE TO THE RIGHT
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        this->player->move(1.f, 0.f);
    ///MOVE FORWARD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        this->player->move(0.f, -1.f);
    ///MOVE BACKWARD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        this->player->move(0.f, 1.f);

    /**
     * When left button of mouse is pressed and player can attack
     */
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left) && this->player->canAttack()){
        this->bullets.push_back(new Bullet(this->textures["BULLET"],
                                           this->player->getPos().x + this->player->getBounds().width/2.5f,
                                           this->player->getPos().y,
                                           0.f, -1.f,
                                           5.f));
    }

}

void Game::updateGUI() {
    std::stringstream ss;
    ss << "Points: " << this->points;
    this->pointText.setString(ss.str());

    /**
     * Here we update player's GUI
     * At healthPointPercent, we get the percentage of health point
     */
    float healthPointPercent =static_cast<float>(this->player->getHealthPoint()) / this->player->getHealthPointMax();
    this->playerHealthPointBar.setSize(sf::Vector2f(300.f * healthPointPercent, this->playerHealthPointBar.getSize().y));

}

void Game::updateUniverse() {

}

void Game::updateCollision() {
    /**
     * When player collides with the corners of the screen.
     */
    /// Left corner of the screen
    if(this->player->getBounds().left < 0.f){
        this->player->setPosition(0.f, this->player->getBounds().top);
    }

    /// Right corner of the screen
    else if(this->player->getBounds().left + this->player->getBounds().width >= this->window->getSize().x){
        this->player->setPosition(this->window->getSize().x - this->player->getBounds().width, this->player->getBounds().top);
    }

    /// Top corner of the screen
    if(this->player->getBounds().top < 0.f){
        this->player->setPosition(this->player->getBounds().top, 0.f);
    }

    /// Bottom corner of the screen
    else if(this->player->getBounds().top + this->player->getBounds().height >= this->window->getSize().y){
        this->player->setPosition(this->player->getBounds().left, this->window->getSize().y - this->player->getBounds().height);
    }
}


void Game::updateBullets() {
    unsigned counter = 0;
    for(auto *bullet : bullets){
        bullet->update();
        /**
         * Managing bullets when going toward top of the screen
         */
        if(bullet->getBounds().top + bullet->getBounds().height < 0.f){

            /// Delete bullet from memory and erase them as well.
            delete this->bullets.at(counter);
            this->bullets.erase(this->bullets.begin() + counter);
        }

        ++counter;
    }
}


void Game::updateEnemies() {

    /**
     * Enemies spawn here
     */
    this->spawnTimer += 0.5f;
    if(this->spawnTimer >= this->spawnTimerMax){
        this->enemies.push_back(new Enemy(rand() % this->window->getSize().x-10.f, -50.f));
        this->spawnTimer = 0.f;
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
        if(enemy->getBounds().top > this->window->getSize().y){

            /// Delete enemy from memory and erase them as well.
            delete this->enemies.at(counter);
            this->enemies.erase(this->enemies.begin() + counter);

            std::cout << this->enemies.size() << std::endl;
        }
        /**
         * If enemy collides with player then it (enemy) still will be erased
         */
        else if(enemy->getBounds().intersects(this->player->getBounds())){
            this->player->reduceHealthPoint(this->enemies.at(counter)->getDamage());
            delete this->enemies.at(counter);
            this->enemies.erase(this->enemies.begin() + counter);
        }

        ++counter;
    }

}

void Game::updateWar() {

    for(int e = 0; e < this->enemies.size(); ++e){
        bool isEnemyDeleted = false;
        for (int b = 0; b < bullets.size() && isEnemyDeleted == false; b++) {
            /**
             * Check the collision between enemy and bullet
             */
            if(this->enemies[e]->getBounds().intersects(this->bullets[b]->getBounds())){

                /**
                 * Getting points when bullet collides with enemy
                 */
                this->points += this->enemies[e]->getPoints();
                /**
                 * Delete and erase enemy after collision
                 */
                delete this->enemies[e];
                this->enemies.erase(this->enemies.begin() + e);

                /**
                 * Delete and erase bullet after collision
                 */
                delete this->bullets[b];
                this->bullets.erase(this->bullets.begin() + b);
                isEnemyDeleted == true;
            }
        }
    }
}


void Game::update() {

    this->updateInput();
    this->player->update();
    this->updateCollision();
    this->updateBullets();
    this->updateEnemies();
    this->updateWar();
    this->updateGUI();
    this->updateUniverse();

}

void Game::renderGUI() {
    /**
     * The order of rendering is extremely important!
     */
    this->window->draw(this->pointText);
    this->window->draw(this->playerHealthPointBarBackground);
    this->window->draw(this->playerHealthPointBar);
}

void Game::renderUniverse() {
    this->window->draw(this->universeBackground);
}


void Game::render() {
    this->window->clear();


    /**
     * Draw universe
     */
    this->renderUniverse();


    /**
     * Drawing everything here
     */
    ///Render the player inside the window
    this->player->render(*this->window);

    for(auto *bullet : bullets){
        bullet->render(this->window);
    }

    for(auto *enemy : enemies){
        enemy->render(this->window);
    }

    this->renderGUI();

    /**
     * Rendering game over screen here
     */
    if(this->player->getHealthPoint() <= 0){
        this->window->draw(this->gameOverText);
    }

    this->window->display();
}























