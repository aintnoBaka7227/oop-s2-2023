#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <ctime>

class Car : public Vehicle {
    public:
    Car();
    Car(int sub_ID);
    int getParkingDuration();
};

#endif