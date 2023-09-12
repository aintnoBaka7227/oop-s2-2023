#include "University.h"
#include "Course.h"

University::University(std::string name, std::string location, int size) {
    this->name = name;
    this->location = location;
    this->size = size;
    current_size = 0;
    courses = new Course[size];
}


University::University():University("University of Adelaide", "North Terrace", 0) {

}

int University::get_current_size() {
    return current_size;
}

void University::set_size(int size) {
    this->size = size;
}

void University::addCourse(std::string name, int ID) {
    if(current_size < size) {
        courses[current_size] = Course(name, ID,5);
        current_size++;
    // Course* new_course;
    // new_course->set_name(name);
    // new_course->set_ID(ID);
    // courses[current_size] = *new_course;
    // current_size++;
    // delete new_course;
    }
}
University::~University() {
    delete [] courses;
}

