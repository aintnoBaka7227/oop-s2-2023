#include "AirCraft.h"
#include "Airplane.h"

Airplane::Airplane(int w, int p) {
    weight = w;
    numPassengers = p;
}

Airplane::Airplane() {

}

void Airplane::reducePassengers(int x) {
    numPassengers = numPassengers - x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

int Airplane::get_numPassengers() {
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    float demo = 0;
    if (headwind >= 60) {
        demo = fuel - 0.5 * minutes - 0.001 * numPassengers * minutes;
    }
    else {
        demo = fuel - 0.3 * minutes - 0.001 * numPassengers * minutes;
    }
    if (demo >= 20) {
       fuel = demo;
       numberOfFlights++;
    }
}