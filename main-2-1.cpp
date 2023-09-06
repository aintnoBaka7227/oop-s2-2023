#include "AirCraft.h"
#include "Helicopter.h"
#include <iostream>

int main() {
    Helicopter random(5690, "random");
    random.set_numberOfFlights(1);
    random.set_fuel(80);
    random.fly(45, 10);
    std::cout << random.get_fuel() << std::endl;
    std::cout << random.get_numberOfFlights() << std::endl;

}