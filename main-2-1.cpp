#include "Appliance.h"
#include "Fridge.h"
#include <iostream>

int main() {
    
    Fridge mitsubishi(10, 10);
    mitsubishi.setVolume(12);
    std::cout << mitsubishi.get_power_rating() << std::endl;
    std::cout << mitsubishi.getVolume() << std::endl;
    std::cout << mitsubishi.getPowerConsumption() << std::endl;
    return 0;
}