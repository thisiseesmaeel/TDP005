//
// Created by Ismail Safwat on 2022-11-25.
//

#include "Game.h"
/*
 * Constructor
 */
Game::Game() {
    this->initializeWindow();
}
/*
 * Destructor
 */
Game::~Game() {
    delete this->window;
}

/*
 * Private functions
 */
void Game::initializeWindow() {
    this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Space Shooters", sf::Style::Close | sf::Style::Titlebar);
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


void Game::update() {

}

void Game::render() {
    this->window->clear();

    this->window->display();
}

