#ifndef GAMEUNIVERSE_H
#define GAMEUNIVERSE_H


#include <SFML/Graphics.hpp>
#include "GameWindow.h"
#include "Game.h"

class GameUniverse : public GameObject{
public:
    void initialize();
    void update() override;
    void render() override;

private:
    sf::Texture universeBackgroundTexture;
    sf::Sprite universeBackground;


};


#endif //!GAMEUNIVERSE_H
