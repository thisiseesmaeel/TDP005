#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H


#include <SFML/Graphics.hpp>
#include "GameObject.h"

class GameWindow {
public:

    static sf::RenderWindow *window;

    void initialize() ;


    ~GameWindow();


};

#endif //!GAMEWINDOW_H
