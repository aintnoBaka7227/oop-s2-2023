#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>

class GameEntity {
    protected:
    GameEntity () {

    }
    std::tuple<int, int> position;
    char type;

    public:
    GameEntity(int x, int y, char type): position(std::make_tuple(x,y)), type(type) {

    }
    std::tuple<int, int> getPo() {
        return position;
    }
    char getType() {
        return type;
    }

    void setPosition(std::tuple<int , int> position) {
        this->position = position;
    }

    void setType(char type) {
        this->type = type;
    }
};


#endif