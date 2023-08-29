#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
#include <ctime>

class Motorbike : public Vehicle {
    private:
    std::time_t exit_time;
    public:
    int getParkingDuration();
};



#endif