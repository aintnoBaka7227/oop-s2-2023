#ifndef COURSE_H
#define COURSE_H
#include "University.h"
#include "Person.h"
#include <string>
class Course {
    private:
    std::string name;
    int ID;
    Person** persons;
    int size;
    int current_size;
    public:
    Course();
    Course(std::string name, int ID, int size);
    void addPerson (Person* uni_member);
    std::string get_name();
    void set_name (std::string name);
    int get_ID();
    void set_ID (int ID);
};


#endif