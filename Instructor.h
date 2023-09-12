#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
#include <string>

class Instructor : public Person {
    public:
    Instructor();
    Instructor(std::string name);
};

#endif