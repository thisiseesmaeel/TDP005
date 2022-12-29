#include <iostream>
#include "GameUniverse.h"


void GameUniverse::initialize() {
    if(!universeBackgroundTexture.loadFromFile("../Textures/background2.jpg")){
        std::cout << "World background texture fails to load!" << std::endl;
    }
    universeBackground.setTexture(universeBackgroundTexture);
}

void GameUniverse::update() {
    // Update universe background sprite
    universeBackground.move(0.5f, 0.0f);
}

void GameUniverse::render() {
    // Draw universe background to window
    GameWindow::window->draw(universeBackground);
}