#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Effect.h"
#include "Explosion.h"

class Game {
    private:
    std::vector<GameEntity*> entities;
    int numShips;
    int numMines;
    public:
    std::vector<GameEntity*> get_entities() {
        return entities;
    }
    void set_entities(std::vector<GameEntity*> new_entities) {
        entities.clear();
        entities = new_entities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        Ship* ships = new Ship[numShips];
        for (int i = 0; i < numShips; i++) {
            ships[i].setPosition(Utils::generateRandomPos(gridWidth, gridHeight));
        }
        entities.push_back(ships);
        Mine* mines = new Mine[numMines];
        for (int i = 0; i < numMines; i++) {
            mines[i].setPosition(Utils::generateRandomPos(gridWidth, gridHeight));
        }
        entities.push_back(mines);
        this->numMines = numMines;
        this->numShips = numShips;
        return entities;
    }

    void gameloop(int maxIterations, double mineDistanceThreshold) {
        for (int i = 0; i < maxIterations; i++) {
            for (int j = 0; j < numShips; j++) {
                
            }
        }

    }
};

#endif