#include "Game.h"


Game::Game() {
    GameWindow window;
    GameGUI gui;
    GameUniverse universe;
    Player player;
    Enemy enemy;


    window.initialize();
    gui.initialize();
    universe.initialize();
    initializeSystems();
    player.initialize();
    enemy.initialize();

    gameObjects.push_back(new Player);
    gameObjects.push_back(new Enemy);
    gameObjects.push_back(new Bullet);

}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-abstract-non-virtual-dtor"
Game::~Game() {
    delete Player::player;
    for (auto *go : gameObjects) {
        delete go;
    }
}
#pragma clang diagnostic pop

void Game::run() {

    while(GameWindow::window->isOpen()){
        updatePollEvents();
        if(Player::player->getHealthPoint() > 0) {
            render();
            updateGameObjects();
            updateWar();
            /*
             * First update then render the game.
             */
            renderGameObjects();
        }
    }


}

void Game::updatePollEvents() {
    sf::Event e{};
    while(GameWindow::window->pollEvent(e)) {
        /**
         * Two different ways to close the window:
         * 1. by pressing the close button
         * 2. by pressing the Esc button on the keyboard
         */
        if(e.Event::type == sf::Event::Closed)
            GameWindow::window->close();

        if(e.Event::key.code == sf::Keyboard::Escape)
            GameWindow::window->close();
    }
}



void Game::render() {
    GameGUI ui;
    GameUniverse universe;

    GameWindow::window->clear();

    /**
     * Draw universe
     */
    universe.render();

    /**
     * Drawing everything here
     */
    ///Render the player inside the window
    Player::player->render();

    for(auto bullet : Bullet::bullets){
        bullet->render();
    }

    for(auto enemy : Enemy::enemies){
        enemy->render();
    }

    ui.renderGUI();

    /**
     * Rendering game over screen here
     */
    if(Player::player->getHealthPoint() <= 0){
        GameWindow::window->draw(ui.gameOverText);
    }

    GameWindow::window->display();

}



void Game::updateWar() {

    for(int e = 0; e < Enemy::enemies.size(); ++e){
        bool isEnemyDeleted = false;
        for (int b = 0; b < Bullet::bullets.size() && isEnemyDeleted == false; b++) {
            /**
             * Check the collision between enemy and bullet
             */
            if(Enemy::enemies[e]->getBounds().intersects(Bullet::bullets[b]->getBounds())){

                /**
                 * Getting points when bullet collides with enemy
                 */
                points += Enemy::enemies[e]->getPoints();
                /**
                 * Delete and erase enemy after collision
                 */
                delete Enemy::enemies[e];
                Enemy::enemies.erase(Enemy::enemies.begin() + e);

                /**
                 * Delete and erase bullet after collision
                 */
                delete Bullet::bullets[b];
                Bullet::bullets.erase(Bullet::bullets.begin() + b);
                isEnemyDeleted = true;
            }
        }
    }
}


void Game::initializeSystems() {
    points = 0;
}


void Game::updateGameObjects() {
    for (auto *go : gameObjects) {
        go->update();
    }
}

void Game::renderGameObjects() {
    for (auto *go : gameObjects) {
        go->render();
    }
}









