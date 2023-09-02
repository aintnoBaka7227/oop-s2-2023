#include "Appliance.h"
#include "Fridge.h"
#include <iostream>


int main() {
    
    Appliance *old = new Fridge[2];
    Fridge fr1(10,12);
    Fridge fr2(10,20);
    old[0] = fr1; 
    old[1] = fr2;
    old[0].turnOn();
    old[1].turnOff();
    std::cout << old[0].get_power_status() << std::endl;
    std::cout << old[0].get_power_rating() << std::endl;
    std::cout << old[1].get_power_status() << std::endl;
    std::cout << old[1].get_power_rating() << std::endl;
    std::cout << old[0].getPowerConsumption() << std::endl;
    std::cout << old[1].getPowerConsumption() << std::endl;
    delete[] old;
   return 0;
}