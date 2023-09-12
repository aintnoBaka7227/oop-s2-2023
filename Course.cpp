#include "Course.h"

Course::Course(std::string name, int ID, int size) {
    this->name = name;
    this->ID = ID;
    this->size = size;
    current_size = 0;
    persons = new Person*[size];
}

Course::Course():Course("comp sci", 0001, 0) {

}

void Course::addPerson(Person* uni_member) {
    if (current_size < size) {
        persons[current_size] = uni_member;
        current_size++;
    }
}

std::string Course::get_name() {
    return name;
}

void Course::set_name(std::string name) {
    this->name = name;
}

int Course::get_ID() {
    return ID;
}

void Course::set_ID(int ID) {
    this->ID = ID;
}