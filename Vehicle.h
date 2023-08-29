#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <ctime>

class Vehicle {
    protected:
    std::time_t timeOfEntry;
    int ID;
    public:
    Vehicle();
    Vehicle(int sub_ID);
    int getID();
};


#endif