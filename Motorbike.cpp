#include "Motorbike.h"
#include "Vehicle.h"
#include <iostream>
#include <ctime>



Motorbike::Motorbike(int sub_ID) : Vehicle(sub_ID){

}

Motorbike::Motorbike():Motorbike(0){
    
}

int Motorbike::getParkingDuration() {
    std::time_t current_time = std::time(0);
    std::time_t gap_time = current_time - timeOfEntry;
    double double_duration = static_cast<double>(gap_time);
    int duration = static_cast<int>(double_duration / 100 * 85);
    return duration;
}

