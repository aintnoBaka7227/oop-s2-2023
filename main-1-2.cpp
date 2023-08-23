#include <iostream>
#include <string>
#include "Cage.h"
#include "Clinic.h"


int main() {
    
    Clinic example;
    std::cout << example.getName() << std::endl;
    std::cout << example.getNumber_of_cages() << std::endl;

    Clinic town("Gojo",3);
    std::cout << town.getName() << std::endl;
    std::cout << town.getNumber_of_cages() << std::endl;

    Cage first("cat", 123);
    if(town.addCage(first)) {
        std::cout << "added" << std::endl;
    }
    else {
        std::cout << "full" << std::endl;
    }
    std::cout << town.getNumber_of_cages() << std::endl;
    Cage second("dog", 234);
    if(town.addCage(second)) {
        std::cout << "added" << std::endl;
    }
    else {
        std::cout << "full" << std::endl;
    }
    std::cout << town.getNumber_of_cages() << std::endl;
    Cage third("bird", 456);
    if(town.addCage(third)) {
        std::cout << "added" << std::endl;
    }
    else {
        std::cout << "full" << std::endl;
    }
    std::cout << town.getNumber_of_cages() << std::endl;
    Cage fourth("snail", 567);
    if(town.addCage(fourth)) {
        std::cout << "added" << std::endl;
    }
    else {
        std::cout << "full" << std::endl;
    }
    std::cout << town.getNumber_of_cages() << std::endl;
    
    Cage *replicate_cages;
    replicate_cages = town.getCages();

    for (int i = 0; i < town.getNumber_of_cages(); i++) {
        std::cout << replicate_cages[i].getName() << std::endl;
        std::cout << replicate_cages[i].getIDnum() << std::endl;
    }

    return 0;
}