#include <sstream>
#include "GameGUI.h"


void GameGUI::initialize() {
    /**
     * Fonts are loaded here
     */
    if(!font.loadFromFile("../Fonts/Nasa21-l23X.ttf")){
        std::cout << "Font failed to load!" << std::endl;
    }
    /**
     * Initializing Point texts here
     */
    pointText.setPosition(1500.f, 25.f);
    pointText.setFont(font);
    pointText.setCharacterSize(20);
    pointText.setFillColor(sf::Color::Cyan);

    gameOverText.setFont(font);
    gameOverText.setCharacterSize(75);
    gameOverText.setFillColor(sf::Color::Red);
    gameOverText.setString("Game Over!");

}

void GameGUI::update() {
    /**
     * Update point text and game over text based on game state
     */
    Game game;
    std::stringstream ss;
    ss << "Points: " << game.points;
    pointText.setString(ss.str());

    /**
     * Here we update player's GUI
     * At healthPointPercent, we get the percentage of health point
     */
    float healthPointPercent = static_cast<float>(Player::player->getHealthPoint()) / static_cast<float>(Player::getHealthPointMax());
    playerHealthPointBar.setSize(sf::Vector2f(300.f * healthPointPercent, playerHealthPointBar.getSize().y));
}

void GameGUI::render() {
    GameWindow::window->draw(pointText);

    // Get window view rectangle
    sf::FloatRect viewRect = GameWindow::window->getView().getViewport();

    // Calculate center of window
    sf::Vector2f windowCenter(viewRect.width / 2.0f, viewRect.height / 2.0f);

    // Set position of game over text to center of window
    gameOverText.setPosition(windowCenter);

    // Draw game over text to window
    GameWindow::window->draw(gameOverText);
}

void GameGUI::renderGUI() {

    /**
     * The order of rendering is extremely important!
     */
    GameWindow::window->draw(pointText);
    GameWindow::window->draw(playerHealthPointBarBackground);
    GameWindow::window->draw(playerHealthPointBar);

}



