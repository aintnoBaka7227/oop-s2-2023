#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge(int powerRating, double volume):Appliance(powerRating), volume(volume) {
    isOn = false;
}

Fridge::Fridge():Fridge(0, 0) {

}

void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getVolume() {
    return volume;
}

double Fridge::getPowerConsumption() {
    int power_consumption;
    power_consumption = get_power_rating() * 24 * (getVolume() / 100);
    return power_consumption;
}

