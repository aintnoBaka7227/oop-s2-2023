#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <iostream>

class Appliance {
    protected:
    int powerRating;
    bool isOn;
    public:
    Appliance();
    Appliance(int powerRating);
    int get_powerRating();
    void set_powerRating(int powerRating);
    bool get_isOn();
    void set_isOn(bool isOn);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption() = 0;
};

#endif