#include "Appliance.h"
#include "TV.h"

TV::TV(int powerRating, double screenSize):Appliance(powerRating), screenSize(screenSize) {
    isOn = false;
}

TV::TV():TV(0, 0) {

}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() {
    return screenSize;
}

double TV::getPowerConsumption() {
    int power_consumption;
    power_consumption = get_powerRating() * (getScreenSize() / 10);
    return power_consumption;
}

