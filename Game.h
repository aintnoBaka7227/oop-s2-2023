#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include <vector>
#include <iostream>

class Game {
    private:
    std::vector<Cell*> grid;
    int gridWidth;
    int gridHeight;
    public:
    std::vector<Cell*>& getGrid() {
        return grid;
    }
    std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
        for(int i = 0; i < numCharacters; i++) {
            grid.push_back(new Character(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)), std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight))));
        }
        for(int i = 0; i < numTraps; i++) {
            grid.push_back(new Trap(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)), std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight))));
        }
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;
        return grid;
    }
    void gameLoop(int maxIterations, double trapActivationDistance) {
        for (int i = 0; i < maxIterations; i++) {
            for (auto it : grid) {
                if (it->getType() == 'C') {
                    static_cast<Character*>(it)->move(1,0);
                }
            }
            for (auto it : grid) {
                if (it->getType() == 'C') {
                    for (auto mine_it : grid) {
                        if (mine_it->getType() == 'T') {
                            if (static_cast<Trap*>(mine_it)->isActive() == true) {
                                if (Utils::calculateDistance(it->getPos(), mine_it->getPos()) <= trapActivationDistance) {
                                    static_cast<Trap*>(mine_it)->apply(*it);
                                }
                            }
                        }  
                    }
                }
            }
            for (auto it : grid) {
                if (it->getType() == 'C') {
                    if (std::get<0>(static_cast<Character*>(it)->getPos()) == gridWidth || std::get<1>(static_cast<Character*>(it)->getPos()) == gridHeight) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }
                }
            }      
        } 
        std::cout << "Maximum number of iterations reached. Game over." << std::endl;       
    }
        
};