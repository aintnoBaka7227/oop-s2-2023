#ifndef DEMO_H
#define DEMO_H
#include <iostream>

template<class T>

class Move {
    private:
    T x;
    T y;
    public: 
    Move(T x, T y) {
        this->x = x;    
        this->y = y;
    }
    Move():Move(0,0) {

    }
    void print();
};

template<class T>

void Move<T>::print() {
    std::cout << x << " " << y << std::endl;
}



#endif