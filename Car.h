#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <ctime>

class Car : public Vehicle {
    private:
    std::time_t exit_time;
    public:
    int getParkingDuration();
};

#endif