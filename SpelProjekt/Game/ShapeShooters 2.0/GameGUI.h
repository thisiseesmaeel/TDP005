#ifndef GAMEGUI_H
#define GAMEGUI_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"
#include "GameObject.h"
#include "Player.h"
#include "GameWindow.h"

class GameGUI : public GameObject {
public:

    void initialize();
    void update() override;
    void renderGUI();
    void render() override;
    sf::Text gameOverText;
    std::map<std::string, sf::Texture*> textures;


private:

    sf::Font font;
    sf::Text pointText;


    /**
     * Player GUI including health point bar and background
     */
    sf::RectangleShape playerHealthPointBar;
    sf::RectangleShape playerHealthPointBarBackground;


};


#endif //!GAMEGUI_H
