#include "CollisionManagement.h"

void CollisionManagement::update() {
    Player player;
    /**
     * When player collides with the corners of the screen.
     */

    /// Left corner of the screen
    if(player.getBounds().left < 0.f){
        player.setPosition(0.f, player.getBounds().top);
    }

        /// Right corner of the screen
    else if(player.getBounds().left + player.getBounds().width >= static_cast<float>(GameWindow::window->getSize().x)){
        player.setPosition(static_cast<float>(GameWindow::window->getSize().x) - player.getBounds().width, player.getBounds().top);
    }

    /// Top corner of the screen
    if(player.getBounds().top < 0.f){
        player.setPosition(player.getBounds().top, 0.f);
    }

        /// Bottom corner of the screen
    else if(player.getBounds().top + player.getBounds().height >= static_cast<float>(GameWindow::window->getSize().y)){
        player.setPosition(player.getBounds().left, static_cast<float>(GameWindow::window->getSize().y) - player.getBounds().height);
    }
}
