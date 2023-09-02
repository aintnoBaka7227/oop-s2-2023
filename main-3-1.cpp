#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <iostream>

int main() {
    House myHouse(3);
    Fridge old_one(10,12);
    std::cout << old_one.getPowerConsumption() << std::endl;
    Fridge new_one(10,12);
    std::cout << new_one.getPowerConsumption() << std::endl;
    TV old_tv(10,12);
    std::cout << old_tv.getPowerConsumption() << std::endl;
    TV new_tv(10,40);
    std::cout << myHouse.get_currentNum() << std::endl;
    myHouse.addAppliance(&old_one);
    myHouse.addAppliance(&new_one);
    myHouse.addAppliance(&old_tv);
    myHouse.addAppliance(&new_tv);
    std::cout << myHouse.get_currentNum() << std::endl;
    std::cout << myHouse.getTotalPowerConsumption() << std::endl;
    myHouse.get_appliances();
    return 0;
}