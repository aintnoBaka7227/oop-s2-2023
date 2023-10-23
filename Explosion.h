#pragma once 
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
    public:
    Explosion() {

    }
    Explosion(int x, int y) {
        position = std::make_tuple(x, y);
        type = 'E';
    }
    void apply(GameEntity& entity) {
        position = std::make_tuple(-1, -1);
        type = 'X';
    }

};