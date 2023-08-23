#include <string>
#include "Cage.h"
#include "Clinic.h"

Clinic::Clinic(std::string name, int max_size) {
    clinic_name = name;
    max = max_size;
    current_size = 0;
    group = new Cage[max];

}

Clinic::Clinic():Clinic("", 0) {

}

int Clinic::getNumber_of_cages() {
    return current_size;
}

std::string Clinic::getName() {
    return clinic_name;
}

Cage *Clinic::getCages() {
    return group;
}

bool Clinic::addCage(Cage new_cage) {
    if (current_size < max) {
        group[current_size] = new_cage;
        current_size++;
        return true;
    }
    return false;
}

Clinic::~Clinic() {
    delete[] group;
}
