#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include "Grade.h"

class Gradebook {
    private:
    Grade* grades;
    int size;
    int current_size;
    public:
    Gradebook();
    Gradebook(int size);
    void addGrade(int stud_id, int course_id, std::string assignment, int value);

};

#endif