#include <iostream>
#include "Vehicle.h"
#include <ctime>


Vehicle::Vehicle(int sub_ID) {
    ID = sub_ID;
    timeOfEntry = std::time(0);
    
    
}

Vehicle::Vehicle():Vehicle(0) {
    std::cout << ctime(&timeOfEntry) << std::endl;
}

int Vehicle::getID() {
    return ID;
}

void Vehicle::setID(int sub_ID) {
    ID = sub_ID;
}

int Vehicle::getParkingDuration() {
    std::time_t current_time = std::time(0);
    std::cout << ctime(&current_time) << std::endl;
    std::time_t gap_time = current_time - timeOfEntry;
    double double_duration = static_cast<double>(gap_time);
    int duration = static_cast<int>(double_duration / 100 * 85);
    return duration;
}

