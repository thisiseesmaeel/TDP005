//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Game.h"
/*
 * Constructor
 */
Game::Game() {
    this->initializeWindow();
    this->initializePlayer();
}
/*
 * Destructor
 */
Game::~Game() {
    delete this->window;
    delete this->player;
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
    //this->textures.
}

void Game::initializePlayer() {
    this->player = new Player();
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
}


void Game::update() {

    this->updatePollEvents();
    this->updateInput();
}

void Game::render() {
    this->window->clear();

    /*
     * Drawing everything here
     */
    //Render the player inside the window
    this->player->render(*this->window);
    this->window->display();
}







