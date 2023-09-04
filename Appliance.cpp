#include "Appliance.h"

Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating;
    isOn = false;
}

Appliance::Appliance():Appliance(0) {
    
}

int Appliance::get_powerRating() {
    return powerRating;
}

void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating;
}

bool Appliance::get_isOn() {
    return isOn;
}

void Appliance::set_isOn(bool isOn) {
    this->isOn = isOn;
}

void Appliance::turnOff() {
    isOn = false;
}

void Appliance::turnOn() {
    isOn = true;
}

