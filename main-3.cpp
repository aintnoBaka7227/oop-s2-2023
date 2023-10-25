#include "Game.h"
#include <iostream>

int main() {
    Game new_game;
    new_game.initGame(3,7, 10, 10);
    new_game.gameLoop(10,1);
    return 0;
}