#ifndef DEMOSTL_H
#define DEMOSTL_H

#include <string>
#include <iostream>

class Song {
    private:
    int rank;
    std::string name;
    public:
    Song(int rank, std::string name): rank(rank), name(name) {}
    Song():Song(0, "") {}
    void print() {
        std::cout << name << " " << rank << std::endl;
    }
};

#endif