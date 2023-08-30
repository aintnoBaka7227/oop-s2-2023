#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
#include <ctime>

class Motorbike : public Vehicle {
    public:
    int getParkingDuration();
    Motorbike();
    Motorbike(int sub_ID);
};



#endif