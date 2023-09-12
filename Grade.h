#ifndef GRADE_H
#define GRADE_H
#include <string>
#include <Person.h>
#include "Student.h"
#include "Course.h"

class Grade {
   private:
   int student_id;
   int course_id;
   std::string assignment;
   int value;
   public:
   Grade();
   Grade(int student_id, int course_id, std::string assignment, int value);
};

#endif