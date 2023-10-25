#pragma once
#include "Effect.h"
#include "Cell.h"

class Trap : public Effect, public Cell {
    public:
    Trap(int x, int y) {
        position = std::make_tuple(x, y);
        type = 'T';
    }
    bool isActive() {
        if (type == 'T') {
            return true;
        }
        else {
            return false;
        }
    }
    void apply(Cell& cell) {
        cell.setType('X');
        type = 'X';        
    }
};