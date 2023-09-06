#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"


AirFleet::AirFleet() {
    fleet = new AirCraft*[5];
}

AirCraft **AirFleet::get_fleet() {
    return fleet;
}

