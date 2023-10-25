#include "Cell.h"
#include "Utils.h"
#include <iostream>
int main() {
    Cell cell1(1,2, 'E');
    Cell cell2(4,6, 'H');
    std::cout << Utils::calculateDistance(cell1.getPos(), cell2.getPos()) << std::endl;
    return 0;
}