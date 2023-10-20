#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"

class Ship : public GameEntity {
    public: 
    Ship() {

    }
    void move(int dx, int dy) {
        position = std::make_tuple(std::get<0>(position) + dx, std::get<1>(position) + dy);
    }
    Ship(int x, int y) : GameEntity(x, y, 'S') {

    }
    
};

#endif