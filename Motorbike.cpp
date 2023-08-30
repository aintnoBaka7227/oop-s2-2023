#include "Motorbike.h"
#include "Vehicle.h"
#include <iostream>
#include <ctime>



Motorbike::Motorbike(int sub_ID) : Vehicle(sub_ID){

}

Motorbike::Motorbike():Motorbike(0){

}

int Motorbike::getParkingDuration() {
    std::time_t check_time;
    check_time = time(0);
    int duration = (int)(check_time-timeOfEntry) / 100 * 85;
    return duration;
}
