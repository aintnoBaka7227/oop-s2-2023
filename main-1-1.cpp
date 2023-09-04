#include "Appliance.h"
#include "Fridge.h"
#include <iostream>


int main() {
    
    Appliance *old = new Fridge(10,12);
    old->turnOn();
    std::cout << old->get_powerRating() << std::endl;
    std::cout << old->get_isOn() << std::endl;
    std::cout << old->getPowerConsumption() << std::endl;    
    return 0;
}