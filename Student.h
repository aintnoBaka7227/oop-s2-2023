#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include "Grade.h"
#include <string>

class Student : public Person {
    private:
    int ID;
    Grade** student_grades;
    int num_of_grades;
    int current_num_grades;
    public:
    Student();
    Student(std::string name, int ID);
    //void addGrade(Grade* new_grade);

};

#endif
