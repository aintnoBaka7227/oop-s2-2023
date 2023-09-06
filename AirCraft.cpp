#include "AirCraft.h"

AirCraft::AirCraft(int w) {
    weight = w;
    fuel = 100;
    numberOfFlights = 0;
}

AirCraft::AirCraft() {

}

void AirCraft::refuel() {
    fuel = 100;
}

void AirCraft::fly(int headwind, int minutes) {
    numberOfFlights++;
}

int AirCraft::get_weight() {
    return weight;
}

void AirCraft::set_weight(int weight) {
    this->weight = weight;
}

float AirCraft::get_fuel() {
    return fuel;
}

void AirCraft::set_fuel(float fuel) {
    this->fuel = fuel;
}

int AirCraft::get_numberOfFlights() {
    return numberOfFlights;
}

void AirCraft::set_numberOfFlights(int numberOfFlights) {
    this->numberOfFlights = numberOfFlights;
}




