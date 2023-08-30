#include <iostream>
#include "Vehicle.h"
#include "Motorbike.h"
#include "Car.h"
#include "Bus.h"


int main() {
    
    Vehicle motor;
    std::cout << motor.getParkingDuration() << std::endl;
    return 0;
}