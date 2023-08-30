#include "Vehicle.h"
#include "Bus.h"
#include <ctime>

Bus::Bus(int sub_ID):Vehicle(sub_ID) {

}

Bus::Bus():Bus(0) {

}

int Bus::getParkingDuration() {
    std::time_t current_time = std::time(0);
    std::time_t gap_time = current_time - timeOfEntry;
    double double_duration = static_cast<double>(gap_time);
    int duration = static_cast<int>(double_duration / 100.0 * 75);
    return duration;
}