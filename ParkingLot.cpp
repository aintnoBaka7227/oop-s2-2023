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
       vehicles[current_size] = *new_vehicle;
       current_size++;
    }
    else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int unpark_ID) {
    bool found = false;
    for (int i = 0; i < current_size; i++) {
        if (vehicles[i].getID() == unpark_ID) {
            for(int j = i; j < current_size - 1; j++) {
                vehicles[j] = vehicles[j+1];
            }
            current_size--;
            found = true;
        }
    }
    if (found == false) {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}


int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    for(int i = 0; i < current_size; i++) {
        if (vehicles[i].getParkingDuration() > maxParkingDuration) {
           count++;
        }
    }
    return count;
}

ParkingLot::~ParkingLot() {
    delete[] vehicles;
}