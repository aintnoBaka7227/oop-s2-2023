#ifndef GRADE_H
#define GRADE_H
#include <string>

class Grade{
    private:
    std::string assignment;
    int value;
    public:
    Grade();
    Grade(std::string assignment, int value);
};

#endif