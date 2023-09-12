#include "Person.h"
#include "Student.h" 

Student::Student(std::string name, int ID):Person(name), ID(ID){
    //current_num_grades = 0;
    //student_grades = new Grade*[num_of_grades];
}

Student::Student():Student("Paul", 1873825) {
    
}

/*void Student::addGrade(std::string assignment, int value) {
    if(current_num_grades< num_of_grades) {
        student_grades[current_num_grades] = new_grade;
    }
}
*/