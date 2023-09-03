#include "Appliance.h"

Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating;
    isOn = false;
}

Appliance::Appliance():Appliance(0) {
    
}

int Appliance::get_power_rating() {
    return powerRating;
}

void Appliance::set_power_rating(int powerRating) {
    this->powerRating = powerRating;
}

bool Appliance::get_power_status() {
    return isOn;
}

void Appliance::set_power_status(bool isOn) {
    this->isOn = isOn;
}

void Appliance::turnOff() {
    isOn = false;
}

void Appliance::turnOn() {
    isOn = true;
}

