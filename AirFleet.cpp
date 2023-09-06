#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"


AirFleet::AirFleet() {
    fleet = new AirCraft*[5];
    fleet[0] = new Airplane(20, 10);
    fleet[1] = new Helicopter(10000, "Blackhawk");
    fleet[2] = new AirCraft(5000);
    fleet[3] = new Helicopter(100, "Whitehawk");
    fleet[4] = new Airplane(15,20);
}

AirCraft **AirFleet::get_fleet() {
    return fleet;
}

AirFleet::~AirFleet() {
    delete[] fleet;
}

