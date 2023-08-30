#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"
#include <ctime>

class Bus : public Vehicle {
    public:
    Bus();
    Bus(int sub_ID);
    int getParkingDuration();
};



#endif