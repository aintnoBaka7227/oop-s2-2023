#include <iostream>
#include "Vehicle.h"


Vehicle::Vehicle(int sub_ID) {
    ID = sub_ID;
}

Vehicle::Vehicle():Vehicle(0) {

}

int Vehicle::getID() {
    return ID;
}


