#include "AirCraft.h"
#include "Airplane.h"
#include <iostream>

int main() {
    Airplane random(10, 100);
    random.set_fuel(95);
    random.fly(65, 120);
    std::cout << random.get_fuel() << std::endl;
}