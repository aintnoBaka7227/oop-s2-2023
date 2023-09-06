#include "AirFleet.h"
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include <iostream>

int main() {
    AirFleet adelaide;
    Airplane(20, 10);
    Helicopter(10000, "BlackHawk"); 
    AirCraft(5000);
    Helicopter(100, "WhiteHawk");
    Airplane(15, 20);
    return 0;
}
