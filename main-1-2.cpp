#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot demo(10);
    Car car1(1);
    demo.parkVehicle(&car1);
    std::cout << demo.getCount() << std::endl;
    Car car2(2);
    demo.parkVehicle(&car2);
     std::cout << demo.getCount() << std::endl;
    Car car3(3);
    demo.parkVehicle(&car3);
     std::cout << demo.getCount() << std::endl;
    Car car4(4);
    demo.parkVehicle(&car4);
     std::cout << demo.getCount() << std::endl;
    Bus bus1(5);
    demo.parkVehicle(&bus1);
     std::cout << demo.getCount() << std::endl;
    Bus bus2(6);
    demo.parkVehicle(&bus2);
     std::cout << demo.getCount() << std::endl;
    Bus bus3(7);
    demo.parkVehicle(&bus3);
     std::cout << demo.getCount() << std::endl;
    Bus bus4(8);
    demo.parkVehicle(&bus4);
     std::cout << demo.getCount() << std::endl;
    Motorbike motor1(9);
    demo.parkVehicle(&motor1);
     std::cout << demo.getCount() << std::endl;
    Motorbike motor2(10);
    demo.parkVehicle(&motor2);
     std::cout << demo.getCount() << std::endl;
    Motorbike motor3(11);
    demo.parkVehicle(&motor3);
     std::cout << demo.getCount() << std::endl;
    demo.unparkVehicle(11);
    demo.unparkVehicle(6);
     std::cout << demo.getCount() << std::endl;
    return 0;
}