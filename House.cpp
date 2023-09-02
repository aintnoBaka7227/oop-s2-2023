#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

House::House(int numAppliances) {
    this->numAppliances = numAppliances;
    currentNum = 0;
    appliances = new Appliance*[numAppliances];
}

House::House():House(0) {

}

bool House::addAppliance(Appliance* appliance) {
    if (currentNum < numAppliances) {
        appliances[currentNum] = appliance;
        currentNum++;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() {
    double total = 0;
    for (int i = 0; i < currentNum; i++) {
        total = total + appliances[i]->getPowerConsumption();
    }
    return total;
}

House::~House() {
    for (int i = 0; i < numAppliances; i++) {
        delete [] appliances[i];
    }
    delete [] appliances;
}
