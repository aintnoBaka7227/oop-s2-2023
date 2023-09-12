#include "Grade.h"
#include "Gradebook.h"

Gradebook::Gradebook(int size) {
    this->size = size;
    current_size = 0;
    grades = new Grade[size];
}
Gradebook::Gradebook():Gradebook(size) {

}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value) {
    if (current_size < size) {
        grades[current_size] = Grade(assignment, value);
        current_size++;
    }
}