#pragma once
#include "Effect.h"
#include "Cell.h"

class Trap : public Effect, public Cell {
    public:
    bool active;
    Trap(int x, int y) {
        position = std::make_tuple(x, y);
        type = 'T';
        active = true;
    }
    bool isActive() {
        return active;
    }
    void apply(Cell& cell) {
        active = false;
        cell.setType('T');  
    }
};