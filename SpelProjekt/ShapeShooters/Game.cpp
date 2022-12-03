//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Game.h"
/*
 * Constructor
 */
Game::Game() {
    this->initializeWindow();
    this->initializeTextures();
    this->initializePlayer();
}
/*
 * Destructor
 */
Game::~Game() {
    delete this->window;
    delete this->player;

    /*
     * To avoid memory leaks after the game ends
     */
    // Delete textures
    for(auto &t : this->textures){
        delete t.second;
    }

    // Delete bullets
    for(auto *b : this->bullets){
        delete b;
    }
}

/*
 * Private functions
 */
void Game::initializeWindow() {
    /*
     * Initializing window with the application name.
     * Setting the frame rate limit.
     * Setting the Vsync as false.
     */
    this->window = new sf::RenderWindow(sf::VideoMode(1800, 1000), "Shape Shooters", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
    this->window->setFramerateLimit(144);
    this->window->setVerticalSyncEnabled(false);
}

void Game::initializeTextures() {
    this->textures["BULLET"] = new sf::Texture();
    this->textures["BULLET"]->loadFromFile("/Users/ismailsafwat/CLionProjects/ShapeShooters/bullet.png");
}

void Game::initializePlayer() {
    this->player = new Player();
    this->enemy = new Enemy(20.f, 20.f);

}

/*
 * Functions
 */
void Game::run() {

    while(this->window->isOpen()){
        /*
         * First update then render the game.
         */
        this->update();
        this->render();
    }

}

void Game::updatePollEvents() {

    sf::Event e{};
    while(this->window->pollEvent(e)) {
        /*
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
    /*
     * Move Player
     */
    //MOVE TO THE LEFT
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        this->player->move(-1.f, 0.f);
    //MOVE TO THE RIGHT
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        this->player->move(1.f, 0.f);
    //MOVE FORWARD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        this->player->move(0.f, -1.f);
    //MOVE BACKWARD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        this->player->move(0.f, 1.f);

    /*
     * When left button of mouse is pressed and player can attack
     */
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left) && this->player->canAttack()){
        this->bullets.push_back(new Bullet(this->textures["BULLET"], this->player->getPos().x, this->player->getPos().y, 0.f, -1.f, 5.f));
    }

}

void Game::updateBullets() {
    unsigned counter = 0;
    for(auto *bullet : bullets){
        bullet->update();
        /*
         * Managing bullets when going toward top of screen
         */
        if(bullet->getBounds().top + bullet->getBounds().height < 0.f){

            // Delete bullet from memory and erase them as well.
            delete this->bullets.at(counter);
            this->bullets.erase(this->bullets.begin() + counter);
            --counter;

            std::cout << this->bullets.size() << std::endl;
        }

        ++counter;
    }
}


void Game::update() {

    this->updatePollEvents();
    this->updateInput();
    this->player->update();
    this->updateBullets();
}

void Game::render() {
    this->window->clear();

    /*
     * Drawing everything here
     */
    //Render the player inside the window
    this->player->render(*this->window);

    for(auto *bullet : bullets){
        bullet->render(this->window);
    }
    this->enemy->render(this->window);
    this->window->display();
}







