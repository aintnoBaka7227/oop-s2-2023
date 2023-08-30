#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"


class ParkingLot {
    private:
    int max_size;
    Vehicle *vehicles;
    int current_size;
    public:
    ParkingLot();
    ParkingLot(int size);
    int getCount();
    void parkVehicle(Vehicle *new_vehicle);
    void unparkVehicle(int unpark_ID);
    int countOverstayingvehicles(int maxParkingDuration);
    ~ParkingLot();


};

#endif