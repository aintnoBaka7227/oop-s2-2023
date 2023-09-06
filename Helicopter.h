#ifndef HELICOPTER
#define HELICOPTER
#include "AirCraft.h"
#include <string>

class Helicopter : public AirCraft {
    private:
    std::string name;
    public:
    Helicopter();
    Helicopter(int w, std::string n);
    void fly(int headwind, int minutes);
    std::string get_name();
    void set_name(std::string name);

};

#endif