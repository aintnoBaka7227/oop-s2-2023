#pragma once
#include "Cell.h"

class Character : public Cell {
    public:
    Character(int x, int y) {
        position = std::make_tuple(x, y);
        type = 'C';
    }
    void move(int dx, int dy) {
        position = std::make_tuple(std::get<0>(position)+dx, std::get<1>(position)+dy);
    }
};


