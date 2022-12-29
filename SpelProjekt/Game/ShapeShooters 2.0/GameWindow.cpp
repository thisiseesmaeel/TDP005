#include "GameWindow.h"

sf::RenderWindow* GameWindow::window = nullptr;

void GameWindow::initialize() {
    /**
     * Initializing window with the application name.
     * Setting the frame rate limit.
     * Setting the Vsync as false.
     */

    window = new sf::RenderWindow(sf::VideoMode(1600, 900), "Shape Shooters",
                         sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
    window->setFramerateLimit(144);
    window->setVerticalSyncEnabled(false);
}



GameWindow::~GameWindow() {
    delete window;
}



