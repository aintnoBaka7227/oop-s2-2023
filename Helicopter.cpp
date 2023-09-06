#include "AirCraft.h"
#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) {
    weight = w;
    name = n;
}

Helicopter::Helicopter() {

}

std::string Helicopter::get_name() {
    return name;
}

void Helicopter::set_name(std::string name) {
    this->name = name;
}

void Helicopter::fly(int headwind, int minutes) {
    if( fuel >= 20) {
    if (headwind >= 40 && weight > 5670) {
        fuel = fuel - 0.4 * minutes - 0.01 * (weight - 5670) * minutes;
    }
    if (headwind >= 40 && weight <= 5670) {
       fuel = fuel - 0.4 * minutes;
    }
    if (headwind < 40 && weight > 5670) {
        fuel = fuel - 0.2 * minutes - 0.01 * (weight - 5670) * minutes;
    }
    if (headwind < 40 && weight <= 5670) {
        fuel = fuel - 0.2 * minutes;
    }
    numberOfFlights++;
    }
    else{

    }
}

