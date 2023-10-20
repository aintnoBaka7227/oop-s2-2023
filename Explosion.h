#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "Effect.h"
#include "GameEntity.h"


class Explosion : public GameEntity, public Effect {
    public:
    Explosion(int x, int y):GameEntity(x, y, 'E') {
        
    }

    void apply(GameEntity& entity) {
        entity.setPosition(std::make_tuple(-1, -1));
        entity.setType('X');
    }  
};


#endif