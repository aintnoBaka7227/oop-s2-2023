#include "AirCraft.h"
#include <iostream>

int main() {
    AirCraft random(10);
    std::cout << random.get_weight() << std::endl;
    return 0;
}