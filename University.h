#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>

class University {
    private:
    std::string name;
    std::string location;
    Course* courses;
    int size;
    int current_size;
    public:
    University();
    University(std::string name, std::string location, int size);
    int get_current_size();
    void set_size(int size);
    void addCourse(std::string name, int ID);

};



#endif