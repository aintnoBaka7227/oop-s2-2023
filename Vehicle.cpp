#include <iostream>
#include "Vehicle.h"
#include <ctime>


Vehicle::Vehicle(int sub_ID) {
    ID = sub_ID;
    timeOfEntry = std::time(0);
    
    
}

Vehicle::Vehicle():Vehicle(0) {
    
}

int Vehicle::getID() {
    return ID;
}

void Vehicle::setID(int sub_ID) {
    ID = sub_ID;
}

int Vehicle::getParkingDuration() {
    std::time_t current_time = std::time(0);
    std::time_t gap_time = current_time - timeOfEntry;
    int duration = static_cast<int>(gap_time);
    return duration;
}

