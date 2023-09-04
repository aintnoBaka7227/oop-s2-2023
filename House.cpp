#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <iostream>

House::House(int numAppliances) {
    this->numAppliances = numAppliances;
    currentNum = 0;
    appliances = new Appliance*[numAppliances];
}

House::House():House(0) {

}

int House::get_currentNum() {
    return currentNum;
}

bool House::addAppliance(Appliance* appliance) {
    if (currentNum < numAppliances) {
        appliances[currentNum] = appliance;
        currentNum++;
        std::cout << "Added" << std::endl;
        return true;
    }
    std::cout << "full" << std::endl;
    return false;
}

double House::getTotalPowerConsumption() {
    double total = 0;
    for (int i = 0; i < currentNum; i++) {
        total = total + appliances[i]->getPowerConsumption();
    }
    return total;
}

void House::get_appliances() {
    for (int i = 0; i < currentNum; i++) {
        std::cout << appliances[i]->get_powerRating() << std::endl;
        std::cout << appliances[i]->get_isOn() << std::endl;
        std::cout << appliances[i]->getPowerConsumption() << std::endl;
    }
}

House::~House() {
    delete [] appliances;
}

