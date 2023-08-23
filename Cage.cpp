#include <string>
#include "Cage.h"


Cage::Cage(std::string newName, int newNumber) {
    name = newName;
    ID = newNumber;
}

Cage::Cage():Cage("", 0) {

}

std::string Cage::getName() {
    return name;
}

int Cage::getIDnum() {
    return ID;
}

Cage::~Cage() {
    
}