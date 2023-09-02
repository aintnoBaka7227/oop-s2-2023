#include "Appliance.h"
#include "TV.h"
#include <iostream>

int main() {
    TV sony(10,10);
    sony.setScreenSize(12);
    std::cout << sony.get_power_rating() << std::endl;
    std::cout << sony.getScreenSize() << std::endl;
    std::cout << sony.getPowerConsumption() << std::endl;
    return 0;
}