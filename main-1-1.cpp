#include <iostream>
#include "Vehicle.h"
#include "Motorbike.h"
#include "Car.h"
#include "Bus.h"


int main() {
    
    
    int num;
    std::cout << "Enter the number of vehicles: ";
    std::cin >> num;
    Car gtr(123);
    Bus hanoi(12);
    Motorbike ducati(99);
    Vehicle group[num];
    group[0] = gtr;
    group[1] = hanoi;
    group[2] = ducati;
    for(int i = 0; i < num; i++) {
        std::cout << group[i].getParkingDuration() << std::endl;
    }
    return 0;
}