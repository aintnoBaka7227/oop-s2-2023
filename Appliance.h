# pragma once

class Appliance {
    protected:
    int powerRating;
    bool isOn;
    public:
    Appliance();
    Appliance(int powerRating);
    int get_power_rating();
    void set_power_rating(int powerRating);
    bool get_power_status();
    void set_power_status(bool isOn);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption() = 0;
};

