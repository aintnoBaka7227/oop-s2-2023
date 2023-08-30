#include <iostream>
#include "Vehicle.h"


Vehicle::Vehicle(int sub_ID) {
    ID = sub_ID;
    timeOfEntry = time(0);
    
}

Vehicle::Vehicle():Vehicle(0) {
    
}

int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {
    std::time_t current_time;
    current_time = time(0);
    int duration = ((int)(current_time-timeOfEntry)) / 100 * 85;
    return duration;
}

