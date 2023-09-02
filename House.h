#pragma once
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

class House {
    private:
    int numAppliances;
    Appliance **appliances;
    int currentNum;
    public:
    House();
    House(int numAppliances);
    int get_currenNum();
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
    ~House();
};