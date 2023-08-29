#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"
#include <ctime>

class Bus : public Vehicle {
    private:
    std::time_t exit_time;
    public:
    int getParkingDuration();
};



#endif