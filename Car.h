#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <ctime>

class Car : public Vehicle {
    public:
    int getParkingDuration();
};

#endif