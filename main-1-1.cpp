#include <iostream>
#include "Cage.h"


int main() {
    Cage non;
    std::cout << non.getName() << std::endl;
    std::cout << non.getIDnum() << std::endl;
    Cage cat("cat", 123);
    std::cout << cat.getName() << std::endl;
    std::cout << cat.getIDnum() << std::endl;

    return 0;
}