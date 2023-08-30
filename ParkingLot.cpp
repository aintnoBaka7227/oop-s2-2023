#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

#include <iostream>

ParkingLot::ParkingLot(int size) {
    max_size = size;
    vehicles = new Vehicle[max_size];
    current_size = 0;
}

ParkingLot::ParkingLot():ParkingLot(0) {
    
}

int ParkingLot::getCount() {
    return current_size;
}

void ParkingLot::parkVehicle(Vehicle* new_vehicle) {
    if(current_size < max_size) {
       
    }

}