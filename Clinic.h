#ifndef CLINIC_H
#define CLINIC_H
#include <string>
#include "Cage.h"

class Clinic {
    private:
    std::string clinic_name;
    int max;
    int current_size;
    Cage *group;
    public:
    Clinic();
    Clinic(std::string name, int max_size);
    int getNumber_of_cages();
    std::string getName();
    Cage *getCages();
    bool addCage(Cage new_cage);
    ~Clinic();
};

#endif
