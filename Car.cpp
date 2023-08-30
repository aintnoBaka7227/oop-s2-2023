#include "Vehicle.h"
#include "Car.h"
#include <ctime>

Car::Car(int sub_ID):Vehicle(sub_ID) {

}

Car::Car():Car(0) {

}

int Car::getParkingDuration() {
    std::time_t current_time = std::time(0);
    std::time_t gap_time = current_time - timeOfEntry;
    double double_duration = static_cast<double>(gap_time);
    int duration = static_cast<int>(double_duration / 100.0 * 90);
    return duration;
}
