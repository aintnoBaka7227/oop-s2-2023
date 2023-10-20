#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
    public:
    Mine () {
        
    }
    Explosion explode() {
        int x = std::get<0>(position);
        int y = std::get<1>(position);
        Explosion e(x, y);
        return e;
    }
    Mine(int x, int y):GameEntity(x, y, 'M') {

    }
};

#endif