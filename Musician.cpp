#include <string>
#include "Musician.h"


Musician::Musician(std::string instrument, int experience) {
    this->instrument = instrument;
    this->experience = experience;
}

Musician::Musician():Musician("null", 0){

}

std::string Musician::get_instrument() {
    return instrument;
}

int Musician::get_experience() {
    return experience;
}