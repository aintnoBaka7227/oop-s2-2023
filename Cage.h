#ifndef CAGE_H
#define CAGE_H
#include <string>

class Cage {
    private:
    std::string name;
    int ID;
    public:
    Cage();
    Cage(std::string newName, int newNumber);
    std::string getName();
    int getIDnum();
    ~Cage();
};

#endif