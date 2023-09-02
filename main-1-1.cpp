#include "Appliance.h"
#include "Fridge.h"
#include <iostream>


int main() {
    
    Appliance *old = new Fridge(10,12);
    //Fridge fr1(10,12);
    //old = &fr1;
    old->turnOn();
    std::cout << old->get_power_rating() << std::endl;
    std::cout << old->get_power_status() << std::endl;
    std::cout << old->getPowerConsumption() << std::endl;
    delete old;    
    return 0;
}